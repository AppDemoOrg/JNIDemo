LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := JNISample

LOCAL_SRC_FILES := com_abt_jni_JniUtils.cpp

include $(BUILD_SHARED_LIBRARY)