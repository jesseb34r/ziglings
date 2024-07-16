/* This file is automatically generated.
   It defines macros to allow user program to find the shared
   library files which come as part of GNU libc.  */
#ifndef __GNU_LIB_NAMES_H
#define __GNU_LIB_NAMES_H	1

#include <sgidefs.h>

#if !defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_ABI32)
# include <gnu/lib-names-o32_soft.h>
#endif
#if !defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_ABI32)
# include <gnu/lib-names-o32_hard.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_ABI32)
# include <gnu/lib-names-o32_soft_2008.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_ABI32)
# include <gnu/lib-names-o32_hard_2008.h>
#endif
#if !defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_NABI32)
# include <gnu/lib-names-n32_soft.h>
#endif
#if !defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_NABI32)
# include <gnu/lib-names-n32_hard.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_NABI32)
# include <gnu/lib-names-n32_soft_2008.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_NABI32)
# include <gnu/lib-names-n32_hard_2008.h>
#endif
#if !defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_ABI64)
# include <gnu/lib-names-n64_soft.h>
#endif
#if !defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_ABI64)
# include <gnu/lib-names-n64_hard.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_soft_float) && (_MIPS_SIM == _MIPS_SIM_ABI64)
# include <gnu/lib-names-n64_soft_2008.h>
#endif
#if defined(__mips_nan2008) && defined(__mips_hard_float) && (_MIPS_SIM == _MIPS_SIM_ABI64)
# include <gnu/lib-names-n64_hard_2008.h>
#endif

#endif	/* gnu/lib-names.h */