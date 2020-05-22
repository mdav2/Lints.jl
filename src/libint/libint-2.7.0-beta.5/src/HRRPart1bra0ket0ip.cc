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
void HRRPart1bra0ket0ip(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_y[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*36+11)*1+lsi)*1] + fp123;
target[((hsi*84+22)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*36+12)*1+lsi)*1] + fp121;
target[((hsi*84+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*36+8)*1+lsi)*1] + fp119;
target[((hsi*84+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*36+12)*1+lsi)*1] + fp117;
target[((hsi*84+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_z[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*36+13)*1+lsi)*1] + fp115;
target[((hsi*84+26)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_x[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*36+9)*1+lsi)*1] + fp113;
target[((hsi*84+27)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_y[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*36+13)*1+lsi)*1] + fp111;
target[((hsi*84+28)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_z[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*36+14)*1+lsi)*1] + fp109;
target[((hsi*84+29)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_x[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*36+10)*1+lsi)*1] + fp107;
target[((hsi*84+30)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_x[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*36+0)*1+lsi)*1] + fp167;
target[((hsi*84+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_z[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*36+16)*1+lsi)*1] + fp103;
target[((hsi*84+32)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_x[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*36+11)*1+lsi)*1] + fp101;
target[((hsi*84+33)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_y[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*36+16)*1+lsi)*1] + fp99;
target[((hsi*84+34)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*36+17)*1+lsi)*1] + fp97;
target[((hsi*84+35)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_x[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*36+12)*1+lsi)*1] + fp95;
target[((hsi*84+36)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_y[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*36+17)*1+lsi)*1] + fp93;
target[((hsi*84+37)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_z[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*36+18)*1+lsi)*1] + fp91;
target[((hsi*84+38)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*36+13)*1+lsi)*1] + fp89;
target[((hsi*84+39)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*36+18)*1+lsi)*1] + fp87;
target[((hsi*84+40)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_z[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*36+19)*1+lsi)*1] + fp85;
target[((hsi*84+41)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_y[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*36+15)*1+lsi)*1] + fp105;
target[((hsi*84+31)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_y[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*36+1)*1+lsi)*1] + fp165;
target[((hsi*84+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_z[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*36+2)*1+lsi)*1] + fp163;
target[((hsi*84+2)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_x[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*36+1)*1+lsi)*1] + fp161;
target[((hsi*84+3)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_y[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*36+3)*1+lsi)*1] + fp159;
target[((hsi*84+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_z[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*36+4)*1+lsi)*1] + fp157;
target[((hsi*84+5)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_x[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*36+2)*1+lsi)*1] + fp155;
target[((hsi*84+6)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_y[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*36+4)*1+lsi)*1] + fp153;
target[((hsi*84+7)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_z[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*36+5)*1+lsi)*1] + fp151;
target[((hsi*84+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*36+3)*1+lsi)*1] + fp149;
target[((hsi*84+9)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_x[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*36+7)*1+lsi)*1] + fp125;
target[((hsi*84+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_z[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*36+7)*1+lsi)*1] + fp145;
target[((hsi*84+11)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_x[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*36+4)*1+lsi)*1] + fp143;
target[((hsi*84+12)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_y[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*36+7)*1+lsi)*1] + fp141;
target[((hsi*84+13)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_z[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*36+8)*1+lsi)*1] + fp139;
target[((hsi*84+14)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_x[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*36+5)*1+lsi)*1] + fp137;
target[((hsi*84+15)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*36+8)*1+lsi)*1] + fp135;
target[((hsi*84+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_z[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*36+9)*1+lsi)*1] + fp133;
target[((hsi*84+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_x[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*36+6)*1+lsi)*1] + fp131;
target[((hsi*84+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_y[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*36+10)*1+lsi)*1] + fp129;
target[((hsi*84+19)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_z[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*36+11)*1+lsi)*1] + fp127;
target[((hsi*84+20)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_y[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*36+6)*1+lsi)*1] + fp147;
target[((hsi*84+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*36+28)*1+lsi)*1] + fp39;
target[((hsi*84+64)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_z[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*36+29)*1+lsi)*1] + fp37;
target[((hsi*84+65)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_x[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*36+22)*1+lsi)*1] + fp35;
target[((hsi*84+66)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_y[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*36+29)*1+lsi)*1] + fp33;
target[((hsi*84+67)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*36+30)*1+lsi)*1] + fp31;
target[((hsi*84+68)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_x[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*36+23)*1+lsi)*1] + fp29;
target[((hsi*84+69)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*36+30)*1+lsi)*1] + fp27;
target[((hsi*84+70)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*36+31)*1+lsi)*1] + fp25;
target[((hsi*84+71)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_x[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*36+24)*1+lsi)*1] + fp23;
target[((hsi*84+72)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_x[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*36+14)*1+lsi)*1] + fp83;
target[((hsi*84+42)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_z[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*36+32)*1+lsi)*1] + fp19;
target[((hsi*84+74)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_x[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*36+25)*1+lsi)*1] + fp17;
target[((hsi*84+75)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*36+32)*1+lsi)*1] + fp15;
target[((hsi*84+76)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*36+33)*1+lsi)*1] + fp13;
target[((hsi*84+77)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_x[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*36+26)*1+lsi)*1] + fp11;
target[((hsi*84+78)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*36+33)*1+lsi)*1] + fp9;
target[((hsi*84+79)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_z[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*36+34)*1+lsi)*1] + fp7;
target[((hsi*84+80)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_x[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*36+27)*1+lsi)*1] + fp5;
target[((hsi*84+81)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_y[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*36+34)*1+lsi)*1] + fp3;
target[((hsi*84+82)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*36+35)*1+lsi)*1] + fp1;
target[((hsi*84+83)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_y[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*36+31)*1+lsi)*1] + fp21;
target[((hsi*84+73)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_y[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*36+19)*1+lsi)*1] + fp81;
target[((hsi*84+43)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_z[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*36+20)*1+lsi)*1] + fp79;
target[((hsi*84+44)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_x[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*36+15)*1+lsi)*1] + fp77;
target[((hsi*84+45)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_y[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*36+21)*1+lsi)*1] + fp75;
target[((hsi*84+46)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*36+22)*1+lsi)*1] + fp73;
target[((hsi*84+47)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*36+16)*1+lsi)*1] + fp71;
target[((hsi*84+48)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_y[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*36+22)*1+lsi)*1] + fp69;
target[((hsi*84+49)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_z[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*36+23)*1+lsi)*1] + fp67;
target[((hsi*84+50)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_x[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*36+17)*1+lsi)*1] + fp65;
target[((hsi*84+51)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_x[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*36+21)*1+lsi)*1] + fp41;
target[((hsi*84+63)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_z[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*36+24)*1+lsi)*1] + fp61;
target[((hsi*84+53)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_x[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*36+18)*1+lsi)*1] + fp59;
target[((hsi*84+54)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_y[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*36+24)*1+lsi)*1] + fp57;
target[((hsi*84+55)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_z[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*36+25)*1+lsi)*1] + fp55;
target[((hsi*84+56)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_x[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*36+19)*1+lsi)*1] + fp53;
target[((hsi*84+57)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_y[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*36+25)*1+lsi)*1] + fp51;
target[((hsi*84+58)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*36+26)*1+lsi)*1] + fp49;
target[((hsi*84+59)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_x[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*36+20)*1+lsi)*1] + fp47;
target[((hsi*84+60)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*36+26)*1+lsi)*1] + fp45;
target[((hsi*84+61)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*36+27)*1+lsi)*1] + fp43;
target[((hsi*84+62)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_y[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*36+23)*1+lsi)*1] + fp63;
target[((hsi*84+52)*1+lsi)*1] = fp62;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
