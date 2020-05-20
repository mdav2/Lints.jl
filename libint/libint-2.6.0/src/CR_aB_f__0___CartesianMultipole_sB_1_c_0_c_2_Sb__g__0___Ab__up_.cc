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
void CR_aB_f__0___CartesianMultipole_sB_1_c_0_c_2_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*32+29)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*32+28)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp5);
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*32+30)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp3;
fp3 = fp1 + fp4;
LIBINT2_REALTYPE fp135;
fp135 = 0.0000000000000000e+00 + src1[((hsi*32+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = 0.0000000000000000e+00 + src0[((hsi*32+1)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*32+0)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->BO_x[vi], fp136, fp139);
LIBINT2_REALTYPE fp201;
fp201 = fp137 * fp135;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp3;
target[((hsi*150+149)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*32+27)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp15, fp10);
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp6);
LIBINT2_REALTYPE fp134;
fp134 = 0.0000000000000000e+00 + src1[((hsi*32+1)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = fp137 * fp134;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp8;
target[((hsi*150+148)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*32+26)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp15);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp11);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*32+2)*1+lsi)*1];
LIBINT2_REALTYPE fp205;
fp205 = fp137 * fp133;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp13;
target[((hsi*150+147)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*32+25)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->BO_z[vi], fp21, fp22);
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp25, fp16);
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + src1[((hsi*32+3)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp137 * fp132;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp18;
target[((hsi*150+146)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*32+24)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp21);
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_z[vi], fp23, fp25);
LIBINT2_REALTYPE fp131;
fp131 = 0.0000000000000000e+00 + src1[((hsi*32+4)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp137 * fp131;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp27;
target[((hsi*150+145)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src0[((hsi*32+2)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->BO_x[vi], fp139, fp142);
LIBINT2_REALTYPE fp211;
fp211 = fp140 * fp135;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp8;
target[((hsi*150+144)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp140 * fp134;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp13;
target[((hsi*150+143)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp140 * fp133;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp18;
target[((hsi*150+142)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp217;
fp217 = fp140 * fp132;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp27;
target[((hsi*150+141)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*32+3)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp143;
fp143 = libint2::fma_plus(inteval->BO_x[vi], fp142, fp145);
LIBINT2_REALTYPE fp219;
fp219 = fp143 * fp135;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp13;
target[((hsi*150+140)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp221;
fp221 = fp143 * fp134;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp18;
target[((hsi*150+139)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp143 * fp133;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp27;
target[((hsi*150+138)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*32+4)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->BO_x[vi], fp145, fp148);
LIBINT2_REALTYPE fp225;
fp225 = fp146 * fp135;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp18;
target[((hsi*150+137)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp146 * fp134;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp27;
target[((hsi*150+136)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp151;
fp151 = inteval->BO_x[vi] * fp148;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*32+5)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = fp149 + fp151;
LIBINT2_REALTYPE fp229;
fp229 = fp150 * fp135;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp27;
target[((hsi*150+135)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src2[((hsi*32+21)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src2[((hsi*32+20)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_z[vi], fp39, fp34);
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_z[vi] * fp35;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_z[vi] * fp34;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src2[((hsi*32+22)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*32+8)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp137 * fp130;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp32;
target[((hsi*150+134)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*32+19)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_z[vi], fp44, fp39);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_z[vi], fp40, fp35);
LIBINT2_REALTYPE fp129;
fp129 = 0.0000000000000000e+00 + src1[((hsi*32+9)*1+lsi)*1];
LIBINT2_REALTYPE fp233;
fp233 = fp137 * fp129;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp37;
target[((hsi*150+133)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src2[((hsi*32+18)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_z[vi], fp51, fp44);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_z[vi], fp45, fp40);
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src1[((hsi*32+10)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp137 * fp128;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp42;
target[((hsi*150+132)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*32+17)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp50, fp51);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_z[vi], fp54, fp45);
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*32+11)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = fp137 * fp127;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp47;
target[((hsi*150+131)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src2[((hsi*32+16)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_z[vi], fp49, fp50);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_z[vi], fp52, fp54);
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src1[((hsi*32+12)*1+lsi)*1];
LIBINT2_REALTYPE fp239;
fp239 = fp137 * fp126;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp56;
target[((hsi*150+130)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp241;
fp241 = fp140 * fp130;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp37;
target[((hsi*150+129)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp243;
fp243 = fp140 * fp129;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp42;
target[((hsi*150+128)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp245;
fp245 = fp140 * fp128;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp47;
target[((hsi*150+127)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp140 * fp127;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp56;
target[((hsi*150+126)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp143 * fp130;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp42;
target[((hsi*150+125)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp143 * fp129;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp47;
target[((hsi*150+124)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp253;
fp253 = fp143 * fp128;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp56;
target[((hsi*150+123)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp146 * fp130;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp47;
target[((hsi*150+122)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp146 * fp129;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp56;
target[((hsi*150+121)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp259;
fp259 = fp150 * fp130;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp56;
target[((hsi*150+120)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*32+13)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src2[((hsi*32+12)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp68, fp63);
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp64;
LIBINT2_REALTYPE fp60;
fp60 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src2[((hsi*32+14)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp58 + fp60;
LIBINT2_REALTYPE fp61;
fp61 = fp59 + fp62;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src1[((hsi*32+16)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = fp137 * fp125;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp61;
target[((hsi*150+119)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src2[((hsi*32+11)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_z[vi], fp73, fp68);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_z[vi], fp69, fp64);
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src1[((hsi*32+17)*1+lsi)*1];
LIBINT2_REALTYPE fp263;
fp263 = fp137 * fp124;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp66;
target[((hsi*150+118)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src2[((hsi*32+10)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_z[vi], fp80, fp73);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_z[vi], fp74, fp69);
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src1[((hsi*32+18)*1+lsi)*1];
LIBINT2_REALTYPE fp265;
fp265 = fp137 * fp123;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp71;
target[((hsi*150+117)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src2[((hsi*32+9)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_z[vi], fp79, fp80);
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_z[vi], fp83, fp74);
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src1[((hsi*32+19)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp137 * fp122;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp76;
target[((hsi*150+116)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src2[((hsi*32+8)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_z[vi], fp78, fp79);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_z[vi], fp81, fp83);
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src1[((hsi*32+20)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = fp137 * fp121;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp85;
target[((hsi*150+115)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp140 * fp125;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp66;
target[((hsi*150+114)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp140 * fp124;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp71;
target[((hsi*150+113)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp140 * fp123;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp76;
target[((hsi*150+112)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp140 * fp122;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp85;
target[((hsi*150+111)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp143 * fp125;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp71;
target[((hsi*150+110)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp143 * fp124;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp76;
target[((hsi*150+109)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp143 * fp123;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp85;
target[((hsi*150+108)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp146 * fp125;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp76;
target[((hsi*150+107)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp146 * fp124;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp85;
target[((hsi*150+106)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp150 * fp125;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp85;
target[((hsi*150+105)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src2[((hsi*32+5)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src2[((hsi*32+4)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_z[vi], fp97, fp92);
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_z[vi] * fp93;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_z[vi] * fp92;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src2[((hsi*32+6)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp87 + fp89;
LIBINT2_REALTYPE fp90;
fp90 = fp88 + fp91;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src1[((hsi*32+24)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp137 * fp120;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp90;
target[((hsi*150+104)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp102;
fp102 = 0.0000000000000000e+00 + src2[((hsi*32+3)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_z[vi], fp102, fp97);
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_z[vi], fp98, fp93);
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src1[((hsi*32+25)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = fp137 * fp119;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp95;
target[((hsi*150+103)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp109;
fp109 = 0.0000000000000000e+00 + src2[((hsi*32+2)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(inteval->BO_z[vi], fp109, fp102);
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->BO_z[vi], fp103, fp98);
LIBINT2_REALTYPE fp118;
fp118 = 0.0000000000000000e+00 + src1[((hsi*32+26)*1+lsi)*1];
LIBINT2_REALTYPE fp295;
fp295 = fp137 * fp118;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp100;
target[((hsi*150+102)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src2[((hsi*32+1)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->BO_z[vi], fp108, fp109);
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(inteval->BO_z[vi], fp112, fp103);
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*32+27)*1+lsi)*1];
LIBINT2_REALTYPE fp297;
fp297 = fp137 * fp117;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp105;
target[((hsi*150+101)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src2[((hsi*32+0)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->BO_z[vi], fp107, fp108);
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_z[vi], fp110, fp112);
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*32+28)*1+lsi)*1];
LIBINT2_REALTYPE fp299;
fp299 = fp137 * fp116;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp114;
target[((hsi*150+100)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp140 * fp120;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp95;
target[((hsi*150+99)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp140 * fp119;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp100;
target[((hsi*150+98)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp140 * fp118;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp105;
target[((hsi*150+97)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp140 * fp117;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp114;
target[((hsi*150+96)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp143 * fp120;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp100;
target[((hsi*150+95)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp143 * fp119;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp105;
target[((hsi*150+94)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp313;
fp313 = fp143 * fp118;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp114;
target[((hsi*150+93)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp146 * fp120;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp105;
target[((hsi*150+92)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp146 * fp119;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp114;
target[((hsi*150+91)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp319;
fp319 = fp150 * fp120;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp114;
target[((hsi*150+90)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*32+9)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*32+8)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->BO_x[vi], fp152, fp155);
LIBINT2_REALTYPE fp321;
fp321 = fp153 * fp135;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp32;
target[((hsi*150+89)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp323;
fp323 = fp153 * fp134;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp37;
target[((hsi*150+88)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp153 * fp133;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp42;
target[((hsi*150+87)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp153 * fp132;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp47;
target[((hsi*150+86)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp153 * fp131;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp56;
target[((hsi*150+85)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*32+10)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->BO_x[vi], fp155, fp158);
LIBINT2_REALTYPE fp331;
fp331 = fp156 * fp135;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp37;
target[((hsi*150+84)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp156 * fp134;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp42;
target[((hsi*150+83)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp156 * fp133;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp47;
target[((hsi*150+82)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp156 * fp132;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp56;
target[((hsi*150+81)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src0[((hsi*32+11)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->BO_x[vi], fp158, fp161);
LIBINT2_REALTYPE fp339;
fp339 = fp159 * fp135;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp42;
target[((hsi*150+80)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp159 * fp134;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp47;
target[((hsi*150+79)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp159 * fp133;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp56;
target[((hsi*150+78)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp164;
fp164 = 0.0000000000000000e+00 + src0[((hsi*32+12)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->BO_x[vi], fp161, fp164);
LIBINT2_REALTYPE fp345;
fp345 = fp162 * fp135;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp47;
target[((hsi*150+77)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp162 * fp134;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp56;
target[((hsi*150+76)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp167;
fp167 = inteval->BO_x[vi] * fp164;
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + src0[((hsi*32+13)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = fp165 + fp167;
LIBINT2_REALTYPE fp349;
fp349 = fp166 * fp135;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp56;
target[((hsi*150+75)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp153 * fp130;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp61;
target[((hsi*150+74)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp153 * fp129;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp66;
target[((hsi*150+73)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp153 * fp128;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp71;
target[((hsi*150+72)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp153 * fp127;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp76;
target[((hsi*150+71)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp153 * fp126;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp85;
target[((hsi*150+70)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp361;
fp361 = fp156 * fp130;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp66;
target[((hsi*150+69)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp156 * fp129;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp71;
target[((hsi*150+68)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp156 * fp128;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp76;
target[((hsi*150+67)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp367;
fp367 = fp156 * fp127;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp85;
target[((hsi*150+66)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp159 * fp130;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp71;
target[((hsi*150+65)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp371;
fp371 = fp159 * fp129;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp76;
target[((hsi*150+64)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp159 * fp128;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp85;
target[((hsi*150+63)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp162 * fp130;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp76;
target[((hsi*150+62)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp162 * fp129;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp85;
target[((hsi*150+61)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp166 * fp130;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp85;
target[((hsi*150+60)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp153 * fp125;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp90;
target[((hsi*150+59)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp153 * fp124;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp95;
target[((hsi*150+58)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp153 * fp123;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp100;
target[((hsi*150+57)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp153 * fp122;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp105;
target[((hsi*150+56)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp153 * fp121;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp114;
target[((hsi*150+55)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp156 * fp125;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp95;
target[((hsi*150+54)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp156 * fp124;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp100;
target[((hsi*150+53)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp156 * fp123;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp105;
target[((hsi*150+52)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp397;
fp397 = fp156 * fp122;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp114;
target[((hsi*150+51)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp159 * fp125;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp100;
target[((hsi*150+50)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp159 * fp124;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp105;
target[((hsi*150+49)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp403;
fp403 = fp159 * fp123;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp114;
target[((hsi*150+48)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp162 * fp125;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp105;
target[((hsi*150+47)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp407;
fp407 = fp162 * fp124;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp114;
target[((hsi*150+46)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp166 * fp125;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp114;
target[((hsi*150+45)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + src0[((hsi*32+17)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = 0.0000000000000000e+00 + src0[((hsi*32+16)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->BO_x[vi], fp168, fp171);
LIBINT2_REALTYPE fp411;
fp411 = fp169 * fp135;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp61;
target[((hsi*150+44)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp169 * fp134;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp66;
target[((hsi*150+43)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp169 * fp133;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp71;
target[((hsi*150+42)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp169 * fp132;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp76;
target[((hsi*150+41)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp169 * fp131;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp85;
target[((hsi*150+40)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp174;
fp174 = 0.0000000000000000e+00 + src0[((hsi*32+18)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
LIBINT2_REALTYPE fp172;
fp172 = libint2::fma_plus(inteval->BO_x[vi], fp171, fp174);
LIBINT2_REALTYPE fp421;
fp421 = fp172 * fp135;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp66;
target[((hsi*150+39)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp172 * fp134;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp71;
target[((hsi*150+38)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp172 * fp133;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp76;
target[((hsi*150+37)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp427;
fp427 = fp172 * fp132;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp85;
target[((hsi*150+36)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*32+19)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_plus(inteval->BO_x[vi], fp174, fp177);
LIBINT2_REALTYPE fp429;
fp429 = fp175 * fp135;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp71;
target[((hsi*150+35)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp431;
fp431 = fp175 * fp134;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp76;
target[((hsi*150+34)*1+lsi)*1] = fp430;
LIBINT2_REALTYPE fp433;
fp433 = fp175 * fp133;
LIBINT2_REALTYPE fp432;
fp432 = fp433 * fp85;
target[((hsi*150+33)*1+lsi)*1] = fp432;
LIBINT2_REALTYPE fp180;
fp180 = 0.0000000000000000e+00 + src0[((hsi*32+20)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->BO_x[vi], fp177, fp180);
LIBINT2_REALTYPE fp435;
fp435 = fp178 * fp135;
LIBINT2_REALTYPE fp434;
fp434 = fp435 * fp76;
target[((hsi*150+32)*1+lsi)*1] = fp434;
LIBINT2_REALTYPE fp437;
fp437 = fp178 * fp134;
LIBINT2_REALTYPE fp436;
fp436 = fp437 * fp85;
target[((hsi*150+31)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp183;
fp183 = inteval->BO_x[vi] * fp180;
LIBINT2_REALTYPE fp181;
fp181 = 0.0000000000000000e+00 + src0[((hsi*32+21)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = fp181 + fp183;
LIBINT2_REALTYPE fp439;
fp439 = fp182 * fp135;
LIBINT2_REALTYPE fp438;
fp438 = fp439 * fp85;
target[((hsi*150+30)*1+lsi)*1] = fp438;
LIBINT2_REALTYPE fp441;
fp441 = fp169 * fp130;
LIBINT2_REALTYPE fp440;
fp440 = fp441 * fp90;
target[((hsi*150+29)*1+lsi)*1] = fp440;
LIBINT2_REALTYPE fp443;
fp443 = fp169 * fp129;
LIBINT2_REALTYPE fp442;
fp442 = fp443 * fp95;
target[((hsi*150+28)*1+lsi)*1] = fp442;
LIBINT2_REALTYPE fp445;
fp445 = fp169 * fp128;
LIBINT2_REALTYPE fp444;
fp444 = fp445 * fp100;
target[((hsi*150+27)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp447;
fp447 = fp169 * fp127;
LIBINT2_REALTYPE fp446;
fp446 = fp447 * fp105;
target[((hsi*150+26)*1+lsi)*1] = fp446;
LIBINT2_REALTYPE fp449;
fp449 = fp169 * fp126;
LIBINT2_REALTYPE fp448;
fp448 = fp449 * fp114;
target[((hsi*150+25)*1+lsi)*1] = fp448;
LIBINT2_REALTYPE fp451;
fp451 = fp172 * fp130;
LIBINT2_REALTYPE fp450;
fp450 = fp451 * fp95;
target[((hsi*150+24)*1+lsi)*1] = fp450;
LIBINT2_REALTYPE fp453;
fp453 = fp172 * fp129;
LIBINT2_REALTYPE fp452;
fp452 = fp453 * fp100;
target[((hsi*150+23)*1+lsi)*1] = fp452;
LIBINT2_REALTYPE fp455;
fp455 = fp172 * fp128;
LIBINT2_REALTYPE fp454;
fp454 = fp455 * fp105;
target[((hsi*150+22)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp457;
fp457 = fp172 * fp127;
LIBINT2_REALTYPE fp456;
fp456 = fp457 * fp114;
target[((hsi*150+21)*1+lsi)*1] = fp456;
LIBINT2_REALTYPE fp459;
fp459 = fp175 * fp130;
LIBINT2_REALTYPE fp458;
fp458 = fp459 * fp100;
target[((hsi*150+20)*1+lsi)*1] = fp458;
LIBINT2_REALTYPE fp461;
fp461 = fp175 * fp129;
LIBINT2_REALTYPE fp460;
fp460 = fp461 * fp105;
target[((hsi*150+19)*1+lsi)*1] = fp460;
LIBINT2_REALTYPE fp463;
fp463 = fp175 * fp128;
LIBINT2_REALTYPE fp462;
fp462 = fp463 * fp114;
target[((hsi*150+18)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp465;
fp465 = fp178 * fp130;
LIBINT2_REALTYPE fp464;
fp464 = fp465 * fp105;
target[((hsi*150+17)*1+lsi)*1] = fp464;
LIBINT2_REALTYPE fp467;
fp467 = fp178 * fp129;
LIBINT2_REALTYPE fp466;
fp466 = fp467 * fp114;
target[((hsi*150+16)*1+lsi)*1] = fp466;
LIBINT2_REALTYPE fp469;
fp469 = fp182 * fp130;
LIBINT2_REALTYPE fp468;
fp468 = fp469 * fp114;
target[((hsi*150+15)*1+lsi)*1] = fp468;
LIBINT2_REALTYPE fp187;
fp187 = 0.0000000000000000e+00 + src0[((hsi*32+25)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = 0.0000000000000000e+00 + src0[((hsi*32+24)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
LIBINT2_REALTYPE fp185;
fp185 = libint2::fma_plus(inteval->BO_x[vi], fp184, fp187);
LIBINT2_REALTYPE fp471;
fp471 = fp185 * fp135;
LIBINT2_REALTYPE fp470;
fp470 = fp471 * fp90;
target[((hsi*150+14)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp473;
fp473 = fp185 * fp134;
LIBINT2_REALTYPE fp472;
fp472 = fp473 * fp95;
target[((hsi*150+13)*1+lsi)*1] = fp472;
LIBINT2_REALTYPE fp475;
fp475 = fp185 * fp133;
LIBINT2_REALTYPE fp474;
fp474 = fp475 * fp100;
target[((hsi*150+12)*1+lsi)*1] = fp474;
LIBINT2_REALTYPE fp477;
fp477 = fp185 * fp132;
LIBINT2_REALTYPE fp476;
fp476 = fp477 * fp105;
target[((hsi*150+11)*1+lsi)*1] = fp476;
LIBINT2_REALTYPE fp479;
fp479 = fp185 * fp131;
LIBINT2_REALTYPE fp478;
fp478 = fp479 * fp114;
target[((hsi*150+10)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp190;
fp190 = 0.0000000000000000e+00 + src0[((hsi*32+26)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
LIBINT2_REALTYPE fp188;
fp188 = libint2::fma_plus(inteval->BO_x[vi], fp187, fp190);
LIBINT2_REALTYPE fp481;
fp481 = fp188 * fp135;
LIBINT2_REALTYPE fp480;
fp480 = fp481 * fp95;
target[((hsi*150+9)*1+lsi)*1] = fp480;
LIBINT2_REALTYPE fp483;
fp483 = fp188 * fp134;
LIBINT2_REALTYPE fp482;
fp482 = fp483 * fp100;
target[((hsi*150+8)*1+lsi)*1] = fp482;
LIBINT2_REALTYPE fp485;
fp485 = fp188 * fp133;
LIBINT2_REALTYPE fp484;
fp484 = fp485 * fp105;
target[((hsi*150+7)*1+lsi)*1] = fp484;
LIBINT2_REALTYPE fp487;
fp487 = fp188 * fp132;
LIBINT2_REALTYPE fp486;
fp486 = fp487 * fp114;
target[((hsi*150+6)*1+lsi)*1] = fp486;
LIBINT2_REALTYPE fp193;
fp193 = 0.0000000000000000e+00 + src0[((hsi*32+27)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp191;
fp191 = libint2::fma_plus(inteval->BO_x[vi], fp190, fp193);
LIBINT2_REALTYPE fp489;
fp489 = fp191 * fp135;
LIBINT2_REALTYPE fp488;
fp488 = fp489 * fp100;
target[((hsi*150+5)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp491;
fp491 = fp191 * fp134;
LIBINT2_REALTYPE fp490;
fp490 = fp491 * fp105;
target[((hsi*150+4)*1+lsi)*1] = fp490;
LIBINT2_REALTYPE fp493;
fp493 = fp191 * fp133;
LIBINT2_REALTYPE fp492;
fp492 = fp493 * fp114;
target[((hsi*150+3)*1+lsi)*1] = fp492;
LIBINT2_REALTYPE fp196;
fp196 = 0.0000000000000000e+00 + src0[((hsi*32+28)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->BO_x[vi], fp193, fp196);
LIBINT2_REALTYPE fp495;
fp495 = fp194 * fp135;
LIBINT2_REALTYPE fp494;
fp494 = fp495 * fp105;
target[((hsi*150+2)*1+lsi)*1] = fp494;
LIBINT2_REALTYPE fp497;
fp497 = fp194 * fp134;
LIBINT2_REALTYPE fp496;
fp496 = fp497 * fp114;
target[((hsi*150+1)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp199;
fp199 = inteval->BO_x[vi] * fp196;
LIBINT2_REALTYPE fp197;
fp197 = 0.0000000000000000e+00 + src0[((hsi*32+29)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = fp197 + fp199;
LIBINT2_REALTYPE fp499;
fp499 = fp198 * fp135;
LIBINT2_REALTYPE fp498;
fp498 = fp499 * fp114;
target[((hsi*150+0)*1+lsi)*1] = fp498;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 500 */
}

#ifdef __cplusplus
};
#endif
