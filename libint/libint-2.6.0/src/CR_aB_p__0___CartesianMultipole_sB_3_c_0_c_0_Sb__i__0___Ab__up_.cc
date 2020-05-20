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
void CR_aB_p__0___CartesianMultipole_sB_3_c_0_c_0_Sb__i__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_x[vi], fp42, fp49);
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src0[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->BO_x[vi], fp35, fp42);
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp36, fp43);
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_x[vi], fp28, fp35);
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_x[vi], fp29, fp36);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp31, fp38);
LIBINT2_REALTYPE fp145;
fp145 = fp33 * fp27;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp0;
target[((hsi*84+83)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp33 * fp26;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp1;
target[((hsi*84+82)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = fp33 * fp25;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp2;
target[((hsi*84+81)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp33 * fp24;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp3;
target[((hsi*84+80)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp33 * fp23;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp4;
target[((hsi*84+79)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp33 * fp22;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp5;
target[((hsi*84+78)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = fp33 * fp21;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp6;
target[((hsi*84+77)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp56);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp50);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp45);
LIBINT2_REALTYPE fp159;
fp159 = fp40 * fp27;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp1;
target[((hsi*84+76)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp40 * fp26;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp2;
target[((hsi*84+75)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp40 * fp25;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp3;
target[((hsi*84+74)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp40 * fp24;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp4;
target[((hsi*84+73)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = fp40 * fp23;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp5;
target[((hsi*84+72)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp40 * fp22;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp6;
target[((hsi*84+71)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->BO_x[vi], fp56, fp63);
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_x[vi], fp50, fp57);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp52);
LIBINT2_REALTYPE fp171;
fp171 = fp47 * fp27;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp2;
target[((hsi*84+70)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp47 * fp26;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp3;
target[((hsi*84+69)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = fp47 * fp25;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp4;
target[((hsi*84+68)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = fp47 * fp24;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp5;
target[((hsi*84+67)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = fp47 * fp23;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp6;
target[((hsi*84+66)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp70);
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp57, fp64);
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp59);
LIBINT2_REALTYPE fp181;
fp181 = fp54 * fp27;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp3;
target[((hsi*84+65)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = fp54 * fp26;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp4;
target[((hsi*84+64)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = fp54 * fp25;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp5;
target[((hsi*84+63)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = fp54 * fp24;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp6;
target[((hsi*84+62)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp73);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp71);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp66);
LIBINT2_REALTYPE fp189;
fp189 = fp61 * fp27;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp4;
target[((hsi*84+61)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = fp61 * fp26;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp5;
target[((hsi*84+60)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = fp61 * fp25;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp6;
target[((hsi*84+59)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp73, fp74);
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp76);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp80);
LIBINT2_REALTYPE fp195;
fp195 = fp68 * fp27;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp5;
target[((hsi*84+58)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = fp68 * fp26;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp6;
target[((hsi*84+57)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->BO_x[vi] * fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp75 + fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp78 + fp83;
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp199;
fp199 = fp84 * fp27;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp6;
target[((hsi*84+56)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp33 * fp20;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp7;
target[((hsi*84+55)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp33 * fp19;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp8;
target[((hsi*84+54)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src1[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp33 * fp18;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp9;
target[((hsi*84+53)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp33 * fp17;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp10;
target[((hsi*84+52)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp33 * fp16;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp11;
target[((hsi*84+51)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp33 * fp15;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp12;
target[((hsi*84+50)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = fp33 * fp14;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp13;
target[((hsi*84+49)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp40 * fp20;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp8;
target[((hsi*84+48)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp40 * fp19;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp9;
target[((hsi*84+47)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp219;
fp219 = fp40 * fp18;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp10;
target[((hsi*84+46)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp40 * fp17;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp11;
target[((hsi*84+45)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp40 * fp16;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp12;
target[((hsi*84+44)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp40 * fp15;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp13;
target[((hsi*84+43)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp47 * fp20;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp9;
target[((hsi*84+42)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp229;
fp229 = fp47 * fp19;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp10;
target[((hsi*84+41)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp231;
fp231 = fp47 * fp18;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp11;
target[((hsi*84+40)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp233;
fp233 = fp47 * fp17;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp12;
target[((hsi*84+39)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp47 * fp16;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp13;
target[((hsi*84+38)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp54 * fp20;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp10;
target[((hsi*84+37)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp54 * fp19;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp11;
target[((hsi*84+36)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp54 * fp18;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp12;
target[((hsi*84+35)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp54 * fp17;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp13;
target[((hsi*84+34)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp61 * fp20;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp11;
target[((hsi*84+33)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp61 * fp19;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp12;
target[((hsi*84+32)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp61 * fp18;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp13;
target[((hsi*84+31)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp68 * fp20;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp12;
target[((hsi*84+30)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp68 * fp19;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp13;
target[((hsi*84+29)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp84 * fp20;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp13;
target[((hsi*84+28)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src0[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src0[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->BO_x[vi], fp100, fp107);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_x[vi], fp93, fp100);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->BO_x[vi], fp94, fp101);
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src0[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp87;
fp87 = libint2::fma_plus(inteval->BO_x[vi], fp86, fp93);
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp89;
fp89 = libint2::fma_plus(inteval->BO_x[vi], fp87, fp94);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp96);
LIBINT2_REALTYPE fp257;
fp257 = fp91 * fp27;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp7;
target[((hsi*84+27)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp91 * fp26;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp8;
target[((hsi*84+26)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp91 * fp25;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp9;
target[((hsi*84+25)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp263;
fp263 = fp91 * fp24;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp10;
target[((hsi*84+24)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp91 * fp23;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp11;
target[((hsi*84+23)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp91 * fp22;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp12;
target[((hsi*84+22)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp91 * fp21;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp13;
target[((hsi*84+21)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp114;
fp114 = 0.0000000000000000e+00 + src0[((hsi*20+14)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_x[vi], fp107, fp114);
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_x[vi], fp101, fp108);
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_x[vi], fp96, fp103);
LIBINT2_REALTYPE fp271;
fp271 = fp98 * fp27;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp8;
target[((hsi*84+20)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp98 * fp26;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp9;
target[((hsi*84+19)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp98 * fp25;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp10;
target[((hsi*84+18)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp98 * fp24;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp11;
target[((hsi*84+17)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp98 * fp23;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp12;
target[((hsi*84+16)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp98 * fp22;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp13;
target[((hsi*84+15)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*20+15)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_x[vi], fp114, fp121);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_x[vi], fp108, fp115);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_x[vi], fp103, fp110);
LIBINT2_REALTYPE fp283;
fp283 = fp105 * fp27;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp9;
target[((hsi*84+14)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp105 * fp26;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp10;
target[((hsi*84+13)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp105 * fp25;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp11;
target[((hsi*84+12)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp105 * fp24;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp12;
target[((hsi*84+11)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp105 * fp23;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp13;
target[((hsi*84+10)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src0[((hsi*20+16)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->BO_x[vi], fp121, fp128);
LIBINT2_REALTYPE fp118;
LIBINT2_REALTYPE fp117;
fp117 = libint2::fma_plus(inteval->BO_x[vi], fp115, fp122);
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_x[vi], fp110, fp117);
LIBINT2_REALTYPE fp293;
fp293 = fp112 * fp27;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp10;
target[((hsi*84+9)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp112 * fp26;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp11;
target[((hsi*84+8)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp112 * fp25;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp12;
target[((hsi*84+7)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp112 * fp24;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp13;
target[((hsi*84+6)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src0[((hsi*20+17)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->BO_x[vi], fp128, fp131);
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_x[vi], fp122, fp129);
LIBINT2_REALTYPE fp120;
LIBINT2_REALTYPE fp119;
fp119 = libint2::fma_plus(inteval->BO_x[vi], fp117, fp124);
LIBINT2_REALTYPE fp301;
fp301 = fp119 * fp27;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp11;
target[((hsi*84+5)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp119 * fp26;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp12;
target[((hsi*84+4)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp119 * fp25;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp13;
target[((hsi*84+3)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src0[((hsi*20+18)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_x[vi], fp131, fp132);
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_x[vi], fp129, fp134);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->BO_x[vi], fp124, fp138);
LIBINT2_REALTYPE fp307;
fp307 = fp126 * fp27;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp12;
target[((hsi*84+2)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp126 * fp26;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp13;
target[((hsi*84+1)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp143;
fp143 = inteval->BO_x[vi] * fp138;
LIBINT2_REALTYPE fp141;
fp141 = inteval->BO_x[vi] * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->BO_x[vi] * fp132;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*20+19)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp133 + fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp136 + fp141;
LIBINT2_REALTYPE fp142;
fp142 = fp140 + fp143;
LIBINT2_REALTYPE fp311;
fp311 = fp142 * fp27;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp13;
target[((hsi*84+0)*1+lsi)*1] = fp310;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 312 */
}

#ifdef __cplusplus
};
#endif
