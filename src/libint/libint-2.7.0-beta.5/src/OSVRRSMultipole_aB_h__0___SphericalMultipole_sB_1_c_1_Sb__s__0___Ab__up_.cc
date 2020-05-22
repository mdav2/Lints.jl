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
void OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_1_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PA_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+1)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PA_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+2)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp73 + fp70;
target[((hsi*21+3)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PA_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp66;
fp66 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp67 + fp64;
target[((hsi*21+5)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = 2.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp62 + fp59;
target[((hsi*21+6)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+7)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp56 + fp53;
target[((hsi*21+8)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp51 + fp48;
target[((hsi*21+9)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 4.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp80 - fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PA_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp82 + fp77;
target[((hsi*21+0)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
target[((hsi*21+12)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*21+13)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp29;
fp29 = 3.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
target[((hsi*21+14)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
fp24 = 4.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + fp24;
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*21+15)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
target[((hsi*21+16)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + fp18;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
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
fp14 = inteval->PA_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
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
fp9 = inteval->PA_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
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
fp4 = inteval->PA_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp45;
fp45 = 3.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp46 + fp43;
target[((hsi*21+10)*1+lsi)*1] = fp42;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 83 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
