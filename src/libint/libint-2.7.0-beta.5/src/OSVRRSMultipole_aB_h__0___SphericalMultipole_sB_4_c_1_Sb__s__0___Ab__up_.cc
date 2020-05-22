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
void OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_4_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e-01 * src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + fp111;
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp112;
fp112 = inteval->PA_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp112 + fp109;
target[((hsi*21+1)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src5[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->oo2z[vi] * fp106;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp107 + fp105;
target[((hsi*21+2)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp100;
fp100 = 5.0000000000000000e-01 * src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + fp102;
LIBINT2_REALTYPE fp99;
fp99 = fp101 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->PA_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp103 + fp98;
target[((hsi*21+3)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src5[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp96 + fp94;
target[((hsi*21+4)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = fp90 + src5[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp92 + fp88;
target[((hsi*21+5)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp83;
fp83 = 5.0000000000000000e-01 * src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 2.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp82;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PA_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp86 + fp81;
target[((hsi*21+6)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src5[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp79 + fp77;
target[((hsi*21+7)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
fp74 = 1.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp72;
fp72 = fp73 + src5[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PA_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp75 + fp71;
target[((hsi*21+8)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp68;
fp68 = 2.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + fp68;
LIBINT2_REALTYPE fp66;
fp66 = fp67 + src5[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->oo2z[vi] * fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp69 + fp65;
target[((hsi*21+9)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp116;
fp116 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 4.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + fp120;
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp115;
fp115 = fp117 - fp116;
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp121 + fp114;
target[((hsi*21+0)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src5[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp56 + fp54;
target[((hsi*21+11)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp49;
fp49 = fp50 + src5[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PA_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp52 + fp48;
target[((hsi*21+12)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp44 + src5[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp46 + fp42;
target[((hsi*21+13)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = 3.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp37;
fp37 = fp38 + src5[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = fp40 + fp36;
target[((hsi*21+14)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp31;
fp31 = 5.0000000000000000e-01 * src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 4.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp34 + fp29;
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src5[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*21+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src5[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*21+17)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src5[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src5[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 4.0000000000000000e+00 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src5[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp60;
fp60 = 5.0000000000000000e-01 * src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 3.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + fp62;
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp63 + fp58;
target[((hsi*21+10)*1+lsi)*1] = fp57;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 122 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
