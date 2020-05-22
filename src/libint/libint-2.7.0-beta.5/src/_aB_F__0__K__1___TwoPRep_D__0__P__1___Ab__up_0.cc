/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3726)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+10206)*1+lsi)*1]), &(inteval->stack[((hsi*540+2826)*1+lsi)*1]), &(inteval->stack[((hsi*360+3366)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+11286)*1+lsi)*1]), &(inteval->stack[((hsi*756+2070)*1+lsi)*1]), &(inteval->stack[((hsi*540+2826)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+12906)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11286)*1+lsi)*1]), &(inteval->stack[((hsi*1080+10206)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+10206)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]), &(inteval->stack[((hsi*450+1620)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+1620)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]),45);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2700+15066)*1+lsi)*1]), &(inteval->stack[((hsi*2025+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1350+10206)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6480+3726)*1+lsi)*1]), &(inteval->stack[((hsi*2700+15066)*1+lsi)*1]), &(inteval->stack[((hsi*2160+12906)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6480+3726)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
