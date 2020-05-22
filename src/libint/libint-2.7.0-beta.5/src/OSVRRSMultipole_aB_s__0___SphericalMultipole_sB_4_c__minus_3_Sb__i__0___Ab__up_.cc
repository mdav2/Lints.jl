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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c__minus_3_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp152;
fp152 = -5.0000000000000000e-01 * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + fp152;
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp153;
fp153 = inteval->PB_y[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp153 + fp150;
target[((hsi*28+1)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src4[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->oo2z[vi] * fp147;
LIBINT2_REALTYPE fp148;
fp148 = inteval->PB_z[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*28+2)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp141;
fp141 = -5.0000000000000000e-01 * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + fp143;
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
LIBINT2_REALTYPE fp139;
fp139 = inteval->oo2z[vi] * fp140;
LIBINT2_REALTYPE fp144;
fp144 = inteval->PB_y[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp144 + fp139;
target[((hsi*28+3)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src4[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PB_z[vi] * src0[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = fp137 + fp135;
target[((hsi*28+4)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp131 + src4[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->oo2z[vi] * fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->PB_z[vi] * src0[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp133 + fp129;
target[((hsi*28+5)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp124;
fp124 = -5.0000000000000000e-01 * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 2.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + fp126;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp127;
fp127 = inteval->PB_y[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp127 + fp122;
target[((hsi*28+6)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src4[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->oo2z[vi] * fp119;
LIBINT2_REALTYPE fp120;
fp120 = inteval->PB_z[vi] * src0[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp120 + fp118;
target[((hsi*28+7)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + fp115;
LIBINT2_REALTYPE fp113;
fp113 = fp114 + src4[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PB_z[vi] * src0[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp116 + fp112;
target[((hsi*28+8)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp109;
fp109 = 2.0000000000000000e+00 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = fp108 + src4[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp110;
fp110 = inteval->PB_z[vi] * src0[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp110 + fp106;
target[((hsi*28+9)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp101;
fp101 = -5.0000000000000000e-01 * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = 3.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp99;
fp99 = inteval->oo2z[vi] * fp100;
LIBINT2_REALTYPE fp104;
fp104 = inteval->PB_y[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp104 + fp99;
target[((hsi*28+10)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src4[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PB_z[vi] * src0[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
target[((hsi*28+11)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp92;
fp92 = 1.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + fp92;
LIBINT2_REALTYPE fp90;
fp90 = fp91 + src4[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PB_z[vi] * src0[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp93 + fp89;
target[((hsi*28+12)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 2.0000000000000000e+00 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + fp86;
LIBINT2_REALTYPE fp84;
fp84 = fp85 + src4[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = inteval->oo2z[vi] * fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PB_z[vi] * src0[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp87 + fp83;
target[((hsi*28+13)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp157;
fp157 = 5.0000000000000000e-01 * src2[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 5.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + fp159;
LIBINT2_REALTYPE fp156;
fp156 = fp158 - fp157;
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp160;
fp160 = inteval->PB_x[vi] * src0[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp160 + fp155;
target[((hsi*28+0)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp72;
fp72 = -5.0000000000000000e-01 * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 4.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + fp74;
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp75;
fp75 = inteval->PB_y[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp75 + fp70;
target[((hsi*28+15)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src4[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PB_z[vi] * src0[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp68 + fp66;
target[((hsi*28+16)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + fp63;
LIBINT2_REALTYPE fp61;
fp61 = fp62 + src4[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp64;
fp64 = inteval->PB_z[vi] * src0[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
target[((hsi*28+17)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp57;
fp57 = 2.0000000000000000e+00 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp56 + src4[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp58;
fp58 = inteval->PB_z[vi] * src0[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp58 + fp54;
target[((hsi*28+18)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + fp51;
LIBINT2_REALTYPE fp49;
fp49 = fp50 + src4[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PB_z[vi] * src0[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp52 + fp48;
target[((hsi*28+19)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = 4.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp44 + src4[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PB_z[vi] * src0[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp46 + fp42;
target[((hsi*28+20)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp37;
fp37 = -5.0000000000000000e-01 * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 5.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + fp39;
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PB_y[vi] * src0[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp40 + fp35;
target[((hsi*28+21)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src4[((hsi*21+15)*1+lsi)*1];
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
fp26 = fp27 + src4[((hsi*21+16)*1+lsi)*1];
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
fp20 = fp21 + src4[((hsi*21+17)*1+lsi)*1];
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
fp14 = fp15 + src4[((hsi*21+18)*1+lsi)*1];
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
fp8 = fp9 + src4[((hsi*21+19)*1+lsi)*1];
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
fp2 = fp3 + src4[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp80;
fp80 = 3.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + fp80;
LIBINT2_REALTYPE fp78;
fp78 = fp79 + src4[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PB_z[vi] * src0[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp81 + fp77;
target[((hsi*28+14)*1+lsi)*1] = fp76;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 161 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
