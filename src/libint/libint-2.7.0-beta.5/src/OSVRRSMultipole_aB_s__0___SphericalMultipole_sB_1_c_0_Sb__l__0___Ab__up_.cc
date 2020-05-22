/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_1_c_0_Sb__l__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp133;
fp133 = 5.0000000000000000e+00 * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = 0.0000000000000000e+00 + fp133;
LIBINT2_REALTYPE fp131;
fp131 = inteval->oo2z[vi] * fp132;
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_y[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp134 + fp131;
target[((hsi*45+21)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp139;
fp139 = 4.0000000000000000e+00 * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = 0.0000000000000000e+00 + fp139;
LIBINT2_REALTYPE fp137;
fp137 = fp138 + src2[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = inteval->oo2z[vi] * fp137;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PB_z[vi] * src0[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp140 + fp136;
target[((hsi*45+20)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp145;
fp145 = 3.0000000000000000e+00 * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = 0.0000000000000000e+00 + fp145;
LIBINT2_REALTYPE fp143;
fp143 = fp144 + src2[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->oo2z[vi] * fp143;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_z[vi] * src0[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp146 + fp142;
target[((hsi*45+19)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp151;
fp151 = 2.0000000000000000e+00 * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 0.0000000000000000e+00 + fp151;
LIBINT2_REALTYPE fp149;
fp149 = fp150 + src2[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->oo2z[vi] * fp149;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PB_z[vi] * src0[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp152 + fp148;
target[((hsi*45+18)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp157;
fp157 = 1.0000000000000000e+00 * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = 0.0000000000000000e+00 + fp157;
LIBINT2_REALTYPE fp155;
fp155 = fp156 + src2[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->oo2z[vi] * fp155;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PB_z[vi] * src0[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp158 + fp154;
target[((hsi*45+17)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp161;
fp161 = 0.0000000000000000e+00 + src2[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->oo2z[vi] * fp161;
LIBINT2_REALTYPE fp162;
fp162 = inteval->PB_z[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp162 + fp160;
target[((hsi*45+16)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp166;
fp166 = 4.0000000000000000e+00 * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = 0.0000000000000000e+00 + fp166;
LIBINT2_REALTYPE fp164;
fp164 = inteval->oo2z[vi] * fp165;
LIBINT2_REALTYPE fp167;
fp167 = inteval->PB_y[vi] * src0[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp167 + fp164;
target[((hsi*45+15)*1+lsi)*1] = fp163;
LIBINT2_REALTYPE fp172;
fp172 = 3.0000000000000000e+00 * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = 0.0000000000000000e+00 + fp172;
LIBINT2_REALTYPE fp170;
fp170 = fp171 + src2[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = inteval->oo2z[vi] * fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->PB_z[vi] * src0[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = fp173 + fp169;
target[((hsi*45+14)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp178;
fp178 = 2.0000000000000000e+00 * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = 0.0000000000000000e+00 + fp178;
LIBINT2_REALTYPE fp176;
fp176 = fp177 + src2[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->oo2z[vi] * fp176;
LIBINT2_REALTYPE fp179;
fp179 = inteval->PB_z[vi] * src0[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = fp179 + fp175;
target[((hsi*45+13)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp184;
fp184 = 1.0000000000000000e+00 * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = 0.0000000000000000e+00 + fp184;
LIBINT2_REALTYPE fp182;
fp182 = fp183 + src2[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->oo2z[vi] * fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->PB_z[vi] * src0[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = fp185 + fp181;
target[((hsi*45+12)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp239;
fp239 = 7.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = 0.0000000000000000e+00 + fp239;
LIBINT2_REALTYPE fp237;
fp237 = inteval->oo2z[vi] * fp238;
LIBINT2_REALTYPE fp240;
fp240 = inteval->PB_x[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp236;
fp236 = fp240 + fp237;
target[((hsi*45+0)*1+lsi)*1] = fp236;
LIBINT2_REALTYPE fp193;
fp193 = 3.0000000000000000e+00 * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = 0.0000000000000000e+00 + fp193;
LIBINT2_REALTYPE fp191;
fp191 = inteval->oo2z[vi] * fp192;
LIBINT2_REALTYPE fp194;
fp194 = inteval->PB_y[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = fp194 + fp191;
target[((hsi*45+10)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp199;
fp199 = 2.0000000000000000e+00 * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = 0.0000000000000000e+00 + fp199;
LIBINT2_REALTYPE fp197;
fp197 = fp198 + src2[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = inteval->oo2z[vi] * fp197;
LIBINT2_REALTYPE fp200;
fp200 = inteval->PB_z[vi] * src0[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = fp200 + fp196;
target[((hsi*45+9)*1+lsi)*1] = fp195;
LIBINT2_REALTYPE fp205;
fp205 = 1.0000000000000000e+00 * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = 0.0000000000000000e+00 + fp205;
LIBINT2_REALTYPE fp203;
fp203 = fp204 + src2[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = inteval->oo2z[vi] * fp203;
LIBINT2_REALTYPE fp206;
fp206 = inteval->PB_z[vi] * src0[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp206 + fp202;
target[((hsi*45+8)*1+lsi)*1] = fp201;
LIBINT2_REALTYPE fp209;
fp209 = 0.0000000000000000e+00 + src2[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = inteval->oo2z[vi] * fp209;
LIBINT2_REALTYPE fp210;
fp210 = inteval->PB_z[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp210 + fp208;
target[((hsi*45+7)*1+lsi)*1] = fp207;
LIBINT2_REALTYPE fp214;
fp214 = 2.0000000000000000e+00 * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp213;
fp213 = 0.0000000000000000e+00 + fp214;
LIBINT2_REALTYPE fp212;
fp212 = inteval->oo2z[vi] * fp213;
LIBINT2_REALTYPE fp215;
fp215 = inteval->PB_y[vi] * src0[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = fp215 + fp212;
target[((hsi*45+6)*1+lsi)*1] = fp211;
LIBINT2_REALTYPE fp220;
fp220 = 1.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = 0.0000000000000000e+00 + fp220;
LIBINT2_REALTYPE fp218;
fp218 = fp219 + src2[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = inteval->oo2z[vi] * fp218;
LIBINT2_REALTYPE fp221;
fp221 = inteval->PB_z[vi] * src0[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = fp221 + fp217;
target[((hsi*45+5)*1+lsi)*1] = fp216;
LIBINT2_REALTYPE fp224;
fp224 = 0.0000000000000000e+00 + src2[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp223;
fp223 = inteval->oo2z[vi] * fp224;
LIBINT2_REALTYPE fp225;
fp225 = inteval->PB_z[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = fp225 + fp223;
target[((hsi*45+4)*1+lsi)*1] = fp222;
LIBINT2_REALTYPE fp229;
fp229 = 1.0000000000000000e+00 * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp228;
fp228 = 0.0000000000000000e+00 + fp229;
LIBINT2_REALTYPE fp227;
fp227 = inteval->oo2z[vi] * fp228;
LIBINT2_REALTYPE fp230;
fp230 = inteval->PB_y[vi] * src0[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = fp230 + fp227;
target[((hsi*45+3)*1+lsi)*1] = fp226;
LIBINT2_REALTYPE fp233;
fp233 = 0.0000000000000000e+00 + src2[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->oo2z[vi] * fp233;
LIBINT2_REALTYPE fp234;
fp234 = inteval->PB_z[vi] * src0[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp231;
fp231 = fp234 + fp232;
target[((hsi*45+2)*1+lsi)*1] = fp231;
LIBINT2_REALTYPE fp235;
fp235 = inteval->PB_y[vi] * src0[((hsi*36+0)*1+lsi)*1];
target[((hsi*45+1)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp188;
fp188 = 0.0000000000000000e+00 + src2[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->oo2z[vi] * fp188;
LIBINT2_REALTYPE fp189;
fp189 = inteval->PB_z[vi] * src0[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = fp189 + fp187;
target[((hsi*45+11)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp4;
fp4 = 7.0000000000000000e+00 * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src2[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PB_z[vi] * src0[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*45+44)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 6.0000000000000000e+00 * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src2[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PB_z[vi] * src0[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*45+43)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp16;
fp16 = 5.0000000000000000e+00 * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp15 + src2[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->PB_z[vi] * src0[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp17 + fp13;
target[((hsi*45+42)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp22;
fp22 = 4.0000000000000000e+00 * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp21 + src2[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->PB_z[vi] * src0[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*45+41)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp28;
fp28 = 3.0000000000000000e+00 * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + src2[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * src0[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*45+40)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp33 + src2[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PB_z[vi] * src0[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*45+39)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp39 + src2[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PB_z[vi] * src0[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp41 + fp37;
target[((hsi*45+38)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src2[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PB_z[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*45+37)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp49;
fp49 = 7.0000000000000000e+00 * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2z[vi] * fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_y[vi] * src0[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp50 + fp47;
target[((hsi*45+36)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp55;
fp55 = 6.0000000000000000e+00 * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 0.0000000000000000e+00 + fp55;
LIBINT2_REALTYPE fp53;
fp53 = fp54 + src2[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PB_z[vi] * src0[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp56 + fp52;
target[((hsi*45+35)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp128;
fp128 = 0.0000000000000000e+00 + src2[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->oo2z[vi] * fp128;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PB_z[vi] * src0[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = fp129 + fp127;
target[((hsi*45+22)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp67;
fp67 = 4.0000000000000000e+00 * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = 0.0000000000000000e+00 + fp67;
LIBINT2_REALTYPE fp65;
fp65 = fp66 + src2[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->PB_z[vi] * src0[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp68 + fp64;
target[((hsi*45+33)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp73;
fp73 = 3.0000000000000000e+00 * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + fp73;
LIBINT2_REALTYPE fp71;
fp71 = fp72 + src2[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->oo2z[vi] * fp71;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PB_z[vi] * src0[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp74 + fp70;
target[((hsi*45+32)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp79;
fp79 = 2.0000000000000000e+00 * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + fp79;
LIBINT2_REALTYPE fp77;
fp77 = fp78 + src2[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->oo2z[vi] * fp77;
LIBINT2_REALTYPE fp80;
fp80 = inteval->PB_z[vi] * src0[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp80 + fp76;
target[((hsi*45+31)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = 0.0000000000000000e+00 + fp85;
LIBINT2_REALTYPE fp83;
fp83 = fp84 + src2[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp86;
fp86 = inteval->PB_z[vi] * src0[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = fp86 + fp82;
target[((hsi*45+30)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src2[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = inteval->oo2z[vi] * fp89;
LIBINT2_REALTYPE fp90;
fp90 = inteval->PB_z[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp90 + fp88;
target[((hsi*45+29)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp94;
fp94 = 6.0000000000000000e+00 * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + fp94;
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp95;
fp95 = inteval->PB_y[vi] * src0[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = fp95 + fp92;
target[((hsi*45+28)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp100;
fp100 = 5.0000000000000000e+00 * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + fp100;
LIBINT2_REALTYPE fp98;
fp98 = fp99 + src2[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->oo2z[vi] * fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PB_z[vi] * src0[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = fp101 + fp97;
target[((hsi*45+27)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp106;
fp106 = 4.0000000000000000e+00 * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 0.0000000000000000e+00 + fp106;
LIBINT2_REALTYPE fp104;
fp104 = fp105 + src2[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->oo2z[vi] * fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PB_z[vi] * src0[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp107 + fp103;
target[((hsi*45+26)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp112;
fp112 = 3.0000000000000000e+00 * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = 0.0000000000000000e+00 + fp112;
LIBINT2_REALTYPE fp110;
fp110 = fp111 + src2[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->PB_z[vi] * src0[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = fp113 + fp109;
target[((hsi*45+25)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp118;
fp118 = 2.0000000000000000e+00 * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = 0.0000000000000000e+00 + fp118;
LIBINT2_REALTYPE fp116;
fp116 = fp117 + src2[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->PB_z[vi] * src0[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp119 + fp115;
target[((hsi*45+24)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp124;
fp124 = 1.0000000000000000e+00 * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + fp124;
LIBINT2_REALTYPE fp122;
fp122 = fp123 + src2[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->oo2z[vi] * fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->PB_z[vi] * src0[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = fp125 + fp121;
target[((hsi*45+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp61;
fp61 = 5.0000000000000000e+00 * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + fp61;
LIBINT2_REALTYPE fp59;
fp59 = fp60 + src2[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_z[vi] * src0[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = fp62 + fp58;
target[((hsi*45+34)*1+lsi)*1] = fp57;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 241 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif