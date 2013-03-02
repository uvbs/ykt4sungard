/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_kingstar_bcc_bccclt */

#ifndef _Included_com_kingstar_bcc_bccclt
#define _Included_com_kingstar_bcc_bccclt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetDebugSwitch
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetDebugSwitch
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    XPackInit
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_XPackInit
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    NewXpackHandle
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_kingstar_bcc_bccclt_NewXpackHandle
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    ResetPackHandle
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_ResetPackHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    CopyHandle
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_CopyHandle
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    DeleteXpackHandle
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_DeleteXpackHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetFieldTypeByName
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetFieldTypeByName
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetIntFieldByName
 * Signature: (JI[B[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetIntFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jintArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetDoubleFieldByName
 * Signature: (JI[B[D)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetDoubleFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jdoubleArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetStringFieldByName
 * Signature: (JI[B[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetStringFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jbyteArray, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetIntFieldByName
 * Signature: (JI[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetIntFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetDoubleFieldByName
 * Signature: (JI[BD)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetDoubleFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jdouble);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetStringFieldByName
 * Signature: (JI[B[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetStringFieldByName
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetRequestType
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetRequestType
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    IsEof
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_IsEof
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetRecordCount
 * Signature: (J[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetRecordCount
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetRetCode
 * Signature: (J[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetRetCode
  (JNIEnv *, jobject, jlong, jintArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetPrivateFunctionForNext
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetPrivateFunctionForNext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetBranchNoForNext
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetBranchNoForNext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetRecordCount
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetRecordCount
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetMaxRetCount
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetMaxRetCount
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetXPackType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetXPackType
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    SetRawRecord
 * Signature: (JI[BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_SetRawRecord
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetRawRecord
 * Signature: (JI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetRawRecord
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetMaxColumn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetMaxColumn
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetFieldColumn
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_GetFieldColumn
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    GetFieldInfo
 * Signature: (JI[B[I[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_GetFieldInfo
  (JNIEnv *, jobject, jlong, jint, jbyteArray, jintArray, jintArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    HaveNextPack
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_HaveNextPack
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    BCCCLTInit
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_BCCCLTInit
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    AddDrtpNode
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_AddDrtpNode
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    CallRequest
 * Signature: (JIIII[I[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_CallRequest
  (JNIEnv *, jobject, jlong, jint, jint, jint, jint, jintArray, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    CallNext
 * Signature: (JI[I[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_CallNext
  (JNIEnv *, jobject, jlong, jint, jintArray, jbyteArray);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    EmulateMaxRows
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_kingstar_bcc_bccclt_EmulateMaxRows
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_kingstar_bcc_bccclt
 * Method:    Broad
 * Signature: (JIII[I[B)Z
 */
JNIEXPORT jboolean JNICALL Java_com_kingstar_bcc_bccclt_Broad
  (JNIEnv *, jobject, jlong, jint, jint, jint, jintArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif