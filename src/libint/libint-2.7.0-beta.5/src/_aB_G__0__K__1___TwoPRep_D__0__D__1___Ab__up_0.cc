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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8704)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+28144)*1+lsi)*1]), &(inteval->stack[((hsi*945+4780)*1+lsi)*1]), &(inteval->stack[((hsi*675+5725)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+30169)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3520)*1+lsi)*1]), &(inteval->stack[((hsi*945+4780)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+33004)*1+lsi)*1]), &(inteval->stack[((hsi*2835+30169)*1+lsi)*1]), &(inteval->stack[((hsi*2025+28144)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+28144)*1+lsi)*1]), &(inteval->stack[((hsi*756+7408)*1+lsi)*1]), &(inteval->stack[((hsi*540+8164)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+29764)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6400)*1+lsi)*1]), &(inteval->stack[((hsi*756+7408)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+3520)*1+lsi)*1]), &(inteval->stack[((hsi*2268+29764)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28144)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*9720+37054)*1+lsi)*1]), &(inteval->stack[((hsi*4050+33004)*1+lsi)*1]), &(inteval->stack[((hsi*3240+3520)*1+lsi)*1]),90);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+3520)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1540)*1+lsi)*1]), &(inteval->stack[((hsi*825+2695)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+28144)*1+lsi)*1]), &(inteval->stack[((hsi*1540+0)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1540)*1+lsi)*1]),55);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4950+46774)*1+lsi)*1]), &(inteval->stack[((hsi*3465+28144)*1+lsi)*1]), &(inteval->stack[((hsi*2475+3520)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12150+51724)*1+lsi)*1]), &(inteval->stack[((hsi*4950+46774)*1+lsi)*1]), &(inteval->stack[((hsi*4050+33004)*1+lsi)*1]),90);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*19440+8704)*1+lsi)*1]), &(inteval->stack[((hsi*12150+51724)*1+lsi)*1]), &(inteval->stack[((hsi*9720+37054)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19440+8704)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
