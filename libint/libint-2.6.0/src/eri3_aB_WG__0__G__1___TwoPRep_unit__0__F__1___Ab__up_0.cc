/*
 *  Copyright (C) 2004-2019 Edward F. Valeev
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
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <eri3_aB_WG__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void eri3_aB_WG__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_WG__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+3750)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4695)*1+lsi)*1]), &(inteval->stack[((hsi*315+960)*1+lsi)*1]), &(inteval->stack[((hsi*225+1275)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+5370)*1+lsi)*1]), &(inteval->stack[((hsi*945+3750)*1+lsi)*1]), &(inteval->stack[((hsi*675+4695)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+6720)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+7980)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6720)*1+lsi)*1]), &(inteval->stack[((hsi*945+3750)*1+lsi)*1]),15);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*2250+1500)*1+lsi)*1]), &(inteval->stack[((hsi*1890+7980)*1+lsi)*1]), &(inteval->stack[((hsi*1350+5370)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2250+1500)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
