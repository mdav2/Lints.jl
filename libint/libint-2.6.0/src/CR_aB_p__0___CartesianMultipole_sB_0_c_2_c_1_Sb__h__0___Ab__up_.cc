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
void CR_aB_p__0___CartesianMultipole_sB_0_c_2_c_1_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_y[vi], fp98, fp99);
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_y[vi], fp97, fp98);
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_y[vi], fp100, fp102);
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp106 * fp104;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp1;
target[((hsi*63+62)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_y[vi], fp99, fp92);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_y[vi], fp102, fp93);
LIBINT2_REALTYPE fp121;
fp121 = fp106 * fp95;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp4;
target[((hsi*63+61)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp6);
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_y[vi], fp92, fp87);
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_y[vi], fp93, fp88);
LIBINT2_REALTYPE fp123;
fp123 = fp106 * fp90;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp7;
target[((hsi*63+60)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp9);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp82);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_y[vi], fp88, fp83);
LIBINT2_REALTYPE fp125;
fp125 = fp106 * fp85;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp10;
target[((hsi*63+59)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp12);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp82, fp77);
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_y[vi], fp83, fp78);
LIBINT2_REALTYPE fp127;
fp127 = fp106 * fp80;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp13;
target[((hsi*63+58)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp16);
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_y[vi] * fp78;
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp72 + fp74;
LIBINT2_REALTYPE fp75;
fp75 = fp73 + fp76;
LIBINT2_REALTYPE fp129;
fp129 = fp106 * fp75;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp17;
target[((hsi*63+57)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp107 * fp104;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp4;
target[((hsi*63+56)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp107 * fp95;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp7;
target[((hsi*63+55)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp107 * fp90;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp10;
target[((hsi*63+54)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp107 * fp85;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp13;
target[((hsi*63+53)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = fp107 * fp80;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp17;
target[((hsi*63+52)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp108 * fp104;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp7;
target[((hsi*63+51)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = fp108 * fp95;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp10;
target[((hsi*63+50)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = fp108 * fp90;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp13;
target[((hsi*63+49)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp108 * fp85;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp17;
target[((hsi*63+48)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp109 * fp104;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp10;
target[((hsi*63+47)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp109 * fp95;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp13;
target[((hsi*63+46)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp109 * fp90;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp17;
target[((hsi*63+45)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp110 * fp104;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp13;
target[((hsi*63+44)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp110 * fp95;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp17;
target[((hsi*63+43)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp111 * fp104;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp17;
target[((hsi*63+42)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*18+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src1[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_y[vi], fp64, fp65);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_y[vi], fp63, fp64);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_y[vi], fp66, fp68);
LIBINT2_REALTYPE fp161;
fp161 = fp106 * fp70;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp20;
target[((hsi*63+41)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src2[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp22);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_y[vi], fp65, fp58);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp68, fp59);
LIBINT2_REALTYPE fp163;
fp163 = fp106 * fp61;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp23;
target[((hsi*63+40)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_z[vi], fp28, fp25);
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp53);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_y[vi], fp59, fp54);
LIBINT2_REALTYPE fp165;
fp165 = fp106 * fp56;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp26;
target[((hsi*63+39)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp28);
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_y[vi], fp53, fp48);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_y[vi], fp54, fp49);
LIBINT2_REALTYPE fp167;
fp167 = fp106 * fp51;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp29;
target[((hsi*63+38)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp35, fp31);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp43);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp44);
LIBINT2_REALTYPE fp169;
fp169 = fp106 * fp46;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp32;
target[((hsi*63+37)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp35);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp171;
fp171 = fp106 * fp41;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp36;
target[((hsi*63+36)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp107 * fp70;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp23;
target[((hsi*63+35)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp107 * fp61;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp26;
target[((hsi*63+34)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp107 * fp56;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp29;
target[((hsi*63+33)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp107 * fp51;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp32;
target[((hsi*63+32)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp107 * fp46;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp36;
target[((hsi*63+31)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp108 * fp70;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp26;
target[((hsi*63+30)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp108 * fp61;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp29;
target[((hsi*63+29)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp108 * fp56;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp32;
target[((hsi*63+28)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp108 * fp51;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp36;
target[((hsi*63+27)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp109 * fp70;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp29;
target[((hsi*63+26)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp109 * fp61;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp32;
target[((hsi*63+25)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp109 * fp56;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp36;
target[((hsi*63+24)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp110 * fp70;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp32;
target[((hsi*63+23)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp110 * fp61;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp36;
target[((hsi*63+22)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp111 * fp70;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp36;
target[((hsi*63+21)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp112;
fp112 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp112 * fp104;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp20;
target[((hsi*63+20)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp112 * fp95;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp23;
target[((hsi*63+19)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp112 * fp90;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp26;
target[((hsi*63+18)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp112 * fp85;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp29;
target[((hsi*63+17)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp112 * fp80;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp32;
target[((hsi*63+16)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp112 * fp75;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp36;
target[((hsi*63+15)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp215;
fp215 = fp113 * fp104;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp23;
target[((hsi*63+14)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp113 * fp95;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp26;
target[((hsi*63+13)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp113 * fp90;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp29;
target[((hsi*63+12)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp113 * fp85;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp32;
target[((hsi*63+11)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp113 * fp80;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp36;
target[((hsi*63+10)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*18+11)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp114 * fp104;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp26;
target[((hsi*63+9)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp114 * fp95;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp29;
target[((hsi*63+8)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp114 * fp90;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp32;
target[((hsi*63+7)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp114 * fp85;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp36;
target[((hsi*63+6)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp115 * fp104;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp29;
target[((hsi*63+5)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp115 * fp95;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp32;
target[((hsi*63+4)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp115 * fp90;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp36;
target[((hsi*63+3)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp116 * fp104;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp32;
target[((hsi*63+2)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp116 * fp95;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp36;
target[((hsi*63+1)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp117 * fp104;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp36;
target[((hsi*63+0)*1+lsi)*1] = fp242;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 244 */
}

#ifdef __cplusplus
};
#endif
