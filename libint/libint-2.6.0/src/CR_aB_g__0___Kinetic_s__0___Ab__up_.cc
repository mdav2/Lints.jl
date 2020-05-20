/*
 *  Copyright (C) 2004-2019 Edward F. Valeev
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
extern "C" {
#endif
void CR_aB_g__0___Kinetic_s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(fp4, src2[((hsi*12+11)*1+lsi)*1], fp1);
LIBINT2_REALTYPE fp83;
fp83 = src0[((hsi*12+0)*1+lsi)*1] * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp0;
LIBINT2_REALTYPE fp53;
fp53 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp52 * src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*12+0)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp54;
fp54 = fp55 * src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp54 * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(fp88, src2[((hsi*12+8)*1+lsi)*1], fp85);
LIBINT2_REALTYPE fp81;
fp81 = fp84 + fp82;
target[((hsi*15+14)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp8;
fp8 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(fp10, src2[((hsi*12+9)*1+lsi)*1], fp7);
LIBINT2_REALTYPE fp91;
fp91 = src0[((hsi*12+0)*1+lsi)*1] * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp6;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(fp49, src1[((hsi*12+5)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*12+0)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp54 * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(fp96, src2[((hsi*12+6)*1+lsi)*1], fp93);
LIBINT2_REALTYPE fp89;
fp89 = fp92 + fp90;
target[((hsi*15+13)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp14;
fp14 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(fp16, src2[((hsi*12+7)*1+lsi)*1], fp13);
LIBINT2_REALTYPE fp99;
fp99 = src0[((hsi*12+0)*1+lsi)*1] * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp12;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(fp43, src1[((hsi*12+7)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*12+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp54 * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(fp104, src2[((hsi*12+4)*1+lsi)*1], fp101);
LIBINT2_REALTYPE fp97;
fp97 = fp100 + fp98;
target[((hsi*15+12)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp20;
fp20 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(fp22, src2[((hsi*12+5)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp107;
fp107 = src0[((hsi*12+0)*1+lsi)*1] * src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp18;
LIBINT2_REALTYPE fp35;
fp35 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(fp37, src1[((hsi*12+9)*1+lsi)*1], fp34);
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*12+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = fp54 * src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(fp112, src2[((hsi*12+2)*1+lsi)*1], fp109);
LIBINT2_REALTYPE fp105;
fp105 = fp108 + fp106;
target[((hsi*15+11)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp24;
fp24 = fp25 * src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = src0[((hsi*12+0)*1+lsi)*1] * src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp24;
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(fp31, src1[((hsi*12+11)*1+lsi)*1], fp28);
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*12+0)*1+lsi)*1] * fp27;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp54 * src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(fp120, src2[((hsi*12+0)*1+lsi)*1], fp117);
LIBINT2_REALTYPE fp113;
fp113 = fp116 + fp114;
target[((hsi*15+10)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp123;
fp123 = src0[((hsi*12+2)*1+lsi)*1] * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp6;
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*12+2)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(fp61, src0[((hsi*12+5)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp128;
fp128 = fp57 * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(fp128, src2[((hsi*12+6)*1+lsi)*1], fp125);
LIBINT2_REALTYPE fp121;
fp121 = fp124 + fp122;
target[((hsi*15+9)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp131;
fp131 = src0[((hsi*12+2)*1+lsi)*1] * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp12;
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*12+2)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp57 * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(fp136, src2[((hsi*12+4)*1+lsi)*1], fp133);
LIBINT2_REALTYPE fp129;
fp129 = fp132 + fp130;
target[((hsi*15+8)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp139;
fp139 = src0[((hsi*12+2)*1+lsi)*1] * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp18;
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*12+2)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = fp57 * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(fp144, src2[((hsi*12+2)*1+lsi)*1], fp141);
LIBINT2_REALTYPE fp137;
fp137 = fp140 + fp138;
target[((hsi*15+7)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp147;
fp147 = src0[((hsi*12+2)*1+lsi)*1] * src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp24;
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*12+2)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp149;
fp149 = fp150 * src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp57 * src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(fp152, src2[((hsi*12+0)*1+lsi)*1], fp149);
LIBINT2_REALTYPE fp145;
fp145 = fp148 + fp146;
target[((hsi*15+6)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp155;
fp155 = src0[((hsi*12+4)*1+lsi)*1] * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp12;
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*12+4)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp157;
fp157 = fp158 * src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_minus(fp67, src0[((hsi*12+7)*1+lsi)*1], fp64);
LIBINT2_REALTYPE fp160;
fp160 = fp63 * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(fp160, src2[((hsi*12+4)*1+lsi)*1], fp157);
LIBINT2_REALTYPE fp153;
fp153 = fp156 + fp154;
target[((hsi*15+5)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp163;
fp163 = src0[((hsi*12+4)*1+lsi)*1] * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp18;
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*12+4)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp63 * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(fp168, src2[((hsi*12+2)*1+lsi)*1], fp165);
LIBINT2_REALTYPE fp161;
fp161 = fp164 + fp162;
target[((hsi*15+4)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp171;
fp171 = src0[((hsi*12+4)*1+lsi)*1] * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp24;
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*12+4)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = fp63 * src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(fp176, src2[((hsi*12+0)*1+lsi)*1], fp173);
LIBINT2_REALTYPE fp169;
fp169 = fp172 + fp170;
target[((hsi*15+3)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp179;
fp179 = src0[((hsi*12+6)*1+lsi)*1] * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp18;
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*12+6)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 1.5000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(fp73, src0[((hsi*12+9)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp184;
fp184 = fp69 * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(fp184, src2[((hsi*12+2)*1+lsi)*1], fp181);
LIBINT2_REALTYPE fp177;
fp177 = fp180 + fp178;
target[((hsi*15+2)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp187;
fp187 = src0[((hsi*12+6)*1+lsi)*1] * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp24;
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*12+6)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = fp69 * src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(fp192, src2[((hsi*12+0)*1+lsi)*1], fp189);
LIBINT2_REALTYPE fp185;
fp185 = fp188 + fp186;
target[((hsi*15+1)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp195;
fp195 = src0[((hsi*12+8)*1+lsi)*1] * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp24;
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*12+8)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 2.0000000000000000e+00 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(fp79, src0[((hsi*12+11)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp200;
fp200 = fp75 * src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp196;
fp196 = libint2::fma_plus(fp200, src2[((hsi*12+0)*1+lsi)*1], fp197);
LIBINT2_REALTYPE fp193;
fp193 = fp196 + fp194;
target[((hsi*15+0)*1+lsi)*1] = fp193;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 201 */
}

#ifdef __cplusplus
};
#endif