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
void OSVRRElecPotInBra_aB_g__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp68;
fp68 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*6+5)*1+lsi)*1] - src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp68 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PC_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 - fp4;
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp43;
fp43 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = src2[((hsi*6+4)*1+lsi)*1] - src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp43 * fp8;
LIBINT2_REALTYPE fp10;
fp10 = inteval->PC_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp11 - fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp9 + fp7;
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp22;
fp22 = src2[((hsi*6+3)*1+lsi)*1] - src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PC_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 - fp15;
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
target[((hsi*15+12)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp18;
fp18 = inteval->PC_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp19 - fp18;
target[((hsi*15+11)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp21;
fp21 = fp68 * fp22;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PC_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 - fp24;
LIBINT2_REALTYPE fp20;
fp20 = fp23 + fp21;
target[((hsi*15+10)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
fp28 = src2[((hsi*6+2)*1+lsi)*1] - src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp43 * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PC_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 - fp30;
LIBINT2_REALTYPE fp26;
fp26 = fp29 + fp27;
target[((hsi*15+9)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp42;
fp42 = src2[((hsi*6+1)*1+lsi)*1] - src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PC_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 - fp35;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*15+8)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp38;
fp38 = inteval->PC_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 - fp38;
target[((hsi*15+7)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp41;
fp41 = fp43 * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->PC_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*15+6)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp67;
fp67 = src2[((hsi*6+0)*1+lsi)*1] - src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->oo2z[vi] * fp67;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PC_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp50 - fp49;
LIBINT2_REALTYPE fp47;
fp47 = fp48 + fp55;
target[((hsi*15+5)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp52;
fp52 = inteval->PC_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 - fp52;
target[((hsi*15+4)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp57;
fp57 = inteval->PC_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp58 - fp57;
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
target[((hsi*15+3)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 - fp60;
target[((hsi*15+2)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp64 - fp63;
target[((hsi*15+1)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp66;
fp66 = fp68 * fp67;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PC_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 - fp70;
LIBINT2_REALTYPE fp65;
fp65 = fp69 + fp66;
target[((hsi*15+0)*1+lsi)*1] = fp65;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 72 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
