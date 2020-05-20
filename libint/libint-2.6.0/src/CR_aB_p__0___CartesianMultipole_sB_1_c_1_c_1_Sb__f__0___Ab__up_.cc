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
void CR_aB_p__0___CartesianMultipole_sB_1_c_1_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp0 + fp2;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src1[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->BO_y[vi], fp48, fp49);
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src0[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src0[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp55);
LIBINT2_REALTYPE fp79;
fp79 = fp53 * fp50;
LIBINT2_REALTYPE fp78;
fp78 = fp79 * fp1;
target[((hsi*30+29)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp45;
fp45 = 0.0000000000000000e+00 + src1[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_y[vi], fp49, fp45);
LIBINT2_REALTYPE fp81;
fp81 = fp53 * fp46;
LIBINT2_REALTYPE fp80;
fp80 = fp81 * fp4;
target[((hsi*30+28)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->BO_z[vi], fp10, fp6);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp45, fp42);
LIBINT2_REALTYPE fp83;
fp83 = fp53 * fp43;
LIBINT2_REALTYPE fp82;
fp82 = fp83 * fp7;
target[((hsi*30+27)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->BO_z[vi], fp9, fp10);
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp85;
fp85 = fp53 * fp40;
LIBINT2_REALTYPE fp84;
fp84 = fp85 * fp11;
target[((hsi*30+26)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_x[vi], fp55, fp58);
LIBINT2_REALTYPE fp87;
fp87 = fp56 * fp50;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp4;
target[((hsi*30+25)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = fp56 * fp46;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp7;
target[((hsi*30+24)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp56 * fp43;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp11;
target[((hsi*30+23)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp61);
LIBINT2_REALTYPE fp93;
fp93 = fp59 * fp50;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp7;
target[((hsi*30+22)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp59 * fp46;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp11;
target[((hsi*30+21)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp64;
fp64 = inteval->BO_x[vi] * fp61;
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp62 + fp64;
LIBINT2_REALTYPE fp97;
fp97 = fp63 * fp50;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp11;
target[((hsi*30+20)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp16;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_y[vi], fp35, fp36);
LIBINT2_REALTYPE fp99;
fp99 = fp53 * fp37;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp14;
target[((hsi*30+19)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_z[vi], fp19, fp16);
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_y[vi], fp36, fp32);
LIBINT2_REALTYPE fp101;
fp101 = fp53 * fp33;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp17;
target[((hsi*30+18)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp23, fp19);
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->BO_y[vi], fp32, fp29);
LIBINT2_REALTYPE fp103;
fp103 = fp53 * fp30;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp20;
target[((hsi*30+17)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_z[vi], fp22, fp23);
LIBINT2_REALTYPE fp28;
fp28 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp26 + fp28;
LIBINT2_REALTYPE fp105;
fp105 = fp53 * fp27;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp24;
target[((hsi*30+16)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp56 * fp37;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp17;
target[((hsi*30+15)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp56 * fp33;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp20;
target[((hsi*30+14)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp56 * fp30;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp24;
target[((hsi*30+13)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp59 * fp37;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp20;
target[((hsi*30+12)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp59 * fp33;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp24;
target[((hsi*30+11)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp63 * fp37;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp24;
target[((hsi*30+10)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 0.0000000000000000e+00 + src0[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp65, fp68);
LIBINT2_REALTYPE fp119;
fp119 = fp66 * fp50;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp14;
target[((hsi*30+9)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp66 * fp46;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp17;
target[((hsi*30+8)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp66 * fp43;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp20;
target[((hsi*30+7)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp66 * fp40;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp24;
target[((hsi*30+6)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src0[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp71);
LIBINT2_REALTYPE fp127;
fp127 = fp69 * fp50;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp17;
target[((hsi*30+5)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp69 * fp46;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp20;
target[((hsi*30+4)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp69 * fp43;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp24;
target[((hsi*30+3)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp74);
LIBINT2_REALTYPE fp133;
fp133 = fp72 * fp50;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp20;
target[((hsi*30+2)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = fp72 * fp46;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp24;
target[((hsi*30+1)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp77;
fp77 = inteval->BO_x[vi] * fp74;
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src0[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp75 + fp77;
LIBINT2_REALTYPE fp137;
fp137 = fp76 * fp50;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp24;
target[((hsi*30+0)*1+lsi)*1] = fp136;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 138 */
}

#ifdef __cplusplus
};
#endif