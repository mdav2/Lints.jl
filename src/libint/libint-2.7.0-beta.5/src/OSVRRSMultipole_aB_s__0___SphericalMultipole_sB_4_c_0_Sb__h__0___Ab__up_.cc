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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_0_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp119;
fp119 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + fp121;
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_y[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp122 + fp117;
target[((hsi*21+1)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PB_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp115 + fp113;
target[((hsi*21+2)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp106;
fp106 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + fp110;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = inteval->oo2z[vi] * fp105;
LIBINT2_REALTYPE fp111;
fp111 = inteval->PB_y[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp111 + fp104;
target[((hsi*21+3)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp102;
fp102 = inteval->PB_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*21+4)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = fp96 + src4[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = inteval->oo2z[vi] * fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PB_z[vi] * src0[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp98 + fp94;
target[((hsi*21+5)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp87;
fp87 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 2.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + fp91;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp92;
fp92 = inteval->PB_y[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp92 + fp85;
target[((hsi*21+6)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp82;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PB_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp83 + fp81;
target[((hsi*21+7)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
fp78 = 1.0000000000000000e+00 * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + fp78;
LIBINT2_REALTYPE fp76;
fp76 = fp77 + src4[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->PB_z[vi] * src0[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
target[((hsi*21+8)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
fp72 = 2.0000000000000000e+00 * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + fp72;
LIBINT2_REALTYPE fp70;
fp70 = fp71 + src4[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PB_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp73 + fp69;
target[((hsi*21+9)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp126;
fp126 = -5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 4.0000000000000000e+00 * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + fp130;
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PB_x[vi] * src0[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp131 + fp124;
target[((hsi*21+0)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PB_z[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp58 + fp56;
target[((hsi*21+11)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + fp53;
LIBINT2_REALTYPE fp51;
fp51 = fp52 + src4[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->oo2z[vi] * fp51;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PB_z[vi] * src0[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = fp54 + fp50;
target[((hsi*21+12)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
fp47 = 2.0000000000000000e+00 * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = fp46 + src4[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->oo2z[vi] * fp45;
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_z[vi] * src0[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp48 + fp44;
target[((hsi*21+13)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + fp41;
LIBINT2_REALTYPE fp39;
fp39 = fp40 + src4[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->oo2z[vi] * fp39;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PB_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp42 + fp38;
target[((hsi*21+14)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp31;
fp31 = 5.0000000000000000e-01 * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 5.0000000000000000e-01 * src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 4.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PB_y[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp36 + fp29;
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_z[vi] * src0[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
target[((hsi*21+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 1.0000000000000000e+00 * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src4[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_z[vi] * src0[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*21+17)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src4[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 3.0000000000000000e+00 * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 4.0000000000000000e+00 * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 5.0000000000000000e-01 * src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 3.0000000000000000e+00 * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + fp66;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PB_y[vi] * src0[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp67 + fp60;
target[((hsi*21+10)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 132 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
