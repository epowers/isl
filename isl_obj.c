/*
 * Copyright 2010      INRIA Saclay
 *
 * Use of this software is governed by the GNU LGPLv2.1 license
 *
 * Written by Sven Verdoolaege, INRIA Saclay - Ile-de-France,
 * Parc Club Orsay Universite, ZAC des vignes, 4 rue Jacques Monod,
 * 91893 Orsay, France 
 */

#include <isl_obj.h>

static void *isl_obj_map_copy(void *v)
{
	return isl_map_copy((struct isl_map *)v);
}

static void isl_obj_map_free(void *v)
{
	isl_map_free((struct isl_map *)v);
}

static void isl_obj_map_print(void *v, FILE *out)
{
	isl_map_print((struct isl_map *)v, out, 0, ISL_FORMAT_ISL);
}

static void *isl_obj_map_add(void *v1, void *v2)
{
	return isl_map_union((struct isl_map *)v1, (struct isl_map *)v2);
}

struct isl_obj_vtable isl_obj_map_vtable = {
	isl_obj_map_copy,
	isl_obj_map_add,
	isl_obj_map_print,
	isl_obj_map_free
};

static void *isl_obj_set_copy(void *v)
{
	return isl_set_copy((struct isl_set *)v);
}

static void isl_obj_set_free(void *v)
{
	isl_set_free((struct isl_set *)v);
}

static void isl_obj_set_print(void *v, FILE *out)
{
	isl_set_print((struct isl_set *)v, out, 0, ISL_FORMAT_ISL);
}

static void *isl_obj_set_add(void *v1, void *v2)
{
	return isl_set_union((struct isl_set *)v1, (struct isl_set *)v2);
}

struct isl_obj_vtable isl_obj_set_vtable = {
	isl_obj_set_copy,
	isl_obj_set_add,
	isl_obj_set_print,
	isl_obj_set_free
};

static void *isl_obj_none_copy(void *v)
{
	return v;
}

static void isl_obj_none_free(void *v)
{
}

static void isl_obj_none_print(void *v, FILE *out)
{
}

static void *isl_obj_none_add(void *v1, void *v2)
{
}

static struct isl_obj_vtable obj_none = {
	isl_obj_none_copy,
	isl_obj_none_add,
	isl_obj_none_print,
	isl_obj_none_free
};
isl_obj_type isl_obj_none = &obj_none;

static void *isl_obj_pw_qp_copy(void *v)
{
	return isl_pw_qpolynomial_copy((struct isl_pw_qpolynomial *)v);
}

static void isl_obj_pw_qp_free(void *v)
{
	isl_pw_qpolynomial_free((struct isl_pw_qpolynomial *)v);
}

static void isl_obj_pw_qp_print(void *v, FILE *out)
{
	isl_pw_qpolynomial_print((struct isl_pw_qpolynomial *)v, out,
					ISL_FORMAT_ISL);
}

static void *isl_obj_pw_qp_add(void *v1, void *v2)
{
	return isl_pw_qpolynomial_add((struct isl_pw_qpolynomial *)v1,
					(struct isl_pw_qpolynomial *)v2);
}

struct isl_obj_vtable isl_obj_pw_qpolynomial_vtable = {
	isl_obj_pw_qp_copy,
	isl_obj_pw_qp_add,
	isl_obj_pw_qp_print,
	isl_obj_pw_qp_free
};