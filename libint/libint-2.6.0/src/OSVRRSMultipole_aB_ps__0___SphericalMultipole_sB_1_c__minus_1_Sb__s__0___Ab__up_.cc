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
void OSVRRSMultipole_aB_ps__0___SphericalMultipole_sB_1_c__minus_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+44)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+54)*1+lsi)*1], fp1);
target[((hsi*66+65)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+43)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+53)*1+lsi)*1], fp6);
target[((hsi*66+64)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+42)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+52)*1+lsi)*1], fp11);
target[((hsi*66+63)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+41)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * fp17;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+51)*1+lsi)*1], fp16);
target[((hsi*66+62)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+40)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+50)*1+lsi)*1], fp21);
target[((hsi*66+61)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+39)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * fp27;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+49)*1+lsi)*1], fp26);
target[((hsi*66+60)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+38)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+48)*1+lsi)*1], fp31);
target[((hsi*66+59)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+37)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+47)*1+lsi)*1], fp36);
target[((hsi*66+58)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+46)*1+lsi)*1], fp41);
target[((hsi*66+57)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * src0[((hsi*55+45)*1+lsi)*1];
target[((hsi*66+56)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp49;
fp49 = -5.0000000000000000e-01 * src2[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+36)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+45)*1+lsi)*1], fp47);
target[((hsi*66+55)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+35)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+44)*1+lsi)*1], fp54);
target[((hsi*66+54)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+34)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = inteval->oo2z[vi] * fp60;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+43)*1+lsi)*1], fp59);
target[((hsi*66+53)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+33)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+42)*1+lsi)*1], fp64);
target[((hsi*66+52)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+32)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+41)*1+lsi)*1], fp69);
target[((hsi*66+51)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+31)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = inteval->oo2z[vi] * fp75;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+40)*1+lsi)*1], fp74);
target[((hsi*66+50)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+30)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+39)*1+lsi)*1], fp79);
target[((hsi*66+49)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+29)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = inteval->oo2z[vi] * fp85;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+38)*1+lsi)*1], fp84);
target[((hsi*66+48)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+37)*1+lsi)*1], fp89);
target[((hsi*66+47)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp93;
fp93 = inteval->PA_z[vi] * src0[((hsi*55+36)*1+lsi)*1];
target[((hsi*66+46)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp97;
fp97 = -5.0000000000000000e-01 * src2[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(8.0000000000000000e+00, src1[((hsi*45+28)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp96;
fp96 = fp98 + fp97;
LIBINT2_REALTYPE fp95;
fp95 = inteval->oo2z[vi] * fp96;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+36)*1+lsi)*1], fp95);
target[((hsi*66+45)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+27)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+35)*1+lsi)*1], fp102);
target[((hsi*66+44)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+26)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+34)*1+lsi)*1], fp107);
target[((hsi*66+43)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp114;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+25)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp112;
fp112 = inteval->oo2z[vi] * fp113;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+33)*1+lsi)*1], fp112);
target[((hsi*66+42)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+24)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp117;
fp117 = inteval->oo2z[vi] * fp118;
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+32)*1+lsi)*1], fp117);
target[((hsi*66+41)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp124;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+23)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp122;
fp122 = inteval->oo2z[vi] * fp123;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+31)*1+lsi)*1], fp122);
target[((hsi*66+40)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+22)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+30)*1+lsi)*1], fp127);
target[((hsi*66+39)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp134;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp132;
fp132 = inteval->oo2z[vi] * fp133;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+29)*1+lsi)*1], fp132);
target[((hsi*66+38)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PA_z[vi] * src0[((hsi*55+28)*1+lsi)*1];
target[((hsi*66+37)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp140;
fp140 = -5.0000000000000000e-01 * src2[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(7.0000000000000000e+00, src1[((hsi*45+21)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
LIBINT2_REALTYPE fp138;
fp138 = inteval->oo2z[vi] * fp139;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+28)*1+lsi)*1], fp138);
target[((hsi*66+36)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+20)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp145;
fp145 = inteval->oo2z[vi] * fp146;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+27)*1+lsi)*1], fp145);
target[((hsi*66+35)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+19)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp150;
fp150 = inteval->oo2z[vi] * fp151;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+26)*1+lsi)*1], fp150);
target[((hsi*66+34)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+18)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2z[vi] * fp156;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+25)*1+lsi)*1], fp155);
target[((hsi*66+33)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+17)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+24)*1+lsi)*1], fp160);
target[((hsi*66+32)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp166;
fp166 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+16)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp165;
fp165 = inteval->oo2z[vi] * fp166;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+23)*1+lsi)*1], fp165);
target[((hsi*66+31)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp170;
fp170 = inteval->oo2z[vi] * fp171;
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+22)*1+lsi)*1], fp170);
target[((hsi*66+30)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp174;
fp174 = inteval->PA_z[vi] * src0[((hsi*55+21)*1+lsi)*1];
target[((hsi*66+29)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp178;
fp178 = -5.0000000000000000e-01 * src2[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(6.0000000000000000e+00, src1[((hsi*45+15)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = inteval->oo2z[vi] * fp177;
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+21)*1+lsi)*1], fp176);
target[((hsi*66+28)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+14)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp183;
fp183 = inteval->oo2z[vi] * fp184;
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp182;
fp182 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+20)*1+lsi)*1], fp183);
target[((hsi*66+27)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp190;
LIBINT2_REALTYPE fp189;
fp189 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+13)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp188;
fp188 = inteval->oo2z[vi] * fp189;
LIBINT2_REALTYPE fp191;
LIBINT2_REALTYPE fp187;
fp187 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+19)*1+lsi)*1], fp188);
target[((hsi*66+26)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+12)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp192;
fp192 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+18)*1+lsi)*1], fp193);
target[((hsi*66+25)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+11)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp198;
fp198 = inteval->oo2z[vi] * fp199;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp197;
fp197 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+17)*1+lsi)*1], fp198);
target[((hsi*66+24)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp204;
fp204 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp203;
fp203 = inteval->oo2z[vi] * fp204;
LIBINT2_REALTYPE fp206;
LIBINT2_REALTYPE fp202;
fp202 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+16)*1+lsi)*1], fp203);
target[((hsi*66+23)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp207;
fp207 = inteval->PA_z[vi] * src0[((hsi*55+15)*1+lsi)*1];
target[((hsi*66+22)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp211;
fp211 = -5.0000000000000000e-01 * src2[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(5.0000000000000000e+00, src1[((hsi*45+10)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp210;
fp210 = fp212 + fp211;
LIBINT2_REALTYPE fp209;
fp209 = inteval->oo2z[vi] * fp210;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+15)*1+lsi)*1], fp209);
target[((hsi*66+21)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp218;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp216;
fp216 = inteval->oo2z[vi] * fp217;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+14)*1+lsi)*1], fp216);
target[((hsi*66+20)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp223;
LIBINT2_REALTYPE fp222;
fp222 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp224;
LIBINT2_REALTYPE fp220;
fp220 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+13)*1+lsi)*1], fp221);
target[((hsi*66+19)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp227;
fp227 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp226;
fp226 = inteval->oo2z[vi] * fp227;
LIBINT2_REALTYPE fp229;
LIBINT2_REALTYPE fp225;
fp225 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+12)*1+lsi)*1], fp226);
target[((hsi*66+18)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp233;
LIBINT2_REALTYPE fp232;
fp232 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp231;
fp231 = inteval->oo2z[vi] * fp232;
LIBINT2_REALTYPE fp234;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+11)*1+lsi)*1], fp231);
target[((hsi*66+17)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PA_z[vi] * src0[((hsi*55+10)*1+lsi)*1];
target[((hsi*66+16)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp239;
fp239 = -5.0000000000000000e-01 * src2[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp240;
fp240 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*45+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2z[vi] * fp238;
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+10)*1+lsi)*1], fp237);
target[((hsi*66+15)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp246;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp244;
fp244 = inteval->oo2z[vi] * fp245;
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp243;
fp243 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+9)*1+lsi)*1], fp244);
target[((hsi*66+14)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp251;
LIBINT2_REALTYPE fp250;
fp250 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp249;
fp249 = inteval->oo2z[vi] * fp250;
LIBINT2_REALTYPE fp252;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+8)*1+lsi)*1], fp249);
target[((hsi*66+13)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp255;
fp255 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp254;
fp254 = inteval->oo2z[vi] * fp255;
LIBINT2_REALTYPE fp257;
LIBINT2_REALTYPE fp253;
fp253 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+7)*1+lsi)*1], fp254);
target[((hsi*66+12)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp258;
fp258 = inteval->PA_z[vi] * src0[((hsi*55+6)*1+lsi)*1];
target[((hsi*66+11)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp262;
fp262 = -5.0000000000000000e-01 * src2[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*45+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp261;
fp261 = fp263 + fp262;
LIBINT2_REALTYPE fp260;
fp260 = inteval->oo2z[vi] * fp261;
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+6)*1+lsi)*1], fp260);
target[((hsi*66+10)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp269;
LIBINT2_REALTYPE fp268;
fp268 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp267;
fp267 = inteval->oo2z[vi] * fp268;
LIBINT2_REALTYPE fp270;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+5)*1+lsi)*1], fp267);
target[((hsi*66+9)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp273;
fp273 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp272;
fp272 = inteval->oo2z[vi] * fp273;
LIBINT2_REALTYPE fp275;
LIBINT2_REALTYPE fp271;
fp271 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+4)*1+lsi)*1], fp272);
target[((hsi*66+8)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp276;
fp276 = inteval->PA_z[vi] * src0[((hsi*55+3)*1+lsi)*1];
target[((hsi*66+7)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp280;
fp280 = -5.0000000000000000e-01 * src2[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp282;
LIBINT2_REALTYPE fp281;
fp281 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*45+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp279;
fp279 = fp281 + fp280;
LIBINT2_REALTYPE fp278;
fp278 = inteval->oo2z[vi] * fp279;
LIBINT2_REALTYPE fp283;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+3)*1+lsi)*1], fp278);
target[((hsi*66+6)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp287;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp285;
fp285 = inteval->oo2z[vi] * fp286;
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp284;
fp284 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*55+2)*1+lsi)*1], fp285);
target[((hsi*66+5)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp289;
fp289 = inteval->PA_z[vi] * src0[((hsi*55+1)*1+lsi)*1];
target[((hsi*66+4)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp293;
fp293 = -5.0000000000000000e-01 * src2[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
LIBINT2_REALTYPE fp294;
fp294 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp292;
fp292 = fp294 + fp293;
LIBINT2_REALTYPE fp291;
fp291 = inteval->oo2z[vi] * fp292;
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp290;
fp290 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+1)*1+lsi)*1], fp291);
target[((hsi*66+3)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp297;
fp297 = inteval->PA_z[vi] * src0[((hsi*55+0)*1+lsi)*1];
target[((hsi*66+2)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp301;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*55+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp299;
fp299 = inteval->oo2z[vi] * fp300;
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp298;
fp298 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*55+0)*1+lsi)*1], fp299);
target[((hsi*66+1)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp305;
fp305 = libint2::fma_plus(9.0000000000000000e+00, src1[((hsi*45+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp304;
fp304 = inteval->oo2z[vi] * fp305;
LIBINT2_REALTYPE fp307;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*55+0)*1+lsi)*1], fp304);
target[((hsi*66+0)*1+lsi)*1] = fp303;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 308 */
}

#ifdef __cplusplus
};
#endif