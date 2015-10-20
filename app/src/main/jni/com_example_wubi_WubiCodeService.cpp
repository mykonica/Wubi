#include "com_example_wubi_WubiCodeService.h"
#include <jni.h>
#include "wubi.h"

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
