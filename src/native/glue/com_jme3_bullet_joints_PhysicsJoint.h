/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_joints_PhysicsJoint */

#ifndef _Included_com_jme3_bullet_joints_PhysicsJoint
#define _Included_com_jme3_bullet_joints_PhysicsJoint
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    enableFeedback
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_enableFeedback
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    finalizeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_finalizeNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    getAppliedImpulse
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_getAppliedImpulse
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    getBreakingImpulseThreshold
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_getBreakingImpulseThreshold
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    isEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_isEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    needsFeedback
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_needsFeedback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    setBreakingImpulseThreshold
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_setBreakingImpulseThreshold
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_jme3_bullet_joints_PhysicsJoint
 * Method:    setEnabled
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_setEnabled
  (JNIEnv *, jobject, jlong, jboolean);

#ifdef __cplusplus
}
#endif
#endif
