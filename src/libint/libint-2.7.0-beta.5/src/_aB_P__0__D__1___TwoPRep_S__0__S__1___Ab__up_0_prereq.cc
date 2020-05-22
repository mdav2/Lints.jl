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
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__D__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp154;
fp154 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp154 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp143;
fp143 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_x[vi] * fp141;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp160;
fp160 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp151;
fp151 = inteval->PA_x[vi] * fp158;
LIBINT2_REALTYPE fp149;
fp149 = fp151 + fp150;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WQ_y[vi] * fp147;
LIBINT2_REALTYPE fp153;
fp153 = fp154 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_x[vi] * fp158;
LIBINT2_REALTYPE fp145;
fp145 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp146;
fp146 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_x[vi] * fp144;
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp152;
fp152 = fp155 + fp153;
LIBINT2_REALTYPE fp140;
fp140 = inteval->QC_y[vi] * fp152;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp1;
fp1 = fp138;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->WQ_z[vi] * fp147;
LIBINT2_REALTYPE fp128;
fp128 = inteval->QC_z[vi] * fp152;
LIBINT2_REALTYPE fp126;
fp126 = fp128 + fp127;
LIBINT2_REALTYPE fp2;
fp2 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp164;
fp164 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp163;
fp163 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp164;
LIBINT2_REALTYPE fp162;
fp162 = fp172 * fp163;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp102;
fp102 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WQ_y[vi] * fp100;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp131;
fp131 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp109;
fp109 = inteval->QC_y[vi] * fp129;
LIBINT2_REALTYPE fp107;
fp107 = fp109 + fp108;
LIBINT2_REALTYPE fp106;
fp106 = fp107 + fp162;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_x[vi] * fp106;
LIBINT2_REALTYPE fp171;
fp171 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp170;
fp170 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp171;
LIBINT2_REALTYPE fp169;
fp169 = fp172 * fp170;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_y[vi] * fp129;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
LIBINT2_REALTYPE fp113;
fp113 = inteval->QC_y[vi] * fp103;
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp110;
fp110 = fp111 + fp169;
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_x[vi] * fp110;
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp3;
fp3 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_z[vi] * fp100;
LIBINT2_REALTYPE fp93;
fp93 = inteval->QC_z[vi] * fp129;
LIBINT2_REALTYPE fp91;
fp91 = fp93 + fp92;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_x[vi] * fp91;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_z[vi] * fp129;
LIBINT2_REALTYPE fp96;
fp96 = inteval->QC_z[vi] * fp103;
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_x[vi] * fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
LIBINT2_REALTYPE fp4;
fp4 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp86;
fp86 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp87;
fp87 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_z[vi] * fp85;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp119;
fp119 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp77;
fp77 = inteval->QC_z[vi] * fp117;
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = fp75 + fp162;
LIBINT2_REALTYPE fp83;
fp83 = inteval->WP_x[vi] * fp74;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * fp117;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp90;
fp90 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
LIBINT2_REALTYPE fp81;
fp81 = inteval->QC_z[vi] * fp88;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp78;
fp78 = fp79 + fp169;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PA_x[vi] * fp78;
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp5;
fp5 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp166;
fp166 = inteval->WQ_x[vi] * fp141;
LIBINT2_REALTYPE fp167;
fp167 = inteval->QC_x[vi] * fp158;
LIBINT2_REALTYPE fp165;
fp165 = fp167 + fp166;
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_y[vi] * fp161;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_x[vi] * fp158;
LIBINT2_REALTYPE fp175;
fp175 = inteval->QC_x[vi] * fp144;
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
LIBINT2_REALTYPE fp168;
fp168 = fp173 + fp169;
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_y[vi] * fp168;
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp6;
fp6 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * fp100;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PA_y[vi] * fp129;
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp60;
fp60 = fp61 + fp148;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WQ_x[vi] * fp60;
LIBINT2_REALTYPE fp66;
fp66 = inteval->WP_y[vi] * fp129;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PA_y[vi] * fp103;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = fp65 + fp153;
LIBINT2_REALTYPE fp70;
fp70 = inteval->QC_x[vi] * fp64;
LIBINT2_REALTYPE fp68;
fp68 = fp70 + fp69;
LIBINT2_REALTYPE fp7;
fp7 = fp68;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_z[vi] * fp141;
LIBINT2_REALTYPE fp122;
fp122 = inteval->QC_z[vi] * fp158;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp58;
fp58 = inteval->WP_y[vi] * fp120;
LIBINT2_REALTYPE fp124;
fp124 = inteval->WQ_z[vi] * fp158;
LIBINT2_REALTYPE fp125;
fp125 = inteval->QC_z[vi] * fp144;
LIBINT2_REALTYPE fp123;
fp123 = fp125 + fp124;
LIBINT2_REALTYPE fp59;
fp59 = inteval->PA_y[vi] * fp123;
LIBINT2_REALTYPE fp57;
fp57 = fp59 + fp58;
LIBINT2_REALTYPE fp8;
fp8 = fp57;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp178;
fp178 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp178 * fp158;
LIBINT2_REALTYPE fp180;
fp180 = inteval->WP_x[vi] * fp161;
LIBINT2_REALTYPE fp181;
fp181 = inteval->PA_x[vi] * fp168;
LIBINT2_REALTYPE fp179;
fp179 = fp181 + fp180;
LIBINT2_REALTYPE fp176;
fp176 = fp179 + fp177;
LIBINT2_REALTYPE fp0;
fp0 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp50;
fp50 = inteval->WQ_z[vi] * fp60;
LIBINT2_REALTYPE fp51;
fp51 = inteval->QC_z[vi] * fp64;
LIBINT2_REALTYPE fp49;
fp49 = fp51 + fp50;
LIBINT2_REALTYPE fp10;
fp10 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_y[vi] * fp74;
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_y[vi] * fp78;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp11;
fp11 = fp46;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * fp161;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * fp168;
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
LIBINT2_REALTYPE fp12;
fp12 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp133;
fp133 = inteval->WQ_y[vi] * fp141;
LIBINT2_REALTYPE fp134;
fp134 = inteval->QC_y[vi] * fp158;
LIBINT2_REALTYPE fp132;
fp132 = fp134 + fp133;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_z[vi] * fp132;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_y[vi] * fp158;
LIBINT2_REALTYPE fp137;
fp137 = inteval->QC_y[vi] * fp144;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * fp135;
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp13;
fp13 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * fp85;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_z[vi] * fp117;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = fp30 + fp148;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_x[vi] * fp29;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * fp117;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_z[vi] * fp88;
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp33;
fp33 = fp34 + fp153;
LIBINT2_REALTYPE fp39;
fp39 = inteval->QC_x[vi] * fp33;
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp14;
fp14 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp28;
fp28 = inteval->PA_z[vi] * fp110;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
LIBINT2_REALTYPE fp15;
fp15 = fp26;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp24;
fp24 = inteval->WQ_y[vi] * fp29;
LIBINT2_REALTYPE fp25;
fp25 = inteval->QC_y[vi] * fp33;
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp16;
fp16 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp19;
fp19 = fp178 * fp117;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * fp74;
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_z[vi] * fp78;
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = fp18;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp53;
fp53 = fp178 * fp129;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_y[vi] * fp106;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_y[vi] * fp110;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp52;
fp52 = fp54 + fp53;
LIBINT2_REALTYPE fp9;
fp9 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*18+9)*1+lsi)*1]),&(fp9),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 182 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
