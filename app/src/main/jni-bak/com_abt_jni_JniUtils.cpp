//
// Created by WeiQi on 28/04/2018.
//
#include "com_abt_jni_JniUtils.h"

JNIEXPORT jstring JNICALL Java_com_lilei_testjni_JniUtils_getJniString
        (JNIEnv *env, jclass) {
    // new 一个字符串，返回Hello World
    return env -> NewStringUTF("Hello World");
}
