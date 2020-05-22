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
void _elecpot_P_P_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp37;
fp37 = inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi] - inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PC_z[vi] * fp41;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PC_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_z[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
LIBINT2_REALTYPE fp5;
fp5 = fp20;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PA_z[vi] * fp5;
LIBINT2_REALTYPE fp10;
fp10 = fp12 - fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp10 + fp36;
LIBINT2_REALTYPE fp8;
fp8 = fp9;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PC_z[vi] * fp44;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PC_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp28;
fp28 = inteval->PA_y[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp26;
fp26 = fp28 - fp27;
LIBINT2_REALTYPE fp3;
fp3 = fp26;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * fp3;
LIBINT2_REALTYPE fp13;
fp13 = fp15 - fp14;
LIBINT2_REALTYPE fp7;
fp7 = fp13;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp18;
fp18 = inteval->PC_y[vi] * fp44;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_y[vi] * fp3;
LIBINT2_REALTYPE fp17;
fp17 = fp19 - fp18;
LIBINT2_REALTYPE fp16;
fp16 = fp17 + fp36;
LIBINT2_REALTYPE fp6;
fp6 = fp16;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+6)*1+lsi)*1]),&(fp6),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_2[vi];
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp47;
fp47 = fp49 - fp48;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PC_z[vi] * fp47;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PC_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_1[vi];
LIBINT2_REALTYPE fp34;
fp34 = inteval->PA_x[vi] * inteval->_aB_s___0___ElecPot_s___0___Ab__up_0[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
LIBINT2_REALTYPE fp1;
fp1 = fp32;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * fp1;
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp4;
fp4 = fp23;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+4)*1+lsi)*1]),&(fp4),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->PC_y[vi] * fp47;
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_y[vi] * fp1;
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
LIBINT2_REALTYPE fp2;
fp2 = fp29;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+2)*1+lsi)*1]),&(fp2),1);
_libint2_static_api_inc1_short_(&(stack[((hsi*1+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_x[vi] * fp47;
LIBINT2_REALTYPE fp40;
fp40 = inteval->PA_x[vi] * fp1;
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
LIBINT2_REALTYPE fp0;
fp0 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*1+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 50 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
