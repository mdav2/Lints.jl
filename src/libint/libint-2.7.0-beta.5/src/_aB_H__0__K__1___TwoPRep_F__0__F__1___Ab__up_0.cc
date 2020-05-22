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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,26260)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+101860)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17755)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19375)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+105640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19375)*1+lsi)*1]), &(inteval->stack[((hsi*945+20635)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+108475)*1+lsi)*1]), &(inteval->stack[((hsi*3780+101860)*1+lsi)*1]), &(inteval->stack[((hsi*2835+105640)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+114145)*1+lsi)*1]), &(inteval->stack[((hsi*2025+15730)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17755)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+119005)*1+lsi)*1]), &(inteval->stack[((hsi*4860+114145)*1+lsi)*1]), &(inteval->stack[((hsi*3780+101860)*1+lsi)*1]),45);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+126565)*1+lsi)*1]), &(inteval->stack[((hsi*7560+119005)*1+lsi)*1]), &(inteval->stack[((hsi*5670+108475)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+101860)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11055)*1+lsi)*1]), &(inteval->stack[((hsi*1540+13035)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+106480)*1+lsi)*1]), &(inteval->stack[((hsi*1540+13035)*1+lsi)*1]), &(inteval->stack[((hsi*1155+14575)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+109945)*1+lsi)*1]), &(inteval->stack[((hsi*4620+101860)*1+lsi)*1]), &(inteval->stack[((hsi*3465+106480)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+116875)*1+lsi)*1]), &(inteval->stack[((hsi*2475+8580)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11055)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+8580)*1+lsi)*1]), &(inteval->stack[((hsi*5940+116875)*1+lsi)*1]), &(inteval->stack[((hsi*4620+101860)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+136015)*1+lsi)*1]), &(inteval->stack[((hsi*9240+8580)*1+lsi)*1]), &(inteval->stack[((hsi*6930+109945)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*28350+147565)*1+lsi)*1]), &(inteval->stack[((hsi*11550+136015)*1+lsi)*1]), &(inteval->stack[((hsi*9450+126565)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+101860)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23200)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24496)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+104884)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24496)*1+lsi)*1]), &(inteval->stack[((hsi*756+25504)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+107152)*1+lsi)*1]), &(inteval->stack[((hsi*3024+101860)*1+lsi)*1]), &(inteval->stack[((hsi*2268+104884)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+111688)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21580)*1+lsi)*1]), &(inteval->stack[((hsi*1296+23200)*1+lsi)*1]),36);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*6048+8580)*1+lsi)*1]), &(inteval->stack[((hsi*3888+111688)*1+lsi)*1]), &(inteval->stack[((hsi*3024+101860)*1+lsi)*1]),36);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+111688)*1+lsi)*1]), &(inteval->stack[((hsi*6048+8580)*1+lsi)*1]), &(inteval->stack[((hsi*4536+107152)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*22680+175915)*1+lsi)*1]), &(inteval->stack[((hsi*9450+126565)*1+lsi)*1]), &(inteval->stack[((hsi*7560+111688)*1+lsi)*1]),210);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*45360+198595)*1+lsi)*1]), &(inteval->stack[((hsi*28350+147565)*1+lsi)*1]), &(inteval->stack[((hsi*22680+175915)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+101860)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+107404)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7194)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+111562)*1+lsi)*1]), &(inteval->stack[((hsi*5544+101860)*1+lsi)*1]), &(inteval->stack[((hsi*4158+107404)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+175915)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*7128+175915)*1+lsi)*1]), &(inteval->stack[((hsi*5544+101860)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+175915)*1+lsi)*1]), &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*8316+111562)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*34650+243955)*1+lsi)*1]), &(inteval->stack[((hsi*13860+175915)*1+lsi)*1]), &(inteval->stack[((hsi*11550+136015)*1+lsi)*1]),210);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*56700+278605)*1+lsi)*1]), &(inteval->stack[((hsi*34650+243955)*1+lsi)*1]), &(inteval->stack[((hsi*28350+147565)*1+lsi)*1]),210);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*75600+26260)*1+lsi)*1]), &(inteval->stack[((hsi*56700+278605)*1+lsi)*1]), &(inteval->stack[((hsi*45360+198595)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*75600+26260)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
