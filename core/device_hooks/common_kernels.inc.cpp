/*******************************<GINKGO LICENSE>******************************
Copyright 2017-2018

Karlsruhe Institute of Technology
Universitat Jaume I
University of Tennessee

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors
   may be used to endorse or promote products derived from this software
   without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************<GINKGO LICENSE>*******************************/

#include "core/base/exception_helpers.hpp"
#include "core/matrix/dense_kernels.hpp"


#ifndef GKO_HOOK_MODULE
#error "Need to define GKO_HOOK_MODULE variable before including this file"
#endif  // GKO_HOOK_MODULE


namespace gko {
namespace kernels {
namespace GKO_HOOK_MODULE {
namespace dense {


template <typename ValueType>
GKO_DECLARE_DENSE_SIMPLE_APPLY_KERNEL(ValueType)
NOT_COMPILED(GKO_HOOK_MODULE);
GKO_INSTANTIATE_FOR_EACH_VALUE_TYPE(GKO_DECLARE_DENSE_SIMPLE_APPLY_KERNEL);

template <typename ValueType>
GKO_DECLARE_DENSE_APPLY_KERNEL(ValueType)
NOT_COMPILED(GKO_HOOK_MODULE);
GKO_INSTANTIATE_FOR_EACH_VALUE_TYPE(GKO_DECLARE_DENSE_APPLY_KERNEL);

template <typename ValueType>
GKO_DECLARE_DENSE_SCALE_KERNEL(ValueType)
NOT_COMPILED(GKO_HOOK_MODULE);
GKO_INSTANTIATE_FOR_EACH_VALUE_TYPE(GKO_DECLARE_DENSE_SCALE_KERNEL);

template <typename ValueType>
GKO_DECLARE_DENSE_ADD_SCALED_KERNEL(ValueType)
NOT_COMPILED(GKO_HOOK_MODULE);
GKO_INSTANTIATE_FOR_EACH_VALUE_TYPE(GKO_DECLARE_DENSE_ADD_SCALED_KERNEL);

template <typename ValueType>
GKO_DECLARE_DENSE_COMPUTE_DOT_KERNEL(ValueType)
NOT_COMPILED(GKO_HOOK_MODULE);
GKO_INSTANTIATE_FOR_EACH_VALUE_TYPE(GKO_DECLARE_DENSE_COMPUTE_DOT_KERNEL);


}  // namespace dense
}  // namespace GKO_HOOK_MODULE
}  // namespace kernels
}  // namespace gko
