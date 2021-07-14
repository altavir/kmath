/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class space_kscience_kmath_noa_JNoa */

#ifndef _Included_space_kscience_kmath_noa_JNoa
#define _Included_space_kscience_kmath_noa_JNoa
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    testException
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_testException
  (JNIEnv *, jclass, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    cudaIsAvailable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_space_kscience_kmath_noa_JNoa_cudaIsAvailable
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getNumThreads
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getNumThreads
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setNumThreads
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setNumThreads
  (JNIEnv *, jclass, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setSeed
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setSeed
  (JNIEnv *, jclass, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    disposeTensor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_disposeTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    emptyTensor
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_emptyTensor
  (JNIEnv *, jclass);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fromBlobDouble
 * Signature: ([D[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fromBlobDouble
  (JNIEnv *, jclass, jdoubleArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fromBlobFloat
 * Signature: ([F[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fromBlobFloat
  (JNIEnv *, jclass, jfloatArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fromBlobLong
 * Signature: ([J[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fromBlobLong
  (JNIEnv *, jclass, jlongArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fromBlobInt
 * Signature: ([I[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fromBlobInt
  (JNIEnv *, jclass, jintArray, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyToDevice
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyToDevice
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyToDouble
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyToDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyToFloat
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyToFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyToLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyToLong
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    copyToInt
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_copyToInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    viewTensor
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_viewTensor
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    viewAsTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_viewAsTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    tensorToString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_space_kscience_kmath_noa_JNoa_tensorToString
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getDim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getDim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getNumel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getNumel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getShapeAt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getShapeAt
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getStrideAt
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getStrideAt
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getDevice
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getDevice
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getItemDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_space_kscience_kmath_noa_JNoa_getItemDouble
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getItemFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_space_kscience_kmath_noa_JNoa_getItemFloat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getItemLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_getItemLong
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getItemInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getItemInt
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getIndex
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_getIndex
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getDouble
 * Signature: (J[I)D
 */
JNIEXPORT jdouble JNICALL Java_space_kscience_kmath_noa_JNoa_getDouble
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getFloat
 * Signature: (J[I)F
 */
JNIEXPORT jfloat JNICALL Java_space_kscience_kmath_noa_JNoa_getFloat
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getLong
 * Signature: (J[I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_getLong
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getInt
 * Signature: (J[I)I
 */
JNIEXPORT jint JNICALL Java_space_kscience_kmath_noa_JNoa_getInt
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setDouble
 * Signature: (J[ID)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setDouble
  (JNIEnv *, jclass, jlong, jintArray, jdouble);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setFloat
 * Signature: (J[IF)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setFloat
  (JNIEnv *, jclass, jlong, jintArray, jfloat);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setLong
 * Signature: (J[IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setLong
  (JNIEnv *, jclass, jlong, jintArray, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setInt
 * Signature: (J[II)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setInt
  (JNIEnv *, jclass, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randDouble
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randDouble
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randnDouble
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randnDouble
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randFloat
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randFloat
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randnFloat
 * Signature: ([II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randnFloat
  (JNIEnv *, jclass, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintDouble
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randintDouble
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintFloat
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randintFloat
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintLong
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randintLong
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintInt
 * Signature: (JJ[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randintInt
  (JNIEnv *, jclass, jlong, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randLike
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randLike
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randLikeAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_randLikeAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randnLike
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randnLike
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randnLikeAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_randnLikeAssign
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintLike
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_randintLike
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    randintLikeAssign
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_randintLikeAssign
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fullDouble
 * Signature: (D[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fullDouble
  (JNIEnv *, jclass, jdouble, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fullFloat
 * Signature: (F[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fullFloat
  (JNIEnv *, jclass, jfloat, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fullLong
 * Signature: (J[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fullLong
  (JNIEnv *, jclass, jlong, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    fullInt
 * Signature: (I[II)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_fullInt
  (JNIEnv *, jclass, jint, jintArray, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesDouble
 * Signature: (DJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_timesDouble
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesFloat
 * Signature: (FJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_timesFloat
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesLong
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_timesLong
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesInt
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_timesInt
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesDoubleAssign
 * Signature: (DJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_timesDoubleAssign
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesFloatAssign
 * Signature: (FJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_timesFloatAssign
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesLongAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_timesLongAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesIntAssign
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_timesIntAssign
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusDouble
 * Signature: (DJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_plusDouble
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusFloat
 * Signature: (FJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_plusFloat
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusLong
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_plusLong
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusInt
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_plusInt
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusDoubleAssign
 * Signature: (DJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_plusDoubleAssign
  (JNIEnv *, jclass, jdouble, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusFloatAssign
 * Signature: (FJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_plusFloatAssign
  (JNIEnv *, jclass, jfloat, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusLongAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_plusLongAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusIntAssign
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_plusIntAssign
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_timesTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    timesTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_timesTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    divTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_divTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    divTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_divTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_plusTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    plusTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_plusTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    minusTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_minusTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    minusTensorAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_minusTensorAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    unaryMinus
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_unaryMinus
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    transposeTensor
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_transposeTensor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    absTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_absTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    expTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_expTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    lnTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_lnTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    sqrtTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_sqrtTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    cosTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_cosTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    acosTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_acosTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    coshTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_coshTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    acoshTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_acoshTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    sinTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_sinTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    asinTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_asinTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    sinhTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_sinhTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    asinhTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_asinhTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    tanTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_tanTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    atanTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_atanTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    tanhTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_tanhTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    atanhTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_atanhTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    ceilTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_ceilTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    floorTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_floorTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    sumTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_sumTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    sumDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_sumDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    minTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_minTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    minDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_minDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    maxTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_maxTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    maxDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_maxDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    meanTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_meanTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    meanDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_meanDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    stdTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_stdTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    stdDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_stdDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    varTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_varTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    varDimTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_varDimTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    argMaxTensor
 * Signature: (JIZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_argMaxTensor
  (JNIEnv *, jclass, jlong, jint, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    flattenTensor
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_flattenTensor
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    matmul
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_matmul
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    matmulAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_matmulAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    matmulRightAssign
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_matmulRightAssign
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    diagEmbed
 * Signature: (JIII)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_diagEmbed
  (JNIEnv *, jclass, jlong, jint, jint, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    detTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_detTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    invTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_invTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    choleskyTensor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_choleskyTensor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    qrTensor
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_qrTensor
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    luTensor
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_luTensor
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    svdTensor
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_svdTensor
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    symEigTensor
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_symEigTensor
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    requiresGrad
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_space_kscience_kmath_noa_JNoa_requiresGrad
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setRequiresGrad
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setRequiresGrad
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    detachFromGraph
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_detachFromGraph
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    autoGradTensor
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_autoGradTensor
  (JNIEnv *, jclass, jlong, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    autoHessTensor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_autoHessTensor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    backwardPass
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_backwardPass
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    tensorGrad
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_tensorGrad
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    disposeJitModule
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_disposeJitModule
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    trainMode
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_trainMode
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    loadJitModuleDouble
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_loadJitModuleDouble
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    loadJitModuleFloat
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_loadJitModuleFloat
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    loadJitModuleLong
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_loadJitModuleLong
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    loadJitModuleInt
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_loadJitModuleInt
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    forwardPass
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_forwardPass
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    forwardPassAssign
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_forwardPassAssign
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getModuleParameter
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_getModuleParameter
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setModuleParameter
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setModuleParameter
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    getModuleBuffer
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_getModuleBuffer
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    setModuleBuffer
 * Signature: (JLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_setModuleBuffer
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    adamOptim
 * Signature: (JD)J
 */
JNIEXPORT jlong JNICALL Java_space_kscience_kmath_noa_JNoa_adamOptim
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    disposeAdamOptim
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_disposeAdamOptim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    stepAdamOptim
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_stepAdamOptim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    zeroGradAdamOptim
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_zeroGradAdamOptim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     space_kscience_kmath_noa_JNoa
 * Method:    swapTensors
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_space_kscience_kmath_noa_JNoa_swapTensors
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif