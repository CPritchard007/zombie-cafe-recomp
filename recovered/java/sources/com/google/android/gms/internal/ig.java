package com.google.android.gms.internal;

import android.util.Log;
import com.google.ads.AdRequest;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ig {
    public static void a(String str) {
        if (a(3)) {
            Log.d(AdRequest.LOGTAG, str);
        }
    }

    public static void a(String str, Throwable th) {
        if (a(3)) {
            Log.d(AdRequest.LOGTAG, str, th);
        }
    }

    public static boolean a(int i) {
        return (i >= 5 || Log.isLoggable(AdRequest.LOGTAG, i)) && i != 2;
    }

    public static void b(String str) {
        if (a(6)) {
            Log.e(AdRequest.LOGTAG, str);
        }
    }

    public static void b(String str, Throwable th) {
        if (a(6)) {
            Log.e(AdRequest.LOGTAG, str, th);
        }
    }

    public static void c(String str) {
        if (a(4)) {
            Log.i(AdRequest.LOGTAG, str);
        }
    }

    public static void c(String str, Throwable th) {
        if (a(5)) {
            Log.w(AdRequest.LOGTAG, str, th);
        }
    }

    public static void d(String str) {
        if (a(2)) {
            Log.v(AdRequest.LOGTAG, str);
        }
    }

    public static void e(String str) {
        if (a(5)) {
            Log.w(AdRequest.LOGTAG, str);
        }
    }
}
