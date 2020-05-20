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
void CR_aB_h__0___CartesianMultipole_sB_1_c_1_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = 0.0000000000000000e+00 + src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->BO_y[vi], fp116, fp117);
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->BO_x[vi], fp120, fp123);
LIBINT2_REALTYPE fp181;
fp181 = fp121 * fp118;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp1;
target[((hsi*126+125)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp3);
LIBINT2_REALTYPE fp113;
fp113 = 0.0000000000000000e+00 + src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->BO_y[vi], fp117, fp113);
LIBINT2_REALTYPE fp183;
fp183 = fp121 * fp114;
LIBINT2_REALTYPE fp182;
fp182 = fp183 * fp4;
target[((hsi*126+124)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp7);
LIBINT2_REALTYPE fp112;
fp112 = inteval->BO_y[vi] * fp113;
LIBINT2_REALTYPE fp110;
fp110 = 0.0000000000000000e+00 + src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp110 + fp112;
LIBINT2_REALTYPE fp185;
fp185 = fp121 * fp111;
LIBINT2_REALTYPE fp184;
fp184 = fp185 * fp8;
target[((hsi*126+123)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp126;
fp126 = 0.0000000000000000e+00 + src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->BO_x[vi], fp123, fp126);
LIBINT2_REALTYPE fp187;
fp187 = fp124 * fp118;
LIBINT2_REALTYPE fp186;
fp186 = fp187 * fp4;
target[((hsi*126+122)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = fp124 * fp114;
LIBINT2_REALTYPE fp188;
fp188 = fp189 * fp8;
target[((hsi*126+121)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp129;
fp129 = inteval->BO_x[vi] * fp126;
LIBINT2_REALTYPE fp127;
fp127 = 0.0000000000000000e+00 + src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = fp127 + fp129;
LIBINT2_REALTYPE fp191;
fp191 = fp128 * fp118;
LIBINT2_REALTYPE fp190;
fp190 = fp191 * fp8;
target[((hsi*126+120)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->BO_y[vi], fp106, fp107);
LIBINT2_REALTYPE fp193;
fp193 = fp121 * fp108;
LIBINT2_REALTYPE fp192;
fp192 = fp193 * fp11;
target[((hsi*126+119)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp13);
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->BO_y[vi], fp107, fp103);
LIBINT2_REALTYPE fp195;
fp195 = fp121 * fp104;
LIBINT2_REALTYPE fp194;
fp194 = fp195 * fp14;
target[((hsi*126+118)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp17);
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp103;
LIBINT2_REALTYPE fp100;
fp100 = 0.0000000000000000e+00 + src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp100 + fp102;
LIBINT2_REALTYPE fp197;
fp197 = fp121 * fp101;
LIBINT2_REALTYPE fp196;
fp196 = fp197 * fp18;
target[((hsi*126+117)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = fp124 * fp108;
LIBINT2_REALTYPE fp198;
fp198 = fp199 * fp14;
target[((hsi*126+116)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = fp124 * fp104;
LIBINT2_REALTYPE fp200;
fp200 = fp201 * fp18;
target[((hsi*126+115)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = fp128 * fp108;
LIBINT2_REALTYPE fp202;
fp202 = fp203 * fp18;
target[((hsi*126+114)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp20 + fp22;
LIBINT2_REALTYPE fp97;
fp97 = 0.0000000000000000e+00 + src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 0.0000000000000000e+00 + src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->BO_y[vi], fp96, fp97);
LIBINT2_REALTYPE fp205;
fp205 = fp121 * fp98;
LIBINT2_REALTYPE fp204;
fp204 = fp205 * fp21;
target[((hsi*126+113)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp23);
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->BO_y[vi], fp97, fp93);
LIBINT2_REALTYPE fp207;
fp207 = fp121 * fp94;
LIBINT2_REALTYPE fp206;
fp206 = fp207 * fp24;
target[((hsi*126+112)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp27);
LIBINT2_REALTYPE fp92;
fp92 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp90 + fp92;
LIBINT2_REALTYPE fp209;
fp209 = fp121 * fp91;
LIBINT2_REALTYPE fp208;
fp208 = fp209 * fp28;
target[((hsi*126+111)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = fp124 * fp98;
LIBINT2_REALTYPE fp210;
fp210 = fp211 * fp24;
target[((hsi*126+110)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = fp124 * fp94;
LIBINT2_REALTYPE fp212;
fp212 = fp213 * fp28;
target[((hsi*126+109)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = fp128 * fp98;
LIBINT2_REALTYPE fp214;
fp214 = fp215 * fp28;
target[((hsi*126+108)*1+lsi)*1] = fp214;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src2[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_z[vi] * fp33;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src2[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp30 + fp32;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->BO_y[vi], fp86, fp87);
LIBINT2_REALTYPE fp217;
fp217 = fp121 * fp88;
LIBINT2_REALTYPE fp216;
fp216 = fp217 * fp31;
target[((hsi*126+107)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src2[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_z[vi], fp37, fp33);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->BO_y[vi], fp87, fp83);
LIBINT2_REALTYPE fp219;
fp219 = fp121 * fp84;
LIBINT2_REALTYPE fp218;
fp218 = fp219 * fp34;
target[((hsi*126+106)*1+lsi)*1] = fp218;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src2[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_z[vi], fp36, fp37);
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp80 + fp82;
LIBINT2_REALTYPE fp221;
fp221 = fp121 * fp81;
LIBINT2_REALTYPE fp220;
fp220 = fp221 * fp38;
target[((hsi*126+105)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp223;
fp223 = fp124 * fp88;
LIBINT2_REALTYPE fp222;
fp222 = fp223 * fp34;
target[((hsi*126+104)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp225;
fp225 = fp124 * fp84;
LIBINT2_REALTYPE fp224;
fp224 = fp225 * fp38;
target[((hsi*126+103)*1+lsi)*1] = fp224;
LIBINT2_REALTYPE fp227;
fp227 = fp128 * fp88;
LIBINT2_REALTYPE fp226;
fp226 = fp227 * fp38;
target[((hsi*126+102)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src2[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_z[vi] * fp43;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src2[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->BO_y[vi], fp76, fp77);
LIBINT2_REALTYPE fp229;
fp229 = fp121 * fp78;
LIBINT2_REALTYPE fp228;
fp228 = fp229 * fp41;
target[((hsi*126+101)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src2[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_z[vi], fp47, fp43);
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->BO_y[vi], fp77, fp73);
LIBINT2_REALTYPE fp231;
fp231 = fp121 * fp74;
LIBINT2_REALTYPE fp230;
fp230 = fp231 * fp44;
target[((hsi*126+100)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src2[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->BO_z[vi], fp46, fp47);
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_y[vi] * fp73;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp70 + fp72;
LIBINT2_REALTYPE fp233;
fp233 = fp121 * fp71;
LIBINT2_REALTYPE fp232;
fp232 = fp233 * fp48;
target[((hsi*126+99)*1+lsi)*1] = fp232;
LIBINT2_REALTYPE fp235;
fp235 = fp124 * fp78;
LIBINT2_REALTYPE fp234;
fp234 = fp235 * fp44;
target[((hsi*126+98)*1+lsi)*1] = fp234;
LIBINT2_REALTYPE fp237;
fp237 = fp124 * fp74;
LIBINT2_REALTYPE fp236;
fp236 = fp237 * fp48;
target[((hsi*126+97)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp239;
fp239 = fp128 * fp78;
LIBINT2_REALTYPE fp238;
fp238 = fp239 * fp48;
target[((hsi*126+96)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src2[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_z[vi] * fp53;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src2[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp50 + fp52;
LIBINT2_REALTYPE fp67;
fp67 = 0.0000000000000000e+00 + src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_y[vi], fp66, fp67);
LIBINT2_REALTYPE fp241;
fp241 = fp121 * fp68;
LIBINT2_REALTYPE fp240;
fp240 = fp241 * fp51;
target[((hsi*126+95)*1+lsi)*1] = fp240;
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src2[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_z[vi], fp57, fp53);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp67, fp63);
LIBINT2_REALTYPE fp243;
fp243 = fp121 * fp64;
LIBINT2_REALTYPE fp242;
fp242 = fp243 * fp54;
target[((hsi*126+94)*1+lsi)*1] = fp242;
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_z[vi], fp56, fp57);
LIBINT2_REALTYPE fp62;
fp62 = inteval->BO_y[vi] * fp63;
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp60 + fp62;
LIBINT2_REALTYPE fp245;
fp245 = fp121 * fp61;
LIBINT2_REALTYPE fp244;
fp244 = fp245 * fp58;
target[((hsi*126+93)*1+lsi)*1] = fp244;
LIBINT2_REALTYPE fp247;
fp247 = fp124 * fp68;
LIBINT2_REALTYPE fp246;
fp246 = fp247 * fp54;
target[((hsi*126+92)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp249;
fp249 = fp124 * fp64;
LIBINT2_REALTYPE fp248;
fp248 = fp249 * fp58;
target[((hsi*126+91)*1+lsi)*1] = fp248;
LIBINT2_REALTYPE fp251;
fp251 = fp128 * fp68;
LIBINT2_REALTYPE fp250;
fp250 = fp251 * fp58;
target[((hsi*126+90)*1+lsi)*1] = fp250;
LIBINT2_REALTYPE fp133;
fp133 = 0.0000000000000000e+00 + src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = 0.0000000000000000e+00 + src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->BO_x[vi], fp130, fp133);
LIBINT2_REALTYPE fp253;
fp253 = fp131 * fp118;
LIBINT2_REALTYPE fp252;
fp252 = fp253 * fp11;
target[((hsi*126+89)*1+lsi)*1] = fp252;
LIBINT2_REALTYPE fp255;
fp255 = fp131 * fp114;
LIBINT2_REALTYPE fp254;
fp254 = fp255 * fp14;
target[((hsi*126+88)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp257;
fp257 = fp131 * fp111;
LIBINT2_REALTYPE fp256;
fp256 = fp257 * fp18;
target[((hsi*126+87)*1+lsi)*1] = fp256;
LIBINT2_REALTYPE fp136;
fp136 = 0.0000000000000000e+00 + src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->BO_x[vi], fp133, fp136);
LIBINT2_REALTYPE fp259;
fp259 = fp134 * fp118;
LIBINT2_REALTYPE fp258;
fp258 = fp259 * fp14;
target[((hsi*126+86)*1+lsi)*1] = fp258;
LIBINT2_REALTYPE fp261;
fp261 = fp134 * fp114;
LIBINT2_REALTYPE fp260;
fp260 = fp261 * fp18;
target[((hsi*126+85)*1+lsi)*1] = fp260;
LIBINT2_REALTYPE fp139;
fp139 = inteval->BO_x[vi] * fp136;
LIBINT2_REALTYPE fp137;
fp137 = 0.0000000000000000e+00 + src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp137 + fp139;
LIBINT2_REALTYPE fp263;
fp263 = fp138 * fp118;
LIBINT2_REALTYPE fp262;
fp262 = fp263 * fp18;
target[((hsi*126+84)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp265;
fp265 = fp131 * fp108;
LIBINT2_REALTYPE fp264;
fp264 = fp265 * fp21;
target[((hsi*126+83)*1+lsi)*1] = fp264;
LIBINT2_REALTYPE fp267;
fp267 = fp131 * fp104;
LIBINT2_REALTYPE fp266;
fp266 = fp267 * fp24;
target[((hsi*126+82)*1+lsi)*1] = fp266;
LIBINT2_REALTYPE fp269;
fp269 = fp131 * fp101;
LIBINT2_REALTYPE fp268;
fp268 = fp269 * fp28;
target[((hsi*126+81)*1+lsi)*1] = fp268;
LIBINT2_REALTYPE fp271;
fp271 = fp134 * fp108;
LIBINT2_REALTYPE fp270;
fp270 = fp271 * fp24;
target[((hsi*126+80)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp273;
fp273 = fp134 * fp104;
LIBINT2_REALTYPE fp272;
fp272 = fp273 * fp28;
target[((hsi*126+79)*1+lsi)*1] = fp272;
LIBINT2_REALTYPE fp275;
fp275 = fp138 * fp108;
LIBINT2_REALTYPE fp274;
fp274 = fp275 * fp28;
target[((hsi*126+78)*1+lsi)*1] = fp274;
LIBINT2_REALTYPE fp277;
fp277 = fp131 * fp98;
LIBINT2_REALTYPE fp276;
fp276 = fp277 * fp31;
target[((hsi*126+77)*1+lsi)*1] = fp276;
LIBINT2_REALTYPE fp279;
fp279 = fp131 * fp94;
LIBINT2_REALTYPE fp278;
fp278 = fp279 * fp34;
target[((hsi*126+76)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp281;
fp281 = fp131 * fp91;
LIBINT2_REALTYPE fp280;
fp280 = fp281 * fp38;
target[((hsi*126+75)*1+lsi)*1] = fp280;
LIBINT2_REALTYPE fp283;
fp283 = fp134 * fp98;
LIBINT2_REALTYPE fp282;
fp282 = fp283 * fp34;
target[((hsi*126+74)*1+lsi)*1] = fp282;
LIBINT2_REALTYPE fp285;
fp285 = fp134 * fp94;
LIBINT2_REALTYPE fp284;
fp284 = fp285 * fp38;
target[((hsi*126+73)*1+lsi)*1] = fp284;
LIBINT2_REALTYPE fp287;
fp287 = fp138 * fp98;
LIBINT2_REALTYPE fp286;
fp286 = fp287 * fp38;
target[((hsi*126+72)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp289;
fp289 = fp131 * fp88;
LIBINT2_REALTYPE fp288;
fp288 = fp289 * fp41;
target[((hsi*126+71)*1+lsi)*1] = fp288;
LIBINT2_REALTYPE fp291;
fp291 = fp131 * fp84;
LIBINT2_REALTYPE fp290;
fp290 = fp291 * fp44;
target[((hsi*126+70)*1+lsi)*1] = fp290;
LIBINT2_REALTYPE fp293;
fp293 = fp131 * fp81;
LIBINT2_REALTYPE fp292;
fp292 = fp293 * fp48;
target[((hsi*126+69)*1+lsi)*1] = fp292;
LIBINT2_REALTYPE fp295;
fp295 = fp134 * fp88;
LIBINT2_REALTYPE fp294;
fp294 = fp295 * fp44;
target[((hsi*126+68)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp297;
fp297 = fp134 * fp84;
LIBINT2_REALTYPE fp296;
fp296 = fp297 * fp48;
target[((hsi*126+67)*1+lsi)*1] = fp296;
LIBINT2_REALTYPE fp299;
fp299 = fp138 * fp88;
LIBINT2_REALTYPE fp298;
fp298 = fp299 * fp48;
target[((hsi*126+66)*1+lsi)*1] = fp298;
LIBINT2_REALTYPE fp301;
fp301 = fp131 * fp78;
LIBINT2_REALTYPE fp300;
fp300 = fp301 * fp51;
target[((hsi*126+65)*1+lsi)*1] = fp300;
LIBINT2_REALTYPE fp303;
fp303 = fp131 * fp74;
LIBINT2_REALTYPE fp302;
fp302 = fp303 * fp54;
target[((hsi*126+64)*1+lsi)*1] = fp302;
LIBINT2_REALTYPE fp305;
fp305 = fp131 * fp71;
LIBINT2_REALTYPE fp304;
fp304 = fp305 * fp58;
target[((hsi*126+63)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp307;
fp307 = fp134 * fp78;
LIBINT2_REALTYPE fp306;
fp306 = fp307 * fp54;
target[((hsi*126+62)*1+lsi)*1] = fp306;
LIBINT2_REALTYPE fp309;
fp309 = fp134 * fp74;
LIBINT2_REALTYPE fp308;
fp308 = fp309 * fp58;
target[((hsi*126+61)*1+lsi)*1] = fp308;
LIBINT2_REALTYPE fp311;
fp311 = fp138 * fp78;
LIBINT2_REALTYPE fp310;
fp310 = fp311 * fp58;
target[((hsi*126+60)*1+lsi)*1] = fp310;
LIBINT2_REALTYPE fp143;
fp143 = 0.0000000000000000e+00 + src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = 0.0000000000000000e+00 + src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->BO_x[vi], fp140, fp143);
LIBINT2_REALTYPE fp313;
fp313 = fp141 * fp118;
LIBINT2_REALTYPE fp312;
fp312 = fp313 * fp21;
target[((hsi*126+59)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp315;
fp315 = fp141 * fp114;
LIBINT2_REALTYPE fp314;
fp314 = fp315 * fp24;
target[((hsi*126+58)*1+lsi)*1] = fp314;
LIBINT2_REALTYPE fp317;
fp317 = fp141 * fp111;
LIBINT2_REALTYPE fp316;
fp316 = fp317 * fp28;
target[((hsi*126+57)*1+lsi)*1] = fp316;
LIBINT2_REALTYPE fp146;
fp146 = 0.0000000000000000e+00 + src0[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_plus(inteval->BO_x[vi], fp143, fp146);
LIBINT2_REALTYPE fp319;
fp319 = fp144 * fp118;
LIBINT2_REALTYPE fp318;
fp318 = fp319 * fp24;
target[((hsi*126+56)*1+lsi)*1] = fp318;
LIBINT2_REALTYPE fp321;
fp321 = fp144 * fp114;
LIBINT2_REALTYPE fp320;
fp320 = fp321 * fp28;
target[((hsi*126+55)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp149;
fp149 = inteval->BO_x[vi] * fp146;
LIBINT2_REALTYPE fp147;
fp147 = 0.0000000000000000e+00 + src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = fp147 + fp149;
LIBINT2_REALTYPE fp323;
fp323 = fp148 * fp118;
LIBINT2_REALTYPE fp322;
fp322 = fp323 * fp28;
target[((hsi*126+54)*1+lsi)*1] = fp322;
LIBINT2_REALTYPE fp325;
fp325 = fp141 * fp108;
LIBINT2_REALTYPE fp324;
fp324 = fp325 * fp31;
target[((hsi*126+53)*1+lsi)*1] = fp324;
LIBINT2_REALTYPE fp327;
fp327 = fp141 * fp104;
LIBINT2_REALTYPE fp326;
fp326 = fp327 * fp34;
target[((hsi*126+52)*1+lsi)*1] = fp326;
LIBINT2_REALTYPE fp329;
fp329 = fp141 * fp101;
LIBINT2_REALTYPE fp328;
fp328 = fp329 * fp38;
target[((hsi*126+51)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp331;
fp331 = fp144 * fp108;
LIBINT2_REALTYPE fp330;
fp330 = fp331 * fp34;
target[((hsi*126+50)*1+lsi)*1] = fp330;
LIBINT2_REALTYPE fp333;
fp333 = fp144 * fp104;
LIBINT2_REALTYPE fp332;
fp332 = fp333 * fp38;
target[((hsi*126+49)*1+lsi)*1] = fp332;
LIBINT2_REALTYPE fp335;
fp335 = fp148 * fp108;
LIBINT2_REALTYPE fp334;
fp334 = fp335 * fp38;
target[((hsi*126+48)*1+lsi)*1] = fp334;
LIBINT2_REALTYPE fp337;
fp337 = fp141 * fp98;
LIBINT2_REALTYPE fp336;
fp336 = fp337 * fp41;
target[((hsi*126+47)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp339;
fp339 = fp141 * fp94;
LIBINT2_REALTYPE fp338;
fp338 = fp339 * fp44;
target[((hsi*126+46)*1+lsi)*1] = fp338;
LIBINT2_REALTYPE fp341;
fp341 = fp141 * fp91;
LIBINT2_REALTYPE fp340;
fp340 = fp341 * fp48;
target[((hsi*126+45)*1+lsi)*1] = fp340;
LIBINT2_REALTYPE fp343;
fp343 = fp144 * fp98;
LIBINT2_REALTYPE fp342;
fp342 = fp343 * fp44;
target[((hsi*126+44)*1+lsi)*1] = fp342;
LIBINT2_REALTYPE fp345;
fp345 = fp144 * fp94;
LIBINT2_REALTYPE fp344;
fp344 = fp345 * fp48;
target[((hsi*126+43)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp347;
fp347 = fp148 * fp98;
LIBINT2_REALTYPE fp346;
fp346 = fp347 * fp48;
target[((hsi*126+42)*1+lsi)*1] = fp346;
LIBINT2_REALTYPE fp349;
fp349 = fp141 * fp88;
LIBINT2_REALTYPE fp348;
fp348 = fp349 * fp51;
target[((hsi*126+41)*1+lsi)*1] = fp348;
LIBINT2_REALTYPE fp351;
fp351 = fp141 * fp84;
LIBINT2_REALTYPE fp350;
fp350 = fp351 * fp54;
target[((hsi*126+40)*1+lsi)*1] = fp350;
LIBINT2_REALTYPE fp353;
fp353 = fp141 * fp81;
LIBINT2_REALTYPE fp352;
fp352 = fp353 * fp58;
target[((hsi*126+39)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp355;
fp355 = fp144 * fp88;
LIBINT2_REALTYPE fp354;
fp354 = fp355 * fp54;
target[((hsi*126+38)*1+lsi)*1] = fp354;
LIBINT2_REALTYPE fp357;
fp357 = fp144 * fp84;
LIBINT2_REALTYPE fp356;
fp356 = fp357 * fp58;
target[((hsi*126+37)*1+lsi)*1] = fp356;
LIBINT2_REALTYPE fp359;
fp359 = fp148 * fp88;
LIBINT2_REALTYPE fp358;
fp358 = fp359 * fp58;
target[((hsi*126+36)*1+lsi)*1] = fp358;
LIBINT2_REALTYPE fp153;
fp153 = 0.0000000000000000e+00 + src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->BO_x[vi], fp150, fp153);
LIBINT2_REALTYPE fp361;
fp361 = fp151 * fp118;
LIBINT2_REALTYPE fp360;
fp360 = fp361 * fp31;
target[((hsi*126+35)*1+lsi)*1] = fp360;
LIBINT2_REALTYPE fp363;
fp363 = fp151 * fp114;
LIBINT2_REALTYPE fp362;
fp362 = fp363 * fp34;
target[((hsi*126+34)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp365;
fp365 = fp151 * fp111;
LIBINT2_REALTYPE fp364;
fp364 = fp365 * fp38;
target[((hsi*126+33)*1+lsi)*1] = fp364;
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->BO_x[vi], fp153, fp156);
LIBINT2_REALTYPE fp367;
fp367 = fp154 * fp118;
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp34;
target[((hsi*126+32)*1+lsi)*1] = fp366;
LIBINT2_REALTYPE fp369;
fp369 = fp154 * fp114;
LIBINT2_REALTYPE fp368;
fp368 = fp369 * fp38;
target[((hsi*126+31)*1+lsi)*1] = fp368;
LIBINT2_REALTYPE fp159;
fp159 = inteval->BO_x[vi] * fp156;
LIBINT2_REALTYPE fp157;
fp157 = 0.0000000000000000e+00 + src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp157 + fp159;
LIBINT2_REALTYPE fp371;
fp371 = fp158 * fp118;
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp38;
target[((hsi*126+30)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp373;
fp373 = fp151 * fp108;
LIBINT2_REALTYPE fp372;
fp372 = fp373 * fp41;
target[((hsi*126+29)*1+lsi)*1] = fp372;
LIBINT2_REALTYPE fp375;
fp375 = fp151 * fp104;
LIBINT2_REALTYPE fp374;
fp374 = fp375 * fp44;
target[((hsi*126+28)*1+lsi)*1] = fp374;
LIBINT2_REALTYPE fp377;
fp377 = fp151 * fp101;
LIBINT2_REALTYPE fp376;
fp376 = fp377 * fp48;
target[((hsi*126+27)*1+lsi)*1] = fp376;
LIBINT2_REALTYPE fp379;
fp379 = fp154 * fp108;
LIBINT2_REALTYPE fp378;
fp378 = fp379 * fp44;
target[((hsi*126+26)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp381;
fp381 = fp154 * fp104;
LIBINT2_REALTYPE fp380;
fp380 = fp381 * fp48;
target[((hsi*126+25)*1+lsi)*1] = fp380;
LIBINT2_REALTYPE fp383;
fp383 = fp158 * fp108;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp48;
target[((hsi*126+24)*1+lsi)*1] = fp382;
LIBINT2_REALTYPE fp385;
fp385 = fp151 * fp98;
LIBINT2_REALTYPE fp384;
fp384 = fp385 * fp51;
target[((hsi*126+23)*1+lsi)*1] = fp384;
LIBINT2_REALTYPE fp387;
fp387 = fp151 * fp94;
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp54;
target[((hsi*126+22)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp389;
fp389 = fp151 * fp91;
LIBINT2_REALTYPE fp388;
fp388 = fp389 * fp58;
target[((hsi*126+21)*1+lsi)*1] = fp388;
LIBINT2_REALTYPE fp391;
fp391 = fp154 * fp98;
LIBINT2_REALTYPE fp390;
fp390 = fp391 * fp54;
target[((hsi*126+20)*1+lsi)*1] = fp390;
LIBINT2_REALTYPE fp393;
fp393 = fp154 * fp94;
LIBINT2_REALTYPE fp392;
fp392 = fp393 * fp58;
target[((hsi*126+19)*1+lsi)*1] = fp392;
LIBINT2_REALTYPE fp395;
fp395 = fp158 * fp98;
LIBINT2_REALTYPE fp394;
fp394 = fp395 * fp58;
target[((hsi*126+18)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp163;
fp163 = 0.0000000000000000e+00 + src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = 0.0000000000000000e+00 + src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->BO_x[vi], fp160, fp163);
LIBINT2_REALTYPE fp397;
fp397 = fp161 * fp118;
LIBINT2_REALTYPE fp396;
fp396 = fp397 * fp41;
target[((hsi*126+17)*1+lsi)*1] = fp396;
LIBINT2_REALTYPE fp399;
fp399 = fp161 * fp114;
LIBINT2_REALTYPE fp398;
fp398 = fp399 * fp44;
target[((hsi*126+16)*1+lsi)*1] = fp398;
LIBINT2_REALTYPE fp401;
fp401 = fp161 * fp111;
LIBINT2_REALTYPE fp400;
fp400 = fp401 * fp48;
target[((hsi*126+15)*1+lsi)*1] = fp400;
LIBINT2_REALTYPE fp166;
fp166 = 0.0000000000000000e+00 + src0[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->BO_x[vi], fp163, fp166);
LIBINT2_REALTYPE fp403;
fp403 = fp164 * fp118;
LIBINT2_REALTYPE fp402;
fp402 = fp403 * fp44;
target[((hsi*126+14)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp405;
fp405 = fp164 * fp114;
LIBINT2_REALTYPE fp404;
fp404 = fp405 * fp48;
target[((hsi*126+13)*1+lsi)*1] = fp404;
LIBINT2_REALTYPE fp169;
fp169 = inteval->BO_x[vi] * fp166;
LIBINT2_REALTYPE fp167;
fp167 = 0.0000000000000000e+00 + src0[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp167 + fp169;
LIBINT2_REALTYPE fp407;
fp407 = fp168 * fp118;
LIBINT2_REALTYPE fp406;
fp406 = fp407 * fp48;
target[((hsi*126+12)*1+lsi)*1] = fp406;
LIBINT2_REALTYPE fp409;
fp409 = fp161 * fp108;
LIBINT2_REALTYPE fp408;
fp408 = fp409 * fp51;
target[((hsi*126+11)*1+lsi)*1] = fp408;
LIBINT2_REALTYPE fp411;
fp411 = fp161 * fp104;
LIBINT2_REALTYPE fp410;
fp410 = fp411 * fp54;
target[((hsi*126+10)*1+lsi)*1] = fp410;
LIBINT2_REALTYPE fp413;
fp413 = fp161 * fp101;
LIBINT2_REALTYPE fp412;
fp412 = fp413 * fp58;
target[((hsi*126+9)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp415;
fp415 = fp164 * fp108;
LIBINT2_REALTYPE fp414;
fp414 = fp415 * fp54;
target[((hsi*126+8)*1+lsi)*1] = fp414;
LIBINT2_REALTYPE fp417;
fp417 = fp164 * fp104;
LIBINT2_REALTYPE fp416;
fp416 = fp417 * fp58;
target[((hsi*126+7)*1+lsi)*1] = fp416;
LIBINT2_REALTYPE fp419;
fp419 = fp168 * fp108;
LIBINT2_REALTYPE fp418;
fp418 = fp419 * fp58;
target[((hsi*126+6)*1+lsi)*1] = fp418;
LIBINT2_REALTYPE fp173;
fp173 = 0.0000000000000000e+00 + src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = 0.0000000000000000e+00 + src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_plus(inteval->BO_x[vi], fp170, fp173);
LIBINT2_REALTYPE fp421;
fp421 = fp171 * fp118;
LIBINT2_REALTYPE fp420;
fp420 = fp421 * fp51;
target[((hsi*126+5)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp423;
fp423 = fp171 * fp114;
LIBINT2_REALTYPE fp422;
fp422 = fp423 * fp54;
target[((hsi*126+4)*1+lsi)*1] = fp422;
LIBINT2_REALTYPE fp425;
fp425 = fp171 * fp111;
LIBINT2_REALTYPE fp424;
fp424 = fp425 * fp58;
target[((hsi*126+3)*1+lsi)*1] = fp424;
LIBINT2_REALTYPE fp176;
fp176 = 0.0000000000000000e+00 + src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp174;
fp174 = libint2::fma_plus(inteval->BO_x[vi], fp173, fp176);
LIBINT2_REALTYPE fp427;
fp427 = fp174 * fp118;
LIBINT2_REALTYPE fp426;
fp426 = fp427 * fp54;
target[((hsi*126+2)*1+lsi)*1] = fp426;
LIBINT2_REALTYPE fp429;
fp429 = fp174 * fp114;
LIBINT2_REALTYPE fp428;
fp428 = fp429 * fp58;
target[((hsi*126+1)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp179;
fp179 = inteval->BO_x[vi] * fp176;
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = fp177 + fp179;
LIBINT2_REALTYPE fp431;
fp431 = fp178 * fp118;
LIBINT2_REALTYPE fp430;
fp430 = fp431 * fp58;
target[((hsi*126+0)*1+lsi)*1] = fp430;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 432 */
}

#ifdef __cplusplus
};
#endif
