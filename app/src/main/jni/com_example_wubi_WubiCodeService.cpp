#include "com_example_wubi_WubiCodeService.h"
#include <jni.h>
#include "wubi.h"
#include <string>
/*
 * Class:     com_example_wubi_WubiCodeService
 * Method:    nativeQueryWubiCode
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_wubi_WubiCodeService_nativeQueryWubiCode
(JNIEnv *env, jobject self, jint ch) {
    const char * code = getCode((long)ch);
    if (code != nullptr) {
        return env->NewStringUTF(code);
    } else {
        return 0;
    }
}


JNIEXPORT jstring JNICALL Java_com_example_wubi_WubiCodeService_nativeRandom
        (JNIEnv *env, jobject self) {

    const WubiCode& code = randomCode();

    std::string str(code.chinese);
    str += ": ";
    str += code.code;

    return env->NewStringUTF(str.c_str());
}