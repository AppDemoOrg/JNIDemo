package com.abt.jni.performance;

/**
 * We use floating-point operations to determine the performance of Jni,
 * this is a time-consuming operation in the computer.
 */
public class JniWrapper {

    static {
        System.loadLibrary("jni_pref");
    }

    /**
     * mock a time-consuming task.
     */
    native public static double calculationTask(int loopCount);
}
