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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void HRRPart0bra0ket0gp(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp47;
fp47 = inteval->AB_x[vi] * src1[((hsi*15+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*21+7)*lowdim+lsi)*1] + fp47;
target[((hsi*45+21)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->AB_z[vi] * src1[((hsi*15+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*21+11)*lowdim+lsi)*1] + fp49;
target[((hsi*45+20)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->AB_y[vi] * src1[((hsi*15+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*21+10)*lowdim+lsi)*1] + fp51;
target[((hsi*45+19)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->AB_x[vi] * src1[((hsi*15+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*21+6)*lowdim+lsi)*1] + fp53;
target[((hsi*45+18)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = inteval->AB_z[vi] * src1[((hsi*15+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*21+9)*lowdim+lsi)*1] + fp55;
target[((hsi*45+17)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->AB_y[vi] * src1[((hsi*15+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*21+8)*lowdim+lsi)*1] + fp57;
target[((hsi*45+16)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->AB_x[vi] * src1[((hsi*15+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*21+5)*lowdim+lsi)*1] + fp59;
target[((hsi*45+15)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->AB_z[vi] * src1[((hsi*15+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*21+8)*lowdim+lsi)*1] + fp61;
target[((hsi*45+14)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->AB_y[vi] * src1[((hsi*15+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*21+7)*lowdim+lsi)*1] + fp63;
target[((hsi*45+13)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->AB_x[vi] * src1[((hsi*15+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*21+4)*lowdim+lsi)*1] + fp65;
target[((hsi*45+12)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp89;
fp89 = inteval->AB_x[vi] * src1[((hsi*15+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*21+0)*lowdim+lsi)*1] + fp89;
target[((hsi*45+0)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp69;
fp69 = inteval->AB_y[vi] * src1[((hsi*15+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*21+6)*lowdim+lsi)*1] + fp69;
target[((hsi*45+10)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->AB_x[vi] * src1[((hsi*15+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*21+3)*lowdim+lsi)*1] + fp71;
target[((hsi*45+9)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->AB_z[vi] * src1[((hsi*15+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*21+5)*lowdim+lsi)*1] + fp73;
target[((hsi*45+8)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->AB_y[vi] * src1[((hsi*15+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*21+4)*lowdim+lsi)*1] + fp75;
target[((hsi*45+7)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->AB_x[vi] * src1[((hsi*15+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*21+2)*lowdim+lsi)*1] + fp77;
target[((hsi*45+6)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->AB_z[vi] * src1[((hsi*15+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*21+4)*lowdim+lsi)*1] + fp79;
target[((hsi*45+5)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->AB_y[vi] * src1[((hsi*15+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*21+3)*lowdim+lsi)*1] + fp81;
target[((hsi*45+4)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->AB_x[vi] * src1[((hsi*15+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*21+1)*lowdim+lsi)*1] + fp83;
target[((hsi*45+3)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->AB_z[vi] * src1[((hsi*15+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*21+2)*lowdim+lsi)*1] + fp85;
target[((hsi*45+2)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->AB_y[vi] * src1[((hsi*15+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*21+1)*lowdim+lsi)*1] + fp87;
target[((hsi*45+1)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp67;
fp67 = inteval->AB_z[vi] * src1[((hsi*15+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*21+7)*lowdim+lsi)*1] + fp67;
target[((hsi*45+11)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp1;
fp1 = inteval->AB_z[vi] * src1[((hsi*15+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*21+20)*lowdim+lsi)*1] + fp1;
target[((hsi*45+44)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->AB_y[vi] * src1[((hsi*15+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*21+19)*lowdim+lsi)*1] + fp3;
target[((hsi*45+43)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->AB_x[vi] * src1[((hsi*15+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*21+14)*lowdim+lsi)*1] + fp5;
target[((hsi*45+42)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->AB_z[vi] * src1[((hsi*15+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*21+19)*lowdim+lsi)*1] + fp7;
target[((hsi*45+41)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->AB_y[vi] * src1[((hsi*15+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*21+18)*lowdim+lsi)*1] + fp9;
target[((hsi*45+40)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->AB_x[vi] * src1[((hsi*15+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*21+13)*lowdim+lsi)*1] + fp11;
target[((hsi*45+39)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->AB_z[vi] * src1[((hsi*15+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*21+18)*lowdim+lsi)*1] + fp13;
target[((hsi*45+38)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->AB_y[vi] * src1[((hsi*15+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*21+17)*lowdim+lsi)*1] + fp15;
target[((hsi*45+37)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->AB_x[vi] * src1[((hsi*15+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*21+12)*lowdim+lsi)*1] + fp17;
target[((hsi*45+36)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->AB_z[vi] * src1[((hsi*15+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*21+17)*lowdim+lsi)*1] + fp19;
target[((hsi*45+35)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp45;
fp45 = inteval->AB_y[vi] * src1[((hsi*15+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*21+11)*lowdim+lsi)*1] + fp45;
target[((hsi*45+22)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp23;
fp23 = inteval->AB_x[vi] * src1[((hsi*15+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*21+11)*lowdim+lsi)*1] + fp23;
target[((hsi*45+33)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->AB_z[vi] * src1[((hsi*15+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*21+16)*lowdim+lsi)*1] + fp25;
target[((hsi*45+32)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->AB_y[vi] * src1[((hsi*15+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*21+15)*lowdim+lsi)*1] + fp27;
target[((hsi*45+31)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->AB_x[vi] * src1[((hsi*15+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*21+10)*lowdim+lsi)*1] + fp29;
target[((hsi*45+30)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->AB_z[vi] * src1[((hsi*15+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*21+14)*lowdim+lsi)*1] + fp31;
target[((hsi*45+29)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->AB_y[vi] * src1[((hsi*15+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*21+13)*lowdim+lsi)*1] + fp33;
target[((hsi*45+28)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->AB_x[vi] * src1[((hsi*15+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*21+9)*lowdim+lsi)*1] + fp35;
target[((hsi*45+27)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->AB_z[vi] * src1[((hsi*15+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*21+13)*lowdim+lsi)*1] + fp37;
target[((hsi*45+26)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->AB_y[vi] * src1[((hsi*15+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*21+12)*lowdim+lsi)*1] + fp39;
target[((hsi*45+25)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->AB_x[vi] * src1[((hsi*15+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*21+8)*lowdim+lsi)*1] + fp41;
target[((hsi*45+24)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->AB_z[vi] * src1[((hsi*15+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*21+12)*lowdim+lsi)*1] + fp43;
target[((hsi*45+23)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp21;
fp21 = inteval->AB_y[vi] * src1[((hsi*15+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*21+16)*lowdim+lsi)*1] + fp21;
target[((hsi*45+34)*lowdim+lsi)*1] = fp20;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 90 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
