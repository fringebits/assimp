/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class assimp_Importer */

#ifndef _Included_assimp_Importer
#define _Included_assimp_Importer
#ifdef __cplusplus
extern "C" {
#endif
#undef assimp_Importer_PROPERTY_WAS_NOT_EXISTING
#define assimp_Importer_PROPERTY_WAS_NOT_EXISTING -1L
/*
 * Class:     assimp_Importer
 * Method:    _NativeInitContext
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_assimp_Importer__1NativeInitContext
  (JNIEnv *, jobject, jint);

/*
 * Class:     assimp_Importer
 * Method:    _NativeFreeContext
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_assimp_Importer__1NativeFreeContext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     assimp_Importer
 * Method:    _NativeLoad
 * Signature: (Ljava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_assimp_Importer__1NativeLoad
  (JNIEnv *, jobject, jstring, jint, jlong);

/*
 * Class:     assimp_Importer
 * Method:    _NativeSetPropertyInt
 * Signature: (Ljava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_assimp_Importer__1NativeSetPropertyInt
  (JNIEnv *, jobject, jstring, jint, jlong);

#ifdef __cplusplus
}
#endif
#endif
