/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vhacd_VHACDHull */

#ifndef _Included_vhacd_VHACDHull
#define _Included_vhacd_VHACDHull
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     vhacd_VHACDHull
 * Method:    getNumFloats
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_vhacd_VHACDHull_getNumFloats
  (JNIEnv *, jclass, jlong);

/*
 * Class:     vhacd_VHACDHull
 * Method:    getPositions
 * Signature: (JLjava/nio/FloatBuffer;)V
 */
JNIEXPORT void JNICALL Java_vhacd_VHACDHull_getPositions
  (JNIEnv *, jclass, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
