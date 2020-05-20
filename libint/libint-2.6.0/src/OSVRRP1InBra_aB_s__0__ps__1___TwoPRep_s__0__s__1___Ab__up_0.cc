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
void OSVRRP1InBra_aB_s__0__ps__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+44)*1+lsi)*1], src2[((hsi*45+44)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 9.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+54)*1+lsi)*1], fp6);
LIBINT2_REALTYPE fp0;
fp0 = fp5 - fp1;
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+43)*1+lsi)*1], src2[((hsi*45+43)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = 8.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src1[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+53)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13 - fp9;
target[((hsi*66+64)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+42)*1+lsi)*1], src2[((hsi*45+42)*1+lsi)*1]);
LIBINT2_REALTYPE fp20;
fp20 = 7.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp20 * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_z[vi] * src1[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+52)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp16;
fp16 = fp21 - fp17;
target[((hsi*66+63)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+41)*1+lsi)*1], src2[((hsi*45+41)*1+lsi)*1]);
LIBINT2_REALTYPE fp28;
fp28 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src1[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+51)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp24;
fp24 = fp29 - fp25;
target[((hsi*66+62)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+40)*1+lsi)*1], src2[((hsi*45+40)*1+lsi)*1]);
LIBINT2_REALTYPE fp36;
fp36 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_z[vi] * src1[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+50)*1+lsi)*1], fp38);
LIBINT2_REALTYPE fp32;
fp32 = fp37 - fp33;
target[((hsi*66+61)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+39)*1+lsi)*1], src2[((hsi*45+39)*1+lsi)*1]);
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp44 * fp42;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+49)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp40;
fp40 = fp45 - fp41;
target[((hsi*66+60)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+38)*1+lsi)*1], src2[((hsi*45+38)*1+lsi)*1]);
LIBINT2_REALTYPE fp52;
fp52 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp52 * fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_z[vi] * src1[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+48)*1+lsi)*1], fp54);
LIBINT2_REALTYPE fp48;
fp48 = fp53 - fp49;
target[((hsi*66+59)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+37)*1+lsi)*1], src2[((hsi*45+37)*1+lsi)*1]);
LIBINT2_REALTYPE fp60;
fp60 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp60 * fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * src1[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+47)*1+lsi)*1], fp62);
LIBINT2_REALTYPE fp56;
fp56 = fp61 - fp57;
target[((hsi*66+58)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+36)*1+lsi)*1], src2[((hsi*45+36)*1+lsi)*1]);
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp68 * fp66;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_z[vi] * src1[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+46)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp64;
fp64 = fp69 - fp65;
target[((hsi*66+57)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WQ_z[vi] * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+45)*1+lsi)*1], fp73);
target[((hsi*66+56)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+36)*1+lsi)*1], src2[((hsi*45+36)*1+lsi)*1]);
LIBINT2_REALTYPE fp79;
fp79 = 9.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp76;
fp76 = fp79 * fp77;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WQ_y[vi] * src1[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+45)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp75;
fp75 = fp80 - fp76;
target[((hsi*66+55)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+35)*1+lsi)*1], src2[((hsi*45+35)*1+lsi)*1]);
LIBINT2_REALTYPE fp87;
fp87 = 8.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp84;
fp84 = fp87 * fp85;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_z[vi] * src1[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+44)*1+lsi)*1], fp89);
LIBINT2_REALTYPE fp83;
fp83 = fp88 - fp84;
target[((hsi*66+54)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+34)*1+lsi)*1], src2[((hsi*45+34)*1+lsi)*1]);
LIBINT2_REALTYPE fp95;
fp95 = 7.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp92;
fp92 = fp95 * fp93;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WQ_z[vi] * src1[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+43)*1+lsi)*1], fp97);
LIBINT2_REALTYPE fp91;
fp91 = fp96 - fp92;
target[((hsi*66+53)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+33)*1+lsi)*1], src2[((hsi*45+33)*1+lsi)*1]);
LIBINT2_REALTYPE fp103;
fp103 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp103 * fp101;
LIBINT2_REALTYPE fp105;
fp105 = inteval->WQ_z[vi] * src1[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+42)*1+lsi)*1], fp105);
LIBINT2_REALTYPE fp99;
fp99 = fp104 - fp100;
target[((hsi*66+52)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+32)*1+lsi)*1], src2[((hsi*45+32)*1+lsi)*1]);
LIBINT2_REALTYPE fp111;
fp111 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp108;
fp108 = fp111 * fp109;
LIBINT2_REALTYPE fp113;
fp113 = inteval->WQ_z[vi] * src1[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+41)*1+lsi)*1], fp113);
LIBINT2_REALTYPE fp107;
fp107 = fp112 - fp108;
target[((hsi*66+51)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+31)*1+lsi)*1], src2[((hsi*45+31)*1+lsi)*1]);
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp119 * fp117;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_z[vi] * src1[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+40)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp115;
fp115 = fp120 - fp116;
target[((hsi*66+50)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp126;
LIBINT2_REALTYPE fp125;
fp125 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+30)*1+lsi)*1], src2[((hsi*45+30)*1+lsi)*1]);
LIBINT2_REALTYPE fp127;
fp127 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp127 * fp125;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WQ_z[vi] * src1[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+39)*1+lsi)*1], fp129);
LIBINT2_REALTYPE fp123;
fp123 = fp128 - fp124;
target[((hsi*66+49)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+29)*1+lsi)*1], src2[((hsi*45+29)*1+lsi)*1]);
LIBINT2_REALTYPE fp135;
fp135 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp135 * fp133;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WQ_z[vi] * src1[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+38)*1+lsi)*1], fp137);
LIBINT2_REALTYPE fp131;
fp131 = fp136 - fp132;
target[((hsi*66+48)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+28)*1+lsi)*1], src2[((hsi*45+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp143 * fp141;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WQ_z[vi] * src1[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+37)*1+lsi)*1], fp145);
LIBINT2_REALTYPE fp139;
fp139 = fp144 - fp140;
target[((hsi*66+47)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_z[vi] * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp147;
fp147 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+36)*1+lsi)*1], fp148);
target[((hsi*66+46)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+28)*1+lsi)*1], src2[((hsi*45+28)*1+lsi)*1]);
LIBINT2_REALTYPE fp154;
fp154 = 8.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp151;
fp151 = fp154 * fp152;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WQ_y[vi] * src1[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+36)*1+lsi)*1], fp156);
LIBINT2_REALTYPE fp150;
fp150 = fp155 - fp151;
target[((hsi*66+45)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp160;
fp160 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+27)*1+lsi)*1], src2[((hsi*45+27)*1+lsi)*1]);
LIBINT2_REALTYPE fp162;
fp162 = 7.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp162 * fp160;
LIBINT2_REALTYPE fp164;
fp164 = inteval->WQ_z[vi] * src1[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp163;
fp163 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+35)*1+lsi)*1], fp164);
LIBINT2_REALTYPE fp158;
fp158 = fp163 - fp159;
target[((hsi*66+44)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+26)*1+lsi)*1], src2[((hsi*45+26)*1+lsi)*1]);
LIBINT2_REALTYPE fp170;
fp170 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp167;
fp167 = fp170 * fp168;
LIBINT2_REALTYPE fp172;
fp172 = inteval->WQ_z[vi] * src1[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+34)*1+lsi)*1], fp172);
LIBINT2_REALTYPE fp166;
fp166 = fp171 - fp167;
target[((hsi*66+43)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp177;
LIBINT2_REALTYPE fp176;
fp176 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+25)*1+lsi)*1], src2[((hsi*45+25)*1+lsi)*1]);
LIBINT2_REALTYPE fp178;
fp178 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp175;
fp175 = fp178 * fp176;
LIBINT2_REALTYPE fp180;
fp180 = inteval->WQ_z[vi] * src1[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+33)*1+lsi)*1], fp180);
LIBINT2_REALTYPE fp174;
fp174 = fp179 - fp175;
target[((hsi*66+42)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+24)*1+lsi)*1], src2[((hsi*45+24)*1+lsi)*1]);
LIBINT2_REALTYPE fp186;
fp186 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp183;
fp183 = fp186 * fp184;
LIBINT2_REALTYPE fp188;
fp188 = inteval->WQ_z[vi] * src1[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+32)*1+lsi)*1], fp188);
LIBINT2_REALTYPE fp182;
fp182 = fp187 - fp183;
target[((hsi*66+41)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+23)*1+lsi)*1], src2[((hsi*45+23)*1+lsi)*1]);
LIBINT2_REALTYPE fp194;
fp194 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp191;
fp191 = fp194 * fp192;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WQ_z[vi] * src1[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp197;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+31)*1+lsi)*1], fp196);
LIBINT2_REALTYPE fp190;
fp190 = fp195 - fp191;
target[((hsi*66+40)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+22)*1+lsi)*1], src2[((hsi*45+22)*1+lsi)*1]);
LIBINT2_REALTYPE fp202;
fp202 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp199;
fp199 = fp202 * fp200;
LIBINT2_REALTYPE fp204;
fp204 = inteval->WQ_z[vi] * src1[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+30)*1+lsi)*1], fp204);
LIBINT2_REALTYPE fp198;
fp198 = fp203 - fp199;
target[((hsi*66+39)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp209;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+21)*1+lsi)*1], src2[((hsi*45+21)*1+lsi)*1]);
LIBINT2_REALTYPE fp210;
fp210 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp207;
fp207 = fp210 * fp208;
LIBINT2_REALTYPE fp212;
fp212 = inteval->WQ_z[vi] * src1[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+29)*1+lsi)*1], fp212);
LIBINT2_REALTYPE fp206;
fp206 = fp211 - fp207;
target[((hsi*66+38)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WQ_z[vi] * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+28)*1+lsi)*1], fp215);
target[((hsi*66+37)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp220;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+21)*1+lsi)*1], src2[((hsi*45+21)*1+lsi)*1]);
LIBINT2_REALTYPE fp221;
fp221 = 7.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp218;
fp218 = fp221 * fp219;
LIBINT2_REALTYPE fp223;
fp223 = inteval->WQ_y[vi] * src1[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+28)*1+lsi)*1], fp223);
LIBINT2_REALTYPE fp217;
fp217 = fp222 - fp218;
target[((hsi*66+36)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+20)*1+lsi)*1], src2[((hsi*45+20)*1+lsi)*1]);
LIBINT2_REALTYPE fp229;
fp229 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp226;
fp226 = fp229 * fp227;
LIBINT2_REALTYPE fp231;
fp231 = inteval->WQ_z[vi] * src1[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+27)*1+lsi)*1], fp231);
LIBINT2_REALTYPE fp225;
fp225 = fp230 - fp226;
target[((hsi*66+35)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp236;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+19)*1+lsi)*1], src2[((hsi*45+19)*1+lsi)*1]);
LIBINT2_REALTYPE fp237;
fp237 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp234;
fp234 = fp237 * fp235;
LIBINT2_REALTYPE fp239;
fp239 = inteval->WQ_z[vi] * src1[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+26)*1+lsi)*1], fp239);
LIBINT2_REALTYPE fp233;
fp233 = fp238 - fp234;
target[((hsi*66+34)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+18)*1+lsi)*1], src2[((hsi*45+18)*1+lsi)*1]);
LIBINT2_REALTYPE fp245;
fp245 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp242;
fp242 = fp245 * fp243;
LIBINT2_REALTYPE fp247;
fp247 = inteval->WQ_z[vi] * src1[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp246;
fp246 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+25)*1+lsi)*1], fp247);
LIBINT2_REALTYPE fp241;
fp241 = fp246 - fp242;
target[((hsi*66+33)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+17)*1+lsi)*1], src2[((hsi*45+17)*1+lsi)*1]);
LIBINT2_REALTYPE fp253;
fp253 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp250;
fp250 = fp253 * fp251;
LIBINT2_REALTYPE fp255;
fp255 = inteval->WQ_z[vi] * src1[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+24)*1+lsi)*1], fp255);
LIBINT2_REALTYPE fp249;
fp249 = fp254 - fp250;
target[((hsi*66+32)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+16)*1+lsi)*1], src2[((hsi*45+16)*1+lsi)*1]);
LIBINT2_REALTYPE fp261;
fp261 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp258;
fp258 = fp261 * fp259;
LIBINT2_REALTYPE fp263;
fp263 = inteval->WQ_z[vi] * src1[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp262;
fp262 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+23)*1+lsi)*1], fp263);
LIBINT2_REALTYPE fp257;
fp257 = fp262 - fp258;
target[((hsi*66+31)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+15)*1+lsi)*1], src2[((hsi*45+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp269;
fp269 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp266;
fp266 = fp269 * fp267;
LIBINT2_REALTYPE fp271;
fp271 = inteval->WQ_z[vi] * src1[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+22)*1+lsi)*1], fp271);
LIBINT2_REALTYPE fp265;
fp265 = fp270 - fp266;
target[((hsi*66+30)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp274;
fp274 = inteval->WQ_z[vi] * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+21)*1+lsi)*1], fp274);
target[((hsi*66+29)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp278;
fp278 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+15)*1+lsi)*1], src2[((hsi*45+15)*1+lsi)*1]);
LIBINT2_REALTYPE fp280;
fp280 = 6.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp277;
fp277 = fp280 * fp278;
LIBINT2_REALTYPE fp282;
fp282 = inteval->WQ_y[vi] * src1[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp281;
fp281 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+21)*1+lsi)*1], fp282);
LIBINT2_REALTYPE fp276;
fp276 = fp281 - fp277;
target[((hsi*66+28)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+14)*1+lsi)*1], src2[((hsi*45+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp288;
fp288 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp285;
fp285 = fp288 * fp286;
LIBINT2_REALTYPE fp290;
fp290 = inteval->WQ_z[vi] * src1[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp289;
fp289 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+20)*1+lsi)*1], fp290);
LIBINT2_REALTYPE fp284;
fp284 = fp289 - fp285;
target[((hsi*66+27)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+13)*1+lsi)*1], src2[((hsi*45+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp296;
fp296 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp293;
fp293 = fp296 * fp294;
LIBINT2_REALTYPE fp298;
fp298 = inteval->WQ_z[vi] * src1[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+19)*1+lsi)*1], fp298);
LIBINT2_REALTYPE fp292;
fp292 = fp297 - fp293;
target[((hsi*66+26)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp302;
fp302 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+12)*1+lsi)*1], src2[((hsi*45+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp304;
fp304 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp301;
fp301 = fp304 * fp302;
LIBINT2_REALTYPE fp306;
fp306 = inteval->WQ_z[vi] * src1[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+18)*1+lsi)*1], fp306);
LIBINT2_REALTYPE fp300;
fp300 = fp305 - fp301;
target[((hsi*66+25)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+11)*1+lsi)*1], src2[((hsi*45+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp312;
fp312 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp309;
fp309 = fp312 * fp310;
LIBINT2_REALTYPE fp314;
fp314 = inteval->WQ_z[vi] * src1[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp315;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+17)*1+lsi)*1], fp314);
LIBINT2_REALTYPE fp308;
fp308 = fp313 - fp309;
target[((hsi*66+24)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp318;
fp318 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+10)*1+lsi)*1], src2[((hsi*45+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp320;
fp320 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp317;
fp317 = fp320 * fp318;
LIBINT2_REALTYPE fp322;
fp322 = inteval->WQ_z[vi] * src1[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp323;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+16)*1+lsi)*1], fp322);
LIBINT2_REALTYPE fp316;
fp316 = fp321 - fp317;
target[((hsi*66+23)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp325;
fp325 = inteval->WQ_z[vi] * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp326;
LIBINT2_REALTYPE fp324;
fp324 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+15)*1+lsi)*1], fp325);
target[((hsi*66+22)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp330;
LIBINT2_REALTYPE fp329;
fp329 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+10)*1+lsi)*1], src2[((hsi*45+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp331;
fp331 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp328;
fp328 = fp331 * fp329;
LIBINT2_REALTYPE fp333;
fp333 = inteval->WQ_y[vi] * src1[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp334;
LIBINT2_REALTYPE fp332;
fp332 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+15)*1+lsi)*1], fp333);
LIBINT2_REALTYPE fp327;
fp327 = fp332 - fp328;
target[((hsi*66+21)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp338;
LIBINT2_REALTYPE fp337;
fp337 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+9)*1+lsi)*1], src2[((hsi*45+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp339;
fp339 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp336;
fp336 = fp339 * fp337;
LIBINT2_REALTYPE fp341;
fp341 = inteval->WQ_z[vi] * src1[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp342;
LIBINT2_REALTYPE fp340;
fp340 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+14)*1+lsi)*1], fp341);
LIBINT2_REALTYPE fp335;
fp335 = fp340 - fp336;
target[((hsi*66+20)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp346;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+8)*1+lsi)*1], src2[((hsi*45+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp347;
fp347 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp344;
fp344 = fp347 * fp345;
LIBINT2_REALTYPE fp349;
fp349 = inteval->WQ_z[vi] * src1[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+13)*1+lsi)*1], fp349);
LIBINT2_REALTYPE fp343;
fp343 = fp348 - fp344;
target[((hsi*66+19)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp353;
fp353 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+7)*1+lsi)*1], src2[((hsi*45+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp355;
fp355 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp352;
fp352 = fp355 * fp353;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WQ_z[vi] * src1[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
LIBINT2_REALTYPE fp356;
fp356 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+12)*1+lsi)*1], fp357);
LIBINT2_REALTYPE fp351;
fp351 = fp356 - fp352;
target[((hsi*66+18)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp362;
LIBINT2_REALTYPE fp361;
fp361 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+6)*1+lsi)*1], src2[((hsi*45+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp363;
fp363 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp360;
fp360 = fp363 * fp361;
LIBINT2_REALTYPE fp365;
fp365 = inteval->WQ_z[vi] * src1[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp366;
LIBINT2_REALTYPE fp364;
fp364 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+11)*1+lsi)*1], fp365);
LIBINT2_REALTYPE fp359;
fp359 = fp364 - fp360;
target[((hsi*66+17)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WQ_z[vi] * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
LIBINT2_REALTYPE fp367;
fp367 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+10)*1+lsi)*1], fp368);
target[((hsi*66+16)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp373;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+6)*1+lsi)*1], src2[((hsi*45+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp374;
fp374 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp371;
fp371 = fp374 * fp372;
LIBINT2_REALTYPE fp376;
fp376 = inteval->WQ_y[vi] * src1[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
LIBINT2_REALTYPE fp375;
fp375 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+10)*1+lsi)*1], fp376);
LIBINT2_REALTYPE fp370;
fp370 = fp375 - fp371;
target[((hsi*66+15)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp381;
LIBINT2_REALTYPE fp380;
fp380 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+5)*1+lsi)*1], src2[((hsi*45+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp382;
fp382 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp379;
fp379 = fp382 * fp380;
LIBINT2_REALTYPE fp384;
fp384 = inteval->WQ_z[vi] * src1[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
LIBINT2_REALTYPE fp383;
fp383 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+9)*1+lsi)*1], fp384);
LIBINT2_REALTYPE fp378;
fp378 = fp383 - fp379;
target[((hsi*66+14)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp389;
LIBINT2_REALTYPE fp388;
fp388 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+4)*1+lsi)*1], src2[((hsi*45+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp390;
fp390 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp387;
fp387 = fp390 * fp388;
LIBINT2_REALTYPE fp392;
fp392 = inteval->WQ_z[vi] * src1[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
LIBINT2_REALTYPE fp391;
fp391 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+8)*1+lsi)*1], fp392);
LIBINT2_REALTYPE fp386;
fp386 = fp391 - fp387;
target[((hsi*66+13)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp397;
LIBINT2_REALTYPE fp396;
fp396 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+3)*1+lsi)*1], src2[((hsi*45+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp398;
fp398 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp395;
fp395 = fp398 * fp396;
LIBINT2_REALTYPE fp400;
fp400 = inteval->WQ_z[vi] * src1[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
LIBINT2_REALTYPE fp399;
fp399 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+7)*1+lsi)*1], fp400);
LIBINT2_REALTYPE fp394;
fp394 = fp399 - fp395;
target[((hsi*66+12)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp403;
fp403 = inteval->WQ_z[vi] * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
LIBINT2_REALTYPE fp402;
fp402 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+6)*1+lsi)*1], fp403);
target[((hsi*66+11)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp408;
LIBINT2_REALTYPE fp407;
fp407 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+3)*1+lsi)*1], src2[((hsi*45+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp409;
fp409 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp406;
fp406 = fp409 * fp407;
LIBINT2_REALTYPE fp411;
fp411 = inteval->WQ_y[vi] * src1[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp412;
LIBINT2_REALTYPE fp410;
fp410 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+6)*1+lsi)*1], fp411);
LIBINT2_REALTYPE fp405;
fp405 = fp410 - fp406;
target[((hsi*66+10)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp416;
LIBINT2_REALTYPE fp415;
fp415 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+2)*1+lsi)*1], src2[((hsi*45+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp417;
fp417 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp414;
fp414 = fp417 * fp415;
LIBINT2_REALTYPE fp419;
fp419 = inteval->WQ_z[vi] * src1[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp420;
LIBINT2_REALTYPE fp418;
fp418 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+5)*1+lsi)*1], fp419);
LIBINT2_REALTYPE fp413;
fp413 = fp418 - fp414;
target[((hsi*66+9)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp424;
LIBINT2_REALTYPE fp423;
fp423 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+1)*1+lsi)*1], src2[((hsi*45+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp425;
fp425 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp422;
fp422 = fp425 * fp423;
LIBINT2_REALTYPE fp427;
fp427 = inteval->WQ_z[vi] * src1[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp428;
LIBINT2_REALTYPE fp426;
fp426 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+4)*1+lsi)*1], fp427);
LIBINT2_REALTYPE fp421;
fp421 = fp426 - fp422;
target[((hsi*66+8)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp430;
fp430 = inteval->WQ_z[vi] * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp431;
LIBINT2_REALTYPE fp429;
fp429 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+3)*1+lsi)*1], fp430);
target[((hsi*66+7)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp435;
LIBINT2_REALTYPE fp434;
fp434 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+1)*1+lsi)*1], src2[((hsi*45+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp436;
fp436 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp433;
fp433 = fp436 * fp434;
LIBINT2_REALTYPE fp438;
fp438 = inteval->WQ_y[vi] * src1[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp439;
LIBINT2_REALTYPE fp437;
fp437 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+3)*1+lsi)*1], fp438);
LIBINT2_REALTYPE fp432;
fp432 = fp437 - fp433;
target[((hsi*66+6)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp443;
LIBINT2_REALTYPE fp442;
fp442 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+0)*1+lsi)*1], src2[((hsi*45+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp444;
fp444 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp441;
fp441 = fp444 * fp442;
LIBINT2_REALTYPE fp446;
fp446 = inteval->WQ_z[vi] * src1[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp447;
LIBINT2_REALTYPE fp445;
fp445 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+2)*1+lsi)*1], fp446);
LIBINT2_REALTYPE fp440;
fp440 = fp445 - fp441;
target[((hsi*66+5)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp449;
fp449 = inteval->WQ_z[vi] * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp450;
LIBINT2_REALTYPE fp448;
fp448 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+1)*1+lsi)*1], fp449);
target[((hsi*66+4)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp454;
LIBINT2_REALTYPE fp453;
fp453 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+0)*1+lsi)*1], src2[((hsi*45+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp455;
fp455 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp452;
fp452 = fp455 * fp453;
LIBINT2_REALTYPE fp457;
fp457 = inteval->WQ_y[vi] * src1[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp458;
LIBINT2_REALTYPE fp456;
fp456 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+1)*1+lsi)*1], fp457);
LIBINT2_REALTYPE fp451;
fp451 = fp456 - fp452;
target[((hsi*66+3)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp460;
fp460 = inteval->WQ_z[vi] * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
LIBINT2_REALTYPE fp459;
fp459 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*55+0)*1+lsi)*1], fp460);
target[((hsi*66+2)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp463;
fp463 = inteval->WQ_y[vi] * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp464;
LIBINT2_REALTYPE fp462;
fp462 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*55+0)*1+lsi)*1], fp463);
target[((hsi*66+1)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp468;
LIBINT2_REALTYPE fp467;
fp467 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*45+0)*1+lsi)*1], src2[((hsi*45+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp469;
fp469 = 9.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp466;
fp466 = fp469 * fp467;
LIBINT2_REALTYPE fp471;
fp471 = inteval->WQ_x[vi] * src1[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp472;
LIBINT2_REALTYPE fp470;
fp470 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*55+0)*1+lsi)*1], fp471);
LIBINT2_REALTYPE fp465;
fp465 = fp470 - fp466;
target[((hsi*66+0)*1+lsi)*1] = fp465;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 473 */
}

#ifdef __cplusplus
};
#endif
