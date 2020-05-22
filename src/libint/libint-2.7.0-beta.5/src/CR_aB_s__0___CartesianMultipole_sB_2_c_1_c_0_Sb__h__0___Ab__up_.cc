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
void CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_y[vi] * fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp18 + fp20;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_x[vi] * fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp51 + fp56;
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->BO_x[vi] * fp45;
LIBINT2_REALTYPE fp46;
fp46 = fp52 + fp47;
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_x[vi] * fp46;
LIBINT2_REALTYPE fp48;
fp48 = fp55 + fp49;
LIBINT2_REALTYPE fp98;
fp98 = fp48 * fp19;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_y[vi] * fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp96;
fp96 = fp48 * fp23;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_y[vi] * fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_x[vi] * fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
LIBINT2_REALTYPE fp44;
fp44 = inteval->BO_x[vi] * fp41;
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
LIBINT2_REALTYPE fp94;
fp94 = fp43 * fp16;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp92;
fp92 = fp43 * fp19;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp4;
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp43 * fp23;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp3;
target[((hsi*21+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_x[vi] * fp35;
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_x[vi] * fp36;
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp88;
fp88 = fp38 * fp13;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp5;
target[((hsi*21+6)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp86;
fp86 = fp38 * fp16;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp4;
target[((hsi*21+7)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp84;
fp84 = fp38 * fp19;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp3;
target[((hsi*21+8)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp38 * fp23;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp2;
target[((hsi*21+9)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp55;
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_x[vi] * fp51;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp50 + fp54;
LIBINT2_REALTYPE fp57;
fp57 = fp53 + fp58;
LIBINT2_REALTYPE fp100;
fp100 = fp57 * fp23;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_x[vi] * fp30;
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_x[vi] * fp31;
LIBINT2_REALTYPE fp33;
fp33 = fp36 + fp34;
LIBINT2_REALTYPE fp78;
fp78 = fp33 * fp13;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
target[((hsi*21+11)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp76;
fp76 = fp33 * fp16;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp3;
target[((hsi*21+12)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp74;
fp74 = fp33 * fp19;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp2;
target[((hsi*21+13)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp33 * fp23;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp1;
target[((hsi*21+14)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_x[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_y[vi] * fp9;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp70;
fp70 = fp28 * fp7;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp5;
target[((hsi*21+15)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_y[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp68;
fp68 = fp28 * fp10;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp4;
target[((hsi*21+16)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp66;
fp66 = fp28 * fp13;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp3;
target[((hsi*21+17)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = fp28 * fp16;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp2;
target[((hsi*21+18)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp62;
fp62 = fp28 * fp19;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = fp28 * fp23;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp0;
target[((hsi*21+20)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp80;
fp80 = fp33 * fp10;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp5;
target[((hsi*21+10)*1+lsi)*1] = fp79;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 101 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
