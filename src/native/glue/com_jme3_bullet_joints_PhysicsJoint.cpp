/*
 * Copyright (c) 2009-2018 jMonkeyEngine
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * * Neither the name of 'jMonkeyEngine' nor the names of its contributors
 *   may be used to endorse or promote products derived from this software
 *   without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Author: Normen Hansen
 */
#include "com_jme3_bullet_joints_PhysicsJoint.h"
#include "jmeBulletUtil.h"

#ifdef __cplusplus
extern "C" {
#endif

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    enableFeedback
     * Signature: (JZ)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_enableFeedback
    (JNIEnv *env, jobject object, jlong jointId, jboolean enable) {
        btTypedConstraint *pJoint
                = reinterpret_cast<btTypedConstraint *> (jointId);
        NULL_CHECK(pJoint, "The btTypedConstraint does not exist.",);

        pJoint->enableFeedback(enable);
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    finalizeNative
     * Signature: (J)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_finalizeNative
    (JNIEnv * env, jobject object, jlong jointId) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.",);

        delete joint;
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    getAppliedImpulse
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_getAppliedImpulse
    (JNIEnv * env, jobject object, jlong jointId) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.", 0)

        return joint->getAppliedImpulse();
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    getBreakingImpulseThreshold
     * Signature: (J)F
     */
    JNIEXPORT jfloat JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_getBreakingImpulseThreshold
    (JNIEnv * env, jobject object, jlong jointId) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.", 0)

        return joint->getBreakingImpulseThreshold();
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    isEnabled
     * Signature: (J)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_isEnabled
    (JNIEnv * env, jobject object, jlong jointId) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.", false)

        return joint->isEnabled();
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    needsFeedback
     * Signature: (J)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_needsFeedback
    (JNIEnv *env, jobject object, jlong jointId) {
        btTypedConstraint *pJoint
                = reinterpret_cast<btTypedConstraint *> (jointId);
        NULL_CHECK(pJoint, "The btTypedConstraint does not exist.", 0);

        jboolean result = pJoint->needsFeedback();
        return result;
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    setBreakingImpulseThreshold
     * Signature: (JF)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_setBreakingImpulseThreshold
    (JNIEnv * env, jobject object, jlong jointId, jfloat desiredValue) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.",)

        joint->setBreakingImpulseThreshold(desiredValue);
    }

    /*
     * Class:     com_jme3_bullet_joints_PhysicsJoint
     * Method:    setEnabled
     * Signature: (JZ)V
     */
    JNIEXPORT void JNICALL Java_com_jme3_bullet_joints_PhysicsJoint_setEnabled
    (JNIEnv * env, jobject object, jlong jointId, jboolean desiredSetting) {
        btTypedConstraint* joint = reinterpret_cast<btTypedConstraint*> (jointId);
        NULL_CHECK(joint, "The btTypedConstraint does not exist.",)

        joint->setEnabled(desiredSetting);
    }

#ifdef __cplusplus
}
#endif
