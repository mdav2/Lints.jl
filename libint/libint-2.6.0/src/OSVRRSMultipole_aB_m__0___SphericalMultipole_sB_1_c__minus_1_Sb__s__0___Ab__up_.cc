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
void OSVRRSMultipole_aB_m__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+44)*1+lsi)*1], fp1);
target[((hsi*55+54)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+43)*1+lsi)*1], fp6);
target[((hsi*55+53)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+42)*1+lsi)*1], fp11);
target[((hsi*55+52)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+41)*1+lsi)*1], fp16);
target[((hsi*55+51)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+40)*1+lsi)*1], fp21);
target[((hsi*55+50)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+39)*1+lsi)*1], fp26);
target[((hsi*55+49)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+38)*1+lsi)*1], fp31);
target[((hsi*55+48)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+37)*1+lsi)*1], fp36);
target[((hsi*55+47)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_z[vi] * src0[((hsi*45+36)*1+lsi)*1];
target[((hsi*55+46)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp44;
fp44 = -5.0000000000000000e-01 * src2[((hsi*45+36)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+36)*1+lsi)*1], fp42);
target[((hsi*55+45)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+35)*1+lsi)*1], fp49);
target[((hsi*55+44)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+34)*1+lsi)*1], fp54);
target[((hsi*55+43)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+33)*1+lsi)*1], fp59);
target[((hsi*55+42)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+32)*1+lsi)*1], fp64);
target[((hsi*55+41)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+31)*1+lsi)*1], fp69);
target[((hsi*55+40)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+30)*1+lsi)*1], fp74);
target[((hsi*55+39)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+29)*1+lsi)*1], fp79);
target[((hsi*55+38)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp83;
fp83 = inteval->PA_z[vi] * src0[((hsi*45+28)*1+lsi)*1];
target[((hsi*55+37)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp87;
fp87 = -5.0000000000000000e-01 * src2[((hsi*45+28)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*36+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+28)*1+lsi)*1], fp85);
target[((hsi*55+36)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+27)*1+lsi)*1], fp92);
target[((hsi*55+35)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+26)*1+lsi)*1], fp97);
target[((hsi*55+34)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+25)*1+lsi)*1], fp102);
target[((hsi*55+33)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+24)*1+lsi)*1], fp107);
target[((hsi*55+32)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+23)*1+lsi)*1], fp112);
target[((hsi*55+31)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+22)*1+lsi)*1], fp117);
target[((hsi*55+30)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PA_z[vi] * src0[((hsi*45+21)*1+lsi)*1];
target[((hsi*55+29)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp125;
fp125 = -5.0000000000000000e-01 * src2[((hsi*45+21)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*36+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = inteval->oo2z[vi] * fp124;
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+21)*1+lsi)*1], fp123);
target[((hsi*55+28)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp130;
fp130 = inteval->oo2z[vi] * fp131;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+20)*1+lsi)*1], fp130);
target[((hsi*55+27)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp135;
fp135 = inteval->oo2z[vi] * fp136;
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+19)*1+lsi)*1], fp135);
target[((hsi*55+26)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp140;
fp140 = inteval->oo2z[vi] * fp141;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp139;
fp139 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+18)*1+lsi)*1], fp140);
target[((hsi*55+25)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+17)*1+lsi)*1], fp145);
target[((hsi*55+24)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+16)*1+lsi)*1], fp150);
target[((hsi*55+23)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_z[vi] * src0[((hsi*45+15)*1+lsi)*1];
target[((hsi*55+22)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp158;
fp158 = -5.0000000000000000e-01 * src2[((hsi*45+15)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*36+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp157;
fp157 = fp159 + fp158;
LIBINT2_REALTYPE fp156;
fp156 = inteval->oo2z[vi] * fp157;
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp155;
fp155 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+15)*1+lsi)*1], fp156);
target[((hsi*55+21)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp163;
fp163 = inteval->oo2z[vi] * fp164;
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+14)*1+lsi)*1], fp163);
target[((hsi*55+20)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp168;
fp168 = inteval->oo2z[vi] * fp169;
LIBINT2_REALTYPE fp171;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+13)*1+lsi)*1], fp168);
target[((hsi*55+19)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp173;
fp173 = inteval->oo2z[vi] * fp174;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+12)*1+lsi)*1], fp173);
target[((hsi*55+18)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp178;
fp178 = inteval->oo2z[vi] * fp179;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+11)*1+lsi)*1], fp178);
target[((hsi*55+17)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp182;
fp182 = inteval->PA_z[vi] * src0[((hsi*45+10)*1+lsi)*1];
target[((hsi*55+16)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp186;
fp186 = -5.0000000000000000e-01 * src2[((hsi*45+10)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*36+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp185;
fp185 = fp187 + fp186;
LIBINT2_REALTYPE fp184;
fp184 = inteval->oo2z[vi] * fp185;
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+10)*1+lsi)*1], fp184);
target[((hsi*55+15)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp193;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp194;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+9)*1+lsi)*1], fp191);
target[((hsi*55+14)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp198;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp199;
LIBINT2_REALTYPE fp195;
fp195 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+8)*1+lsi)*1], fp196);
target[((hsi*55+13)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp201;
fp201 = inteval->oo2z[vi] * fp202;
LIBINT2_REALTYPE fp204;
LIBINT2_REALTYPE fp200;
fp200 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+7)*1+lsi)*1], fp201);
target[((hsi*55+12)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp205;
fp205 = inteval->PA_z[vi] * src0[((hsi*45+6)*1+lsi)*1];
target[((hsi*55+11)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp209;
fp209 = -5.0000000000000000e-01 * src2[((hsi*45+6)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
LIBINT2_REALTYPE fp210;
fp210 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*36+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp208;
fp208 = fp210 + fp209;
LIBINT2_REALTYPE fp207;
fp207 = inteval->oo2z[vi] * fp208;
LIBINT2_REALTYPE fp212;
LIBINT2_REALTYPE fp206;
fp206 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+6)*1+lsi)*1], fp207);
target[((hsi*55+10)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp214;
fp214 = inteval->oo2z[vi] * fp215;
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp213;
fp213 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+5)*1+lsi)*1], fp214);
target[((hsi*55+9)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp219;
fp219 = inteval->oo2z[vi] * fp220;
LIBINT2_REALTYPE fp222;
LIBINT2_REALTYPE fp218;
fp218 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+4)*1+lsi)*1], fp219);
target[((hsi*55+8)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp223;
fp223 = inteval->PA_z[vi] * src0[((hsi*45+3)*1+lsi)*1];
target[((hsi*55+7)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp227;
fp227 = -5.0000000000000000e-01 * src2[((hsi*45+3)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp228;
fp228 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*36+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp226;
fp226 = fp228 + fp227;
LIBINT2_REALTYPE fp225;
fp225 = inteval->oo2z[vi] * fp226;
LIBINT2_REALTYPE fp230;
LIBINT2_REALTYPE fp224;
fp224 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+3)*1+lsi)*1], fp225);
target[((hsi*55+6)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp231;
fp231 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*45+2)*1+lsi)*1], fp232);
target[((hsi*55+5)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp236;
fp236 = inteval->PA_z[vi] * src0[((hsi*45+1)*1+lsi)*1];
target[((hsi*55+4)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp240;
fp240 = -5.0000000000000000e-01 * src2[((hsi*45+1)*1+lsi)*1];
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp239;
fp239 = fp241 + fp240;
LIBINT2_REALTYPE fp238;
fp238 = inteval->oo2z[vi] * fp239;
LIBINT2_REALTYPE fp243;
LIBINT2_REALTYPE fp237;
fp237 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+1)*1+lsi)*1], fp238);
target[((hsi*55+3)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp244;
fp244 = inteval->PA_z[vi] * src0[((hsi*45+0)*1+lsi)*1];
target[((hsi*55+2)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp248;
LIBINT2_REALTYPE fp247;
fp247 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp246;
fp246 = inteval->oo2z[vi] * fp247;
LIBINT2_REALTYPE fp249;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*45+0)*1+lsi)*1], fp246);
target[((hsi*55+1)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp252;
fp252 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*36+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp251;
fp251 = inteval->oo2z[vi] * fp252;
LIBINT2_REALTYPE fp254;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*45+0)*1+lsi)*1], fp251);
target[((hsi*55+0)*1+lsi)*1] = fp250;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 255 */
}

#ifdef __cplusplus
};
#endif
