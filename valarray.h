/****************************************************************************
 *                   Mask is hidden                                         *
 ****************************************************************************/
typedef struct _Mask Mask;
/****************************************************************************
 *          ValArraySize_t                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArraySize_t
#define tagValArray tagValArraySize_tInterface
#define ElementType size_t
#define ValArrayInterface ValArraySize_tInterface
#define ValArray ValArraySize_t
#define __IS_UNSIGNED__
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_UNSIGNED__
#undef __IS_INTEGER__
extern ValArraySize_tInterface iValArraySize_t;

/****************************************************************************
 *          ValArrayShort                                                   *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayShort
#define tagValArray tagValArrayShortInterface
#define ElementType short
#define ValArrayInterface ValArrayShortInterface
#define ValArray ValArrayShort
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_INTEGER__
extern ValArrayInterface iValArrayShort;

/****************************************************************************
 *          ValArrayInt                                                     *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayInt
#define tagValArray tagValArrayIntInterface
#define ElementType int
#define ValArrayInterface ValArrayIntInterface
#define ValArray ValArrayInt
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_INTEGER__
extern ValArrayInterface iValArrayInt;

/****************************************************************************
 *          ValArrayLong                                                    *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLong
#define tagValArray tagValArrayLongInterface
#define ElementType long
#define ValArrayInterface ValArrayLongInterface
#define ValArray ValArrayLong
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_INTEGER__
extern ValArrayInterface iValArrayLong;


/****************************************************************************
 *          ValArrayDouble                                                  *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayDouble
#define tagValArray tagValArrayDoubleInterface
#define ElementType double
#define ValArrayInterface ValArrayDoubleInterface
#define ValArray ValArrayDouble
#include "valarraygen.h"
extern ValArrayDoubleInterface iValArrayDouble;

/****************************************************************************
 *          ValArrayLongDouble                                              *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLongDouble
#define tagValArray tagValArrayLongDoubleInterface
#define ElementType long double
#define ValArrayInterface ValArrayLongDoubleInterface
#define ValArray ValArrayLongDouble
#include "valarraygen.h"
extern ValArrayInterface iValArrayLongDouble;

/****************************************************************************
 *          ValArrayLLong                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLLong
#define tagValArray tagValArrayLLongInterface
#define ElementType long long
#define ValArrayInterface ValArrayLLongInterface
#define ValArray ValArrayLLong
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_INTEGER__
extern ValArrayInterface iValArrayLLong;

/****************************************************************************
 *          ValArrayULLong                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayULLong
#define tagValArray tagValArrayULLongInterface
#define ElementType unsigned long long
#define ValArrayInterface ValArrayULLongInterface
#define ValArray ValArrayULLong
#define __IS_INTEGER__
#define __IS_UNSIGNED__
#include "valarraygen.h"
#undef __IS_INTEGER__
#undef __IS_UNSIGNED__
extern ValArrayInterface iValArrayULLong;


/****************************************************************************
 *          ValArrayFloat                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayFloat
#define tagValArray tagValArrayFloatInterface
#define ElementType float
#define ValArrayInterface ValArrayFloatInterface
#define ValArray ValArrayFloat
#include "valarraygen.h"
extern ValArrayInterface iValArrayFloat;


/****************************************************************************
 *          ValArrayUInt                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayUInt
#define tagValArray tagValArrayUIntInterface
#define ElementType unsigned
#define ValArrayInterface ValArrayUIntInterface
#define ValArray ValArrayUInt
#define __IS_UNSIGNED__
#define __IS_INTEGER__
#include "valarraygen.h"
#undef __IS_UNSIGNED__
#undef __IS_INTEGER__
extern ValArrayInterface iValArrayUInt;


#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray

