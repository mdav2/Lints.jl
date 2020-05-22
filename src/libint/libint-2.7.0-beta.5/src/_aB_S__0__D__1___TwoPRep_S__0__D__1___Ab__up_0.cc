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
#include <_aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_z[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->stack[((hsi*1+17)*1+lsi)*1] + fp45;
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_z[vi] * fp44;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_z[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->stack[((hsi*1+18)*1+lsi)*1] + fp41;
LIBINT2_REALTYPE fp122;
fp122 = fp40 + fp123;
inteval->stack[((hsi*36+48)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_y[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp49;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_z[vi] * fp48;
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_y[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp43;
LIBINT2_REALTYPE fp124;
fp124 = fp42 + fp125;
inteval->stack[((hsi*36+47)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_y[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->stack[((hsi*1+14)*1+lsi)*1] + fp55;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_y[vi] * fp48;
LIBINT2_REALTYPE fp126;
fp126 = fp54 + fp127;
inteval->stack[((hsi*36+46)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_x[vi] * inteval->stack[((hsi*1+17)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->stack[((hsi*1+9)*1+lsi)*1] + fp47;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_x[vi] * inteval->stack[((hsi*1+16)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->stack[((hsi*1+6)*1+lsi)*1] + fp51;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_z[vi] * fp50;
LIBINT2_REALTYPE fp128;
fp128 = fp46 + fp129;
inteval->stack[((hsi*36+45)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_x[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = inteval->stack[((hsi*1+8)*1+lsi)*1] + fp61;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_y[vi] * fp50;
LIBINT2_REALTYPE fp130;
fp130 = fp60 + fp131;
inteval->stack[((hsi*36+44)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_x[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->stack[((hsi*1+5)*1+lsi)*1] + fp77;
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_x[vi] * fp50;
LIBINT2_REALTYPE fp132;
fp132 = fp76 + fp133;
inteval->stack[((hsi*36+43)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_z[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp59;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_z[vi] * fp58;
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_z[vi] * inteval->stack[((hsi*1+12)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp53;
LIBINT2_REALTYPE fp134;
fp134 = fp52 + fp135;
inteval->stack[((hsi*36+42)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_y[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->stack[((hsi*1+11)*1+lsi)*1] + fp63;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_z[vi] * fp62;
LIBINT2_REALTYPE fp136;
fp136 = fp54 + fp137;
inteval->stack[((hsi*36+41)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_x[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = inteval->stack[((hsi*1+1)*1+lsi)*1] + fp83;
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_x[vi] * fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_x[vi] * inteval->stack[((hsi*1+1)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->stack[((hsi*1+0)*1+lsi)*1] + fp85;
LIBINT2_REALTYPE fp156;
fp156 = fp84 + fp157;
inteval->stack[((hsi*36+31)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_x[vi] * inteval->stack[((hsi*1+10)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->stack[((hsi*1+4)*1+lsi)*1] + fp67;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_z[vi] * fp66;
LIBINT2_REALTYPE fp140;
fp140 = fp60 + fp141;
inteval->stack[((hsi*36+39)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_x[vi] * inteval->stack[((hsi*1+11)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->stack[((hsi*1+7)*1+lsi)*1] + fp65;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_y[vi] * fp66;
LIBINT2_REALTYPE fp142;
fp142 = fp64 + fp143;
inteval->stack[((hsi*36+38)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_x[vi] * inteval->stack[((hsi*1+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = inteval->stack[((hsi*1+3)*1+lsi)*1] + fp81;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_x[vi] * fp66;
LIBINT2_REALTYPE fp144;
fp144 = fp80 + fp145;
inteval->stack[((hsi*36+37)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_z[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->stack[((hsi*1+6)*1+lsi)*1] + fp75;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_z[vi] * fp74;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_z[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = inteval->stack[((hsi*1+9)*1+lsi)*1] + fp69;
LIBINT2_REALTYPE fp146;
fp146 = fp68 + fp147;
inteval->stack[((hsi*36+36)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_y[vi] * inteval->stack[((hsi*1+2)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->stack[((hsi*1+4)*1+lsi)*1] + fp79;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_z[vi] * fp78;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_y[vi] * inteval->stack[((hsi*1+6)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->stack[((hsi*1+8)*1+lsi)*1] + fp71;
LIBINT2_REALTYPE fp148;
fp148 = fp70 + fp149;
inteval->stack[((hsi*36+35)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_y[vi] * fp78;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_y[vi] * inteval->stack[((hsi*1+4)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = inteval->stack[((hsi*1+7)*1+lsi)*1] + fp73;
LIBINT2_REALTYPE fp150;
fp150 = fp72 + fp151;
inteval->stack[((hsi*36+34)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_z[vi] * fp82;
LIBINT2_REALTYPE fp152;
fp152 = fp76 + fp153;
inteval->stack[((hsi*36+33)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_y[vi] * fp82;
LIBINT2_REALTYPE fp154;
fp154 = fp80 + fp155;
inteval->stack[((hsi*36+32)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_y[vi] * fp62;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_y[vi] * inteval->stack[((hsi*1+11)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->stack[((hsi*1+13)*1+lsi)*1] + fp57;
LIBINT2_REALTYPE fp138;
fp138 = fp56 + fp139;
inteval->stack[((hsi*36+40)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_z[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->stack[((hsi*1+29)*1+lsi)*1] + fp5;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_z[vi] * fp4;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = inteval->stack[((hsi*1+30)*1+lsi)*1] + fp1;
LIBINT2_REALTYPE fp86;
fp86 = fp0 + fp87;
inteval->stack[((hsi*36+66)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->stack[((hsi*1+26)*1+lsi)*1] + fp9;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_z[vi] * fp8;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_y[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->stack[((hsi*1+27)*1+lsi)*1] + fp3;
LIBINT2_REALTYPE fp88;
fp88 = fp2 + fp89;
inteval->stack[((hsi*36+65)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->stack[((hsi*1+24)*1+lsi)*1] + fp15;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_y[vi] * fp8;
LIBINT2_REALTYPE fp90;
fp90 = fp14 + fp91;
inteval->stack[((hsi*36+64)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_x[vi] * inteval->stack[((hsi*1+28)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->stack[((hsi*1+17)*1+lsi)*1] + fp11;
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_z[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_x[vi] * inteval->stack[((hsi*1+29)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->stack[((hsi*1+18)*1+lsi)*1] + fp7;
LIBINT2_REALTYPE fp92;
fp92 = fp6 + fp93;
inteval->stack[((hsi*36+63)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_x[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->stack[((hsi*1+15)*1+lsi)*1] + fp19;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_y[vi] * fp10;
LIBINT2_REALTYPE fp94;
fp94 = fp18 + fp95;
inteval->stack[((hsi*36+62)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_x[vi] * fp10;
LIBINT2_REALTYPE fp96;
fp96 = fp46 + fp97;
inteval->stack[((hsi*36+61)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_z[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->stack[((hsi*1+26)*1+lsi)*1] + fp17;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * inteval->stack[((hsi*1+26)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->stack[((hsi*1+27)*1+lsi)*1] + fp13;
LIBINT2_REALTYPE fp98;
fp98 = fp12 + fp99;
inteval->stack[((hsi*36+60)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_y[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->stack[((hsi*1+21)*1+lsi)*1] + fp21;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_z[vi] * fp20;
LIBINT2_REALTYPE fp100;
fp100 = fp14 + fp101;
inteval->stack[((hsi*36+59)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_x[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = inteval->stack[((hsi*1+11)*1+lsi)*1] + fp39;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_x[vi] * fp38;
LIBINT2_REALTYPE fp120;
fp120 = fp64 + fp121;
inteval->stack[((hsi*36+49)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_x[vi] * inteval->stack[((hsi*1+25)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->stack[((hsi*1+12)*1+lsi)*1] + fp23;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_z[vi] * fp22;
LIBINT2_REALTYPE fp104;
fp104 = fp18 + fp105;
inteval->stack[((hsi*36+57)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_x[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->stack[((hsi*1+14)*1+lsi)*1] + fp33;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_y[vi] * fp22;
LIBINT2_REALTYPE fp106;
fp106 = fp32 + fp107;
inteval->stack[((hsi*36+56)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_x[vi] * fp22;
LIBINT2_REALTYPE fp108;
fp108 = fp60 + fp109;
inteval->stack[((hsi*36+55)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->stack[((hsi*1+21)*1+lsi)*1] + fp31;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_z[vi] * fp30;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->stack[((hsi*1+24)*1+lsi)*1] + fp25;
LIBINT2_REALTYPE fp110;
fp110 = fp24 + fp111;
inteval->stack[((hsi*36+54)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * inteval->stack[((hsi*1+21)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->stack[((hsi*1+23)*1+lsi)*1] + fp27;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_y[vi] * inteval->stack[((hsi*1+19)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->stack[((hsi*1+20)*1+lsi)*1] + fp35;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_z[vi] * fp34;
LIBINT2_REALTYPE fp112;
fp112 = fp26 + fp113;
inteval->stack[((hsi*36+53)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_y[vi] * fp34;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_y[vi] * inteval->stack[((hsi*1+20)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->stack[((hsi*1+22)*1+lsi)*1] + fp29;
LIBINT2_REALTYPE fp114;
fp114 = fp28 + fp115;
inteval->stack[((hsi*36+52)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_z[vi] * fp38;
LIBINT2_REALTYPE fp116;
fp116 = fp32 + fp117;
inteval->stack[((hsi*36+51)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_y[vi] * fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_x[vi] * inteval->stack[((hsi*1+20)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->stack[((hsi*1+13)*1+lsi)*1] + fp37;
LIBINT2_REALTYPE fp118;
fp118 = fp36 + fp119;
inteval->stack[((hsi*36+50)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_y[vi] * fp20;
LIBINT2_REALTYPE fp102;
fp102 = fp26 + fp103;
inteval->stack[((hsi*36+58)*1+lsi)*1] = fp102;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36+31)*1+lsi)*1]);
/** Number of flops = 158 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
