#ifndef ISL_OPTIONS_H
#define ISL_OPTIONS_H

#include <isl_arg.h>

struct isl_options {
	#define			ISL_LP_TAB	0
	#define			ISL_LP_PIP	1
	unsigned		lp_solver;

	#define			ISL_ILP_GBR	0
	#define			ISL_ILP_PIP	1
	unsigned		ilp_solver;

	#define			ISL_PIP_TAB	0
	#define			ISL_PIP_PIP	1
	unsigned		pip;

	#define			ISL_CONTEXT_GBR		0
	#define			ISL_CONTEXT_LEXMIN	1
	unsigned		context;

	#define			ISL_GBR_NEVER	0
	#define			ISL_GBR_ONCE	1
	#define			ISL_GBR_ALWAYS	2
	unsigned		gbr;
	unsigned		gbr_only_first;
};

ISL_ARG_DECL(isl_options, struct isl_options, isl_options_arg)

extern struct isl_arg isl_options_arg[];

#endif