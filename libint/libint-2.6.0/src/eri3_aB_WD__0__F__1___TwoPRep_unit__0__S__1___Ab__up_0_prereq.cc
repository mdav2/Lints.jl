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
void eri3_aB_WD__0__F__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp371;
fp371 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp367;
fp367 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp237;
fp237 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp238;
LIBINT2_REALTYPE fp236;
fp236 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp237);
LIBINT2_REALTYPE fp124;
fp124 = fp367 * fp236;
LIBINT2_REALTYPE fp289;
fp289 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp288;
LIBINT2_REALTYPE fp287;
fp287 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp286;
fp286 = fp289 * fp287;
LIBINT2_REALTYPE fp234;
fp234 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp235;
LIBINT2_REALTYPE fp233;
fp233 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp234);
LIBINT2_REALTYPE fp199;
fp199 = inteval->WQ_z[vi] * fp233;
LIBINT2_REALTYPE fp200;
LIBINT2_REALTYPE fp198;
fp198 = libint2::fma_plus(inteval->QC_z[vi], fp236, fp199);
LIBINT2_REALTYPE fp197;
fp197 = fp198 - fp286;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->WP_z[vi], fp197, fp124);
LIBINT2_REALTYPE fp61;
fp61 = fp371 * fp123;
LIBINT2_REALTYPE fp308;
fp308 = fp371 * fp197;
LIBINT2_REALTYPE fp297;
fp297 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp171;
fp171 = libint2::fma_minus(inteval->roe[vi], fp233, fp236);
LIBINT2_REALTYPE fp170;
fp170 = fp297 * fp171;
LIBINT2_REALTYPE fp281;
LIBINT2_REALTYPE fp280;
fp280 = libint2::fma_minus(inteval->roe[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi]);
LIBINT2_REALTYPE fp279;
fp279 = fp289 * fp280;
LIBINT2_REALTYPE fp191;
fp191 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp192;
LIBINT2_REALTYPE fp190;
fp190 = libint2::fma_plus(inteval->QC_z[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp191);
LIBINT2_REALTYPE fp195;
fp195 = inteval->WQ_z[vi] * fp190;
LIBINT2_REALTYPE fp196;
LIBINT2_REALTYPE fp194;
fp194 = libint2::fma_plus(inteval->QC_z[vi], fp233, fp195);
LIBINT2_REALTYPE fp193;
fp193 = fp194 - fp279;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WQ_z[vi] * fp193;
LIBINT2_REALTYPE fp175;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->QC_z[vi], fp197, fp174);
LIBINT2_REALTYPE fp169;
fp169 = fp173 - fp170;
LIBINT2_REALTYPE fp309;
LIBINT2_REALTYPE fp307;
fp307 = libint2::fma_plus(inteval->WP_z[vi], fp169, fp308);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->WP_z[vi], fp307, fp61);
LIBINT2_REALTYPE fp59;
fp59 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+59)*1+lsi)*1]),&(fp59),1);
LIBINT2_REALTYPE fp360;
fp360 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp255;
fp255 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp256;
LIBINT2_REALTYPE fp254;
fp254 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp255);
LIBINT2_REALTYPE fp264;
fp264 = fp360 * fp254;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp253;
LIBINT2_REALTYPE fp251;
fp251 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp252);
LIBINT2_REALTYPE fp209;
fp209 = inteval->WQ_z[vi] * fp251;
LIBINT2_REALTYPE fp210;
LIBINT2_REALTYPE fp208;
fp208 = libint2::fma_plus(inteval->QC_z[vi], fp254, fp209);
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->WP_z[vi], fp208, fp264);
LIBINT2_REALTYPE fp64;
fp64 = fp367 * fp128;
LIBINT2_REALTYPE fp329;
fp329 = fp367 * fp208;
LIBINT2_REALTYPE fp374;
fp374 = inteval->WQ_y[vi] * fp193;
LIBINT2_REALTYPE fp375;
LIBINT2_REALTYPE fp373;
fp373 = libint2::fma_plus(inteval->QC_y[vi], fp197, fp374);
LIBINT2_REALTYPE fp311;
LIBINT2_REALTYPE fp310;
fp310 = libint2::fma_plus(inteval->WP_z[vi], fp373, fp329);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_z[vi], fp310, fp64);
LIBINT2_REALTYPE fp58;
fp58 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+58)*1+lsi)*1]),&(fp58),1);
LIBINT2_REALTYPE fp224;
fp224 = inteval->WQ_y[vi] * fp251;
LIBINT2_REALTYPE fp225;
LIBINT2_REALTYPE fp223;
fp223 = libint2::fma_plus(inteval->QC_y[vi], fp254, fp224);
LIBINT2_REALTYPE fp222;
fp222 = fp223 - fp286;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_z[vi] * fp222;
LIBINT2_REALTYPE fp67;
fp67 = fp360 * fp133;
LIBINT2_REALTYPE fp359;
fp359 = fp360 * fp222;
LIBINT2_REALTYPE fp216;
fp216 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp217;
LIBINT2_REALTYPE fp215;
fp215 = libint2::fma_plus(inteval->QC_y[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp216);
LIBINT2_REALTYPE fp220;
fp220 = inteval->WQ_y[vi] * fp215;
LIBINT2_REALTYPE fp221;
LIBINT2_REALTYPE fp219;
fp219 = libint2::fma_plus(inteval->QC_y[vi], fp251, fp220);
LIBINT2_REALTYPE fp218;
fp218 = fp219 - fp279;
LIBINT2_REALTYPE fp179;
fp179 = inteval->WQ_z[vi] * fp218;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->QC_z[vi], fp222, fp179);
LIBINT2_REALTYPE fp313;
LIBINT2_REALTYPE fp312;
fp312 = libint2::fma_plus(inteval->WP_z[vi], fp178, fp359);
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->WP_z[vi], fp312, fp67);
LIBINT2_REALTYPE fp57;
fp57 = fp66;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+57)*1+lsi)*1]),&(fp57),1);
LIBINT2_REALTYPE fp185;
LIBINT2_REALTYPE fp184;
fp184 = libint2::fma_minus(inteval->roe[vi], fp251, fp254);
LIBINT2_REALTYPE fp183;
fp183 = fp297 * fp184;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_y[vi] * fp218;
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->QC_y[vi], fp222, fp187);
LIBINT2_REALTYPE fp182;
fp182 = fp186 - fp183;
LIBINT2_REALTYPE fp314;
fp314 = inteval->WP_z[vi] * fp182;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * fp314;
LIBINT2_REALTYPE fp56;
fp56 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+56)*1+lsi)*1]),&(fp56),1);
LIBINT2_REALTYPE fp276;
fp276 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp277;
LIBINT2_REALTYPE fp275;
fp275 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], fp276);
LIBINT2_REALTYPE fp162;
fp162 = fp360 * fp275;
LIBINT2_REALTYPE fp273;
fp273 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp274;
LIBINT2_REALTYPE fp272;
fp272 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], fp273);
LIBINT2_REALTYPE fp240;
fp240 = inteval->WQ_z[vi] * fp272;
LIBINT2_REALTYPE fp241;
LIBINT2_REALTYPE fp239;
fp239 = libint2::fma_plus(inteval->QC_z[vi], fp275, fp240);
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_plus(inteval->WP_z[vi], fp239, fp162);
LIBINT2_REALTYPE fp71;
fp71 = fp367 * fp135;
LIBINT2_REALTYPE fp363;
fp363 = fp367 * fp239;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WQ_x[vi] * fp193;
LIBINT2_REALTYPE fp203;
LIBINT2_REALTYPE fp201;
fp201 = libint2::fma_plus(inteval->QC_x[vi], fp197, fp202);
LIBINT2_REALTYPE fp316;
LIBINT2_REALTYPE fp315;
fp315 = libint2::fma_plus(inteval->WP_z[vi], fp201, fp363);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->WP_z[vi], fp315, fp71);
LIBINT2_REALTYPE fp55;
fp55 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+55)*1+lsi)*1]),&(fp55),1);
LIBINT2_REALTYPE fp258;
fp258 = inteval->WQ_y[vi] * fp272;
LIBINT2_REALTYPE fp259;
LIBINT2_REALTYPE fp257;
fp257 = libint2::fma_plus(inteval->QC_y[vi], fp275, fp258);
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_z[vi] * fp257;
LIBINT2_REALTYPE fp74;
fp74 = fp360 * fp139;
LIBINT2_REALTYPE fp318;
fp318 = fp360 * fp257;
LIBINT2_REALTYPE fp270;
fp270 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_5[vi];
LIBINT2_REALTYPE fp271;
LIBINT2_REALTYPE fp269;
fp269 = libint2::fma_plus(inteval->QC_x[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi], fp270);
LIBINT2_REALTYPE fp377;
fp377 = inteval->WQ_y[vi] * fp269;
LIBINT2_REALTYPE fp378;
LIBINT2_REALTYPE fp376;
fp376 = libint2::fma_plus(inteval->QC_y[vi], fp272, fp377);
LIBINT2_REALTYPE fp353;
fp353 = inteval->WQ_z[vi] * fp376;
LIBINT2_REALTYPE fp354;
LIBINT2_REALTYPE fp352;
fp352 = libint2::fma_plus(inteval->QC_z[vi], fp257, fp353);
LIBINT2_REALTYPE fp319;
LIBINT2_REALTYPE fp317;
fp317 = libint2::fma_plus(inteval->WP_z[vi], fp352, fp318);
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->WP_z[vi], fp317, fp74);
LIBINT2_REALTYPE fp54;
fp54 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+54)*1+lsi)*1]),&(fp54),1);
LIBINT2_REALTYPE fp227;
fp227 = inteval->WQ_x[vi] * fp218;
LIBINT2_REALTYPE fp228;
LIBINT2_REALTYPE fp226;
fp226 = libint2::fma_plus(inteval->QC_x[vi], fp222, fp227);
LIBINT2_REALTYPE fp320;
fp320 = inteval->WP_z[vi] * fp226;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_z[vi] * fp320;
LIBINT2_REALTYPE fp53;
fp53 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+53)*1+lsi)*1]),&(fp53),1);
LIBINT2_REALTYPE fp291;
fp291 = inteval->WQ_x[vi] * fp272;
LIBINT2_REALTYPE fp292;
LIBINT2_REALTYPE fp290;
fp290 = libint2::fma_plus(inteval->QC_x[vi], fp275, fp291);
LIBINT2_REALTYPE fp285;
fp285 = fp290 - fp286;
LIBINT2_REALTYPE fp141;
fp141 = inteval->WP_z[vi] * fp285;
LIBINT2_REALTYPE fp78;
fp78 = fp360 * fp141;
LIBINT2_REALTYPE fp342;
fp342 = fp360 * fp285;
LIBINT2_REALTYPE fp283;
fp283 = inteval->WQ_x[vi] * fp269;
LIBINT2_REALTYPE fp284;
LIBINT2_REALTYPE fp282;
fp282 = libint2::fma_plus(inteval->QC_x[vi], fp272, fp283);
LIBINT2_REALTYPE fp278;
fp278 = fp282 - fp279;
LIBINT2_REALTYPE fp243;
fp243 = inteval->WQ_z[vi] * fp278;
LIBINT2_REALTYPE fp244;
LIBINT2_REALTYPE fp242;
fp242 = libint2::fma_plus(inteval->QC_z[vi], fp285, fp243);
LIBINT2_REALTYPE fp322;
LIBINT2_REALTYPE fp321;
fp321 = libint2::fma_plus(inteval->WP_z[vi], fp242, fp342);
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->WP_z[vi], fp321, fp78);
LIBINT2_REALTYPE fp52;
fp52 = fp77;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+52)*1+lsi)*1]),&(fp52),1);
LIBINT2_REALTYPE fp261;
fp261 = inteval->WQ_y[vi] * fp278;
LIBINT2_REALTYPE fp262;
LIBINT2_REALTYPE fp260;
fp260 = libint2::fma_plus(inteval->QC_y[vi], fp285, fp261);
LIBINT2_REALTYPE fp323;
fp323 = inteval->WP_z[vi] * fp260;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * fp323;
LIBINT2_REALTYPE fp51;
fp51 = fp80;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+51)*1+lsi)*1]),&(fp51),1);
LIBINT2_REALTYPE fp296;
LIBINT2_REALTYPE fp295;
fp295 = libint2::fma_minus(inteval->roe[vi], fp272, fp275);
LIBINT2_REALTYPE fp294;
fp294 = fp297 * fp295;
LIBINT2_REALTYPE fp299;
fp299 = inteval->WQ_x[vi] * fp278;
LIBINT2_REALTYPE fp300;
LIBINT2_REALTYPE fp298;
fp298 = libint2::fma_plus(inteval->QC_x[vi], fp285, fp299);
LIBINT2_REALTYPE fp293;
fp293 = fp298 - fp294;
LIBINT2_REALTYPE fp324;
fp324 = inteval->WP_z[vi] * fp293;
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_z[vi] * fp324;
LIBINT2_REALTYPE fp50;
fp50 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+50)*1+lsi)*1]),&(fp50),1);
LIBINT2_REALTYPE fp82;
fp82 = inteval->WP_y[vi] * fp307;
LIBINT2_REALTYPE fp49;
fp49 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+49)*1+lsi)*1]),&(fp49),1);
LIBINT2_REALTYPE fp246;
fp246 = fp360 * fp236;
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->WP_y[vi], fp208, fp246);
LIBINT2_REALTYPE fp102;
fp102 = fp367 * fp149;
LIBINT2_REALTYPE fp350;
fp350 = fp360 * fp197;
LIBINT2_REALTYPE fp327;
LIBINT2_REALTYPE fp326;
fp326 = libint2::fma_plus(inteval->WP_y[vi], fp373, fp350);
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->WP_z[vi], fp326, fp102);
LIBINT2_REALTYPE fp48;
fp48 = fp83;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+48)*1+lsi)*1]),&(fp48),1);
LIBINT2_REALTYPE fp155;
fp155 = fp367 * fp254;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp154;
fp154 = libint2::fma_plus(inteval->WP_y[vi], fp222, fp155);
LIBINT2_REALTYPE fp86;
fp86 = fp360 * fp154;
LIBINT2_REALTYPE fp330;
LIBINT2_REALTYPE fp328;
fp328 = libint2::fma_plus(inteval->WP_y[vi], fp178, fp329);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->WP_z[vi], fp328, fp86);
LIBINT2_REALTYPE fp47;
fp47 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+47)*1+lsi)*1]),&(fp47),1);
LIBINT2_REALTYPE fp332;
fp332 = fp371 * fp222;
LIBINT2_REALTYPE fp333;
LIBINT2_REALTYPE fp331;
fp331 = libint2::fma_plus(inteval->WP_y[vi], fp182, fp332);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * fp331;
LIBINT2_REALTYPE fp46;
fp46 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+46)*1+lsi)*1]),&(fp46),1);
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_y[vi] * fp315;
LIBINT2_REALTYPE fp45;
fp45 = fp89;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+45)*1+lsi)*1]),&(fp45),1);
LIBINT2_REALTYPE fp163;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->WP_y[vi], fp257, fp162);
LIBINT2_REALTYPE fp91;
fp91 = fp360 * fp161;
LIBINT2_REALTYPE fp336;
fp336 = fp360 * fp239;
LIBINT2_REALTYPE fp337;
LIBINT2_REALTYPE fp335;
fp335 = libint2::fma_plus(inteval->WP_y[vi], fp352, fp336);
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->WP_z[vi], fp335, fp91);
LIBINT2_REALTYPE fp44;
fp44 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+44)*1+lsi)*1]),&(fp44),1);
LIBINT2_REALTYPE fp366;
fp366 = fp367 * fp257;
LIBINT2_REALTYPE fp339;
LIBINT2_REALTYPE fp338;
fp338 = libint2::fma_plus(inteval->WP_y[vi], fp226, fp366);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_z[vi] * fp338;
LIBINT2_REALTYPE fp43;
fp43 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+43)*1+lsi)*1]),&(fp43),1);
LIBINT2_REALTYPE fp94;
fp94 = inteval->WP_y[vi] * fp321;
LIBINT2_REALTYPE fp42;
fp42 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+42)*1+lsi)*1]),&(fp42),1);
LIBINT2_REALTYPE fp343;
LIBINT2_REALTYPE fp341;
fp341 = libint2::fma_plus(inteval->WP_y[vi], fp260, fp342);
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * fp341;
LIBINT2_REALTYPE fp41;
fp41 = fp95;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+41)*1+lsi)*1]),&(fp41),1);
LIBINT2_REALTYPE fp344;
fp344 = inteval->WP_y[vi] * fp293;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WP_z[vi] * fp344;
LIBINT2_REALTYPE fp40;
fp40 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+40)*1+lsi)*1]),&(fp40),1);
LIBINT2_REALTYPE fp325;
fp325 = inteval->WP_y[vi] * fp169;
LIBINT2_REALTYPE fp97;
fp97 = inteval->WP_y[vi] * fp325;
LIBINT2_REALTYPE fp39;
fp39 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+39)*1+lsi)*1]),&(fp39),1);
LIBINT2_REALTYPE fp147;
fp147 = inteval->WP_y[vi] * fp197;
LIBINT2_REALTYPE fp99;
fp99 = fp360 * fp147;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->WP_y[vi], fp326, fp99);
LIBINT2_REALTYPE fp38;
fp38 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+38)*1+lsi)*1]),&(fp38),1);
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->WP_y[vi], fp328, fp102);
LIBINT2_REALTYPE fp37;
fp37 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+37)*1+lsi)*1]),&(fp37),1);
LIBINT2_REALTYPE fp105;
fp105 = fp371 * fp154;
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->WP_y[vi], fp331, fp105);
LIBINT2_REALTYPE fp36;
fp36 = fp104;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+36)*1+lsi)*1]),&(fp36),1);
LIBINT2_REALTYPE fp334;
fp334 = inteval->WP_y[vi] * fp201;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * fp334;
LIBINT2_REALTYPE fp35;
fp35 = fp107;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+35)*1+lsi)*1]),&(fp35),1);
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_y[vi] * fp239;
LIBINT2_REALTYPE fp109;
fp109 = fp360 * fp159;
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->WP_y[vi], fp335, fp109);
LIBINT2_REALTYPE fp34;
fp34 = fp108;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+34)*1+lsi)*1]),&(fp34),1);
LIBINT2_REALTYPE fp112;
fp112 = fp367 * fp161;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->WP_y[vi], fp338, fp112);
LIBINT2_REALTYPE fp33;
fp33 = fp111;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+33)*1+lsi)*1]),&(fp33),1);
LIBINT2_REALTYPE fp340;
fp340 = inteval->WP_y[vi] * fp242;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_y[vi] * fp340;
LIBINT2_REALTYPE fp32;
fp32 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+32)*1+lsi)*1]),&(fp32),1);
LIBINT2_REALTYPE fp167;
fp167 = inteval->WP_y[vi] * fp285;
LIBINT2_REALTYPE fp116;
fp116 = fp360 * fp167;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->WP_y[vi], fp341, fp116);
LIBINT2_REALTYPE fp31;
fp31 = fp115;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+31)*1+lsi)*1]),&(fp31),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * fp344;
LIBINT2_REALTYPE fp30;
fp30 = fp118;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+30)*1+lsi)*1]),&(fp30),1);
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_x[vi] * fp307;
LIBINT2_REALTYPE fp29;
fp29 = fp119;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_x[vi] * fp310;
LIBINT2_REALTYPE fp28;
fp28 = fp120;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp121;
fp121 = inteval->WP_x[vi] * fp312;
LIBINT2_REALTYPE fp27;
fp27 = fp121;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp348;
fp348 = inteval->WP_x[vi] * fp182;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_z[vi] * fp348;
LIBINT2_REALTYPE fp26;
fp26 = fp122;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp247;
LIBINT2_REALTYPE fp245;
fp245 = libint2::fma_plus(inteval->WP_x[vi], fp239, fp246);
LIBINT2_REALTYPE fp249;
fp249 = fp367 * fp245;
LIBINT2_REALTYPE fp351;
LIBINT2_REALTYPE fp349;
fp349 = libint2::fma_plus(inteval->WP_x[vi], fp201, fp350);
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->WP_z[vi], fp349, fp249);
LIBINT2_REALTYPE fp25;
fp25 = fp126;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp265;
LIBINT2_REALTYPE fp263;
fp263 = libint2::fma_plus(inteval->WP_x[vi], fp257, fp264);
LIBINT2_REALTYPE fp131;
fp131 = fp360 * fp263;
LIBINT2_REALTYPE fp356;
fp356 = fp360 * fp208;
LIBINT2_REALTYPE fp357;
LIBINT2_REALTYPE fp355;
fp355 = libint2::fma_plus(inteval->WP_x[vi], fp352, fp356);
LIBINT2_REALTYPE fp132;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->WP_z[vi], fp355, fp131);
LIBINT2_REALTYPE fp24;
fp24 = fp130;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp361;
LIBINT2_REALTYPE fp358;
fp358 = libint2::fma_plus(inteval->WP_x[vi], fp226, fp359);
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_z[vi] * fp358;
LIBINT2_REALTYPE fp23;
fp23 = fp134;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp302;
fp302 = fp367 * fp275;
LIBINT2_REALTYPE fp303;
LIBINT2_REALTYPE fp301;
fp301 = libint2::fma_plus(inteval->WP_x[vi], fp285, fp302);
LIBINT2_REALTYPE fp165;
fp165 = fp360 * fp301;
LIBINT2_REALTYPE fp364;
LIBINT2_REALTYPE fp362;
fp362 = libint2::fma_plus(inteval->WP_x[vi], fp242, fp363);
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->WP_z[vi], fp362, fp165);
LIBINT2_REALTYPE fp22;
fp22 = fp137;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp368;
LIBINT2_REALTYPE fp365;
fp365 = libint2::fma_plus(inteval->WP_x[vi], fp260, fp366);
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * fp365;
LIBINT2_REALTYPE fp21;
fp21 = fp140;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp370;
fp370 = fp371 * fp285;
LIBINT2_REALTYPE fp372;
LIBINT2_REALTYPE fp369;
fp369 = libint2::fma_plus(inteval->WP_x[vi], fp293, fp370);
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_z[vi] * fp369;
LIBINT2_REALTYPE fp20;
fp20 = fp142;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp345;
fp345 = inteval->WP_x[vi] * fp169;
LIBINT2_REALTYPE fp143;
fp143 = inteval->WP_y[vi] * fp345;
LIBINT2_REALTYPE fp19;
fp19 = fp143;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_x[vi] * fp326;
LIBINT2_REALTYPE fp18;
fp18 = fp144;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp328;
LIBINT2_REALTYPE fp17;
fp17 = fp145;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_x[vi] * fp331;
LIBINT2_REALTYPE fp16;
fp16 = fp146;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * fp349;
LIBINT2_REALTYPE fp15;
fp15 = fp148;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp152;
fp152 = fp360 * fp245;
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_plus(inteval->WP_y[vi], fp355, fp152);
LIBINT2_REALTYPE fp14;
fp14 = fp151;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp267;
fp267 = fp367 * fp263;
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->WP_y[vi], fp358, fp267);
LIBINT2_REALTYPE fp13;
fp13 = fp157;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_y[vi] * fp362;
LIBINT2_REALTYPE fp12;
fp12 = fp160;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp166;
LIBINT2_REALTYPE fp164;
fp164 = libint2::fma_plus(inteval->WP_y[vi], fp365, fp165);
LIBINT2_REALTYPE fp11;
fp11 = fp164;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp168;
fp168 = inteval->WP_y[vi] * fp369;
LIBINT2_REALTYPE fp10;
fp10 = fp168;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_x[vi] * fp345;
LIBINT2_REALTYPE fp9;
fp9 = fp176;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp346;
fp346 = inteval->WP_x[vi] * fp373;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_x[vi] * fp346;
LIBINT2_REALTYPE fp8;
fp8 = fp177;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp347;
fp347 = inteval->WP_x[vi] * fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->WP_x[vi] * fp347;
LIBINT2_REALTYPE fp7;
fp7 = fp181;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp189;
fp189 = inteval->WP_x[vi] * fp348;
LIBINT2_REALTYPE fp6;
fp6 = fp189;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp204;
fp204 = inteval->WP_x[vi] * fp197;
LIBINT2_REALTYPE fp206;
fp206 = fp360 * fp204;
LIBINT2_REALTYPE fp207;
LIBINT2_REALTYPE fp205;
fp205 = libint2::fma_plus(inteval->WP_x[vi], fp349, fp206);
LIBINT2_REALTYPE fp5;
fp5 = fp205;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp211;
fp211 = inteval->WP_x[vi] * fp208;
LIBINT2_REALTYPE fp213;
fp213 = fp360 * fp211;
LIBINT2_REALTYPE fp214;
LIBINT2_REALTYPE fp212;
fp212 = libint2::fma_plus(inteval->WP_x[vi], fp355, fp213);
LIBINT2_REALTYPE fp4;
fp4 = fp212;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp229;
fp229 = inteval->WP_x[vi] * fp222;
LIBINT2_REALTYPE fp231;
fp231 = fp360 * fp229;
LIBINT2_REALTYPE fp232;
LIBINT2_REALTYPE fp230;
fp230 = libint2::fma_plus(inteval->WP_x[vi], fp358, fp231);
LIBINT2_REALTYPE fp3;
fp3 = fp230;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp250;
LIBINT2_REALTYPE fp248;
fp248 = libint2::fma_plus(inteval->WP_x[vi], fp362, fp249);
LIBINT2_REALTYPE fp2;
fp2 = fp248;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp268;
LIBINT2_REALTYPE fp266;
fp266 = libint2::fma_plus(inteval->WP_x[vi], fp365, fp267);
LIBINT2_REALTYPE fp1;
fp1 = fp266;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp305;
fp305 = fp371 * fp301;
LIBINT2_REALTYPE fp306;
LIBINT2_REALTYPE fp304;
fp304 = libint2::fma_plus(inteval->WP_x[vi], fp369, fp305);
LIBINT2_REALTYPE fp0;
fp0 = fp304;
_libint2_static_api_inc1_short_(&(stack[((hsi*60+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 379 */
}

#ifdef __cplusplus
};
#endif