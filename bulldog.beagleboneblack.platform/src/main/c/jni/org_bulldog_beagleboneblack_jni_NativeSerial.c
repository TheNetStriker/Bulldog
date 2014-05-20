/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "../bulldog/bulldogSerial.h"



/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialOpen
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialOpen__Ljava_lang_String_2I
  (JNIEnv * env, jclass clazz, jstring path, jint baud) {
	char fileName[256];
	int len = (*env)->GetStringLength(env, path);
	(*env)->GetStringUTFRegion(env, path, 0, len, fileName);

	return serialOpenSimple(fileName, baud);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialOpen
 * Signature: (Ljava/lang/String;IIZI)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialOpen__Ljava_lang_String_2IIZI
  (JNIEnv * env, jclass clazz, jstring path, jint baud, jint parity, jboolean blocking, jint readTimeout) {
	char fileName[256];
	int len = (*env)->GetStringLength(env, path);
	(*env)->GetStringUTFRegion(env, path, 0, len, fileName);

	return serialOpen(fileName, baud, parity, blocking, readTimeout);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialClose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialClose
  (JNIEnv * env, jclass clazz, jint fileDescriptor) {
	return serialClose(fileDescriptor);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialRead
 * Signature: (I)B
 */
JNIEXPORT jbyte JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialRead
  (JNIEnv * env, jclass clazz, jint fileDescriptor) {
	return serialReadCharacter(fileDescriptor);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialReadBuffer
 * Signature: (ILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialReadBuffer
  (JNIEnv * env, jclass clazz, jint fileDescriptor, jobject buffer, jint bufferSize) {
	char* pBuffer = (char*) (*env)->GetDirectBufferAddress(env, buffer);
	return serialReadBuffer(fileDescriptor, pBuffer, bufferSize);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialDataAvailable
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialDataAvailable
  (JNIEnv * env, jclass clazz, jint fileDescriptor) {
	return serialDataAvailable(fileDescriptor);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialWrite
 * Signature: (IB)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialWrite
  (JNIEnv * env, jclass clazz, jint fileDescriptor, jbyte data) {
	return serialWriteCharacter(fileDescriptor, data);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeSerial
 * Method:    serialWriteBuffer
 * Signature: (ILjava/nio/ByteBuffer;I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeSerial_serialWriteBuffer
  (JNIEnv * env, jclass clazz, jint fileDescriptor, jobject buffer, jint bufferSize) {
	char* pBuffer = (char*) (*env)->GetDirectBufferAddress(env, buffer);
	return serialWriteBuffer(fileDescriptor, pBuffer);
}
