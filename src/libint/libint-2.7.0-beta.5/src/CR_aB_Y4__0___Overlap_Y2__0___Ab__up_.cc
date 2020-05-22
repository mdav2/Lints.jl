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
void CR_aB_Y4__0___Overlap_Y2__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*15+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PB_y[vi] * target[((hsi*15+0)*1+lsi)*1];
target[((hsi*15+1)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_y[vi] * target[((hsi*15+0)*1+lsi)*1];
target[((hsi*15+3)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp32;
fp32 = inteval->oo2z[vi] * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = inteval->oo2z[vi] * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * target[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = inteval->PA_y[vi] * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp43 + fp46;
target[((hsi*15+4)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_y[vi] * target[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
LIBINT2_REALTYPE fp31;
fp31 = fp33 + fp32;
target[((hsi*15+7)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_y[vi] * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp37 + fp46;
target[((hsi*15+6)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * target[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp40 * target[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_y[vi] * target[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp27;
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
target[((hsi*15+10)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp24;
fp24 = fp40 * target[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * target[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
target[((hsi*15+9)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp47;
fp47 = inteval->PB_y[vi] * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
target[((hsi*15+2)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_y[vi] * target[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp41 + fp39;
target[((hsi*15+5)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_y[vi] * target[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*15+8)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp15;
fp15 = fp40 * target[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp40 * target[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_y[vi] * target[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*15+11)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp1;
fp1 = fp40 * target[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp12 * target[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_y[vi] * target[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * target[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp12 * target[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_y[vi] * target[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*15+13)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * target[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
target[((hsi*15+12)*1+lsi)*1] = fp10;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 49 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
