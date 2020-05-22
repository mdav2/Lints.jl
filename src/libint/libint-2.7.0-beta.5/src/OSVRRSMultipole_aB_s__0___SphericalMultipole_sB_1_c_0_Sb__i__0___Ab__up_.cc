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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PB_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
target[((hsi*28+1)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp138;
fp138 = inteval->PB_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
target[((hsi*28+2)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp133;
fp133 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2z[vi] * fp132;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp134 + fp131;
target[((hsi*28+3)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src2[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PB_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*28+4)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp124;
fp124 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = fp123 + src2[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp125 + fp121;
target[((hsi*28+5)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + fp118;
LIBINT2_REALTYPE fp116;
fp116 = inteval->oo2z[vi] * fp117;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp119 + fp116;
target[((hsi*28+6)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src2[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PB_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp114 + fp112;
target[((hsi*28+7)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 1.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = fp108 + src2[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PB_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp110 + fp106;
target[((hsi*28+8)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp103;
fp103 = 2.0000000000000000e+00 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp101;
fp101 = fp102 + src2[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = inteval->oo2z[vi] * fp101;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp104 + fp100;
target[((hsi*28+9)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = 3.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PB_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp98 + fp95;
target[((hsi*28+10)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src2[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->oo2z[vi] * fp92;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PB_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*28+11)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
fp88 = 1.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + fp88;
LIBINT2_REALTYPE fp86;
fp86 = fp87 + src2[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->PB_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp89 + fp85;
target[((hsi*28+12)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 2.0000000000000000e+00 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + fp82;
LIBINT2_REALTYPE fp80;
fp80 = fp81 + src2[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PB_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp83 + fp79;
target[((hsi*28+13)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp143;
fp143 = 5.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + fp143;
LIBINT2_REALTYPE fp141;
fp141 = inteval->oo2z[vi] * fp142;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PB_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp144 + fp141;
target[((hsi*28+0)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp70;
fp70 = 4.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + fp70;
LIBINT2_REALTYPE fp68;
fp68 = inteval->oo2z[vi] * fp69;
LIBINT2_REALTYPE fp71;
fp71 = inteval->PB_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp71 + fp68;
target[((hsi*28+15)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src2[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*28+16)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = fp60 + src2[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp62 + fp58;
target[((hsi*28+17)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
fp55 = 2.0000000000000000e+00 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = fp54 + src2[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp56 + fp52;
target[((hsi*28+18)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp49;
fp49 = 3.0000000000000000e+00 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = fp48 + src2[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp50 + fp46;
target[((hsi*28+19)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 4.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + fp43;
LIBINT2_REALTYPE fp41;
fp41 = fp42 + src2[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp41;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PB_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp44 + fp40;
target[((hsi*28+20)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 5.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PB_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp38 + fp35;
target[((hsi*28+21)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src2[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_z[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp33 + fp31;
target[((hsi*28+22)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src2[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*28+23)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp22;
fp22 = 2.0000000000000000e+00 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_z[vi] * src0[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*28+24)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp16;
fp16 = 3.0000000000000000e+00 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*28+25)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 4.0000000000000000e+00 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*28+26)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 5.0000000000000000e+00 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp76;
fp76 = 3.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = fp75 + src2[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PB_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp77 + fp73;
target[((hsi*28+14)*1+lsi)*1] = fp72;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 145 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
