package com.abt.jni;

/**
 * Created by huangweiqi on 28/04/2018.
 */
public class JniUtils {

    static {
        System.loadLibrary("JNISample");
    }

    public static native String getJniString();
}
