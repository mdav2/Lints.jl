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
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hf.h>
#include <HRRPart0ket0bra0hg.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_G_H_prereq.h>

#ifdef __cplusplus
extern "C" {
#endif
void _sphemultipole_G_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4561)*1+lsi)*1]), &(inteval->stack[((hsi*28+4597)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4516)*1+lsi)*1]), &(inteval->stack[((hsi*36+4561)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+4597)*1+lsi)*1]), &(inteval->stack[((hsi*21+504)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13049)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4461)*1+lsi)*1]), &(inteval->stack[((hsi*45+4516)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+12185)*1+lsi)*1]), &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*210+13049)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4397)*1+lsi)*1]), &(inteval->stack[((hsi*28+4433)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4352)*1+lsi)*1]), &(inteval->stack[((hsi*36+4397)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+13259)*1+lsi)*1]), &(inteval->stack[((hsi*28+4433)*1+lsi)*1]), &(inteval->stack[((hsi*21+483)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4397)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4397)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4397)*1+lsi)*1]), &(inteval->stack[((hsi*55+4297)*1+lsi)*1]), &(inteval->stack[((hsi*45+4352)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*135+4397)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4297)*1+lsi)*1]), &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11870)*1+lsi)*1]), &(inteval->stack[((hsi*280+4297)*1+lsi)*1]), &(inteval->stack[((hsi*210+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4233)*1+lsi)*1]), &(inteval->stack[((hsi*28+4269)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4188)*1+lsi)*1]), &(inteval->stack[((hsi*36+4233)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+4269)*1+lsi)*1]), &(inteval->stack[((hsi*21+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4133)*1+lsi)*1]), &(inteval->stack[((hsi*45+4188)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13965)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14181)*1+lsi)*1]), &(inteval->stack[((hsi*216+13965)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11555)*1+lsi)*1]), &(inteval->stack[((hsi*280+14181)*1+lsi)*1]), &(inteval->stack[((hsi*210+13755)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4069)*1+lsi)*1]), &(inteval->stack[((hsi*28+4105)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4024)*1+lsi)*1]), &(inteval->stack[((hsi*36+4069)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+462)*1+lsi)*1]), &(inteval->stack[((hsi*28+4105)*1+lsi)*1]), &(inteval->stack[((hsi*21+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4069)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13965)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4069)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4069)*1+lsi)*1]), &(inteval->stack[((hsi*55+3969)*1+lsi)*1]), &(inteval->stack[((hsi*45+4024)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14461)*1+lsi)*1]), &(inteval->stack[((hsi*135+4069)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+3969)*1+lsi)*1]), &(inteval->stack[((hsi*216+14461)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11240)*1+lsi)*1]), &(inteval->stack[((hsi*280+3969)*1+lsi)*1]), &(inteval->stack[((hsi*210+13965)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*36+3905)*1+lsi)*1]), &(inteval->stack[((hsi*28+3941)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*45+3860)*1+lsi)*1]), &(inteval->stack[((hsi*36+3905)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12776)*1+lsi)*1]), &(inteval->stack[((hsi*28+3941)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12839)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*63+12776)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14461)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*126+12839)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12776)*1+lsi)*1]), &(inteval->stack[((hsi*55+3805)*1+lsi)*1]), &(inteval->stack[((hsi*45+3860)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*135+12776)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14887)*1+lsi)*1]), &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10925)*1+lsi)*1]), &(inteval->stack[((hsi*280+14887)*1+lsi)*1]), &(inteval->stack[((hsi*210+14461)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3741)*1+lsi)*1]), &(inteval->stack[((hsi*28+3777)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3696)*1+lsi)*1]), &(inteval->stack[((hsi*36+3741)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+14671)*1+lsi)*1]), &(inteval->stack[((hsi*28+3777)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+399)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3741)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+399)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*55+3641)*1+lsi)*1]), &(inteval->stack[((hsi*45+3696)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15167)*1+lsi)*1]), &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15383)*1+lsi)*1]), &(inteval->stack[((hsi*216+15167)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10610)*1+lsi)*1]), &(inteval->stack[((hsi*280+15383)*1+lsi)*1]), &(inteval->stack[((hsi*210+3741)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3577)*1+lsi)*1]), &(inteval->stack[((hsi*28+3613)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3532)*1+lsi)*1]), &(inteval->stack[((hsi*36+3577)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15167)*1+lsi)*1]), &(inteval->stack[((hsi*28+3613)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+14671)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+15167)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+15167)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*55+3477)*1+lsi)*1]), &(inteval->stack[((hsi*45+3532)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3477)*1+lsi)*1]), &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15663)*1+lsi)*1]), &(inteval->stack[((hsi*216+3477)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10295)*1+lsi)*1]), &(inteval->stack[((hsi*280+15663)*1+lsi)*1]), &(inteval->stack[((hsi*210+15167)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3413)*1+lsi)*1]), &(inteval->stack[((hsi*28+3449)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3368)*1+lsi)*1]), &(inteval->stack[((hsi*36+3413)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3477)*1+lsi)*1]), &(inteval->stack[((hsi*28+3449)*1+lsi)*1]), &(inteval->stack[((hsi*21+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+14671)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+3477)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3413)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*55+3313)*1+lsi)*1]), &(inteval->stack[((hsi*45+3368)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15943)*1+lsi)*1]), &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16159)*1+lsi)*1]), &(inteval->stack[((hsi*216+15943)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9980)*1+lsi)*1]), &(inteval->stack[((hsi*280+16159)*1+lsi)*1]), &(inteval->stack[((hsi*210+3413)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3249)*1+lsi)*1]), &(inteval->stack[((hsi*28+3285)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3204)*1+lsi)*1]), &(inteval->stack[((hsi*36+3249)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12692)*1+lsi)*1]), &(inteval->stack[((hsi*28+3285)*1+lsi)*1]), &(inteval->stack[((hsi*21+336)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12755)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+15943)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*126+12755)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12692)*1+lsi)*1]), &(inteval->stack[((hsi*55+3149)*1+lsi)*1]), &(inteval->stack[((hsi*45+3204)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*135+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+12500)*1+lsi)*1]), &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9665)*1+lsi)*1]), &(inteval->stack[((hsi*280+12500)*1+lsi)*1]), &(inteval->stack[((hsi*210+15943)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12780)*1+lsi)*1]), &(inteval->stack[((hsi*36+3085)*1+lsi)*1]), &(inteval->stack[((hsi*28+3121)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3149)*1+lsi)*1]), &(inteval->stack[((hsi*45+3040)*1+lsi)*1]), &(inteval->stack[((hsi*36+3085)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+3149)*1+lsi)*1]), &(inteval->stack[((hsi*84+12780)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+336)*1+lsi)*1]), &(inteval->stack[((hsi*28+3121)*1+lsi)*1]), &(inteval->stack[((hsi*21+315)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+399)*1+lsi)*1]), &(inteval->stack[((hsi*84+12780)*1+lsi)*1]), &(inteval->stack[((hsi*63+336)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+12780)*1+lsi)*1]), &(inteval->stack[((hsi*168+14671)*1+lsi)*1]), &(inteval->stack[((hsi*126+399)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+315)*1+lsi)*1]), &(inteval->stack[((hsi*55+2985)*1+lsi)*1]), &(inteval->stack[((hsi*45+3040)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16439)*1+lsi)*1]), &(inteval->stack[((hsi*135+315)*1+lsi)*1]), &(inteval->stack[((hsi*108+3149)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2985)*1+lsi)*1]), &(inteval->stack[((hsi*216+16439)*1+lsi)*1]), &(inteval->stack[((hsi*168+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9350)*1+lsi)*1]), &(inteval->stack[((hsi*280+2985)*1+lsi)*1]), &(inteval->stack[((hsi*210+12780)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+14671)*1+lsi)*1]), &(inteval->stack[((hsi*36+2921)*1+lsi)*1]), &(inteval->stack[((hsi*28+2957)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+315)*1+lsi)*1]), &(inteval->stack[((hsi*45+2876)*1+lsi)*1]), &(inteval->stack[((hsi*36+2921)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+315)*1+lsi)*1]), &(inteval->stack[((hsi*84+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3265)*1+lsi)*1]), &(inteval->stack[((hsi*28+2957)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+14755)*1+lsi)*1]), &(inteval->stack[((hsi*84+14671)*1+lsi)*1]), &(inteval->stack[((hsi*63+3265)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+16607)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+14755)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*55+2821)*1+lsi)*1]), &(inteval->stack[((hsi*45+2876)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16817)*1+lsi)*1]), &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+315)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+17033)*1+lsi)*1]), &(inteval->stack[((hsi*216+16817)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9035)*1+lsi)*1]), &(inteval->stack[((hsi*280+17033)*1+lsi)*1]), &(inteval->stack[((hsi*210+16607)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+294)*1+lsi)*1]), &(inteval->stack[((hsi*36+2757)*1+lsi)*1]), &(inteval->stack[((hsi*28+2793)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*45+2712)*1+lsi)*1]), &(inteval->stack[((hsi*36+2757)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*84+294)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+14671)*1+lsi)*1]), &(inteval->stack[((hsi*28+2793)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2757)*1+lsi)*1]), &(inteval->stack[((hsi*84+294)*1+lsi)*1]), &(inteval->stack[((hsi*63+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+273)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+2757)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2757)*1+lsi)*1]), &(inteval->stack[((hsi*55+2657)*1+lsi)*1]), &(inteval->stack[((hsi*45+2712)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*135+2757)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2657)*1+lsi)*1]), &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8720)*1+lsi)*1]), &(inteval->stack[((hsi*280+2657)*1+lsi)*1]), &(inteval->stack[((hsi*210+273)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+14671)*1+lsi)*1]), &(inteval->stack[((hsi*36+2593)*1+lsi)*1]), &(inteval->stack[((hsi*28+2629)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*45+2548)*1+lsi)*1]), &(inteval->stack[((hsi*36+2593)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*84+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3265)*1+lsi)*1]), &(inteval->stack[((hsi*28+2629)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+14755)*1+lsi)*1]), &(inteval->stack[((hsi*84+14671)*1+lsi)*1]), &(inteval->stack[((hsi*63+3265)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17313)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+14755)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*55+2493)*1+lsi)*1]), &(inteval->stack[((hsi*45+2548)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17523)*1+lsi)*1]), &(inteval->stack[((hsi*135+14671)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+17739)*1+lsi)*1]), &(inteval->stack[((hsi*216+17523)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8405)*1+lsi)*1]), &(inteval->stack[((hsi*280+17739)*1+lsi)*1]), &(inteval->stack[((hsi*210+17313)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+17523)*1+lsi)*1]), &(inteval->stack[((hsi*36+2429)*1+lsi)*1]), &(inteval->stack[((hsi*28+2465)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+14671)*1+lsi)*1]), &(inteval->stack[((hsi*45+2384)*1+lsi)*1]), &(inteval->stack[((hsi*36+2429)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+14671)*1+lsi)*1]), &(inteval->stack[((hsi*84+17523)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+16817)*1+lsi)*1]), &(inteval->stack[((hsi*28+2465)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2429)*1+lsi)*1]), &(inteval->stack[((hsi*84+17523)*1+lsi)*1]), &(inteval->stack[((hsi*63+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17523)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+2429)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2429)*1+lsi)*1]), &(inteval->stack[((hsi*55+2329)*1+lsi)*1]), &(inteval->stack[((hsi*45+2384)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16817)*1+lsi)*1]), &(inteval->stack[((hsi*135+2429)*1+lsi)*1]), &(inteval->stack[((hsi*108+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2329)*1+lsi)*1]), &(inteval->stack[((hsi*216+16817)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8090)*1+lsi)*1]), &(inteval->stack[((hsi*280+2329)*1+lsi)*1]), &(inteval->stack[((hsi*210+17523)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+16817)*1+lsi)*1]), &(inteval->stack[((hsi*36+2265)*1+lsi)*1]), &(inteval->stack[((hsi*28+2301)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+14671)*1+lsi)*1]), &(inteval->stack[((hsi*45+2220)*1+lsi)*1]), &(inteval->stack[((hsi*36+2265)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+14671)*1+lsi)*1]), &(inteval->stack[((hsi*84+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3265)*1+lsi)*1]), &(inteval->stack[((hsi*28+2301)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+16901)*1+lsi)*1]), &(inteval->stack[((hsi*84+16817)*1+lsi)*1]), &(inteval->stack[((hsi*63+3265)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18019)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+16901)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*55+2165)*1+lsi)*1]), &(inteval->stack[((hsi*45+2220)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*108+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+18445)*1+lsi)*1]), &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7775)*1+lsi)*1]), &(inteval->stack[((hsi*280+18445)*1+lsi)*1]), &(inteval->stack[((hsi*210+18019)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+18229)*1+lsi)*1]), &(inteval->stack[((hsi*36+2101)*1+lsi)*1]), &(inteval->stack[((hsi*28+2137)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*45+2056)*1+lsi)*1]), &(inteval->stack[((hsi*36+2101)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*84+18229)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+210)*1+lsi)*1]), &(inteval->stack[((hsi*28+2137)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2101)*1+lsi)*1]), &(inteval->stack[((hsi*84+18229)*1+lsi)*1]), &(inteval->stack[((hsi*63+210)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+2101)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2101)*1+lsi)*1]), &(inteval->stack[((hsi*55+2001)*1+lsi)*1]), &(inteval->stack[((hsi*45+2056)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*135+2101)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2001)*1+lsi)*1]), &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7460)*1+lsi)*1]), &(inteval->stack[((hsi*280+2001)*1+lsi)*1]), &(inteval->stack[((hsi*210+14671)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+189)*1+lsi)*1]), &(inteval->stack[((hsi*36+1937)*1+lsi)*1]), &(inteval->stack[((hsi*28+1973)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+18229)*1+lsi)*1]), &(inteval->stack[((hsi*45+1892)*1+lsi)*1]), &(inteval->stack[((hsi*36+1937)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+18229)*1+lsi)*1]), &(inteval->stack[((hsi*84+189)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+16817)*1+lsi)*1]), &(inteval->stack[((hsi*28+1973)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+16880)*1+lsi)*1]), &(inteval->stack[((hsi*84+189)*1+lsi)*1]), &(inteval->stack[((hsi*63+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18725)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+16880)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*55+1837)*1+lsi)*1]), &(inteval->stack[((hsi*45+1892)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18935)*1+lsi)*1]), &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*108+18229)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19151)*1+lsi)*1]), &(inteval->stack[((hsi*216+18935)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7145)*1+lsi)*1]), &(inteval->stack[((hsi*280+19151)*1+lsi)*1]), &(inteval->stack[((hsi*210+18725)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+18935)*1+lsi)*1]), &(inteval->stack[((hsi*36+1773)*1+lsi)*1]), &(inteval->stack[((hsi*28+1809)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*45+1728)*1+lsi)*1]), &(inteval->stack[((hsi*36+1773)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*84+18935)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18229)*1+lsi)*1]), &(inteval->stack[((hsi*28+1809)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+147)*1+lsi)*1]), &(inteval->stack[((hsi*84+18935)*1+lsi)*1]), &(inteval->stack[((hsi*63+18229)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1773)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+147)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+18935)*1+lsi)*1]), &(inteval->stack[((hsi*55+1673)*1+lsi)*1]), &(inteval->stack[((hsi*45+1728)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*135+18935)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19431)*1+lsi)*1]), &(inteval->stack[((hsi*216+18229)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6830)*1+lsi)*1]), &(inteval->stack[((hsi*280+19431)*1+lsi)*1]), &(inteval->stack[((hsi*210+1773)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+18229)*1+lsi)*1]), &(inteval->stack[((hsi*36+1609)*1+lsi)*1]), &(inteval->stack[((hsi*28+1645)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+18935)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]), &(inteval->stack[((hsi*36+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+18935)*1+lsi)*1]), &(inteval->stack[((hsi*84+18229)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+16817)*1+lsi)*1]), &(inteval->stack[((hsi*28+1645)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1609)*1+lsi)*1]), &(inteval->stack[((hsi*84+18229)*1+lsi)*1]), &(inteval->stack[((hsi*63+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18229)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+1609)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*55+1509)*1+lsi)*1]), &(inteval->stack[((hsi*45+1564)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1509)*1+lsi)*1]), &(inteval->stack[((hsi*135+16817)*1+lsi)*1]), &(inteval->stack[((hsi*108+18935)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19711)*1+lsi)*1]), &(inteval->stack[((hsi*216+1509)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6515)*1+lsi)*1]), &(inteval->stack[((hsi*280+19711)*1+lsi)*1]), &(inteval->stack[((hsi*210+18229)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1509)*1+lsi)*1]), &(inteval->stack[((hsi*36+1445)*1+lsi)*1]), &(inteval->stack[((hsi*28+1481)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*45+1400)*1+lsi)*1]), &(inteval->stack[((hsi*36+1445)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]), &(inteval->stack[((hsi*84+1509)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18935)*1+lsi)*1]), &(inteval->stack[((hsi*28+1481)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1593)*1+lsi)*1]), &(inteval->stack[((hsi*84+1509)*1+lsi)*1]), &(inteval->stack[((hsi*63+18935)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18935)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+1593)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1445)*1+lsi)*1]), &(inteval->stack[((hsi*55+1345)*1+lsi)*1]), &(inteval->stack[((hsi*45+1400)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+19991)*1+lsi)*1]), &(inteval->stack[((hsi*135+1445)*1+lsi)*1]), &(inteval->stack[((hsi*108+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+1345)*1+lsi)*1]), &(inteval->stack[((hsi*216+19991)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6200)*1+lsi)*1]), &(inteval->stack[((hsi*280+1345)*1+lsi)*1]), &(inteval->stack[((hsi*210+18935)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+16817)*1+lsi)*1]), &(inteval->stack[((hsi*36+1281)*1+lsi)*1]), &(inteval->stack[((hsi*28+1317)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16439)*1+lsi)*1]), &(inteval->stack[((hsi*45+1236)*1+lsi)*1]), &(inteval->stack[((hsi*36+1281)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+105)*1+lsi)*1]), &(inteval->stack[((hsi*108+16439)*1+lsi)*1]), &(inteval->stack[((hsi*84+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3265)*1+lsi)*1]), &(inteval->stack[((hsi*28+1317)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1625)*1+lsi)*1]), &(inteval->stack[((hsi*84+16817)*1+lsi)*1]), &(inteval->stack[((hsi*63+3265)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+16817)*1+lsi)*1]), &(inteval->stack[((hsi*168+105)*1+lsi)*1]), &(inteval->stack[((hsi*126+1625)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3265)*1+lsi)*1]), &(inteval->stack[((hsi*55+1181)*1+lsi)*1]), &(inteval->stack[((hsi*45+1236)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+19991)*1+lsi)*1]), &(inteval->stack[((hsi*135+3265)*1+lsi)*1]), &(inteval->stack[((hsi*108+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20207)*1+lsi)*1]), &(inteval->stack[((hsi*216+19991)*1+lsi)*1]), &(inteval->stack[((hsi*168+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5885)*1+lsi)*1]), &(inteval->stack[((hsi*280+20207)*1+lsi)*1]), &(inteval->stack[((hsi*210+16817)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+19991)*1+lsi)*1]), &(inteval->stack[((hsi*36+1117)*1+lsi)*1]), &(inteval->stack[((hsi*28+1153)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+84)*1+lsi)*1]), &(inteval->stack[((hsi*45+1072)*1+lsi)*1]), &(inteval->stack[((hsi*36+1117)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]), &(inteval->stack[((hsi*84+19991)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1181)*1+lsi)*1]), &(inteval->stack[((hsi*28+1153)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1625)*1+lsi)*1]), &(inteval->stack[((hsi*84+19991)*1+lsi)*1]), &(inteval->stack[((hsi*63+1181)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1117)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+1625)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+19991)*1+lsi)*1]), &(inteval->stack[((hsi*55+1017)*1+lsi)*1]), &(inteval->stack[((hsi*45+1072)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+20487)*1+lsi)*1]), &(inteval->stack[((hsi*135+19991)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20703)*1+lsi)*1]), &(inteval->stack[((hsi*216+20487)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5570)*1+lsi)*1]), &(inteval->stack[((hsi*280+20703)*1+lsi)*1]), &(inteval->stack[((hsi*210+1117)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+20487)*1+lsi)*1]), &(inteval->stack[((hsi*36+953)*1+lsi)*1]), &(inteval->stack[((hsi*28+989)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+19991)*1+lsi)*1]), &(inteval->stack[((hsi*45+908)*1+lsi)*1]), &(inteval->stack[((hsi*36+953)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+19991)*1+lsi)*1]), &(inteval->stack[((hsi*84+20487)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+63)*1+lsi)*1]), &(inteval->stack[((hsi*28+989)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+953)*1+lsi)*1]), &(inteval->stack[((hsi*84+20487)*1+lsi)*1]), &(inteval->stack[((hsi*63+63)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+42)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+953)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+20487)*1+lsi)*1]), &(inteval->stack[((hsi*55+853)*1+lsi)*1]), &(inteval->stack[((hsi*45+908)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+853)*1+lsi)*1]), &(inteval->stack[((hsi*135+20487)*1+lsi)*1]), &(inteval->stack[((hsi*108+19991)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20983)*1+lsi)*1]), &(inteval->stack[((hsi*216+853)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5255)*1+lsi)*1]), &(inteval->stack[((hsi*280+20983)*1+lsi)*1]), &(inteval->stack[((hsi*210+42)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+853)*1+lsi)*1]), &(inteval->stack[((hsi*36+789)*1+lsi)*1]), &(inteval->stack[((hsi*28+825)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+20487)*1+lsi)*1]), &(inteval->stack[((hsi*45+744)*1+lsi)*1]), &(inteval->stack[((hsi*36+789)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*108+20487)*1+lsi)*1]), &(inteval->stack[((hsi*84+853)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+19991)*1+lsi)*1]), &(inteval->stack[((hsi*28+825)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+937)*1+lsi)*1]), &(inteval->stack[((hsi*84+853)*1+lsi)*1]), &(inteval->stack[((hsi*63+19991)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+19991)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]), &(inteval->stack[((hsi*126+937)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+789)*1+lsi)*1]), &(inteval->stack[((hsi*55+689)*1+lsi)*1]), &(inteval->stack[((hsi*45+744)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+21263)*1+lsi)*1]), &(inteval->stack[((hsi*135+789)*1+lsi)*1]), &(inteval->stack[((hsi*108+20487)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+689)*1+lsi)*1]), &(inteval->stack[((hsi*216+21263)*1+lsi)*1]), &(inteval->stack[((hsi*168+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4940)*1+lsi)*1]), &(inteval->stack[((hsi*280+689)*1+lsi)*1]), &(inteval->stack[((hsi*210+19991)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+20487)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16439)*1+lsi)*1]), &(inteval->stack[((hsi*45+580)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+21263)*1+lsi)*1]), &(inteval->stack[((hsi*108+16439)*1+lsi)*1]), &(inteval->stack[((hsi*84+20487)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+3265)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1625)*1+lsi)*1]), &(inteval->stack[((hsi*84+20487)*1+lsi)*1]), &(inteval->stack[((hsi*63+3265)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+20487)*1+lsi)*1]), &(inteval->stack[((hsi*168+21263)*1+lsi)*1]), &(inteval->stack[((hsi*126+1625)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+969)*1+lsi)*1]), &(inteval->stack[((hsi*55+525)*1+lsi)*1]), &(inteval->stack[((hsi*45+580)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+21431)*1+lsi)*1]), &(inteval->stack[((hsi*135+969)*1+lsi)*1]), &(inteval->stack[((hsi*108+16439)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21647)*1+lsi)*1]), &(inteval->stack[((hsi*216+21431)*1+lsi)*1]), &(inteval->stack[((hsi*168+21263)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4625)*1+lsi)*1]), &(inteval->stack[((hsi*280+21647)*1+lsi)*1]), &(inteval->stack[((hsi*210+20487)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*315+4625)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*315+4940)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*315+5255)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*315+5570)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*315+5885)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*315+6200)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*315+6515)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*315+6830)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*315+7145)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*315+7460)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*315+7775)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*315+8090)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*315+8405)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*315+8720)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*315+9035)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*315+9350)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*315+9665)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*315+9980)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*315+10295)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*315+10610)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*315+10925)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*315+11240)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*315+11555)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*315+11870)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*315+12185)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
#endif
