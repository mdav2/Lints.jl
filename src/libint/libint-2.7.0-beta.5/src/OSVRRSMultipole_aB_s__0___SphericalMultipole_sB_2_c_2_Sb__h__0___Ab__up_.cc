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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_2_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PB_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = fp87 + fp84;
target[((hsi*21+1)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PB_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+2)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp78;
fp78 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PB_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp81 + fp76;
target[((hsi*21+3)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PB_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PB_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp73 + fp70;
target[((hsi*21+5)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 2.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = inteval->oo2z[vi] * fp64;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PB_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp68 + fp63;
target[((hsi*21+6)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp61;
fp61 = inteval->PB_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+7)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp59;
fp59 = 1.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + fp59;
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PB_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp60 + fp57;
target[((hsi*21+8)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp54;
fp54 = 2.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PB_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp55 + fp52;
target[((hsi*21+9)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp91;
fp91 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 4.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PB_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp94 + fp89;
target[((hsi*21+0)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PB_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PB_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp42 + fp39;
target[((hsi*21+12)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp36;
fp36 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + fp36;
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * fp35;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PB_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp37 + fp34;
target[((hsi*21+13)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp31;
fp31 = 3.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PB_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp32 + fp29;
target[((hsi*21+14)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp24;
fp24 = 5.0000000000000000e-01 * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 4.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + fp26;
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp27 + fp22;
target[((hsi*21+15)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PB_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*21+16)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PB_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*21+17)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 2.0000000000000000e+00 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PB_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp14 + fp11;
target[((hsi*21+18)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
fp8 = 3.0000000000000000e+00 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + fp8;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
fp9 = inteval->PB_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp9 + fp6;
target[((hsi*21+19)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
fp3 = 4.0000000000000000e+00 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PB_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 3.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp50 + fp45;
target[((hsi*21+10)*1+lsi)*1] = fp44;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 95 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
