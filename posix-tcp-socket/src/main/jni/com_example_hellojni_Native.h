/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_hellojni_Native */

#ifndef _Included_com_example_hellojni_Native
#define _Included_com_example_hellojni_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_hellojni_Native
 * Method:    nativeStartTcpServer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_hellojni_Native_nativeStartTcpServer
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_example_hellojni_Native
 * Method:    nativeStartTcpClient
 * Signature: (Ljava/lang/String;ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_hellojni_Native_nativeStartTcpClient
  (JNIEnv *, jobject, jstring, jint, jstring);

/*
 * Class:     com_example_hellojni_Native
 * Method:    nativeStartUdpServer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_hellojni_Native_nativeStartUdpServer
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
