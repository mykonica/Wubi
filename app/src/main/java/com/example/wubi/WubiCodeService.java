package com.example.wubi;

/**
 * Created by betahuang on 15/10/20.
 */
public final class WubiCodeService {
    public static String queryWubiCode(int ch) {
        return nativeQueryWubiCode(ch);
    }

    private static native String nativeQueryWubiCode(int ch);

    static {
        System.loadLibrary("wubi_service");
    }
}
