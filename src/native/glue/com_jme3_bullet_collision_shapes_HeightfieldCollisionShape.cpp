/*
 * Copyright (c) 2009-2012 jMonkeyEngine
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
#include "com_jme3_bullet_collision_shapes_HeightfieldCollisionShape.h"
#include "jmeBulletUtil.h"
#include "BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h"

#ifdef __cplusplus
extern "C" {
#endif

    /*
     * Class:     com_jme3_bullet_collision_shapes_HeightfieldCollisionShape
     * Method:    createShape
     * Signature: (IILjava/nio/FloatBuffer;FFFIZ)J
     */
    JNIEXPORT jlong JNICALL Java_com_jme3_bullet_collision_shapes_HeightfieldCollisionShape_createShape
    (JNIEnv * env, jobject object, jint heightStickWidth,
            jint heightStickLength, jobject floatBuffer, jfloat heightScale,
            jfloat minHeight, jfloat maxHeight, jint upAxis,
            jboolean flipQuadEdges) {
        jmeClasses::initJavaClasses(env);

        NULL_CHECK(floatBuffer, "The heightfield data does not exist.", 0);
        const jfloat* pHeights
                = (jfloat*) env->GetDirectBufferAddress(floatBuffer);

        btHeightfieldTerrainShape* pShape;
#ifdef BT_USE_DOUBLE_PRECISION
        int numHeights = heightStickLength * heightStickWidth;
        btScalar *pDpHeights = new btScalar[numHeights]; // never freed
        for (int i = 0; i < numHeights; ++i) {
            pDpHeights[i] = pHeights[i];
        }
        pShape = new btHeightfieldTerrainShape(heightStickWidth,
                heightStickLength, pDpHeights, heightScale, minHeight,
                maxHeight, upAxis, PHY_FLOAT, flipQuadEdges);
#else
        pShape = new btHeightfieldTerrainShape(heightStickWidth,
                heightStickLength, pHeights, heightScale, minHeight,
                maxHeight, upAxis, PHY_FLOAT, flipQuadEdges);
#endif

        return reinterpret_cast<jlong> (pShape);
    }

#ifdef __cplusplus
}
#endif
