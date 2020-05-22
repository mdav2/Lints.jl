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
void CR_aB_s__0___CartesianMultipole_sB_1_c_1_c_1_Sb__k__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src2[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp15 + fp17;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src0[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = 0.0000000000000000e+00 + src0[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->BO_x[vi] * fp56;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*11+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->BO_y[vi] * fp40;
LIBINT2_REALTYPE fp38;
fp38 = fp37 + fp39;
LIBINT2_REALTYPE fp112;
fp112 = fp57 * fp38;
LIBINT2_REALTYPE fp111;
fp111 = fp112 * fp16;
target[((hsi*36+17)*1+lsi)*1] = fp111;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src2[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_z[vi] * fp21;
LIBINT2_REALTYPE fp19;
fp19 = fp18 + fp20;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_y[vi] * fp37;
LIBINT2_REALTYPE fp35;
fp35 = fp34 + fp36;
LIBINT2_REALTYPE fp114;
fp114 = fp57 * fp35;
LIBINT2_REALTYPE fp113;
fp113 = fp114 * fp19;
target[((hsi*36+16)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_z[vi] * fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp21 + fp24;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp31 + fp33;
LIBINT2_REALTYPE fp116;
fp116 = fp57 * fp32;
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp23;
target[((hsi*36+15)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->BO_z[vi] * fp12;
LIBINT2_REALTYPE fp10;
fp10 = fp9 + fp11;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src1[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 0.0000000000000000e+00 + src1[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->BO_y[vi] * fp47;
LIBINT2_REALTYPE fp48;
fp48 = fp46 + fp49;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*11+4)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->BO_x[vi] * fp59;
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
LIBINT2_REALTYPE fp118;
fp118 = fp60 * fp48;
LIBINT2_REALTYPE fp117;
fp117 = fp118 * fp10;
target[((hsi*36+14)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_z[vi] * fp15;
LIBINT2_REALTYPE fp13;
fp13 = fp12 + fp14;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*11+2)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->BO_y[vi] * fp46;
LIBINT2_REALTYPE fp44;
fp44 = fp43 + fp45;
LIBINT2_REALTYPE fp120;
fp120 = fp60 * fp44;
LIBINT2_REALTYPE fp119;
fp119 = fp120 * fp13;
target[((hsi*36+13)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp42;
fp42 = inteval->BO_y[vi] * fp43;
LIBINT2_REALTYPE fp41;
fp41 = fp40 + fp42;
LIBINT2_REALTYPE fp122;
fp122 = fp60 * fp41;
LIBINT2_REALTYPE fp121;
fp121 = fp122 * fp16;
target[((hsi*36+12)*1+lsi)*1] = fp121;
LIBINT2_REALTYPE fp124;
fp124 = fp60 * fp38;
LIBINT2_REALTYPE fp123;
fp123 = fp124 * fp19;
target[((hsi*36+11)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp126;
fp126 = fp60 * fp35;
LIBINT2_REALTYPE fp125;
fp125 = fp126 * fp23;
target[((hsi*36+10)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = inteval->BO_x[vi] * fp72;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp71 + fp74;
LIBINT2_REALTYPE fp146;
fp146 = fp73 * fp48;
LIBINT2_REALTYPE fp145;
fp145 = fp146 * fp23;
target[((hsi*36+0)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*11+5)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_x[vi] * fp62;
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp130;
fp130 = fp63 * fp44;
LIBINT2_REALTYPE fp129;
fp129 = fp130 * fp16;
target[((hsi*36+8)*1+lsi)*1] = fp129;
LIBINT2_REALTYPE fp132;
fp132 = fp63 * fp41;
LIBINT2_REALTYPE fp131;
fp131 = fp132 * fp19;
target[((hsi*36+7)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp134;
fp134 = fp63 * fp38;
LIBINT2_REALTYPE fp133;
fp133 = fp134 * fp23;
target[((hsi*36+6)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->BO_x[vi] * fp65;
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
LIBINT2_REALTYPE fp136;
fp136 = fp66 * fp48;
LIBINT2_REALTYPE fp135;
fp135 = fp136 * fp16;
target[((hsi*36+5)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp138;
fp138 = fp66 * fp44;
LIBINT2_REALTYPE fp137;
fp137 = fp138 * fp19;
target[((hsi*36+4)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp140;
fp140 = fp66 * fp41;
LIBINT2_REALTYPE fp139;
fp139 = fp140 * fp23;
target[((hsi*36+3)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_x[vi] * fp68;
LIBINT2_REALTYPE fp69;
fp69 = fp72 + fp70;
LIBINT2_REALTYPE fp142;
fp142 = fp69 * fp48;
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp19;
target[((hsi*36+2)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp144;
fp144 = fp69 * fp44;
LIBINT2_REALTYPE fp143;
fp143 = fp144 * fp23;
target[((hsi*36+1)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp128;
fp128 = fp63 * fp48;
LIBINT2_REALTYPE fp127;
fp127 = fp128 * fp13;
target[((hsi*36+9)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*11+1)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*11+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp76;
fp76 = fp51 * fp48;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp1;
target[((hsi*36+35)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*11+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp6;
LIBINT2_REALTYPE fp4;
fp4 = fp3 + fp5;
LIBINT2_REALTYPE fp78;
fp78 = fp51 * fp44;
LIBINT2_REALTYPE fp77;
fp77 = fp78 * fp4;
target[((hsi*36+34)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp80;
fp80 = fp51 * fp41;
LIBINT2_REALTYPE fp79;
fp79 = fp80 * fp7;
target[((hsi*36+33)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp82;
fp82 = fp51 * fp38;
LIBINT2_REALTYPE fp81;
fp81 = fp82 * fp10;
target[((hsi*36+32)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp51 * fp35;
LIBINT2_REALTYPE fp83;
fp83 = fp84 * fp13;
target[((hsi*36+31)*1+lsi)*1] = fp83;
LIBINT2_REALTYPE fp86;
fp86 = fp51 * fp32;
LIBINT2_REALTYPE fp85;
fp85 = fp86 * fp16;
target[((hsi*36+30)*1+lsi)*1] = fp85;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*11+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp28 + fp30;
LIBINT2_REALTYPE fp88;
fp88 = fp51 * fp29;
LIBINT2_REALTYPE fp87;
fp87 = fp88 * fp19;
target[((hsi*36+29)*1+lsi)*1] = fp87;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_y[vi] * fp28;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*11+8)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp90;
fp90 = fp51 * fp26;
LIBINT2_REALTYPE fp89;
fp89 = fp90 * fp23;
target[((hsi*36+28)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp110;
fp110 = fp57 * fp41;
LIBINT2_REALTYPE fp109;
fp109 = fp110 * fp13;
target[((hsi*36+18)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp55;
fp55 = inteval->BO_x[vi] * fp53;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp94;
fp94 = fp54 * fp44;
LIBINT2_REALTYPE fp93;
fp93 = fp94 * fp7;
target[((hsi*36+26)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp96;
fp96 = fp54 * fp41;
LIBINT2_REALTYPE fp95;
fp95 = fp96 * fp10;
target[((hsi*36+25)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp98;
fp98 = fp54 * fp38;
LIBINT2_REALTYPE fp97;
fp97 = fp98 * fp13;
target[((hsi*36+24)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp100;
fp100 = fp54 * fp35;
LIBINT2_REALTYPE fp99;
fp99 = fp100 * fp16;
target[((hsi*36+23)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp102;
fp102 = fp54 * fp32;
LIBINT2_REALTYPE fp101;
fp101 = fp102 * fp19;
target[((hsi*36+22)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp104;
fp104 = fp54 * fp29;
LIBINT2_REALTYPE fp103;
fp103 = fp104 * fp23;
target[((hsi*36+21)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp106;
fp106 = fp57 * fp48;
LIBINT2_REALTYPE fp105;
fp105 = fp106 * fp7;
target[((hsi*36+20)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp108;
fp108 = fp57 * fp44;
LIBINT2_REALTYPE fp107;
fp107 = fp108 * fp10;
target[((hsi*36+19)*1+lsi)*1] = fp107;
LIBINT2_REALTYPE fp92;
fp92 = fp54 * fp48;
LIBINT2_REALTYPE fp91;
fp91 = fp92 * fp4;
target[((hsi*36+27)*1+lsi)*1] = fp91;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 147 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
