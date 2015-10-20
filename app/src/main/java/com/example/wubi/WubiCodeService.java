package com.example.wubi;

/**
 * Created by betahuang on 15/10/20.
 */
public final class WubiCodeService {
    public static String queryWubiCode(int ch) {
        return nativeQueryWubiCode(ch);
    }
    public static String randomCode() {
        return nativeRandom();
    }

    private static native String nativeQueryWubiCode(int ch);
    private static native String nativeRandom();

    static {
        System.loadLibrary("wubi_service");
    }
}
