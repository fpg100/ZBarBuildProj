/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_dtr_qrcode_decode_ZBarDecoder */

#ifndef _Included_com_dtr_zbar_build_ZBarDecoder
#define _Included_com_dtr_zbar_build_ZBarDecoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_dtr_zbar_build_ZBarDecoder
 * Method:    decodeRaw
 * Signature: (I[BII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_dtr_zbar_build_ZBarDecoder_decodeRaw(
		JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_dtr_zbar_build_ZBarDecoder
 * Method:    decodeCrop
 * Signature: (I[BIIIIII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_dtr_zbar_build_ZBarDecoder_decodeCrop(
		JNIEnv *, jobject, jbyteArray, jint, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
