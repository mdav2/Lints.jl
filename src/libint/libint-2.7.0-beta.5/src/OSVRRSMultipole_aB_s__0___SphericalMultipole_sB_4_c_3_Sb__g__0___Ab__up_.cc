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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_3_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 3.0000000000000000e+00 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*15+12)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PB_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp21 + fp19;
target[((hsi*15+11)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp25;
fp25 = 5.0000000000000000e-01 * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 3.0000000000000000e+00 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + fp27;
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PB_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp28 + fp23;
target[((hsi*15+10)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp33;
fp33 = 2.0000000000000000e+00 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp31;
fp31 = fp32 + src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * fp31;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PB_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp34 + fp30;
target[((hsi*15+9)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = fp38 + src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp40 + fp36;
target[((hsi*15+8)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp44 + fp42;
target[((hsi*15+7)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp48;
fp48 = 5.0000000000000000e-01 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PB_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp51 + fp46;
target[((hsi*15+6)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + fp65;
LIBINT2_REALTYPE fp54;
fp54 = fp64 + src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp55;
fp55 = inteval->PB_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
target[((hsi*15+5)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PB_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*15+4)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e-01 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp66 + fp61;
target[((hsi*15+3)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PB_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp70 + fp68;
target[((hsi*15+2)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e-01 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp75 + fp72;
target[((hsi*15+1)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp79;
fp79 = 5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 3.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + fp81;
LIBINT2_REALTYPE fp78;
fp78 = fp80 - fp79;
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp82;
fp82 = inteval->PB_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp82 + fp77;
target[((hsi*15+0)*1+lsi)*1] = fp76;
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
