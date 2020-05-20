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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_1_Sb__m__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src5[((hsi*45+44)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+44)*1+lsi)*1], fp1);
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src5[((hsi*45+43)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+43)*1+lsi)*1], fp7);
target[((hsi*55+53)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src5[((hsi*45+42)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+42)*1+lsi)*1], fp13);
target[((hsi*55+52)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src5[((hsi*45+41)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+41)*1+lsi)*1], fp19);
target[((hsi*55+51)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src5[((hsi*45+40)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+40)*1+lsi)*1], fp25);
target[((hsi*55+50)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src5[((hsi*45+39)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+39)*1+lsi)*1], fp31);
target[((hsi*55+49)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src5[((hsi*45+38)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+38)*1+lsi)*1], fp37);
target[((hsi*55+48)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp44;
fp44 = fp45 + src5[((hsi*45+37)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+37)*1+lsi)*1], fp43);
target[((hsi*55+47)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src5[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+36)*1+lsi)*1], fp49);
target[((hsi*55+46)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp55;
fp55 = 5.0000000000000000e-01 * src4[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+36)*1+lsi)*1], fp53);
target[((hsi*55+45)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp61;
fp61 = fp62 + src5[((hsi*45+35)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->oo2z[vi] * fp61;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+35)*1+lsi)*1], fp60);
target[((hsi*55+44)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = fp68 + src5[((hsi*45+34)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+34)*1+lsi)*1], fp66);
target[((hsi*55+43)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp73;
fp73 = fp74 + src5[((hsi*45+33)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+33)*1+lsi)*1], fp72);
target[((hsi*55+42)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = fp80 + src5[((hsi*45+32)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->oo2z[vi] * fp79;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+32)*1+lsi)*1], fp78);
target[((hsi*55+41)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp85;
fp85 = fp86 + src5[((hsi*45+31)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+31)*1+lsi)*1], fp84);
target[((hsi*55+40)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp91;
fp91 = fp92 + src5[((hsi*45+30)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = inteval->oo2z[vi] * fp91;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+30)*1+lsi)*1], fp90);
target[((hsi*55+39)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp97;
fp97 = fp98 + src5[((hsi*45+29)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+29)*1+lsi)*1], fp96);
target[((hsi*55+38)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src5[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+28)*1+lsi)*1], fp102);
target[((hsi*55+37)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp108;
fp108 = 5.0000000000000000e-01 * src4[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp106;
fp106 = inteval->oo2z[vi] * fp107;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+28)*1+lsi)*1], fp106);
target[((hsi*55+36)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp114;
fp114 = fp115 + src5[((hsi*45+27)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->oo2z[vi] * fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+27)*1+lsi)*1], fp113);
target[((hsi*55+35)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp120;
fp120 = fp121 + src5[((hsi*45+26)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->oo2z[vi] * fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+26)*1+lsi)*1], fp119);
target[((hsi*55+34)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp126;
fp126 = fp127 + src5[((hsi*45+25)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = inteval->oo2z[vi] * fp126;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+25)*1+lsi)*1], fp125);
target[((hsi*55+33)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp132;
fp132 = fp133 + src5[((hsi*45+24)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2z[vi] * fp132;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+24)*1+lsi)*1], fp131);
target[((hsi*55+32)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp138;
fp138 = fp139 + src5[((hsi*45+23)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->oo2z[vi] * fp138;
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+23)*1+lsi)*1], fp137);
target[((hsi*55+31)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp144;
fp144 = fp145 + src5[((hsi*45+22)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->oo2z[vi] * fp144;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+22)*1+lsi)*1], fp143);
target[((hsi*55+30)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src5[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->oo2z[vi] * fp150;
LIBINT2_REALTYPE fp151;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+21)*1+lsi)*1], fp149);
target[((hsi*55+29)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp155;
fp155 = 5.0000000000000000e-01 * src4[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp154;
fp154 = fp156 + fp155;
LIBINT2_REALTYPE fp153;
fp153 = inteval->oo2z[vi] * fp154;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp152;
fp152 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+21)*1+lsi)*1], fp153);
target[((hsi*55+28)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp161;
fp161 = fp162 + src5[((hsi*45+20)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+20)*1+lsi)*1], fp160);
target[((hsi*55+27)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp169;
LIBINT2_REALTYPE fp168;
fp168 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp167;
fp167 = fp168 + src5[((hsi*45+19)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->oo2z[vi] * fp167;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+19)*1+lsi)*1], fp166);
target[((hsi*55+26)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp173;
fp173 = fp174 + src5[((hsi*45+18)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->oo2z[vi] * fp173;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+18)*1+lsi)*1], fp172);
target[((hsi*55+25)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp180;
fp180 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp179;
fp179 = fp180 + src5[((hsi*45+17)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp182;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+17)*1+lsi)*1], fp178);
target[((hsi*55+24)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp187;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp185;
fp185 = fp186 + src5[((hsi*45+16)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+16)*1+lsi)*1], fp184);
target[((hsi*55+23)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp191;
fp191 = 0.0000000000000000e+00 + src5[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = inteval->oo2z[vi] * fp191;
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+15)*1+lsi)*1], fp190);
target[((hsi*55+22)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp196;
fp196 = 5.0000000000000000e-01 * src4[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp195;
fp195 = fp197 + fp196;
LIBINT2_REALTYPE fp194;
fp194 = inteval->oo2z[vi] * fp195;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp193;
fp193 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+15)*1+lsi)*1], fp194);
target[((hsi*55+21)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp202;
fp202 = fp203 + src5[((hsi*45+14)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->oo2z[vi] * fp202;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+14)*1+lsi)*1], fp201);
target[((hsi*55+20)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp209;
fp209 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp208;
fp208 = fp209 + src5[((hsi*45+13)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = inteval->oo2z[vi] * fp208;
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+13)*1+lsi)*1], fp207);
target[((hsi*55+19)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp214;
fp214 = fp215 + src5[((hsi*45+12)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = inteval->oo2z[vi] * fp214;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+12)*1+lsi)*1], fp213);
target[((hsi*55+18)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp221;
fp221 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp220;
fp220 = fp221 + src5[((hsi*45+11)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->oo2z[vi] * fp220;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+11)*1+lsi)*1], fp219);
target[((hsi*55+17)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp226;
fp226 = 0.0000000000000000e+00 + src5[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2z[vi] * fp226;
LIBINT2_REALTYPE fp227;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+10)*1+lsi)*1], fp225);
target[((hsi*55+16)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp231;
fp231 = 5.0000000000000000e-01 * src4[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp230;
fp230 = fp232 + fp231;
LIBINT2_REALTYPE fp229;
fp229 = inteval->oo2z[vi] * fp230;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+10)*1+lsi)*1], fp229);
target[((hsi*55+15)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp239;
LIBINT2_REALTYPE fp238;
fp238 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp237;
fp237 = fp238 + src5[((hsi*45+9)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = inteval->oo2z[vi] * fp237;
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp235;
fp235 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+9)*1+lsi)*1], fp236);
target[((hsi*55+14)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp245;
LIBINT2_REALTYPE fp244;
fp244 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp243;
fp243 = fp244 + src5[((hsi*45+8)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
fp242 = inteval->oo2z[vi] * fp243;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+8)*1+lsi)*1], fp242);
target[((hsi*55+13)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp249;
fp249 = fp250 + src5[((hsi*45+7)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = inteval->oo2z[vi] * fp249;
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+7)*1+lsi)*1], fp248);
target[((hsi*55+12)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp255;
fp255 = 0.0000000000000000e+00 + src5[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp254;
fp254 = inteval->oo2z[vi] * fp255;
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+6)*1+lsi)*1], fp254);
target[((hsi*55+11)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp260;
fp260 = 5.0000000000000000e-01 * src4[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp261;
fp261 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
LIBINT2_REALTYPE fp258;
fp258 = inteval->oo2z[vi] * fp259;
LIBINT2_REALTYPE fp263;
LIBINT2_REALTYPE fp257;
fp257 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+6)*1+lsi)*1], fp258);
target[((hsi*55+10)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp267;
fp267 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp266;
fp266 = fp267 + src5[((hsi*45+5)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = inteval->oo2z[vi] * fp266;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp264;
fp264 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+5)*1+lsi)*1], fp265);
target[((hsi*55+9)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp272;
fp272 = fp273 + src5[((hsi*45+4)*1+lsi)*1];
LIBINT2_REALTYPE fp271;
fp271 = inteval->oo2z[vi] * fp272;
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp270;
fp270 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+4)*1+lsi)*1], fp271);
target[((hsi*55+8)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp278;
fp278 = 0.0000000000000000e+00 + src5[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->oo2z[vi] * fp278;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp276;
fp276 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+3)*1+lsi)*1], fp277);
target[((hsi*55+7)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp283;
fp283 = 5.0000000000000000e-01 * src4[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp282;
fp282 = fp284 + fp283;
LIBINT2_REALTYPE fp281;
fp281 = inteval->oo2z[vi] * fp282;
LIBINT2_REALTYPE fp286;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+3)*1+lsi)*1], fp281);
target[((hsi*55+6)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp291;
LIBINT2_REALTYPE fp290;
fp290 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp289;
fp289 = fp290 + src5[((hsi*45+2)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = inteval->oo2z[vi] * fp289;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp287;
fp287 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+2)*1+lsi)*1], fp288);
target[((hsi*55+5)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp295;
fp295 = 0.0000000000000000e+00 + src5[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp294;
fp294 = inteval->oo2z[vi] * fp295;
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp293;
fp293 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+1)*1+lsi)*1], fp294);
target[((hsi*55+4)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp300;
fp300 = 5.0000000000000000e-01 * src4[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp299;
fp299 = fp301 + fp300;
LIBINT2_REALTYPE fp298;
fp298 = inteval->oo2z[vi] * fp299;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp297;
fp297 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+1)*1+lsi)*1], fp298);
target[((hsi*55+3)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp306;
fp306 = 0.0000000000000000e+00 + src5[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp305;
fp305 = inteval->oo2z[vi] * fp306;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp304;
fp304 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*45+0)*1+lsi)*1], fp305);
target[((hsi*55+2)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_plus(5.0000000000000000e-01, src4[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp309;
fp309 = inteval->oo2z[vi] * fp310;
LIBINT2_REALTYPE fp312;
LIBINT2_REALTYPE fp308;
fp308 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*45+0)*1+lsi)*1], fp309);
target[((hsi*55+1)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp316;
fp316 = 5.0000000000000000e-01 * src3[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = 5.0000000000000000e-01 * src2[((hsi*45+0)*1+lsi)*1];
LIBINT2_REALTYPE fp320;
LIBINT2_REALTYPE fp319;
fp319 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp315;
fp315 = fp317 - fp316;
LIBINT2_REALTYPE fp314;
fp314 = inteval->oo2z[vi] * fp315;
LIBINT2_REALTYPE fp321;
LIBINT2_REALTYPE fp313;
fp313 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*45+0)*1+lsi)*1], fp314);
target[((hsi*55+0)*1+lsi)*1] = fp313;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 322 */
}

#ifdef __cplusplus
};
#endif
