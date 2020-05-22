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
void CR_aB_Y4__0___Overlap_Y0__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*5+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp9;
fp9 = inteval->oo2z[vi] * target[((hsi*5+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->PA_y[vi] * target[((hsi*5+0)*1+lsi)*1];
target[((hsi*5+1)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp10;
fp10 = inteval->PA_y[vi] * target[((hsi*5+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*5+2)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * target[((hsi*5+1)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_y[vi] * target[((hsi*5+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp7 + fp5;
target[((hsi*5+3)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*5+2)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->PA_y[vi] * target[((hsi*5+3)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*5+4)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 12 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
