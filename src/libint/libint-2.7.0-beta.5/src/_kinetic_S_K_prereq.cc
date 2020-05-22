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
#include <CR_aB_X1__0___Overlap_X8__0___Ab__up_.h>
#include <CR_aB_Y1__0___Overlap_Y8__0___Ab__up_.h>
#include <CR_aB_Z1__0___Overlap_Z8__0___Ab__up_.h>
#include <CR_aB_s__0___Kinetic_k__0___Ab__up_.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _kinetic_S_K_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
CR_aB_Z1__0___Overlap_Z8__0___Ab__up_(inteval, &(stack[((hsi*18+36)*1+lsi)*1]), &(inteval->_0_Overlap_0_z[vi]));
CR_aB_Y1__0___Overlap_Y8__0___Ab__up_(inteval, &(stack[((hsi*18+54)*1+lsi)*1]), &(inteval->_0_Overlap_0_y[vi]));
CR_aB_X1__0___Overlap_X8__0___Ab__up_(inteval, &(stack[((hsi*18+72)*1+lsi)*1]), &(inteval->_0_Overlap_0_x[vi]));
CR_aB_s__0___Kinetic_k__0___Ab__up_(inteval, &(stack[((hsi*36+90)*1+lsi)*1]), &(stack[((hsi*18+72)*1+lsi)*1]), &(stack[((hsi*18+54)*1+lsi)*1]), &(stack[((hsi*18+36)*1+lsi)*1]));
_libint2_static_api_inc1_short_(&(stack[((hsi*36+0)*1+lsi)*1]),&(stack[((hsi*36+90)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 36 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
