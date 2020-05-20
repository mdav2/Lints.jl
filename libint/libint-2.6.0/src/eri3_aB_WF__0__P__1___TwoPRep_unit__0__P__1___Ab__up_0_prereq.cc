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
#include <GenericContract.h>

#ifdef __cplusplus
extern "C" {
#endif
void eri3_aB_WF__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp387;
fp387 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp383;
fp383 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp228;
fp228 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp383 * fp228;
LIBINT2_REALTYPE fp343;
fp343 = fp383 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp296;
fp296 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp297;
LIBINT2_REALTYPE fp295;
fp295 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp296);
LIBINT2_REALTYPE fp231;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->WP_z[vi], fp295, fp343);
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_plus(inteval->WP_z[vi], fp230, fp159);
LIBINT2_REALTYPE fp91;
fp91 = fp387 * fp158;
LIBINT2_REALTYPE fp147;
fp147 = fp387 * fp230;
LIBINT2_REALTYPE fp364;
fp364 = fp387 * fp295;
LIBINT2_REALTYPE fp337;
LIBINT2_REALTYPE fp336;
fp336 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]);
LIBINT2_REALTYPE fp338;
fp338 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp335;
fp335 = fp338 * fp336;
LIBINT2_REALTYPE fp293;
fp293 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp294;
LIBINT2_REALTYPE fp292;
fp292 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp293);
LIBINT2_REALTYPE fp278;
fp278 = inteval->WQ_z[vi] * fp292;
LIBINT2_REALTYPE fp279;
LIBINT2_REALTYPE fp277;
fp277 = libint2::fma_plus(inteval->QC_z[vi], fp295, fp278);
LIBINT2_REALTYPE fp276;
fp276 = fp277 - fp335;
LIBINT2_REALTYPE fp365;
LIBINT2_REALTYPE fp363;
fp363 = libint2::fma_plus(inteval->WP_z[vi], fp276, fp364);
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->WP_z[vi], fp363, fp147);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->WP_z[vi], fp146, fp91);
LIBINT2_REALTYPE fp89;
fp89 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+89)*1+lsi)*1]),&(fp89),1);
LIBINT2_REALTYPE fp170;
fp170 = inteval->WP_z[vi] * fp228;
LIBINT2_REALTYPE fp94;
fp94 = fp383 * fp170;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->WP_z[vi], fp158, fp94);
LIBINT2_REALTYPE fp88;
fp88 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+88)*1+lsi)*1]),&(fp88),1);
LIBINT2_REALTYPE fp310;
fp310 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp309;
fp309 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp310);
LIBINT2_REALTYPE fp232;
fp232 = inteval->WP_z[vi] * fp309;
LIBINT2_REALTYPE fp167;
fp167 = inteval->WP_z[vi] * fp232;
LIBINT2_REALTYPE fp97;
fp97 = fp383 * fp167;
LIBINT2_REALTYPE fp152;
fp152 = fp383 * fp232;
LIBINT2_REALTYPE fp382;
fp382 = fp383 * fp309;
LIBINT2_REALTYPE fp307;
fp307 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp308;
LIBINT2_REALTYPE fp306;
fp306 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp307);
LIBINT2_REALTYPE fp390;
fp390 = inteval->WQ_z[vi] * fp306;
LIBINT2_REALTYPE fp391;
LIBINT2_REALTYPE fp389;
fp389 = libint2::fma_plus(inteval->QC_z[vi], fp309, fp390);
LIBINT2_REALTYPE fp367;
LIBINT2_REALTYPE fp366;
fp366 = libint2::fma_plus(inteval->WP_z[vi], fp389, fp382);
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->WP_z[vi], fp366, fp152);
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->WP_z[vi], fp151, fp97);
LIBINT2_REALTYPE fp87;
fp87 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+87)*1+lsi)*1]),&(fp87),1);
LIBINT2_REALTYPE fp287;
fp287 = inteval->WQ_y[vi] * fp306;
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp286;
fp286 = libint2::fma_plus(inteval->QC_y[vi], fp309, fp287);
LIBINT2_REALTYPE fp285;
fp285 = fp286 - fp335;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WP_z[vi] * fp285;
LIBINT2_REALTYPE fp155;
fp155 = inteval->WP_z[vi] * fp368;
LIBINT2_REALTYPE fp99;
fp99 = inteval->WP_z[vi] * fp155;
LIBINT2_REALTYPE fp86;
fp86 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+86)*1+lsi)*1]),&(fp86),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WP_z[vi] * fp167;
LIBINT2_REALTYPE fp85;
fp85 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+85)*1+lsi)*1]),&(fp85),1);
LIBINT2_REALTYPE fp332;
fp332 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp332);
LIBINT2_REALTYPE fp172;
fp172 = inteval->WP_z[vi] * fp331;
LIBINT2_REALTYPE fp173;
fp173 = inteval->WP_z[vi] * fp172;
LIBINT2_REALTYPE fp102;
fp102 = fp383 * fp173;
LIBINT2_REALTYPE fp162;
fp162 = fp383 * fp172;
LIBINT2_REALTYPE fp360;
fp360 = fp383 * fp331;
LIBINT2_REALTYPE fp328;
fp328 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp329;
LIBINT2_REALTYPE fp327;
fp327 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp328);
LIBINT2_REALTYPE fp393;
fp393 = inteval->WQ_z[vi] * fp327;
LIBINT2_REALTYPE fp394;
LIBINT2_REALTYPE fp392;
fp392 = libint2::fma_plus(inteval->QC_z[vi], fp331, fp393);
LIBINT2_REALTYPE fp356;
LIBINT2_REALTYPE fp355;
fp355 = libint2::fma_plus(inteval->WP_z[vi], fp392, fp360);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->WP_z[vi], fp355, fp162);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->WP_z[vi], fp161, fp102);
LIBINT2_REALTYPE fp84;
fp84 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+84)*1+lsi)*1]),&(fp84),1);
LIBINT2_REALTYPE fp313;
fp313 = inteval->WQ_y[vi] * fp327;
LIBINT2_REALTYPE fp314;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(inteval->QC_y[vi], fp331, fp313);
LIBINT2_REALTYPE fp354;
fp354 = inteval->WP_z[vi] * fp312;
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_z[vi] * fp354;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WP_z[vi] * fp168;
LIBINT2_REALTYPE fp83;
fp83 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+83)*1+lsi)*1]),&(fp83),1);
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * fp173;
LIBINT2_REALTYPE fp82;
fp82 = fp105;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+82)*1+lsi)*1]),&(fp82),1);
LIBINT2_REALTYPE fp340;
fp340 = inteval->WQ_x[vi] * fp327;
LIBINT2_REALTYPE fp341;
LIBINT2_REALTYPE fp339;
fp339 = libint2::fma_plus(inteval->QC_x[vi], fp331, fp340);
LIBINT2_REALTYPE fp334;
fp334 = fp339 - fp335;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WP_z[vi] * fp334;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_z[vi] * fp357;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_z[vi] * fp174;
LIBINT2_REALTYPE fp81;
fp81 = fp106;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+81)*1+lsi)*1]),&(fp81),1);
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * fp146;
LIBINT2_REALTYPE fp80;
fp80 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+80)*1+lsi)*1]),&(fp80),1);
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_y[vi] * fp158;
LIBINT2_REALTYPE fp79;
fp79 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+79)*1+lsi)*1]),&(fp79),1);
LIBINT2_REALTYPE fp260;
LIBINT2_REALTYPE fp259;
fp259 = libint2::fma_plus(inteval->WP_y[vi], fp309, fp343);
LIBINT2_REALTYPE fp189;
fp189 = inteval->WP_z[vi] * fp259;
LIBINT2_REALTYPE fp110;
fp110 = fp383 * fp189;
LIBINT2_REALTYPE fp180;
fp180 = fp383 * fp259;
LIBINT2_REALTYPE fp379;
fp379 = fp383 * fp295;
LIBINT2_REALTYPE fp371;
LIBINT2_REALTYPE fp370;
fp370 = libint2::fma_plus(inteval->WP_y[vi], fp389, fp379);
LIBINT2_REALTYPE fp181;
LIBINT2_REALTYPE fp179;
fp179 = libint2::fma_plus(inteval->WP_z[vi], fp370, fp180);
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->WP_z[vi], fp179, fp110);
LIBINT2_REALTYPE fp78;
fp78 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+78)*1+lsi)*1]),&(fp78),1);
LIBINT2_REALTYPE fp373;
fp373 = fp387 * fp309;
LIBINT2_REALTYPE fp374;
LIBINT2_REALTYPE fp372;
fp372 = libint2::fma_plus(inteval->WP_y[vi], fp285, fp373);
LIBINT2_REALTYPE fp183;
fp183 = inteval->WP_z[vi] * fp372;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WP_z[vi] * fp183;
LIBINT2_REALTYPE fp77;
fp77 = fp112;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+77)*1+lsi)*1]),&(fp77),1);
LIBINT2_REALTYPE fp113;
fp113 = inteval->WP_z[vi] * fp189;
LIBINT2_REALTYPE fp76;
fp76 = fp113;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+76)*1+lsi)*1]),&(fp76),1);
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_y[vi] * fp161;
LIBINT2_REALTYPE fp75;
fp75 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+75)*1+lsi)*1]),&(fp75),1);
LIBINT2_REALTYPE fp361;
LIBINT2_REALTYPE fp359;
fp359 = libint2::fma_plus(inteval->WP_y[vi], fp312, fp360);
LIBINT2_REALTYPE fp190;
fp190 = inteval->WP_z[vi] * fp359;
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_z[vi] * fp190;
LIBINT2_REALTYPE fp74;
fp74 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+74)*1+lsi)*1]),&(fp74),1);
LIBINT2_REALTYPE fp222;
fp222 = inteval->WP_y[vi] * fp331;
LIBINT2_REALTYPE fp193;
fp193 = inteval->WP_z[vi] * fp222;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_z[vi] * fp193;
LIBINT2_REALTYPE fp73;
fp73 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+73)*1+lsi)*1]),&(fp73),1);
LIBINT2_REALTYPE fp362;
fp362 = inteval->WP_y[vi] * fp334;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WP_z[vi] * fp362;
LIBINT2_REALTYPE fp117;
fp117 = inteval->WP_z[vi] * fp194;
LIBINT2_REALTYPE fp72;
fp72 = fp117;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+72)*1+lsi)*1]),&(fp72),1);
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_y[vi] * fp363;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * fp176;
LIBINT2_REALTYPE fp71;
fp71 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+71)*1+lsi)*1]),&(fp71),1);
LIBINT2_REALTYPE fp186;
fp186 = inteval->WP_y[vi] * fp230;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_y[vi] * fp186;
LIBINT2_REALTYPE fp70;
fp70 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+70)*1+lsi)*1]),&(fp70),1);
LIBINT2_REALTYPE fp258;
fp258 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp212;
fp212 = fp383 * fp258;
LIBINT2_REALTYPE fp213;
LIBINT2_REALTYPE fp211;
fp211 = libint2::fma_plus(inteval->WP_y[vi], fp259, fp212);
LIBINT2_REALTYPE fp121;
fp121 = fp383 * fp211;
LIBINT2_REALTYPE fp253;
fp253 = inteval->WP_y[vi] * fp295;
LIBINT2_REALTYPE fp200;
fp200 = fp383 * fp253;
LIBINT2_REALTYPE fp201;
LIBINT2_REALTYPE fp199;
fp199 = libint2::fma_plus(inteval->WP_y[vi], fp370, fp200);
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->WP_z[vi], fp199, fp121);
LIBINT2_REALTYPE fp69;
fp69 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+69)*1+lsi)*1]),&(fp69),1);
LIBINT2_REALTYPE fp204;
fp204 = fp387 * fp259;
LIBINT2_REALTYPE fp205;
LIBINT2_REALTYPE fp203;
fp203 = libint2::fma_plus(inteval->WP_y[vi], fp372, fp204);
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * fp203;
LIBINT2_REALTYPE fp68;
fp68 = fp123;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+68)*1+lsi)*1]),&(fp68),1);
LIBINT2_REALTYPE fp124;
fp124 = inteval->WP_z[vi] * fp211;
LIBINT2_REALTYPE fp67;
fp67 = fp124;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+67)*1+lsi)*1]),&(fp67),1);
LIBINT2_REALTYPE fp187;
fp187 = inteval->WP_y[vi] * fp355;
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_y[vi] * fp187;
LIBINT2_REALTYPE fp66;
fp66 = fp125;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+66)*1+lsi)*1]),&(fp66),1);
LIBINT2_REALTYPE fp215;
fp215 = fp383 * fp222;
LIBINT2_REALTYPE fp216;
LIBINT2_REALTYPE fp214;
fp214 = libint2::fma_plus(inteval->WP_y[vi], fp359, fp215);
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_z[vi] * fp214;
LIBINT2_REALTYPE fp65;
fp65 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+65)*1+lsi)*1]),&(fp65),1);
LIBINT2_REALTYPE fp223;
fp223 = inteval->WP_y[vi] * fp222;
LIBINT2_REALTYPE fp127;
fp127 = inteval->WP_z[vi] * fp223;
LIBINT2_REALTYPE fp64;
fp64 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+64)*1+lsi)*1]),&(fp64),1);
LIBINT2_REALTYPE fp224;
fp224 = inteval->WP_y[vi] * fp362;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WP_z[vi] * fp224;
LIBINT2_REALTYPE fp63;
fp63 = fp128;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+63)*1+lsi)*1]),&(fp63),1);
LIBINT2_REALTYPE fp369;
fp369 = inteval->WP_y[vi] * fp276;
LIBINT2_REALTYPE fp196;
fp196 = inteval->WP_y[vi] * fp369;
LIBINT2_REALTYPE fp129;
fp129 = inteval->WP_y[vi] * fp196;
LIBINT2_REALTYPE fp62;
fp62 = fp129;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+62)*1+lsi)*1]),&(fp62),1);
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_y[vi] * fp253;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * fp208;
LIBINT2_REALTYPE fp61;
fp61 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+61)*1+lsi)*1]),&(fp61),1);
LIBINT2_REALTYPE fp132;
fp132 = fp383 * fp208;
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_plus(inteval->WP_y[vi], fp199, fp132);
LIBINT2_REALTYPE fp60;
fp60 = fp131;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+60)*1+lsi)*1]),&(fp60),1);
LIBINT2_REALTYPE fp135;
fp135 = fp387 * fp211;
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_plus(inteval->WP_y[vi], fp203, fp135);
LIBINT2_REALTYPE fp59;
fp59 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp220;
fp220 = inteval->WP_y[vi] * fp258;
LIBINT2_REALTYPE fp138;
fp138 = fp383 * fp220;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->WP_y[vi], fp211, fp138);
LIBINT2_REALTYPE fp58;
fp58 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp358;
fp358 = inteval->WP_y[vi] * fp392;
LIBINT2_REALTYPE fp209;
fp209 = inteval->WP_y[vi] * fp358;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_y[vi] * fp209;
LIBINT2_REALTYPE fp57;
fp57 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp142;
fp142 = fp383 * fp223;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->WP_y[vi], fp214, fp142);
LIBINT2_REALTYPE fp56;
fp56 = fp141;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_y[vi] * fp223;
LIBINT2_REALTYPE fp55;
fp55 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_y[vi] * fp224;
LIBINT2_REALTYPE fp54;
fp54 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->WP_x[vi] * fp146;
LIBINT2_REALTYPE fp53;
fp53 = fp149;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp150;
fp150 = inteval->WP_x[vi] * fp158;
LIBINT2_REALTYPE fp52;
fp52 = fp150;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp154;
fp154 = inteval->WP_x[vi] * fp151;
LIBINT2_REALTYPE fp51;
fp51 = fp154;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp377;
fp377 = inteval->WP_x[vi] * fp285;
LIBINT2_REALTYPE fp235;
fp235 = inteval->WP_z[vi] * fp377;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_z[vi] * fp235;
LIBINT2_REALTYPE fp50;
fp50 = fp156;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp315;
fp315 = inteval->WP_x[vi] * fp309;
LIBINT2_REALTYPE fp243;
fp243 = inteval->WP_z[vi] * fp315;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_z[vi] * fp243;
LIBINT2_REALTYPE fp49;
fp49 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp344;
LIBINT2_REALTYPE fp342;
fp342 = libint2::fma_plus(inteval->WP_x[vi], fp331, fp343);
LIBINT2_REALTYPE fp247;
fp247 = inteval->WP_z[vi] * fp342;
LIBINT2_REALTYPE fp165;
fp165 = fp383 * fp247;
LIBINT2_REALTYPE fp267;
fp267 = fp383 * fp342;
LIBINT2_REALTYPE fp380;
LIBINT2_REALTYPE fp378;
fp378 = libint2::fma_plus(inteval->WP_x[vi], fp392, fp379);
LIBINT2_REALTYPE fp240;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->WP_z[vi], fp378, fp267);
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->WP_z[vi], fp239, fp165);
LIBINT2_REALTYPE fp48;
fp48 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp384;
LIBINT2_REALTYPE fp381;
fp381 = libint2::fma_plus(inteval->WP_x[vi], fp312, fp382);
LIBINT2_REALTYPE fp244;
fp244 = inteval->WP_z[vi] * fp381;
LIBINT2_REALTYPE fp169;
fp169 = inteval->WP_z[vi] * fp244;
LIBINT2_REALTYPE fp47;
fp47 = fp169;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_z[vi] * fp247;
LIBINT2_REALTYPE fp46;
fp46 = fp171;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp386;
fp386 = fp387 * fp331;
LIBINT2_REALTYPE fp388;
LIBINT2_REALTYPE fp385;
fp385 = libint2::fma_plus(inteval->WP_x[vi], fp334, fp386);
LIBINT2_REALTYPE fp248;
fp248 = inteval->WP_z[vi] * fp385;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_z[vi] * fp248;
LIBINT2_REALTYPE fp45;
fp45 = fp175;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp226;
fp226 = inteval->WP_x[vi] * fp363;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_y[vi] * fp226;
LIBINT2_REALTYPE fp44;
fp44 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp238;
fp238 = inteval->WP_x[vi] * fp230;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_y[vi] * fp238;
LIBINT2_REALTYPE fp43;
fp43 = fp178;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_x[vi] * fp179;
LIBINT2_REALTYPE fp42;
fp42 = fp182;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp256;
fp256 = inteval->WP_x[vi] * fp372;
LIBINT2_REALTYPE fp184;
fp184 = inteval->WP_z[vi] * fp256;
LIBINT2_REALTYPE fp41;
fp41 = fp184;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp265;
fp265 = inteval->WP_x[vi] * fp259;
LIBINT2_REALTYPE fp185;
fp185 = inteval->WP_z[vi] * fp265;
LIBINT2_REALTYPE fp40;
fp40 = fp185;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp188;
fp188 = inteval->WP_y[vi] * fp239;
LIBINT2_REALTYPE fp39;
fp39 = fp188;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->WP_y[vi], fp381, fp267);
LIBINT2_REALTYPE fp191;
fp191 = inteval->WP_z[vi] * fp266;
LIBINT2_REALTYPE fp38;
fp38 = fp191;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp273;
fp273 = inteval->WP_y[vi] * fp342;
LIBINT2_REALTYPE fp192;
fp192 = inteval->WP_z[vi] * fp273;
LIBINT2_REALTYPE fp37;
fp37 = fp192;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp274;
fp274 = inteval->WP_y[vi] * fp385;
LIBINT2_REALTYPE fp195;
fp195 = inteval->WP_z[vi] * fp274;
LIBINT2_REALTYPE fp36;
fp36 = fp195;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp375;
fp375 = inteval->WP_x[vi] * fp276;
LIBINT2_REALTYPE fp250;
fp250 = inteval->WP_y[vi] * fp375;
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_y[vi] * fp250;
LIBINT2_REALTYPE fp35;
fp35 = fp197;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp298;
fp298 = inteval->WP_x[vi] * fp295;
LIBINT2_REALTYPE fp262;
fp262 = inteval->WP_y[vi] * fp298;
LIBINT2_REALTYPE fp198;
fp198 = inteval->WP_y[vi] * fp262;
LIBINT2_REALTYPE fp34;
fp34 = fp198;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp202;
fp202 = inteval->WP_x[vi] * fp199;
LIBINT2_REALTYPE fp33;
fp33 = fp202;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp206;
fp206 = inteval->WP_x[vi] * fp203;
LIBINT2_REALTYPE fp32;
fp32 = fp206;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp207;
fp207 = inteval->WP_x[vi] * fp211;
LIBINT2_REALTYPE fp31;
fp31 = fp207;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp263;
fp263 = inteval->WP_y[vi] * fp378;
LIBINT2_REALTYPE fp210;
fp210 = inteval->WP_y[vi] * fp263;
LIBINT2_REALTYPE fp30;
fp30 = fp210;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp218;
fp218 = fp383 * fp273;
LIBINT2_REALTYPE fp219;
LIBINT2_REALTYPE fp217;
fp217 = libint2::fma_plus(inteval->WP_y[vi], fp266, fp218);
LIBINT2_REALTYPE fp29;
fp29 = fp217;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp221;
fp221 = inteval->WP_y[vi] * fp273;
LIBINT2_REALTYPE fp28;
fp28 = fp221;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_y[vi] * fp274;
LIBINT2_REALTYPE fp27;
fp27 = fp225;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp227;
fp227 = inteval->WP_x[vi] * fp226;
LIBINT2_REALTYPE fp26;
fp26 = fp227;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp229;
fp229 = inteval->WP_x[vi] * fp238;
LIBINT2_REALTYPE fp25;
fp25 = fp229;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp233;
fp233 = inteval->WP_x[vi] * fp366;
LIBINT2_REALTYPE fp234;
fp234 = inteval->WP_x[vi] * fp233;
LIBINT2_REALTYPE fp24;
fp24 = fp234;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp289;
fp289 = inteval->WP_x[vi] * fp377;
LIBINT2_REALTYPE fp236;
fp236 = inteval->WP_z[vi] * fp289;
LIBINT2_REALTYPE fp23;
fp23 = fp236;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp316;
fp316 = inteval->WP_x[vi] * fp315;
LIBINT2_REALTYPE fp237;
fp237 = inteval->WP_z[vi] * fp316;
LIBINT2_REALTYPE fp22;
fp22 = fp237;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp330;
fp330 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp346;
fp346 = fp383 * fp330;
LIBINT2_REALTYPE fp347;
LIBINT2_REALTYPE fp345;
fp345 = libint2::fma_plus(inteval->WP_x[vi], fp342, fp346);
LIBINT2_REALTYPE fp270;
fp270 = fp383 * fp345;
LIBINT2_REALTYPE fp301;
fp301 = fp383 * fp298;
LIBINT2_REALTYPE fp302;
LIBINT2_REALTYPE fp300;
fp300 = libint2::fma_plus(inteval->WP_x[vi], fp378, fp301);
LIBINT2_REALTYPE fp242;
LIBINT2_REALTYPE fp241;
fp241 = libint2::fma_plus(inteval->WP_z[vi], fp300, fp270);
LIBINT2_REALTYPE fp21;
fp21 = fp241;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp318;
fp318 = fp383 * fp315;
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->WP_x[vi], fp381, fp318);
LIBINT2_REALTYPE fp245;
fp245 = inteval->WP_z[vi] * fp317;
LIBINT2_REALTYPE fp20;
fp20 = fp245;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp246;
fp246 = inteval->WP_z[vi] * fp345;
LIBINT2_REALTYPE fp19;
fp19 = fp246;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp349;
fp349 = fp387 * fp342;
LIBINT2_REALTYPE fp350;
LIBINT2_REALTYPE fp348;
fp348 = libint2::fma_plus(inteval->WP_x[vi], fp385, fp349);
LIBINT2_REALTYPE fp249;
fp249 = inteval->WP_z[vi] * fp348;
LIBINT2_REALTYPE fp18;
fp18 = fp249;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp280;
fp280 = inteval->WP_x[vi] * fp375;
LIBINT2_REALTYPE fp251;
fp251 = inteval->WP_y[vi] * fp280;
LIBINT2_REALTYPE fp17;
fp17 = fp251;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp299;
fp299 = inteval->WP_x[vi] * fp298;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WP_y[vi] * fp299;
LIBINT2_REALTYPE fp16;
fp16 = fp252;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp254;
fp254 = inteval->WP_x[vi] * fp370;
LIBINT2_REALTYPE fp255;
fp255 = inteval->WP_x[vi] * fp254;
LIBINT2_REALTYPE fp15;
fp15 = fp255;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp257;
fp257 = inteval->WP_x[vi] * fp256;
LIBINT2_REALTYPE fp14;
fp14 = fp257;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp261;
fp261 = inteval->WP_x[vi] * fp265;
LIBINT2_REALTYPE fp13;
fp13 = fp261;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp264;
fp264 = inteval->WP_y[vi] * fp300;
LIBINT2_REALTYPE fp12;
fp12 = fp264;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->WP_y[vi], fp317, fp270);
LIBINT2_REALTYPE fp11;
fp11 = fp269;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp272;
fp272 = inteval->WP_y[vi] * fp345;
LIBINT2_REALTYPE fp10;
fp10 = fp272;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp275;
fp275 = inteval->WP_y[vi] * fp348;
LIBINT2_REALTYPE fp9;
fp9 = fp275;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp281;
fp281 = inteval->WP_x[vi] * fp280;
LIBINT2_REALTYPE fp8;
fp8 = fp281;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp282;
fp282 = inteval->WP_x[vi] * fp299;
LIBINT2_REALTYPE fp7;
fp7 = fp282;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp376;
fp376 = inteval->WP_x[vi] * fp389;
LIBINT2_REALTYPE fp283;
fp283 = inteval->WP_x[vi] * fp376;
LIBINT2_REALTYPE fp284;
fp284 = inteval->WP_x[vi] * fp283;
LIBINT2_REALTYPE fp6;
fp6 = fp284;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp290;
fp290 = inteval->WP_x[vi] * fp289;
LIBINT2_REALTYPE fp5;
fp5 = fp290;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp291;
fp291 = inteval->WP_x[vi] * fp316;
LIBINT2_REALTYPE fp4;
fp4 = fp291;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp304;
fp304 = fp383 * fp299;
LIBINT2_REALTYPE fp305;
LIBINT2_REALTYPE fp303;
fp303 = libint2::fma_plus(inteval->WP_x[vi], fp300, fp304);
LIBINT2_REALTYPE fp3;
fp3 = fp303;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp321;
fp321 = fp383 * fp316;
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp320;
fp320 = libint2::fma_plus(inteval->WP_x[vi], fp317, fp321);
LIBINT2_REALTYPE fp2;
fp2 = fp320;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp326;
fp326 = inteval->WP_x[vi] * fp330;
LIBINT2_REALTYPE fp324;
fp324 = fp383 * fp326;
LIBINT2_REALTYPE fp325;
LIBINT2_REALTYPE fp323;
fp323 = libint2::fma_plus(inteval->WP_x[vi], fp345, fp324);
LIBINT2_REALTYPE fp1;
fp1 = fp323;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp352;
fp352 = fp387 * fp345;
LIBINT2_REALTYPE fp353;
LIBINT2_REALTYPE fp351;
fp351 = libint2::fma_plus(inteval->WP_x[vi], fp348, fp352);
LIBINT2_REALTYPE fp0;
fp0 = fp351;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 395 */
}

#ifdef __cplusplus
};
#endif