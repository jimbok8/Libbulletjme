/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_collision_shapes_infos_IndexedMesh */

#ifndef _Included_com_jme3_bullet_collision_shapes_infos_IndexedMesh
#define _Included_com_jme3_bullet_collision_shapes_infos_IndexedMesh
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jme3_bullet_collision_shapes_infos_IndexedMesh_floatBytes
#define com_jme3_bullet_collision_shapes_infos_IndexedMesh_floatBytes 4L
#undef com_jme3_bullet_collision_shapes_infos_IndexedMesh_intBytes
#define com_jme3_bullet_collision_shapes_infos_IndexedMesh_intBytes 4L
#undef com_jme3_bullet_collision_shapes_infos_IndexedMesh_numAxes
#define com_jme3_bullet_collision_shapes_infos_IndexedMesh_numAxes 3L
#undef com_jme3_bullet_collision_shapes_infos_IndexedMesh_vpt
#define com_jme3_bullet_collision_shapes_infos_IndexedMesh_vpt 3L
/*
 * Class:     com_jme3_bullet_collision_shapes_infos_IndexedMesh
 * Method:    createByte
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/FloatBuffer;IIII)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_collision_shapes_infos_IndexedMesh_createByte
  (JNIEnv *, jclass, jobject, jobject, jint, jint, jint, jint);

/*
 * Class:     com_jme3_bullet_collision_shapes_infos_IndexedMesh
 * Method:    createInt
 * Signature: (Ljava/nio/IntBuffer;Ljava/nio/FloatBuffer;IIII)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_collision_shapes_infos_IndexedMesh_createInt
  (JNIEnv *, jclass, jobject, jobject, jint, jint, jint, jint);

/*
 * Class:     com_jme3_bullet_collision_shapes_infos_IndexedMesh
 * Method:    createShort
 * Signature: (Ljava/nio/ShortBuffer;Ljava/nio/FloatBuffer;IIII)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_collision_shapes_infos_IndexedMesh_createShort
  (JNIEnv *, jclass, jobject, jobject, jint, jint, jint, jint);

/*
 * Class:     com_jme3_bullet_collision_shapes_infos_IndexedMesh
 * Method:    finalizeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_collision_shapes_infos_IndexedMesh_finalizeNative
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
