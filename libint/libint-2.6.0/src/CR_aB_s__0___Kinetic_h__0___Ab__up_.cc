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
void CR_aB_s__0___Kinetic_h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(fp4, src2[((hsi*14+13)*1+lsi)*1], fp1);
LIBINT2_REALTYPE fp101;
fp101 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp0;
LIBINT2_REALTYPE fp65;
fp65 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp64 * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*14+0)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * src2[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp67 * src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp66 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(fp106, src2[((hsi*14+5)*1+lsi)*1], fp103);
LIBINT2_REALTYPE fp99;
fp99 = fp102 + fp100;
target[((hsi*21+20)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp8;
fp8 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp7;
fp7 = fp8 * src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp10;
fp10 = fp11 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(fp10, src2[((hsi*14+12)*1+lsi)*1], fp7);
LIBINT2_REALTYPE fp109;
fp109 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp6;
LIBINT2_REALTYPE fp59;
fp59 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp58;
fp58 = fp59 * src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp61;
fp61 = fp62 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_minus(fp61, src1[((hsi*14+9)*1+lsi)*1], fp58);
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*14+0)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp66 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(fp114, src2[((hsi*14+4)*1+lsi)*1], fp111);
LIBINT2_REALTYPE fp107;
fp107 = fp110 + fp108;
target[((hsi*21+19)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp14;
fp14 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp16;
fp16 = fp17 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(fp16, src2[((hsi*14+11)*1+lsi)*1], fp13);
LIBINT2_REALTYPE fp117;
fp117 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp12;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp56 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_minus(fp55, src1[((hsi*14+10)*1+lsi)*1], fp52);
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*14+0)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp66 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(fp122, src2[((hsi*14+3)*1+lsi)*1], fp119);
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*21+18)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp20 * src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(fp22, src2[((hsi*14+10)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp125;
fp125 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp18;
LIBINT2_REALTYPE fp47;
fp47 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp50 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(fp49, src1[((hsi*14+11)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*14+0)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp66 * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(fp130, src2[((hsi*14+2)*1+lsi)*1], fp127);
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*21+17)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp26;
fp26 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp29 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(fp28, src2[((hsi*14+9)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp133;
fp133 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp24;
LIBINT2_REALTYPE fp41;
fp41 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp40;
fp40 = fp41 * src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(fp43, src1[((hsi*14+12)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*14+0)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp66 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(fp138, src2[((hsi*14+1)*1+lsi)*1], fp135);
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*21+16)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp32;
fp32 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp31;
fp31 = fp32 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp30;
fp30 = fp31 * src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = src0[((hsi*14+0)*1+lsi)*1] * src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp30;
LIBINT2_REALTYPE fp35;
fp35 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp34;
fp34 = fp35 * src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_minus(fp37, src1[((hsi*14+13)*1+lsi)*1], fp34);
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*14+0)*1+lsi)*1] * fp33;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = fp66 * src1[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(fp146, src2[((hsi*14+0)*1+lsi)*1], fp143);
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
target[((hsi*21+15)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp149;
fp149 = src0[((hsi*14+1)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp6;
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*14+1)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp151;
fp151 = fp152 * src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp71 * src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp74 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(fp73, src0[((hsi*14+9)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp154;
fp154 = fp69 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp150;
fp150 = libint2::fma_plus(fp154, src2[((hsi*14+4)*1+lsi)*1], fp151);
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
target[((hsi*21+14)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp157;
fp157 = src0[((hsi*14+1)*1+lsi)*1] * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp12;
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*14+1)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp159;
fp159 = fp160 * src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp69 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(fp162, src2[((hsi*14+3)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*21+13)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp165;
fp165 = src0[((hsi*14+1)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp18;
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*14+1)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp69 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(fp170, src2[((hsi*14+2)*1+lsi)*1], fp167);
LIBINT2_REALTYPE fp163;
fp163 = fp166 + fp164;
target[((hsi*21+12)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp173;
fp173 = src0[((hsi*14+1)*1+lsi)*1] * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp24;
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*14+1)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp69 * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(fp178, src2[((hsi*14+1)*1+lsi)*1], fp175);
LIBINT2_REALTYPE fp171;
fp171 = fp174 + fp172;
target[((hsi*21+11)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp181;
fp181 = src0[((hsi*14+1)*1+lsi)*1] * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp30;
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*14+1)*1+lsi)*1] * fp39;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp69 * src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(fp186, src2[((hsi*14+0)*1+lsi)*1], fp183);
LIBINT2_REALTYPE fp179;
fp179 = fp182 + fp180;
target[((hsi*21+10)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp189;
fp189 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp12;
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*14+2)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = 1.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp77 * src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_minus(fp79, src0[((hsi*14+10)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp194;
fp194 = fp75 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(fp194, src2[((hsi*14+3)*1+lsi)*1], fp191);
LIBINT2_REALTYPE fp187;
fp187 = fp190 + fp188;
target[((hsi*21+9)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp197;
fp197 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp18;
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*14+2)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = fp75 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(fp202, src2[((hsi*14+2)*1+lsi)*1], fp199);
LIBINT2_REALTYPE fp195;
fp195 = fp198 + fp196;
target[((hsi*21+8)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp205;
fp205 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp24;
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*14+2)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = fp75 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(fp210, src2[((hsi*14+1)*1+lsi)*1], fp207);
LIBINT2_REALTYPE fp203;
fp203 = fp206 + fp204;
target[((hsi*21+7)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp213;
fp213 = src0[((hsi*14+2)*1+lsi)*1] * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp30;
LIBINT2_REALTYPE fp216;
fp216 = src0[((hsi*14+2)*1+lsi)*1] * fp45;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp218;
fp218 = fp75 * src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(fp218, src2[((hsi*14+0)*1+lsi)*1], fp215);
LIBINT2_REALTYPE fp211;
fp211 = fp214 + fp212;
target[((hsi*21+6)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp221;
fp221 = src0[((hsi*14+3)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp18;
LIBINT2_REALTYPE fp224;
fp224 = src0[((hsi*14+3)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
fp83 = 1.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp82;
fp82 = fp83 * src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(fp85, src0[((hsi*14+11)*1+lsi)*1], fp82);
LIBINT2_REALTYPE fp226;
fp226 = fp81 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(fp226, src2[((hsi*14+2)*1+lsi)*1], fp223);
LIBINT2_REALTYPE fp219;
fp219 = fp222 + fp220;
target[((hsi*21+5)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp229;
fp229 = src0[((hsi*14+3)*1+lsi)*1] * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp24;
LIBINT2_REALTYPE fp232;
fp232 = src0[((hsi*14+3)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = fp81 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(fp234, src2[((hsi*14+1)*1+lsi)*1], fp231);
LIBINT2_REALTYPE fp227;
fp227 = fp230 + fp228;
target[((hsi*21+4)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp237;
fp237 = src0[((hsi*14+3)*1+lsi)*1] * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp30;
LIBINT2_REALTYPE fp240;
fp240 = src0[((hsi*14+3)*1+lsi)*1] * fp51;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = fp81 * src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_plus(fp242, src2[((hsi*14+0)*1+lsi)*1], fp239);
LIBINT2_REALTYPE fp235;
fp235 = fp238 + fp236;
target[((hsi*21+3)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp245;
fp245 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp24;
LIBINT2_REALTYPE fp248;
fp248 = src0[((hsi*14+4)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 2.0000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp89 * src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_minus(fp91, src0[((hsi*14+12)*1+lsi)*1], fp88);
LIBINT2_REALTYPE fp250;
fp250 = fp87 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(fp250, src2[((hsi*14+1)*1+lsi)*1], fp247);
LIBINT2_REALTYPE fp243;
fp243 = fp246 + fp244;
target[((hsi*21+2)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp253;
fp253 = src0[((hsi*14+4)*1+lsi)*1] * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp30;
LIBINT2_REALTYPE fp256;
fp256 = src0[((hsi*14+4)*1+lsi)*1] * fp57;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp258;
fp258 = fp87 * src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(fp258, src2[((hsi*14+0)*1+lsi)*1], fp255);
LIBINT2_REALTYPE fp251;
fp251 = fp254 + fp252;
target[((hsi*21+1)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp261;
fp261 = src0[((hsi*14+5)*1+lsi)*1] * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp30;
LIBINT2_REALTYPE fp264;
fp264 = src0[((hsi*14+5)*1+lsi)*1] * fp63;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = 2.5000000000000000e+00 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp95 * src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 5.0000000000000000e-01 * inteval->two_alpha0_bra[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * inteval->two_alpha0_ket[vi];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(fp97, src0[((hsi*14+13)*1+lsi)*1], fp94);
LIBINT2_REALTYPE fp266;
fp266 = fp93 * src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(fp266, src2[((hsi*14+0)*1+lsi)*1], fp263);
LIBINT2_REALTYPE fp259;
fp259 = fp262 + fp260;
target[((hsi*21+0)*1+lsi)*1] = fp259;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 267 */
}

#ifdef __cplusplus
};
#endif
