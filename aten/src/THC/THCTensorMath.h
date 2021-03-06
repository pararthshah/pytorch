#ifndef TH_CUDA_TENSOR_MATH_INC
#define TH_CUDA_TENSOR_MATH_INC

#include "THCTensor.h"
#include "THCGeneral.h"

#include "generic/THCTensorMath.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathBlas.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathMagma.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathPairwise.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathPointwise.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathReduce.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathCompare.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathCompareT.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMathScan.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMasked.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorScatterGather.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorIndex.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorSort.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorMode.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorTopK.h"
#include "THCGenerateAllTypes.h"

#include "generic/THCTensorKthValue.h"
#include "THCGenerateAllTypes.h"

THC_API int THCudaByteTensor_logicalAndAll(THCState *state, THCudaByteTensor *self);
THC_API int THCudaByteTensor_logicalAnyAll(THCState *state, THCudaByteTensor *self);

THC_API void THCudaByteTensor_logicalAnd(THCState *state, THCudaByteTensor *self, THCudaByteTensor *src, int dimension, int keepdim);
THC_API void THCudaByteTensor_logicalAny(THCState *state, THCudaByteTensor *self, THCudaByteTensor *src, int dimension, int keepdim);

#endif
