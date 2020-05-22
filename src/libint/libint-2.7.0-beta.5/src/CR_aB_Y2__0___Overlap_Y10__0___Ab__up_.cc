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
void CR_aB_Y2__0___Overlap_Y10__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*33+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp151;
fp151 = inteval->PB_y[vi] * target[((hsi*33+0)*1+lsi)*1];
target[((hsi*33+1)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
fp149 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp149 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = inteval->PB_y[vi] * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp150 + fp148;
target[((hsi*33+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp145 * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = inteval->PB_y[vi] * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp146 + fp144;
target[((hsi*33+3)*1+lsi)*1] = fp143;
LIBINT2_REALTYPE fp141;
fp141 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp140;
fp140 = fp141 * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = inteval->PB_y[vi] * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp142 + fp140;
target[((hsi*33+4)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp137;
fp137 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp136;
fp136 = fp137 * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->PB_y[vi] * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp138 + fp136;
target[((hsi*33+5)*1+lsi)*1] = fp135;
LIBINT2_REALTYPE fp133;
fp133 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp132;
fp132 = fp133 * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = inteval->PB_y[vi] * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = fp134 + fp132;
target[((hsi*33+6)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp129;
fp129 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp128;
fp128 = fp129 * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = inteval->PB_y[vi] * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp130 + fp128;
target[((hsi*33+7)*1+lsi)*1] = fp127;
LIBINT2_REALTYPE fp125;
fp125 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp124;
fp124 = fp125 * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = inteval->PB_y[vi] * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = fp126 + fp124;
target[((hsi*33+8)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp121;
fp121 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp121 * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = inteval->PB_y[vi] * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp122 + fp120;
target[((hsi*33+9)*1+lsi)*1] = fp119;
LIBINT2_REALTYPE fp117;
fp117 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp116;
fp116 = fp117 * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = inteval->PB_y[vi] * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = fp118 + fp116;
target[((hsi*33+10)*1+lsi)*1] = fp115;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PA_y[vi] * target[((hsi*33+0)*1+lsi)*1];
target[((hsi*33+11)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
fp112 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp112 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->PA_y[vi] * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = fp113 + fp111;
target[((hsi*33+12)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp108;
fp108 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp108 * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->PA_y[vi] * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp109 + fp107;
target[((hsi*33+13)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
fp104 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp104 * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->PA_y[vi] * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp105 + fp103;
target[((hsi*33+14)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp100;
fp100 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp100 * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->PA_y[vi] * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = fp101 + fp99;
target[((hsi*33+15)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp92;
fp92 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp92 * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = inteval->PA_y[vi] * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp93 + fp91;
target[((hsi*33+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp88;
fp88 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp88 * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_y[vi] * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = fp89 + fp87;
target[((hsi*33+18)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp84;
fp84 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp84 * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->PA_y[vi] * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp85 + fp83;
target[((hsi*33+19)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp80;
fp80 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp80 * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->PA_y[vi] * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = fp81 + fp79;
target[((hsi*33+20)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp96;
fp96 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp95;
fp95 = fp96 * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->PA_y[vi] * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp97 + fp95;
target[((hsi*33+16)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp76;
fp76 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp76 * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = inteval->PA_y[vi] * target[((hsi*33+10)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp77 + fp75;
target[((hsi*33+21)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp9;
fp9 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*33+19)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*33+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*33+20)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*33+31)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*33+18)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*33+8)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_y[vi] * target[((hsi*33+19)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*33+30)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*33+17)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*33+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_y[vi] * target[((hsi*33+18)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp27 + fp25;
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*33+29)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*33+16)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*33+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_y[vi] * target[((hsi*33+17)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp34 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*33+28)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
fp37 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*33+15)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*33+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * target[((hsi*33+16)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*33+27)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp44;
fp44 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*33+14)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*33+4)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_y[vi] * target[((hsi*33+15)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp48 + fp46;
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*33+26)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp51;
fp51 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*33+13)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*33+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->PA_y[vi] * target[((hsi*33+14)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp55 + fp53;
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*33+25)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*33+12)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*33+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = inteval->PA_y[vi] * target[((hsi*33+13)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp62 + fp60;
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*33+24)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*33+11)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * target[((hsi*33+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->PA_y[vi] * target[((hsi*33+12)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp69 + fp67;
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*33+23)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp72;
fp72 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*33+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * target[((hsi*33+11)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
target[((hsi*33+22)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp2;
fp2 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*33+20)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*33+10)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = inteval->PA_y[vi] * target[((hsi*33+21)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp6 + fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*33+32)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 152 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
