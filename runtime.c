#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include "ast.h"

expr_node *sol_comp_as_expr(stmt_node *stmt) {
	if(stmt->type == ST_EXPR) {
		return stmt->expr;
	}
	return NULL;
}

void sol_comp_free(stmt_node *stmt) {
	st_free(stmt);
}

expr_node *ex_copy(expr_node *);

stmt_node *st_copy(stmt_node *old) {
	stmt_node *new;
	stmtlist_node *curn, *curo;
	if(!old) {
		printf("WARNING: Copying NULL statement\n");
		return NULL;
	}
	new = NEW(stmt_node);
	new->type = old->type;
	switch(old->type) {
		case ST_EXPR:
			new->expr = ex_copy(old->expr);
			break;

		case ST_IFELSE:
			new->ifelse = NEW(ifelse_node);
			new->ifelse->cond = ex_copy(old->ifelse->cond);
			if(old->ifelse->iftrue)
				new->ifelse->iftrue = st_copy(old->ifelse->iftrue);
			else
				new->ifelse->iftrue = NULL;
			if(old->ifelse->iffalse)
				new->ifelse->iffalse = st_copy(old->ifelse->iffalse);
			else
				new->ifelse->iffalse = NULL;
			break;

		case ST_LOOP:
			new->loop = NEW(loop_node);
			new->loop->cond = ex_copy(old->loop->cond);
			new->loop->loop = st_copy(old->loop->loop);
			break;

		case ST_ITER:
			new->iter = NEW(iter_node);
			new->iter->var = strdup(old->iter->var);
			new->iter->iter = ex_copy(old->iter->iter);
			new->iter->loop = st_copy(old->iter->loop);
			break;

		case ST_LIST:
			
			new->stmtlist = stl_copy(old->stmtlist);
			break;

		case ST_RET:
			new->ret = NEW(ret_node);
			new->ret->ret = ex_copy(old->ret->ret);
			break;

		case ST_CONT:
		case ST_BREAK:
			break;

		default:
			printf("WARNING: Unknown statement type to copy: %d\n", old->type);
			break;
	}
	return new;
}

stmtlist_node *stl_copy(stmtlist_node *old) {
	stmtlist_node *new, *curn, *curo;
	if(!old) {
		return NULL;
	}
	new = NEW(stmtlist_node);
	curn = new;
	curo = old;
	while(curo) {
		if(curo->stmt) {
			curn->stmt = st_copy(curo->stmt);
		} else {
			curn->stmt = NULL;
		}
		if(curo->next) {
			curn->next = NEW(stmtlist_node);
			curn = curn->next;
		}
		curo = curo->next;
	}
	curn->next = NULL;
	return new;
}

expr_node *ex_copy(expr_node *old) {
	expr_node *new;
	exprlist_node *cureo, *curen;
	assoclist_node *curao, *curan;
	identlist_node *curio, *curin;
	if(!old) {
		printf("WARNING: Copying NULL expression\n");
		return NULL;
	}
	new = NEW(expr_node);
	new->type = old->type;
	switch(old->type) {
		case EX_LIT:
			new->lit = NEW(lit_node);
			new->lit->type = old->lit->type;
			switch(old->lit->type) {
				case LIT_INT:
					new->lit->ival = old->lit->ival;
					break;

				case LIT_FLOAT:
					new->lit->fval = old->lit->fval;
					break;

				case LIT_STRING:
					new->lit->str = strdup(old->lit->str);
					break;

				case LIT_NONE:
					break;

				default:
					printf("WARNING: Unknown literal type %d in copy\n", old->lit->type);
					break;
			}
			break;

		case EX_LISTGEN:
			new->listgen = NEW(listgen_node);
			new->listgen->list = exl_copy(old->listgen->list);
			break;

		case EX_MAPGEN:
			new->mapgen = NEW(mapgen_node);
			new->mapgen->map = asl_copy(old->mapgen->map);
			break;

		case EX_BINOP:
			new->binop = NEW(binop_node);
			new->binop->type = old->binop->type;
			new->binop->left = ex_copy(old->binop->left);
			new->binop->right = ex_copy(old->binop->right);
			break;

		case EX_UNOP:
			new->unop = NEW(unop_node);
			new->unop->type = old->unop->type;
			new->unop->expr = ex_copy(old->unop->expr);
			break;

		case EX_INDEX:
			new->index = NEW(index_node);
			new->index->expr = ex_copy(old->index->expr);
			new->index->index = ex_copy(old->index->index);
			break;

		case EX_SETINDEX:
			new->setindex = NEW(setindex_node);
			new->setindex->expr = ex_copy(old->setindex->expr);
			new->setindex->index = ex_copy(old->setindex->index);
			new->setindex->value = ex_copy(old->setindex->value);
			break;

		case EX_ASSIGN:
			new->assign = NEW(assign_node);
			new->assign->ident = strdup(old->assign->ident);
			new->assign->value = ex_copy(old->assign->value);
			break;

		case EX_REF:
			new->ref = NEW(ref_node);
			new->ref->ident = strdup(old->ref->ident);
			break;

		case EX_CALL:
			new->call = NEW(call_node);
			new->call->expr = ex_copy(old->call->expr);
			new->call->args = exl_copy(old->call->args);
			break;

		case EX_FUNCDECL:
			new->funcdecl = NEW(funcdecl_node);
			if(old->funcdecl->name) {
				new->funcdecl->name = strdup(old->funcdecl->name);
			} else {
				new->funcdecl->name = NULL;
			}
			new->funcdecl->args = idl_copy(old->funcdecl->args);
			new->funcdecl->body = st_copy(old->funcdecl->body);
			break;

		default:
			printf("WARNING: Unknown expression type to copy: %d\n", old->type);
			break;
	}
	return new;
}

assoclist_node *asl_copy(assoclist_node *old) {
	assoclist_node *new, *curn, *curo;
	if(!old) {
		return NULL;
	}
	new = NEW(assoclist_node);
	curn = new;
	curo = old;
	while(curo) {
		if(curo->item && curo->item->key && curo->item->value) {
			curn->item = NEW(associtem_node);
			curn->item->key = ex_copy(curo->item->key);
			curn->item->value = ex_copy(curo->item->value);
		} else {
			curn->item = NULL;
		}
		if(curo->next) {
			curn->next = NEW(assoclist_node);
			curn = curn->next;
		}
		curo = curo->next;
	}
	curn->next = NULL;
	return new;
}

exprlist_node *exl_copy(exprlist_node *old) {
	exprlist_node *new, *curn, *curo;
	if(!old) {
		return NULL;
	}
	new = NEW(exprlist_node);
	curn = new;
	curo = old;
	while(curo) {
		if(curo->expr) {
			curn->expr = ex_copy(curo->expr);
		} else {
			curn->expr = NULL;
		}
		if(curo->next) {
			curn->next = NEW(exprlist_node);
			curn = curn->next;
		}
		curo = curo->next;
	}
	curn->next = NULL;
	return new;
}

identlist_node *idl_copy(identlist_node *old) {
	identlist_node *new, *curn, *curo;
	if(!old) {
		return NULL;
	}
	new = NEW(identlist_node);
	curn = new;
	curo = old;
	while(curo) {
		if(curo->ident) {
			curn->ident = strdup(curo->ident);
		} else {
			curn->ident = NULL;
		}
		if(curo->next) {
			curn->next = NEW(identlist_node);
			curn = curn->next;
		}
		curo = curo->next;
	}
	curn->next = NULL;
	return new;
}

void ex_free(expr_node *);

void st_free(stmt_node *stmt) {
	stmtlist_node *curs, *prevs;
	if(!stmt) {
		return;
	}
	switch(stmt->type) {
		case ST_EXPR:
			ex_free(stmt->expr);
			break;

		case ST_IFELSE:
			ex_free(stmt->ifelse->cond);
			st_free(stmt->ifelse->iftrue);
			st_free(stmt->ifelse->iffalse);
			free(stmt->ifelse);
			break;

		case ST_LOOP:
			ex_free(stmt->loop->cond);
			st_free(stmt->loop->loop);
			free(stmt->loop);
			break;

		case ST_ITER:
			free(stmt->iter->var);
			ex_free(stmt->iter->iter);
			st_free(stmt->iter->loop);
			free(stmt->iter);
			break;

		case ST_LIST:
			stl_free(stmt->stmtlist);
			break;

		case ST_RET:
			ex_free(stmt->ret->ret);
			free(stmt->ret);
			break;

		case ST_CONT:
		case ST_BREAK:
			break; // Make the compiler happy :D
	}
	free(stmt);
}

void stl_free(stmtlist_node *list) {
	stmtlist_node *cur = list, *prev;
	while(cur) {
		if(cur->stmt) {
			free(cur->stmt);
		}
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}

void ex_free(expr_node *expr) {
	exprlist_node *cure, *preve;
	assoclist_node *cura, *preva;
	identlist_node *curi, *previ;
	if(!expr) {
		return;
	}
	switch(expr->type) {
		case EX_LIT:
			if(expr->lit->type == LIT_STRING) {
				free(expr->lit->str);
			}
			free(expr->lit);
			break;

		case EX_LISTGEN:
			exl_free(expr->listgen->list);
			free(expr->listgen);
			break;

		case EX_MAPGEN:
			asl_free(expr->mapgen->map);
			free(expr->mapgen);
			break;

		case EX_BINOP:
			ex_free(expr->binop->left);
			ex_free(expr->binop->right);
			free(expr->binop);
			break;

		case EX_UNOP:
			ex_free(expr->unop->expr);
			free(expr->unop);
			break;

		case EX_INDEX:
			ex_free(expr->index->expr);
			ex_free(expr->index->index);
			free(expr->index);
			break;

		case EX_SETINDEX:
			ex_free(expr->setindex->expr);
			ex_free(expr->setindex->index);
			ex_free(expr->setindex->value);
			free(expr->setindex);
			break;

		case EX_ASSIGN:
			free(expr->assign->ident);
			ex_free(expr->assign->value);
			free(expr->assign);
			break;

		case EX_REF:
			free(expr->ref->ident);
			free(expr->ref);
			break;

		case EX_CALL:
			ex_free(expr->call->expr);
			exl_free(expr->call->args);
			free(expr->call);
			break;

		case EX_FUNCDECL:
			free(expr->funcdecl->name);
			st_free(expr->funcdecl->body);
			idl_free(expr->funcdecl->args);
			free(expr->funcdecl);
			break;
	}
	free(expr);
}

void exl_free(exprlist_node *list) {
	exprlist_node *cur = list, *prev;
	while(cur) {
		if(cur->expr) {
			free(cur->expr);
		}
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}

void asl_free(assoclist_node *list) {
	assoclist_node *cur = list, *prev;
	while(cur) {
		if(cur->item) {
			free(cur->item->key);
			free(cur->item->value);
			free(cur->item);
		}
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}

void idl_free(identlist_node *list) {
	identlist_node *cur = list, *prev;
	while(cur) {
		if(cur->ident) {
			free(cur->ident);
		}
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}

#define ERR_CHECK(state) do { if(sol_has_error(state)) longjmp(jmp, 1); } while(0)
sol_object_t *sol_eval_inner(sol_state_t *state, expr_node *expr, jmp_buf jmp) {
	sol_object_t *res, *left, *right, *lint, *rint, *value, *list;
	exprlist_node *cure;
	assoclist_node *cura;
	if(!expr) {
		return sol_set_error_string(state, "Evaluate NULL expression");
	}
	ERR_CHECK(state);
	switch(expr->type) {
		case EX_LIT:
			switch(expr->lit->type) {
				case LIT_INT:
					return sol_new_int(state, expr->lit->ival);
					break;

				case LIT_FLOAT:
					return sol_new_float(state, expr->lit->fval);
					break;

				case LIT_STRING:
					return sol_new_string(state, expr->lit->str);
					break;

				case LIT_NONE:
					return sol_incref(state->None);
					break;
			}
			break;

		case EX_LISTGEN:
			res = sol_new_list(state);
			cure = expr->listgen->list;
			while(cure) {
				if(cure->expr) {
					sol_list_insert(state, res, sol_list_len(state, res), sol_eval_inner(state, cure->expr, jmp));
				}
				ERR_CHECK(state);
				cure = cure->next;
			}
			return res;
			break;

		case EX_MAPGEN:
			res = sol_new_map(state);
			cura = expr->mapgen->map;
			while(cura) {
				if(cura->item) {
					sol_map_set(state, res, sol_eval(state, cura->item->key), sol_eval_inner(state, cura->item->value, jmp));
				}
				ERR_CHECK(state);
				cura = cura->next;
			}
			return res;
			break;

		case EX_BINOP:
			list = sol_new_list(state);
			ERR_CHECK(state);
			left = sol_eval_inner(state, expr->binop->left, jmp);
			ERR_CHECK(state);
			right = sol_eval_inner(state, expr->binop->right, jmp);
			ERR_CHECK(state);
			sol_list_insert(state, list, 0, left);
			sol_list_insert(state, list, 1, right);
			switch(expr->binop->type) {
				case OP_ADD:
					res = CALL_METHOD(state, left, add, list);
					break;

				case OP_SUB:
					res = CALL_METHOD(state, left, sub, list);
					break;

				case OP_MUL:
					res = CALL_METHOD(state, left, mul, list);
					break;

				case OP_DIV:
					res = CALL_METHOD(state, left, div, list);
					break;

				case OP_MOD:
					res = CALL_METHOD(state, left, mod, list);
					break;

				case OP_POW:
					res = CALL_METHOD(state, left, pow, list);
					break;

				case OP_BAND:
					res = CALL_METHOD(state, left, band, list);
					break;

				case OP_BOR:
					res = CALL_METHOD(state, left, bor, list);
					break;

				case OP_BXOR:
					res = CALL_METHOD(state, left, bxor, list);
					break;

				case OP_LAND:
					lint = sol_cast_int(state, left);
					ERR_CHECK(state);
					rint = sol_cast_int(state, right);
					ERR_CHECK(state);
					res = sol_new_int(state, BOOL_TO_INT(lint && rint));
					sol_obj_free(lint);
					sol_obj_free(rint);
					break;

				case OP_LOR:
					lint = sol_cast_int(state, left);
					ERR_CHECK(state);
					rint = sol_cast_int(state, right);
					ERR_CHECK(state);
					res = sol_new_int(state, BOOL_TO_INT(lint || rint));
					sol_obj_free(lint);
					sol_obj_free(rint);
					break;

				case OP_EQUAL:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival == 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_NEQUAL:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival != 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_LESS:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival < 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_GREATER:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival > 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_LESSEQ:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival <= 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_GREATEREQ:
					value = CALL_METHOD(state, left, cmp, list);
					lint = sol_cast_int(state, value);
					res = sol_new_int(state, BOOL_TO_INT(lint->ival >= 0));
					sol_obj_free(lint);
					sol_obj_free(value);
					break;

				case OP_LSHIFT:
					res = CALL_METHOD(state, left, blsh, list);
					break;

				case OP_RSHIFT:
					res = CALL_METHOD(state, left, brsh, list);
					break;
			}
			sol_obj_free(list);
			sol_obj_free(left);
			sol_obj_free(right);
			ERR_CHECK(state);
			return res;
			break;

		case EX_UNOP:
			left = sol_eval_inner(state, expr->unop->expr, jmp);
			ERR_CHECK(state);
			list = sol_new_list(state);
			ERR_CHECK(state);
			sol_list_insert(state, list, 0, left);
			switch(expr->unop->type) {
				case OP_NEG:
					right = sol_new_int(state, -1);
					sol_list_insert(state, list, 1, right);
					res = CALL_METHOD(state, left, mul, list);
					sol_obj_free(right);
					break;

				case OP_BNOT:
					res = CALL_METHOD(state, left, bnot, list);
					break;

				case OP_LNOT:
					lint = sol_cast_int(state, left);
					ERR_CHECK(state);
					res = sol_new_int(state, BOOL_TO_INT(!lint->ival));
					sol_obj_free(lint);
					break;

				case OP_LEN:
					res = CALL_METHOD(state, left, len, list);
					break;
			}
			sol_obj_free(left);
			sol_obj_free(list);
			ERR_CHECK(state);
			return res;
			break;

		case EX_INDEX:
			left = sol_eval_inner(state, expr->index->expr, jmp);
			ERR_CHECK(state);
			right = sol_eval_inner(state, expr->index->index, jmp);
			ERR_CHECK(state);
			list = sol_new_list(state);
			ERR_CHECK(state);
			sol_list_insert(state, list, 0, left);
			sol_list_insert(state, list, 1, right);
			res = CALL_METHOD(state, left, index, list);
			sol_obj_free(left);
			sol_obj_free(right);
			sol_obj_free(list);
			ERR_CHECK(state);
			return res;
			break;

		case EX_SETINDEX:
			left = sol_eval_inner(state, expr->setindex->expr, jmp);
			ERR_CHECK(state);
			right = sol_eval_inner(state, expr->setindex->index, jmp);
			ERR_CHECK(state);
			value = sol_eval_inner(state, expr->setindex->value, jmp);
			ERR_CHECK(state);
			list = sol_new_list(state);
			ERR_CHECK(state);
			sol_list_insert(state, list, 0, left);
			sol_list_insert(state, list, 1, right);
			sol_list_insert(state, list, 2, value);
			res = CALL_METHOD(state, left, setindex, list);
			sol_obj_free(left);
			sol_obj_free(right);
			sol_obj_free(value);
			sol_obj_free(list);
			ERR_CHECK(state);
			return res;
			break;

		case EX_ASSIGN:
			value = sol_eval_inner(state, expr->assign->value, jmp);
			sol_state_assign_l_name(state, expr->assign->ident, value);
			ERR_CHECK(state);
			return value;
			break;

		case EX_REF:
			return sol_state_resolve_name(state, expr->ref->ident);
			break;

		case EX_CALL:
			value = sol_eval_inner(state, expr->call->expr, jmp);
			ERR_CHECK(state);
			list = sol_new_list(state);
			ERR_CHECK(state);
			sol_list_insert(state, list, 0, value);
			cure = expr->call->args;
			while(cure) {
				if(cure->expr) {
					sol_list_insert(state, list, sol_list_len(state, list), sol_eval_inner(state, cure->expr, jmp));
				}
				ERR_CHECK(state);
				cure = cure->next;
			}
			res = CALL_METHOD(state, value, call, list);
			sol_obj_free(value);
			sol_obj_free(list);
			ERR_CHECK(state);
			return res;
			break;

		case EX_FUNCDECL:
			res = sol_new_func(state, expr->funcdecl->args, expr->funcdecl->body, expr->funcdecl->name);
			ERR_CHECK(state);
			if(expr->funcdecl->name) {
				sol_state_assign_l_name(state, expr->funcdecl->name, res);
				ERR_CHECK(state);
			}
			return res;
			break;
	}
	printf("WARNING: Unhandled expression (type %d) returning None\n", expr->type);
	return sol_incref(state->None);
}

sol_object_t *sol_eval(sol_state_t *state, expr_node *expr) {
	jmp_buf jmp;
	if(!setjmp(jmp)) {
		return sol_eval_inner(state, expr, jmp);
	} else {
		return sol_incref(state->None);
	}
}

void sol_exec(sol_state_t *state, stmt_node *stmt) {
	sol_object_t *value, *vint, *list, *iter, *item;
	stmtlist_node *curs;
	if(!stmt) {
		sol_obj_free(sol_set_error_string(state, "Execute NULL statement"));
		return;
	}
	switch(stmt->type) {
		case ST_EXPR:
			sol_obj_free(sol_eval(state, stmt->expr));
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			break;

		case ST_IFELSE:
			value = sol_eval(state, stmt->ifelse->cond);
			vint = sol_cast_int(state, value);
			if(vint->ival) {
				if(stmt->ifelse->iftrue) {
					sol_exec(state, stmt->ifelse->iftrue);
				}
			} else {
				if(stmt->ifelse->iffalse) {
					sol_exec(state, stmt->ifelse->iffalse);
				}
			}
			sol_obj_free(value);
			sol_obj_free(vint);
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			break;

		case ST_LOOP:
			value = sol_eval(state, stmt->loop->cond);
			vint = sol_cast_int(state, value);
			while(vint->ival) {
				sol_obj_free(value);
				sol_obj_free(vint);
				sol_exec(state, stmt->loop->loop);
				if(state->ret || state->sflag == SF_BREAKING || sol_has_error(state)) {
					value = sol_incref(state->None);
					vint = sol_new_int(state, 0);
					continue;
				}
				state->sflag = SF_NORMAL;
				value = sol_eval(state, stmt->loop->cond);
				vint = sol_cast_int(state, value);
			}
			state->sflag = SF_NORMAL;
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			sol_obj_free(value);
			sol_obj_free(vint);
			break;

		case ST_ITER:
			value = sol_eval(state, stmt->iter->iter);
			if(value->ops->iter && value->ops->iter != sol_f_not_impl) {
				list = sol_new_list(state);
				sol_list_insert(state, list, 0, value);
				iter = CALL_METHOD(state, value, iter, list);
				sol_obj_free(list);
			} else {
				iter = value;
			}
			if(!iter->ops->call || iter->ops->call == sol_f_not_impl) {
				sol_obj_free(sol_set_error_string(state, "Iterate over non-iterable"));
				return;
			}
			list = sol_new_list(state);
			sol_list_insert(state, list, 0, iter);
			sol_list_insert(state, list, 1, value);
			sol_list_insert(state, list, 2, sol_new_map(state));
			item = CALL_METHOD(state, iter, call, list);
			while(item != state->StopIteration) {
				sol_state_assign_l_name(state, stmt->iter->var, item);
				sol_exec(state, stmt->iter->loop);
				sol_obj_free(item);
				if(state->ret || state->sflag == SF_BREAKING || sol_has_error(state)) {
					item = sol_incref(state->StopIteration);
				}
				state->sflag = SF_NORMAL;
				item = CALL_METHOD(state, iter, call, list);
			}
			state->sflag = SF_NORMAL;
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			sol_obj_free(iter);
			sol_obj_free(value);
			sol_obj_free(list);
			sol_obj_free(item);
			break;

		case ST_LIST:
			curs = stmt->stmtlist;
			while(curs && state->sflag == SF_NORMAL && !sol_has_error(state) && !state->ret) {
				if(curs->stmt) {
					sol_exec(state, curs->stmt);
				}
				curs = curs->next;
			}
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			break;

		case ST_RET:
			if(stmt->ret->ret) {
				state->ret = sol_eval(state, stmt->ret->ret);
			} else {
				state->ret = sol_incref(state->None);
			}
			if(sol_has_error(state)) {
				sol_add_traceback(state, sol_new_stmtnode(state, st_copy(stmt)));
			}
			break;

		case ST_CONT:
			state->sflag = SF_CONTINUING;
			break;

		case ST_BREAK:
			state->sflag = SF_BREAKING;
			break;

		default:
			printf("WARNING: Unhandled statement\n");
			break;
	}
}

sol_object_t *sol_f_func_call(sol_state_t *state, sol_object_t *args) {
	sol_object_t *res, *scope, *value, *key;
	identlist_node *curi;
	dsl_seq_iter *iter;
	iter = dsl_new_seq_iter(args->seq);
	if(!args || dsl_seq_iter_is_invalid(iter) || sol_is_none(state, args)) {
		printf("WARNING: No parameters to function call (expecting function)\n");
		return sol_incref(state->None);
	}
	value = dsl_seq_iter_at(iter);
	if(!value || !sol_is_func(value)) {
		printf("WARNING: Function call without function as first parameter\n");
		return sol_incref(state->None);
	}
	if(!value->func) {
		return sol_incref(state->None);
	}
	dsl_seq_iter_next(iter);
	scope = sol_map_copy(state, value->closure);
	curi = AS(value->args, identlist_node);
	while(curi) {
		if(curi->ident) {
			key = sol_new_string(state, curi->ident);
			if(dsl_seq_iter_is_invalid(iter)) {
				sol_map_set(state, scope, key, sol_incref(state->None));
			} else {
				sol_map_set(state, scope, key, dsl_seq_iter_at(iter));
				dsl_seq_iter_next(iter);
			}
			sol_obj_free(key);
			curi = curi->next;
		}
	}
	if(value->fname) {
		key = sol_new_string(state, value->fname);
		sol_map_set(state, scope, key, value);
		sol_obj_free(key);
	}
	sol_state_push_scope(state, scope);
	sol_exec(state, AS(value->func, stmt_node));
	sol_state_pop_scope(state);
	sol_map_merge_existing(state, value->closure, scope);
	if(state->ret) {
		res = state->ret;
		state->ret = NULL;
	} else {
		res = sol_incref(state->None);
	}
	sol_obj_free(scope);
	return res;
}

sol_object_t *sol_new_func(sol_state_t *state, identlist_node *identlist, stmt_node *body, char *name) {
	sol_object_t *obj = sol_alloc_object(state);
	obj->func = st_copy(body);
	obj->args = idl_copy(identlist);
	obj->fname = (name ? strdup(name) : NULL);
	obj->closure = sol_new_map(state);
	obj->udata = sol_new_map(state);
	obj->type = SOL_FUNCTION;
	obj->ops = &(state->FuncOps);
	return obj;
}

sol_object_t *sol_f_func_free(sol_state_t *state, sol_object_t *func) {
	st_free((stmt_node *) func->func);
	idl_free((identlist_node *) func->args);
	if(func->fname) free(func->fname);
	sol_obj_free(func->closure);
	sol_obj_free(func->udata);
	return func;
}

sol_object_t *sol_new_stmtnode(sol_state_t *state, stmt_node *stmt) {
	sol_object_t *obj = sol_alloc_object(state);
	obj->type = SOL_STMT;
	obj->ops = &(state->ASTNodeOps);
	obj->node = st_copy(stmt);
	return obj;
}

sol_object_t *sol_new_exprnode(sol_state_t *state, expr_node *expr) {
	sol_object_t *obj = sol_alloc_object(state);
	obj->type = SOL_EXPR;
	obj->ops = &(state->ASTNodeOps);
	obj->node = ex_copy(expr);
	return obj;
}
