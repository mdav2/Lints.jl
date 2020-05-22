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
void OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_2_c__minus_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 2.0000000000000000e+00 * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + fp10;
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp11 + fp7;
target[((hsi*10+8)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp15 + fp13;
target[((hsi*10+7)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp19;
fp19 = -5.0000000000000000e-01 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 2.0000000000000000e+00 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + fp21;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp22 + fp17;
target[((hsi*10+6)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + fp36;
LIBINT2_REALTYPE fp25;
fp25 = fp35 + src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PA_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp26 + fp24;
target[((hsi*10+5)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * fp29;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp30 + fp28;
target[((hsi*10+4)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp34;
fp34 = -5.0000000000000000e-01 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * fp33;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp37 + fp32;
target[((hsi*10+3)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
target[((hsi*10+2)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp45;
fp45 = -5.0000000000000000e-01 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp46 + fp43;
target[((hsi*10+1)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp50;
fp50 = 2.0000000000000000e+00 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + fp50;
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * fp49;
LIBINT2_REALTYPE fp51;
fp51 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp51 + fp48;
target[((hsi*10+0)*1+lsi)*1] = fp47;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 52 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
