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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18496)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+65152)*1+lsi)*1]), &(inteval->stack[((hsi*2025+9955)*1+lsi)*1]), &(inteval->stack[((hsi*1620+11980)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+70012)*1+lsi)*1]), &(inteval->stack[((hsi*2475+7480)*1+lsi)*1]), &(inteval->stack[((hsi*2025+9955)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]), &(inteval->stack[((hsi*6075+70012)*1+lsi)*1]), &(inteval->stack[((hsi*4860+65152)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+65152)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15580)*1+lsi)*1]), &(inteval->stack[((hsi*1296+17200)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+69040)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13600)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15580)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+7480)*1+lsi)*1]), &(inteval->stack[((hsi*4860+69040)*1+lsi)*1]), &(inteval->stack[((hsi*3888+65152)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*23328+85807)*1+lsi)*1]), &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]), &(inteval->stack[((hsi*7776+7480)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+7480)*1+lsi)*1]), &(inteval->stack[((hsi*2475+3025)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5500)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+65152)*1+lsi)*1]), &(inteval->stack[((hsi*3025+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+3025)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+109135)*1+lsi)*1]), &(inteval->stack[((hsi*7425+65152)*1+lsi)*1]), &(inteval->stack[((hsi*5940+7480)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*29160+121015)*1+lsi)*1]), &(inteval->stack[((hsi*11880+109135)*1+lsi)*1]), &(inteval->stack[((hsi*9720+76087)*1+lsi)*1]),216);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*46656+18496)*1+lsi)*1]), &(inteval->stack[((hsi*29160+121015)*1+lsi)*1]), &(inteval->stack[((hsi*23328+85807)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*46656+18496)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
