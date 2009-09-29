/* Prototypes of target machine for GNU compiler.  mapip version.
   Copyright (C) 2002 Free Software Foundation, Inc.
   Contributed by Anders Norlander (anorland@synergenix.se)

This file is part of GNU CC.

GNU CC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU CC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU CC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */

extern void asm_file_end PARAMS ((FILE *));
extern void asm_file_start PARAMS ((FILE *));

extern void override_options PARAMS ((void));
extern void optimization_options PARAMS ((int, int));

extern void float_to_fixed_double PARAMS ((double, long *));

extern void asm_output_ascii PARAMS ((FILE *, char *, int));
extern void asm_output_common PARAMS ((FILE *, char *, int, int, int));

extern void mapip_order_regs_for_local_alloc PARAMS ((void));

extern int mapip_can_eliminate PARAMS ((int, int));
extern void initial_elimination_offset PARAMS ((int, int, int *));

#ifdef TREE_CODE
extern void function_arg_advance PARAMS ((CUMULATIVE_ARGS *, enum machine_mode, tree, int));
extern struct rtx_def *function_arg PARAMS ((CUMULATIVE_ARGS *, enum machine_mode, tree, int));

extern int mapip_valid_machine_decl_attribute PARAMS ((tree, tree, tree, tree));
extern int mapip_valid_machine_type_attribute PARAMS ((tree, tree, tree, tree));
extern void mapip_encode_section_info PARAMS ((tree));
#endif

extern int compute_frame_size PARAMS ((int));
extern int simple_return PARAMS ((void));

extern void mapip_expand_epilogue PARAMS ((void));
extern void mapip_expand_prologue PARAMS ((void));

#ifdef RTX_CODE
extern void machine_dependent_reorg PARAMS ((rtx));
extern long mapip_branch_cost PARAMS ((enum rtx_code, rtx));
extern long mapip_const_int_cost PARAMS ((rtx, enum rtx_code, enum rtx_code));
extern long mapip_const_double_cost PARAMS ((rtx, enum rtx_code, enum rtx_code));

extern void mapip_output_double_int PARAMS ((FILE *, rtx));

extern int mapip_reg_ok_for_base_p PARAMS ((rtx, int));
extern int mapip_constant_address_p PARAMS ((rtx));
extern int mapip_legitimate_address PARAMS ((enum machine_mode, rtx, int));

extern void print_operand PARAMS ((FILE *, rtx, int));
extern void print_operand_address PARAMS ((FILE *, rtx));

extern void mapip_gen_branch PARAMS ((rtx *, enum rtx_code));
extern const char *output_branch PARAMS ((rtx, rtx *, int));
extern const char *mapip_move_word PARAMS ((rtx *, int));
extern const char *mapip_move_2words PARAMS ((rtx *, rtx insn, int));
extern int mapip_expand_call PARAMS ((rtx *));

extern void mapip_prepare_call_regs PARAMS ((void));
extern void abort_with_insn PARAMS ((rtx, const char *));

extern int branch_dest_operand PARAMS ((rtx, enum machine_mode));
extern int call_operand PARAMS ((rtx, enum machine_mode));
extern int native_operand PARAMS ((rtx, enum machine_mode));
extern int double_memory_operand PARAMS ((rtx, enum machine_mode));

#ifdef TREE_CODE
extern rtx mapip_function_value PARAMS ((tree, tree));
#endif

#endif /* RTX_CODE */
