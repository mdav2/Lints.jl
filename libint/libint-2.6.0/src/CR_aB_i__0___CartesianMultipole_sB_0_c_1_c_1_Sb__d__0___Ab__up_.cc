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
void CR_aB_i__0___CartesianMultipole_sB_0_c_1_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*35+33)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src1[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src1[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->BO_y[vi], fp136, fp137);
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = fp140 * fp138;
LIBINT2_REALTYPE fp161;
fp161 = fp162 * fp1;
target[((hsi*168+167)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp3);
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src1[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_y[vi], fp137, fp133);
LIBINT2_REALTYPE fp164;
fp164 = fp140 * fp134;
LIBINT2_REALTYPE fp163;
fp163 = fp164 * fp4;
target[((hsi*168+166)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp132;
fp132 = inteval->BO_y[vi] * fp133;
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src1[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp130 + fp132;
LIBINT2_REALTYPE fp166;
fp166 = fp140 * fp131;
LIBINT2_REALTYPE fp165;
fp165 = fp166 * fp8;
target[((hsi*168+165)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp141;
fp141 = 0.0000000000000000e+00 + src0[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp141 * fp138;
LIBINT2_REALTYPE fp167;
fp167 = fp168 * fp4;
target[((hsi*168+164)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp170;
fp170 = fp141 * fp134;
LIBINT2_REALTYPE fp169;
fp169 = fp170 * fp8;
target[((hsi*168+163)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp142;
fp142 = 0.0000000000000000e+00 + src0[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = fp142 * fp138;
LIBINT2_REALTYPE fp171;
fp171 = fp172 * fp8;
target[((hsi*168+162)*1+lsi)*1] = fp171;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*35+27)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src1[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src1[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->BO_y[vi], fp126, fp127);
LIBINT2_REALTYPE fp174;
fp174 = fp140 * fp128;
LIBINT2_REALTYPE fp173;
fp173 = fp174 * fp11;
target[((hsi*168+161)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp13);
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src1[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_y[vi], fp127, fp123);
LIBINT2_REALTYPE fp176;
fp176 = fp140 * fp124;
LIBINT2_REALTYPE fp175;
fp175 = fp176 * fp14;
target[((hsi*168+160)*1+lsi)*1] = fp175;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp17);
LIBINT2_REALTYPE fp122;
fp122 = inteval->BO_y[vi] * fp123;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src1[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp120 + fp122;
LIBINT2_REALTYPE fp178;
fp178 = fp140 * fp121;
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp18;
target[((hsi*168+159)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp180;
fp180 = fp141 * fp128;
LIBINT2_REALTYPE fp179;
fp179 = fp180 * fp14;
target[((hsi*168+158)*1+lsi)*1] = fp179;
LIBINT2_REALTYPE fp182;
fp182 = fp141 * fp124;
LIBINT2_REALTYPE fp181;
fp181 = fp182 * fp18;
target[((hsi*168+157)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp184;
fp184 = fp142 * fp128;
LIBINT2_REALTYPE fp183;
fp183 = fp184 * fp18;
target[((hsi*168+156)*1+lsi)*1] = fp183;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_y[vi], fp116, fp117);
LIBINT2_REALTYPE fp186;
fp186 = fp140 * fp118;
LIBINT2_REALTYPE fp185;
fp185 = fp186 * fp21;
target[((hsi*168+155)*1+lsi)*1] = fp185;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp23);
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_y[vi], fp117, fp113);
LIBINT2_REALTYPE fp188;
fp188 = fp140 * fp114;
LIBINT2_REALTYPE fp187;
fp187 = fp188 * fp24;
target[((hsi*168+154)*1+lsi)*1] = fp187;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp27);
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*35+13)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp110 + fp112;
LIBINT2_REALTYPE fp190;
fp190 = fp140 * fp111;
LIBINT2_REALTYPE fp189;
fp189 = fp190 * fp28;
target[((hsi*168+153)*1+lsi)*1] = fp189;
LIBINT2_REALTYPE fp192;
fp192 = fp141 * fp118;
LIBINT2_REALTYPE fp191;
fp191 = fp192 * fp24;
target[((hsi*168+152)*1+lsi)*1] = fp191;
LIBINT2_REALTYPE fp194;
fp194 = fp141 * fp114;
LIBINT2_REALTYPE fp193;
fp193 = fp194 * fp28;
target[((hsi*168+151)*1+lsi)*1] = fp193;
LIBINT2_REALTYPE fp196;
fp196 = fp142 * fp118;
LIBINT2_REALTYPE fp195;
fp195 = fp196 * fp28;
target[((hsi*168+150)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_y[vi], fp106, fp107);
LIBINT2_REALTYPE fp198;
fp198 = fp140 * fp108;
LIBINT2_REALTYPE fp197;
fp197 = fp198 * fp31;
target[((hsi*168+149)*1+lsi)*1] = fp197;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp33);
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_y[vi], fp107, fp103);
LIBINT2_REALTYPE fp200;
fp200 = fp140 * fp104;
LIBINT2_REALTYPE fp199;
fp199 = fp200 * fp34;
target[((hsi*168+148)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp37);
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*35+18)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp202;
fp202 = fp140 * fp101;
LIBINT2_REALTYPE fp201;
fp201 = fp202 * fp38;
target[((hsi*168+147)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp204;
fp204 = fp141 * fp108;
LIBINT2_REALTYPE fp203;
fp203 = fp204 * fp34;
target[((hsi*168+146)*1+lsi)*1] = fp203;
LIBINT2_REALTYPE fp206;
fp206 = fp141 * fp104;
LIBINT2_REALTYPE fp205;
fp205 = fp206 * fp38;
target[((hsi*168+145)*1+lsi)*1] = fp205;
LIBINT2_REALTYPE fp208;
fp208 = fp142 * fp108;
LIBINT2_REALTYPE fp207;
fp207 = fp208 * fp38;
target[((hsi*168+144)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*35+13)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_y[vi], fp96, fp97);
LIBINT2_REALTYPE fp210;
fp210 = fp140 * fp98;
LIBINT2_REALTYPE fp209;
fp209 = fp210 * fp41;
target[((hsi*168+143)*1+lsi)*1] = fp209;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp47, fp43);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_y[vi], fp97, fp93);
LIBINT2_REALTYPE fp212;
fp212 = fp140 * fp94;
LIBINT2_REALTYPE fp211;
fp211 = fp212 * fp44;
target[((hsi*168+142)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_z[vi], fp46, fp47);
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*35+23)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp90 + fp92;
LIBINT2_REALTYPE fp214;
fp214 = fp140 * fp91;
LIBINT2_REALTYPE fp213;
fp213 = fp214 * fp48;
target[((hsi*168+141)*1+lsi)*1] = fp213;
LIBINT2_REALTYPE fp216;
fp216 = fp141 * fp98;
LIBINT2_REALTYPE fp215;
fp215 = fp216 * fp44;
target[((hsi*168+140)*1+lsi)*1] = fp215;
LIBINT2_REALTYPE fp218;
fp218 = fp141 * fp94;
LIBINT2_REALTYPE fp217;
fp217 = fp218 * fp48;
target[((hsi*168+139)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp220;
fp220 = fp142 * fp98;
LIBINT2_REALTYPE fp219;
fp219 = fp220 * fp48;
target[((hsi*168+138)*1+lsi)*1] = fp219;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*35+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_y[vi], fp86, fp87);
LIBINT2_REALTYPE fp222;
fp222 = fp140 * fp88;
LIBINT2_REALTYPE fp221;
fp221 = fp222 * fp51;
target[((hsi*168+137)*1+lsi)*1] = fp221;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp57, fp53);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*35+27)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp83);
LIBINT2_REALTYPE fp224;
fp224 = fp140 * fp84;
LIBINT2_REALTYPE fp223;
fp223 = fp224 * fp54;
target[((hsi*168+136)*1+lsi)*1] = fp223;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_z[vi], fp56, fp57);
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*35+28)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp80 + fp82;
LIBINT2_REALTYPE fp226;
fp226 = fp140 * fp81;
LIBINT2_REALTYPE fp225;
fp225 = fp226 * fp58;
target[((hsi*168+135)*1+lsi)*1] = fp225;
LIBINT2_REALTYPE fp228;
fp228 = fp141 * fp88;
LIBINT2_REALTYPE fp227;
fp227 = fp228 * fp54;
target[((hsi*168+134)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp230;
fp230 = fp141 * fp84;
LIBINT2_REALTYPE fp229;
fp229 = fp230 * fp58;
target[((hsi*168+133)*1+lsi)*1] = fp229;
LIBINT2_REALTYPE fp232;
fp232 = fp142 * fp88;
LIBINT2_REALTYPE fp231;
fp231 = fp232 * fp58;
target[((hsi*168+132)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src2[((hsi*35+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_z[vi] * fp63;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src2[((hsi*35+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp76, fp77);
LIBINT2_REALTYPE fp234;
fp234 = fp140 * fp78;
LIBINT2_REALTYPE fp233;
fp233 = fp234 * fp61;
target[((hsi*168+131)*1+lsi)*1] = fp233;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src2[((hsi*35+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_z[vi], fp67, fp63);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_y[vi], fp77, fp73);
LIBINT2_REALTYPE fp236;
fp236 = fp140 * fp74;
LIBINT2_REALTYPE fp235;
fp235 = fp236 * fp64;
target[((hsi*168+130)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src2[((hsi*35+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_z[vi], fp66, fp67);
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*35+33)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp238;
fp238 = fp140 * fp71;
LIBINT2_REALTYPE fp237;
fp237 = fp238 * fp68;
target[((hsi*168+129)*1+lsi)*1] = fp237;
LIBINT2_REALTYPE fp240;
fp240 = fp141 * fp78;
LIBINT2_REALTYPE fp239;
fp239 = fp240 * fp64;
target[((hsi*168+128)*1+lsi)*1] = fp239;
LIBINT2_REALTYPE fp242;
fp242 = fp141 * fp74;
LIBINT2_REALTYPE fp241;
fp241 = fp242 * fp68;
target[((hsi*168+127)*1+lsi)*1] = fp241;
LIBINT2_REALTYPE fp244;
fp244 = fp142 * fp78;
LIBINT2_REALTYPE fp243;
fp243 = fp244 * fp68;
target[((hsi*168+126)*1+lsi)*1] = fp243;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*35+5)*1+lsi)*1];
LIBINT2_REALTYPE fp246;
fp246 = fp143 * fp138;
LIBINT2_REALTYPE fp245;
fp245 = fp246 * fp11;
target[((hsi*168+125)*1+lsi)*1] = fp245;
LIBINT2_REALTYPE fp248;
fp248 = fp143 * fp134;
LIBINT2_REALTYPE fp247;
fp247 = fp248 * fp14;
target[((hsi*168+124)*1+lsi)*1] = fp247;
LIBINT2_REALTYPE fp250;
fp250 = fp143 * fp131;
LIBINT2_REALTYPE fp249;
fp249 = fp250 * fp18;
target[((hsi*168+123)*1+lsi)*1] = fp249;
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + src0[((hsi*35+6)*1+lsi)*1];
LIBINT2_REALTYPE fp252;
fp252 = fp144 * fp138;
LIBINT2_REALTYPE fp251;
fp251 = fp252 * fp14;
target[((hsi*168+122)*1+lsi)*1] = fp251;
LIBINT2_REALTYPE fp254;
fp254 = fp144 * fp134;
LIBINT2_REALTYPE fp253;
fp253 = fp254 * fp18;
target[((hsi*168+121)*1+lsi)*1] = fp253;
LIBINT2_REALTYPE fp145;
fp145 = 0.0000000000000000e+00 + src0[((hsi*35+7)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = fp145 * fp138;
LIBINT2_REALTYPE fp255;
fp255 = fp256 * fp18;
target[((hsi*168+120)*1+lsi)*1] = fp255;
LIBINT2_REALTYPE fp258;
fp258 = fp143 * fp128;
LIBINT2_REALTYPE fp257;
fp257 = fp258 * fp21;
target[((hsi*168+119)*1+lsi)*1] = fp257;
LIBINT2_REALTYPE fp260;
fp260 = fp143 * fp124;
LIBINT2_REALTYPE fp259;
fp259 = fp260 * fp24;
target[((hsi*168+118)*1+lsi)*1] = fp259;
LIBINT2_REALTYPE fp262;
fp262 = fp143 * fp121;
LIBINT2_REALTYPE fp261;
fp261 = fp262 * fp28;
target[((hsi*168+117)*1+lsi)*1] = fp261;
LIBINT2_REALTYPE fp264;
fp264 = fp144 * fp128;
LIBINT2_REALTYPE fp263;
fp263 = fp264 * fp24;
target[((hsi*168+116)*1+lsi)*1] = fp263;
LIBINT2_REALTYPE fp266;
fp266 = fp144 * fp124;
LIBINT2_REALTYPE fp265;
fp265 = fp266 * fp28;
target[((hsi*168+115)*1+lsi)*1] = fp265;
LIBINT2_REALTYPE fp268;
fp268 = fp145 * fp128;
LIBINT2_REALTYPE fp267;
fp267 = fp268 * fp28;
target[((hsi*168+114)*1+lsi)*1] = fp267;
LIBINT2_REALTYPE fp270;
fp270 = fp143 * fp118;
LIBINT2_REALTYPE fp269;
fp269 = fp270 * fp31;
target[((hsi*168+113)*1+lsi)*1] = fp269;
LIBINT2_REALTYPE fp272;
fp272 = fp143 * fp114;
LIBINT2_REALTYPE fp271;
fp271 = fp272 * fp34;
target[((hsi*168+112)*1+lsi)*1] = fp271;
LIBINT2_REALTYPE fp274;
fp274 = fp143 * fp111;
LIBINT2_REALTYPE fp273;
fp273 = fp274 * fp38;
target[((hsi*168+111)*1+lsi)*1] = fp273;
LIBINT2_REALTYPE fp276;
fp276 = fp144 * fp118;
LIBINT2_REALTYPE fp275;
fp275 = fp276 * fp34;
target[((hsi*168+110)*1+lsi)*1] = fp275;
LIBINT2_REALTYPE fp278;
fp278 = fp144 * fp114;
LIBINT2_REALTYPE fp277;
fp277 = fp278 * fp38;
target[((hsi*168+109)*1+lsi)*1] = fp277;
LIBINT2_REALTYPE fp280;
fp280 = fp145 * fp118;
LIBINT2_REALTYPE fp279;
fp279 = fp280 * fp38;
target[((hsi*168+108)*1+lsi)*1] = fp279;
LIBINT2_REALTYPE fp282;
fp282 = fp143 * fp108;
LIBINT2_REALTYPE fp281;
fp281 = fp282 * fp41;
target[((hsi*168+107)*1+lsi)*1] = fp281;
LIBINT2_REALTYPE fp284;
fp284 = fp143 * fp104;
LIBINT2_REALTYPE fp283;
fp283 = fp284 * fp44;
target[((hsi*168+106)*1+lsi)*1] = fp283;
LIBINT2_REALTYPE fp286;
fp286 = fp143 * fp101;
LIBINT2_REALTYPE fp285;
fp285 = fp286 * fp48;
target[((hsi*168+105)*1+lsi)*1] = fp285;
LIBINT2_REALTYPE fp288;
fp288 = fp144 * fp108;
LIBINT2_REALTYPE fp287;
fp287 = fp288 * fp44;
target[((hsi*168+104)*1+lsi)*1] = fp287;
LIBINT2_REALTYPE fp290;
fp290 = fp144 * fp104;
LIBINT2_REALTYPE fp289;
fp289 = fp290 * fp48;
target[((hsi*168+103)*1+lsi)*1] = fp289;
LIBINT2_REALTYPE fp292;
fp292 = fp145 * fp108;
LIBINT2_REALTYPE fp291;
fp291 = fp292 * fp48;
target[((hsi*168+102)*1+lsi)*1] = fp291;
LIBINT2_REALTYPE fp294;
fp294 = fp143 * fp98;
LIBINT2_REALTYPE fp293;
fp293 = fp294 * fp51;
target[((hsi*168+101)*1+lsi)*1] = fp293;
LIBINT2_REALTYPE fp296;
fp296 = fp143 * fp94;
LIBINT2_REALTYPE fp295;
fp295 = fp296 * fp54;
target[((hsi*168+100)*1+lsi)*1] = fp295;
LIBINT2_REALTYPE fp298;
fp298 = fp143 * fp91;
LIBINT2_REALTYPE fp297;
fp297 = fp298 * fp58;
target[((hsi*168+99)*1+lsi)*1] = fp297;
LIBINT2_REALTYPE fp300;
fp300 = fp144 * fp98;
LIBINT2_REALTYPE fp299;
fp299 = fp300 * fp54;
target[((hsi*168+98)*1+lsi)*1] = fp299;
LIBINT2_REALTYPE fp302;
fp302 = fp144 * fp94;
LIBINT2_REALTYPE fp301;
fp301 = fp302 * fp58;
target[((hsi*168+97)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp304;
fp304 = fp145 * fp98;
LIBINT2_REALTYPE fp303;
fp303 = fp304 * fp58;
target[((hsi*168+96)*1+lsi)*1] = fp303;
LIBINT2_REALTYPE fp306;
fp306 = fp143 * fp88;
LIBINT2_REALTYPE fp305;
fp305 = fp306 * fp61;
target[((hsi*168+95)*1+lsi)*1] = fp305;
LIBINT2_REALTYPE fp308;
fp308 = fp143 * fp84;
LIBINT2_REALTYPE fp307;
fp307 = fp308 * fp64;
target[((hsi*168+94)*1+lsi)*1] = fp307;
LIBINT2_REALTYPE fp310;
fp310 = fp143 * fp81;
LIBINT2_REALTYPE fp309;
fp309 = fp310 * fp68;
target[((hsi*168+93)*1+lsi)*1] = fp309;
LIBINT2_REALTYPE fp312;
fp312 = fp144 * fp88;
LIBINT2_REALTYPE fp311;
fp311 = fp312 * fp64;
target[((hsi*168+92)*1+lsi)*1] = fp311;
LIBINT2_REALTYPE fp314;
fp314 = fp144 * fp84;
LIBINT2_REALTYPE fp313;
fp313 = fp314 * fp68;
target[((hsi*168+91)*1+lsi)*1] = fp313;
LIBINT2_REALTYPE fp316;
fp316 = fp145 * fp88;
LIBINT2_REALTYPE fp315;
fp315 = fp316 * fp68;
target[((hsi*168+90)*1+lsi)*1] = fp315;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*35+10)*1+lsi)*1];
LIBINT2_REALTYPE fp318;
fp318 = fp146 * fp138;
LIBINT2_REALTYPE fp317;
fp317 = fp318 * fp21;
target[((hsi*168+89)*1+lsi)*1] = fp317;
LIBINT2_REALTYPE fp320;
fp320 = fp146 * fp134;
LIBINT2_REALTYPE fp319;
fp319 = fp320 * fp24;
target[((hsi*168+88)*1+lsi)*1] = fp319;
LIBINT2_REALTYPE fp322;
fp322 = fp146 * fp131;
LIBINT2_REALTYPE fp321;
fp321 = fp322 * fp28;
target[((hsi*168+87)*1+lsi)*1] = fp321;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*35+11)*1+lsi)*1];
LIBINT2_REALTYPE fp324;
fp324 = fp147 * fp138;
LIBINT2_REALTYPE fp323;
fp323 = fp324 * fp24;
target[((hsi*168+86)*1+lsi)*1] = fp323;
LIBINT2_REALTYPE fp326;
fp326 = fp147 * fp134;
LIBINT2_REALTYPE fp325;
fp325 = fp326 * fp28;
target[((hsi*168+85)*1+lsi)*1] = fp325;
LIBINT2_REALTYPE fp148;
fp148 = 0.0000000000000000e+00 + src0[((hsi*35+12)*1+lsi)*1];
LIBINT2_REALTYPE fp328;
fp328 = fp148 * fp138;
LIBINT2_REALTYPE fp327;
fp327 = fp328 * fp28;
target[((hsi*168+84)*1+lsi)*1] = fp327;
LIBINT2_REALTYPE fp330;
fp330 = fp146 * fp128;
LIBINT2_REALTYPE fp329;
fp329 = fp330 * fp31;
target[((hsi*168+83)*1+lsi)*1] = fp329;
LIBINT2_REALTYPE fp332;
fp332 = fp146 * fp124;
LIBINT2_REALTYPE fp331;
fp331 = fp332 * fp34;
target[((hsi*168+82)*1+lsi)*1] = fp331;
LIBINT2_REALTYPE fp334;
fp334 = fp146 * fp121;
LIBINT2_REALTYPE fp333;
fp333 = fp334 * fp38;
target[((hsi*168+81)*1+lsi)*1] = fp333;
LIBINT2_REALTYPE fp336;
fp336 = fp147 * fp128;
LIBINT2_REALTYPE fp335;
fp335 = fp336 * fp34;
target[((hsi*168+80)*1+lsi)*1] = fp335;
LIBINT2_REALTYPE fp338;
fp338 = fp147 * fp124;
LIBINT2_REALTYPE fp337;
fp337 = fp338 * fp38;
target[((hsi*168+79)*1+lsi)*1] = fp337;
LIBINT2_REALTYPE fp340;
fp340 = fp148 * fp128;
LIBINT2_REALTYPE fp339;
fp339 = fp340 * fp38;
target[((hsi*168+78)*1+lsi)*1] = fp339;
LIBINT2_REALTYPE fp342;
fp342 = fp146 * fp118;
LIBINT2_REALTYPE fp341;
fp341 = fp342 * fp41;
target[((hsi*168+77)*1+lsi)*1] = fp341;
LIBINT2_REALTYPE fp344;
fp344 = fp146 * fp114;
LIBINT2_REALTYPE fp343;
fp343 = fp344 * fp44;
target[((hsi*168+76)*1+lsi)*1] = fp343;
LIBINT2_REALTYPE fp346;
fp346 = fp146 * fp111;
LIBINT2_REALTYPE fp345;
fp345 = fp346 * fp48;
target[((hsi*168+75)*1+lsi)*1] = fp345;
LIBINT2_REALTYPE fp348;
fp348 = fp147 * fp118;
LIBINT2_REALTYPE fp347;
fp347 = fp348 * fp44;
target[((hsi*168+74)*1+lsi)*1] = fp347;
LIBINT2_REALTYPE fp350;
fp350 = fp147 * fp114;
LIBINT2_REALTYPE fp349;
fp349 = fp350 * fp48;
target[((hsi*168+73)*1+lsi)*1] = fp349;
LIBINT2_REALTYPE fp352;
fp352 = fp148 * fp118;
LIBINT2_REALTYPE fp351;
fp351 = fp352 * fp48;
target[((hsi*168+72)*1+lsi)*1] = fp351;
LIBINT2_REALTYPE fp354;
fp354 = fp146 * fp108;
LIBINT2_REALTYPE fp353;
fp353 = fp354 * fp51;
target[((hsi*168+71)*1+lsi)*1] = fp353;
LIBINT2_REALTYPE fp356;
fp356 = fp146 * fp104;
LIBINT2_REALTYPE fp355;
fp355 = fp356 * fp54;
target[((hsi*168+70)*1+lsi)*1] = fp355;
LIBINT2_REALTYPE fp358;
fp358 = fp146 * fp101;
LIBINT2_REALTYPE fp357;
fp357 = fp358 * fp58;
target[((hsi*168+69)*1+lsi)*1] = fp357;
LIBINT2_REALTYPE fp360;
fp360 = fp147 * fp108;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp54;
target[((hsi*168+68)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp362;
fp362 = fp147 * fp104;
LIBINT2_REALTYPE fp361;
fp361 = fp362 * fp58;
target[((hsi*168+67)*1+lsi)*1] = fp361;
LIBINT2_REALTYPE fp364;
fp364 = fp148 * fp108;
LIBINT2_REALTYPE fp363;
fp363 = fp364 * fp58;
target[((hsi*168+66)*1+lsi)*1] = fp363;
LIBINT2_REALTYPE fp366;
fp366 = fp146 * fp98;
LIBINT2_REALTYPE fp365;
fp365 = fp366 * fp61;
target[((hsi*168+65)*1+lsi)*1] = fp365;
LIBINT2_REALTYPE fp368;
fp368 = fp146 * fp94;
LIBINT2_REALTYPE fp367;
fp367 = fp368 * fp64;
target[((hsi*168+64)*1+lsi)*1] = fp367;
LIBINT2_REALTYPE fp370;
fp370 = fp146 * fp91;
LIBINT2_REALTYPE fp369;
fp369 = fp370 * fp68;
target[((hsi*168+63)*1+lsi)*1] = fp369;
LIBINT2_REALTYPE fp372;
fp372 = fp147 * fp98;
LIBINT2_REALTYPE fp371;
fp371 = fp372 * fp64;
target[((hsi*168+62)*1+lsi)*1] = fp371;
LIBINT2_REALTYPE fp374;
fp374 = fp147 * fp94;
LIBINT2_REALTYPE fp373;
fp373 = fp374 * fp68;
target[((hsi*168+61)*1+lsi)*1] = fp373;
LIBINT2_REALTYPE fp376;
fp376 = fp148 * fp98;
LIBINT2_REALTYPE fp375;
fp375 = fp376 * fp68;
target[((hsi*168+60)*1+lsi)*1] = fp375;
LIBINT2_REALTYPE fp149;
fp149 = 0.0000000000000000e+00 + src0[((hsi*35+15)*1+lsi)*1];
LIBINT2_REALTYPE fp378;
fp378 = fp149 * fp138;
LIBINT2_REALTYPE fp377;
fp377 = fp378 * fp31;
target[((hsi*168+59)*1+lsi)*1] = fp377;
LIBINT2_REALTYPE fp380;
fp380 = fp149 * fp134;
LIBINT2_REALTYPE fp379;
fp379 = fp380 * fp34;
target[((hsi*168+58)*1+lsi)*1] = fp379;
LIBINT2_REALTYPE fp382;
fp382 = fp149 * fp131;
LIBINT2_REALTYPE fp381;
fp381 = fp382 * fp38;
target[((hsi*168+57)*1+lsi)*1] = fp381;
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*35+16)*1+lsi)*1];
LIBINT2_REALTYPE fp384;
fp384 = fp150 * fp138;
LIBINT2_REALTYPE fp383;
fp383 = fp384 * fp34;
target[((hsi*168+56)*1+lsi)*1] = fp383;
LIBINT2_REALTYPE fp386;
fp386 = fp150 * fp134;
LIBINT2_REALTYPE fp385;
fp385 = fp386 * fp38;
target[((hsi*168+55)*1+lsi)*1] = fp385;
LIBINT2_REALTYPE fp151;
fp151 = 0.0000000000000000e+00 + src0[((hsi*35+17)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = fp151 * fp138;
LIBINT2_REALTYPE fp387;
fp387 = fp388 * fp38;
target[((hsi*168+54)*1+lsi)*1] = fp387;
LIBINT2_REALTYPE fp390;
fp390 = fp149 * fp128;
LIBINT2_REALTYPE fp389;
fp389 = fp390 * fp41;
target[((hsi*168+53)*1+lsi)*1] = fp389;
LIBINT2_REALTYPE fp392;
fp392 = fp149 * fp124;
LIBINT2_REALTYPE fp391;
fp391 = fp392 * fp44;
target[((hsi*168+52)*1+lsi)*1] = fp391;
LIBINT2_REALTYPE fp394;
fp394 = fp149 * fp121;
LIBINT2_REALTYPE fp393;
fp393 = fp394 * fp48;
target[((hsi*168+51)*1+lsi)*1] = fp393;
LIBINT2_REALTYPE fp396;
fp396 = fp150 * fp128;
LIBINT2_REALTYPE fp395;
fp395 = fp396 * fp44;
target[((hsi*168+50)*1+lsi)*1] = fp395;
LIBINT2_REALTYPE fp398;
fp398 = fp150 * fp124;
LIBINT2_REALTYPE fp397;
fp397 = fp398 * fp48;
target[((hsi*168+49)*1+lsi)*1] = fp397;
LIBINT2_REALTYPE fp400;
fp400 = fp151 * fp128;
LIBINT2_REALTYPE fp399;
fp399 = fp400 * fp48;
target[((hsi*168+48)*1+lsi)*1] = fp399;
LIBINT2_REALTYPE fp402;
fp402 = fp149 * fp118;
LIBINT2_REALTYPE fp401;
fp401 = fp402 * fp51;
target[((hsi*168+47)*1+lsi)*1] = fp401;
LIBINT2_REALTYPE fp404;
fp404 = fp149 * fp114;
LIBINT2_REALTYPE fp403;
fp403 = fp404 * fp54;
target[((hsi*168+46)*1+lsi)*1] = fp403;
LIBINT2_REALTYPE fp406;
fp406 = fp149 * fp111;
LIBINT2_REALTYPE fp405;
fp405 = fp406 * fp58;
target[((hsi*168+45)*1+lsi)*1] = fp405;
LIBINT2_REALTYPE fp408;
fp408 = fp150 * fp118;
LIBINT2_REALTYPE fp407;
fp407 = fp408 * fp54;
target[((hsi*168+44)*1+lsi)*1] = fp407;
LIBINT2_REALTYPE fp410;
fp410 = fp150 * fp114;
LIBINT2_REALTYPE fp409;
fp409 = fp410 * fp58;
target[((hsi*168+43)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp412;
fp412 = fp151 * fp118;
LIBINT2_REALTYPE fp411;
fp411 = fp412 * fp58;
target[((hsi*168+42)*1+lsi)*1] = fp411;
LIBINT2_REALTYPE fp414;
fp414 = fp149 * fp108;
LIBINT2_REALTYPE fp413;
fp413 = fp414 * fp61;
target[((hsi*168+41)*1+lsi)*1] = fp413;
LIBINT2_REALTYPE fp416;
fp416 = fp149 * fp104;
LIBINT2_REALTYPE fp415;
fp415 = fp416 * fp64;
target[((hsi*168+40)*1+lsi)*1] = fp415;
LIBINT2_REALTYPE fp418;
fp418 = fp149 * fp101;
LIBINT2_REALTYPE fp417;
fp417 = fp418 * fp68;
target[((hsi*168+39)*1+lsi)*1] = fp417;
LIBINT2_REALTYPE fp420;
fp420 = fp150 * fp108;
LIBINT2_REALTYPE fp419;
fp419 = fp420 * fp64;
target[((hsi*168+38)*1+lsi)*1] = fp419;
LIBINT2_REALTYPE fp422;
fp422 = fp150 * fp104;
LIBINT2_REALTYPE fp421;
fp421 = fp422 * fp68;
target[((hsi*168+37)*1+lsi)*1] = fp421;
LIBINT2_REALTYPE fp424;
fp424 = fp151 * fp108;
LIBINT2_REALTYPE fp423;
fp423 = fp424 * fp68;
target[((hsi*168+36)*1+lsi)*1] = fp423;
LIBINT2_REALTYPE fp152;
fp152 = 0.0000000000000000e+00 + src0[((hsi*35+20)*1+lsi)*1];
LIBINT2_REALTYPE fp426;
fp426 = fp152 * fp138;
LIBINT2_REALTYPE fp425;
fp425 = fp426 * fp41;
target[((hsi*168+35)*1+lsi)*1] = fp425;
LIBINT2_REALTYPE fp428;
fp428 = fp152 * fp134;
LIBINT2_REALTYPE fp427;
fp427 = fp428 * fp44;
target[((hsi*168+34)*1+lsi)*1] = fp427;
LIBINT2_REALTYPE fp430;
fp430 = fp152 * fp131;
LIBINT2_REALTYPE fp429;
fp429 = fp430 * fp48;
target[((hsi*168+33)*1+lsi)*1] = fp429;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*35+21)*1+lsi)*1];
LIBINT2_REALTYPE fp432;
fp432 = fp153 * fp138;
LIBINT2_REALTYPE fp431;
fp431 = fp432 * fp44;
target[((hsi*168+32)*1+lsi)*1] = fp431;
LIBINT2_REALTYPE fp434;
fp434 = fp153 * fp134;
LIBINT2_REALTYPE fp433;
fp433 = fp434 * fp48;
target[((hsi*168+31)*1+lsi)*1] = fp433;
LIBINT2_REALTYPE fp154;
fp154 = 0.0000000000000000e+00 + src0[((hsi*35+22)*1+lsi)*1];
LIBINT2_REALTYPE fp436;
fp436 = fp154 * fp138;
LIBINT2_REALTYPE fp435;
fp435 = fp436 * fp48;
target[((hsi*168+30)*1+lsi)*1] = fp435;
LIBINT2_REALTYPE fp438;
fp438 = fp152 * fp128;
LIBINT2_REALTYPE fp437;
fp437 = fp438 * fp51;
target[((hsi*168+29)*1+lsi)*1] = fp437;
LIBINT2_REALTYPE fp440;
fp440 = fp152 * fp124;
LIBINT2_REALTYPE fp439;
fp439 = fp440 * fp54;
target[((hsi*168+28)*1+lsi)*1] = fp439;
LIBINT2_REALTYPE fp442;
fp442 = fp152 * fp121;
LIBINT2_REALTYPE fp441;
fp441 = fp442 * fp58;
target[((hsi*168+27)*1+lsi)*1] = fp441;
LIBINT2_REALTYPE fp444;
fp444 = fp153 * fp128;
LIBINT2_REALTYPE fp443;
fp443 = fp444 * fp54;
target[((hsi*168+26)*1+lsi)*1] = fp443;
LIBINT2_REALTYPE fp446;
fp446 = fp153 * fp124;
LIBINT2_REALTYPE fp445;
fp445 = fp446 * fp58;
target[((hsi*168+25)*1+lsi)*1] = fp445;
LIBINT2_REALTYPE fp448;
fp448 = fp154 * fp128;
LIBINT2_REALTYPE fp447;
fp447 = fp448 * fp58;
target[((hsi*168+24)*1+lsi)*1] = fp447;
LIBINT2_REALTYPE fp450;
fp450 = fp152 * fp118;
LIBINT2_REALTYPE fp449;
fp449 = fp450 * fp61;
target[((hsi*168+23)*1+lsi)*1] = fp449;
LIBINT2_REALTYPE fp452;
fp452 = fp152 * fp114;
LIBINT2_REALTYPE fp451;
fp451 = fp452 * fp64;
target[((hsi*168+22)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp454;
fp454 = fp152 * fp111;
LIBINT2_REALTYPE fp453;
fp453 = fp454 * fp68;
target[((hsi*168+21)*1+lsi)*1] = fp453;
LIBINT2_REALTYPE fp456;
fp456 = fp153 * fp118;
LIBINT2_REALTYPE fp455;
fp455 = fp456 * fp64;
target[((hsi*168+20)*1+lsi)*1] = fp455;
LIBINT2_REALTYPE fp458;
fp458 = fp153 * fp114;
LIBINT2_REALTYPE fp457;
fp457 = fp458 * fp68;
target[((hsi*168+19)*1+lsi)*1] = fp457;
LIBINT2_REALTYPE fp460;
fp460 = fp154 * fp118;
LIBINT2_REALTYPE fp459;
fp459 = fp460 * fp68;
target[((hsi*168+18)*1+lsi)*1] = fp459;
LIBINT2_REALTYPE fp155;
fp155 = 0.0000000000000000e+00 + src0[((hsi*35+25)*1+lsi)*1];
LIBINT2_REALTYPE fp462;
fp462 = fp155 * fp138;
LIBINT2_REALTYPE fp461;
fp461 = fp462 * fp51;
target[((hsi*168+17)*1+lsi)*1] = fp461;
LIBINT2_REALTYPE fp464;
fp464 = fp155 * fp134;
LIBINT2_REALTYPE fp463;
fp463 = fp464 * fp54;
target[((hsi*168+16)*1+lsi)*1] = fp463;
LIBINT2_REALTYPE fp466;
fp466 = fp155 * fp131;
LIBINT2_REALTYPE fp465;
fp465 = fp466 * fp58;
target[((hsi*168+15)*1+lsi)*1] = fp465;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*35+26)*1+lsi)*1];
LIBINT2_REALTYPE fp468;
fp468 = fp156 * fp138;
LIBINT2_REALTYPE fp467;
fp467 = fp468 * fp54;
target[((hsi*168+14)*1+lsi)*1] = fp467;
LIBINT2_REALTYPE fp470;
fp470 = fp156 * fp134;
LIBINT2_REALTYPE fp469;
fp469 = fp470 * fp58;
target[((hsi*168+13)*1+lsi)*1] = fp469;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*35+27)*1+lsi)*1];
LIBINT2_REALTYPE fp472;
fp472 = fp157 * fp138;
LIBINT2_REALTYPE fp471;
fp471 = fp472 * fp58;
target[((hsi*168+12)*1+lsi)*1] = fp471;
LIBINT2_REALTYPE fp474;
fp474 = fp155 * fp128;
LIBINT2_REALTYPE fp473;
fp473 = fp474 * fp61;
target[((hsi*168+11)*1+lsi)*1] = fp473;
LIBINT2_REALTYPE fp476;
fp476 = fp155 * fp124;
LIBINT2_REALTYPE fp475;
fp475 = fp476 * fp64;
target[((hsi*168+10)*1+lsi)*1] = fp475;
LIBINT2_REALTYPE fp478;
fp478 = fp155 * fp121;
LIBINT2_REALTYPE fp477;
fp477 = fp478 * fp68;
target[((hsi*168+9)*1+lsi)*1] = fp477;
LIBINT2_REALTYPE fp480;
fp480 = fp156 * fp128;
LIBINT2_REALTYPE fp479;
fp479 = fp480 * fp64;
target[((hsi*168+8)*1+lsi)*1] = fp479;
LIBINT2_REALTYPE fp482;
fp482 = fp156 * fp124;
LIBINT2_REALTYPE fp481;
fp481 = fp482 * fp68;
target[((hsi*168+7)*1+lsi)*1] = fp481;
LIBINT2_REALTYPE fp484;
fp484 = fp157 * fp128;
LIBINT2_REALTYPE fp483;
fp483 = fp484 * fp68;
target[((hsi*168+6)*1+lsi)*1] = fp483;
LIBINT2_REALTYPE fp158;
fp158 = 0.0000000000000000e+00 + src0[((hsi*35+30)*1+lsi)*1];
LIBINT2_REALTYPE fp486;
fp486 = fp158 * fp138;
LIBINT2_REALTYPE fp485;
fp485 = fp486 * fp61;
target[((hsi*168+5)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp488;
fp488 = fp158 * fp134;
LIBINT2_REALTYPE fp487;
fp487 = fp488 * fp64;
target[((hsi*168+4)*1+lsi)*1] = fp487;
LIBINT2_REALTYPE fp490;
fp490 = fp158 * fp131;
LIBINT2_REALTYPE fp489;
fp489 = fp490 * fp68;
target[((hsi*168+3)*1+lsi)*1] = fp489;
LIBINT2_REALTYPE fp159;
fp159 = 0.0000000000000000e+00 + src0[((hsi*35+31)*1+lsi)*1];
LIBINT2_REALTYPE fp492;
fp492 = fp159 * fp138;
LIBINT2_REALTYPE fp491;
fp491 = fp492 * fp64;
target[((hsi*168+2)*1+lsi)*1] = fp491;
LIBINT2_REALTYPE fp494;
fp494 = fp159 * fp134;
LIBINT2_REALTYPE fp493;
fp493 = fp494 * fp68;
target[((hsi*168+1)*1+lsi)*1] = fp493;
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*35+32)*1+lsi)*1];
LIBINT2_REALTYPE fp496;
fp496 = fp160 * fp138;
LIBINT2_REALTYPE fp495;
fp495 = fp496 * fp68;
target[((hsi*168+0)*1+lsi)*1] = fp495;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 497 */
}

#ifdef __cplusplus
};
#endif
