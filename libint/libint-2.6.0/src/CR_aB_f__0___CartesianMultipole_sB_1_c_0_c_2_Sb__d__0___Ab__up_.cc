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
void CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp12, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*24+22)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src0[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_x[vi], fp88, fp91);
LIBINT2_REALTYPE fp129;
fp129 = fp89 * fp87;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp3;
target[((hsi*60+59)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp12);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp6);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp89 * fp86;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp8;
target[((hsi*60+58)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp11);
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp13, fp15);
LIBINT2_REALTYPE fp85;
fp85 = 0.0000000000000000e+00 + src1[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp89 * fp85;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp17;
target[((hsi*60+57)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp94;
fp94 = 0.0000000000000000e+00 + src0[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_x[vi], fp91, fp94);
LIBINT2_REALTYPE fp135;
fp135 = fp92 * fp87;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp8;
target[((hsi*60+56)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = fp92 * fp86;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp17;
target[((hsi*60+55)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp97;
fp97 = inteval->BO_x[vi] * fp94;
LIBINT2_REALTYPE fp95;
fp95 = 0.0000000000000000e+00 + src0[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp95 + fp97;
LIBINT2_REALTYPE fp139;
fp139 = fp96 * fp87;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp17;
target[((hsi*60+54)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src2[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src2[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_z[vi], fp31, fp24);
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_z[vi] * fp25;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_z[vi] * fp24;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*24+16)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp19 + fp21;
LIBINT2_REALTYPE fp22;
fp22 = fp20 + fp23;
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + src1[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp89 * fp84;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp22;
target[((hsi*60+53)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_z[vi], fp30, fp31);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp34, fp25);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp89 * fp83;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp27;
target[((hsi*60+52)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->BO_z[vi], fp29, fp30);
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_z[vi], fp32, fp34);
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src1[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp89 * fp82;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp36;
target[((hsi*60+51)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = fp92 * fp84;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp27;
target[((hsi*60+50)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp92 * fp83;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp36;
target[((hsi*60+49)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp96 * fp84;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp36;
target[((hsi*60+48)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp43);
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp44;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src2[((hsi*24+10)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp38 + fp40;
LIBINT2_REALTYPE fp41;
fp41 = fp39 + fp42;
LIBINT2_REALTYPE fp81;
fp81 = 0.0000000000000000e+00 + src1[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp89 * fp81;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp41;
target[((hsi*60+47)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp50);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_z[vi], fp53, fp44);
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp89 * fp80;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp46;
target[((hsi*60+46)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src2[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_z[vi], fp48, fp49);
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->BO_z[vi], fp51, fp53);
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src1[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp89 * fp79;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp55;
target[((hsi*60+45)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = fp92 * fp81;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp46;
target[((hsi*60+44)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp92 * fp80;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp55;
target[((hsi*60+43)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp96 * fp81;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp55;
target[((hsi*60+42)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src2[((hsi*24+3)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src2[((hsi*24+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_z[vi], fp69, fp62);
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp59;
fp59 = inteval->BO_z[vi] * fp62;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*24+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp57 + fp59;
LIBINT2_REALTYPE fp60;
fp60 = fp58 + fp61;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src1[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = fp89 * fp78;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp60;
target[((hsi*60+41)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*24+1)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_z[vi], fp68, fp69);
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(inteval->BO_z[vi], fp72, fp63);
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp89 * fp77;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp65;
target[((hsi*60+40)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*24+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_z[vi], fp67, fp68);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp70, fp72);
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp89 * fp76;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp74;
target[((hsi*60+39)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = fp92 * fp78;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp65;
target[((hsi*60+38)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp92 * fp77;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp74;
target[((hsi*60+37)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp96 * fp78;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp74;
target[((hsi*60+36)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp101;
fp101 = 0.0000000000000000e+00 + src0[((hsi*24+7)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = 0.0000000000000000e+00 + src0[((hsi*24+6)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->BO_x[vi], fp98, fp101);
LIBINT2_REALTYPE fp177;
fp177 = fp99 * fp87;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp22;
target[((hsi*60+35)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp99 * fp86;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp27;
target[((hsi*60+34)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = fp99 * fp85;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp36;
target[((hsi*60+33)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp104;
fp104 = 0.0000000000000000e+00 + src0[((hsi*24+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->BO_x[vi], fp101, fp104);
LIBINT2_REALTYPE fp183;
fp183 = fp102 * fp87;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp27;
target[((hsi*60+32)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp102 * fp86;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp36;
target[((hsi*60+31)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp107;
fp107 = inteval->BO_x[vi] * fp104;
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + src0[((hsi*24+9)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp105 + fp107;
LIBINT2_REALTYPE fp187;
fp187 = fp106 * fp87;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp36;
target[((hsi*60+30)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp99 * fp84;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp41;
target[((hsi*60+29)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp99 * fp83;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp46;
target[((hsi*60+28)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp99 * fp82;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp55;
target[((hsi*60+27)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = fp102 * fp84;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp46;
target[((hsi*60+26)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp102 * fp83;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp55;
target[((hsi*60+25)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp106 * fp84;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp55;
target[((hsi*60+24)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp99 * fp81;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp60;
target[((hsi*60+23)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp99 * fp80;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp65;
target[((hsi*60+22)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = fp99 * fp79;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp74;
target[((hsi*60+21)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = fp102 * fp81;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp65;
target[((hsi*60+20)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = fp102 * fp80;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp74;
target[((hsi*60+19)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp106 * fp81;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp74;
target[((hsi*60+18)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + src0[((hsi*24+13)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src0[((hsi*24+12)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_x[vi], fp108, fp111);
LIBINT2_REALTYPE fp213;
fp213 = fp109 * fp87;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp41;
target[((hsi*60+17)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp109 * fp86;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp46;
target[((hsi*60+16)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp109 * fp85;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp55;
target[((hsi*60+15)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*24+14)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp111, fp114);
LIBINT2_REALTYPE fp219;
fp219 = fp112 * fp87;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp46;
target[((hsi*60+14)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp112 * fp86;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp55;
target[((hsi*60+13)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp117;
fp117 = inteval->BO_x[vi] * fp114;
LIBINT2_REALTYPE fp115;
fp115 = 0.0000000000000000e+00 + src0[((hsi*24+15)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = fp115 + fp117;
LIBINT2_REALTYPE fp223;
fp223 = fp116 * fp87;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp55;
target[((hsi*60+12)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp109 * fp84;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp60;
target[((hsi*60+11)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp109 * fp83;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp65;
target[((hsi*60+10)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp109 * fp82;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp74;
target[((hsi*60+9)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp112 * fp84;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp65;
target[((hsi*60+8)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp112 * fp83;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp74;
target[((hsi*60+7)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp116 * fp84;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp74;
target[((hsi*60+6)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*24+19)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src0[((hsi*24+18)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_x[vi], fp118, fp121);
LIBINT2_REALTYPE fp237;
fp237 = fp119 * fp87;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp60;
target[((hsi*60+5)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp119 * fp86;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp65;
target[((hsi*60+4)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp119 * fp85;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp74;
target[((hsi*60+3)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*24+20)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_x[vi], fp121, fp124);
LIBINT2_REALTYPE fp243;
fp243 = fp122 * fp87;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp65;
target[((hsi*60+2)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp122 * fp86;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp74;
target[((hsi*60+1)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp127;
fp127 = inteval->BO_x[vi] * fp124;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*24+21)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp125 + fp127;
LIBINT2_REALTYPE fp247;
fp247 = fp126 * fp87;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp74;
target[((hsi*60+0)*1+lsi)*1] = fp246;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 248 */
}

#ifdef __cplusplus
};
#endif
