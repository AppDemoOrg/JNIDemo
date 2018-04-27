#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_abt_jni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_abt_jni_JniUtils_getJniString(JNIEnv *env, jclass type) {
    // TODO
    const char *returnValue = NULL;
    return env->NewStringUTF(returnValue);
}
