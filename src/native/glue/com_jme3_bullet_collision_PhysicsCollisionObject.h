/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_collision_PhysicsCollisionObject */

#ifndef _Included_com_jme3_bullet_collision_PhysicsCollisionObject
#define _Included_com_jme3_bullet_collision_PhysicsCollisionObject
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_NONE
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_NONE 0L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_01
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_01 1L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_02
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_02 2L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_03
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_03 4L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_04
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_04 8L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_05
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_05 16L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_06
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_06 32L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_07
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_07 64L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_08
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_08 128L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_09
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_09 256L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_10
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_10 512L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_11
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_11 1024L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_12
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_12 2048L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_13
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_13 4096L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_14
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_14 8192L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_15
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_15 16384L
#undef com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_16
#define com_jme3_bullet_collision_PhysicsCollisionObject_COLLISION_GROUP_16 32768L
/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    attachCollisionShape
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_attachCollisionShape
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    finalizeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_finalizeNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getCollisionFlags
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getCollisionFlags
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setCollisionFlags
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setCollisionFlags
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    activate
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_activate
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getAnisotropicFriction
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getAnisotropicFriction
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getBasis
 * Signature: (JLcom/jme3/math/Matrix3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getBasis
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getCcdMotionThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getCcdMotionThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getCcdSweptSphereRadius
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getCcdSweptSphereRadius
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getContactDamping
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getContactDamping
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getContactProcessingThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getContactProcessingThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getContactStiffness
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getContactStiffness
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getFriction
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getFriction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getLocation
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getLocation
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getRestitution
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getRestitution
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getRollingFriction
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getRollingFriction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    getSpinningFriction
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_getSpinningFriction
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    hasAnisotropicFriction
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_hasAnisotropicFriction
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    initUserPointer
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_initUserPointer
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    isActive
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_isActive
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setAnisotropicFriction
 * Signature: (JLcom/jme3/math/Vector3f;I)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setAnisotropicFriction
  (JNIEnv *, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setCcdMotionThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setCcdMotionThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setCcdSweptSphereRadius
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setCcdSweptSphereRadius
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setCollideWithGroups
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setCollideWithGroups
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setCollisionGroup
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setCollisionGroup
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setContactProcessingThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setContactProcessingThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setContactStiffnessAndDamping
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setContactStiffnessAndDamping
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setDeactivationTime
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setDeactivationTime
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setFriction
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setFriction
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setLocationAndBasis
 * Signature: (JLcom/jme3/math/Vector3f;Lcom/jme3/math/Matrix3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setLocationAndBasis
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setRestitution
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setRestitution
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setRollingFriction
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setRollingFriction
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_collision_PhysicsCollisionObject
 * Method:    setSpinningFriction
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_PhysicsCollisionObject_setSpinningFriction
  (JNIEnv *, jobject, jlong, jfloat);

#ifdef __cplusplus
}
#endif
#endif
