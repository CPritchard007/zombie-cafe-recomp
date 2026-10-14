package com.google.android.gms.internal;

import android.content.Context;
import java.util.regex.Pattern;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class mi {

    /* renamed from: a, reason: collision with root package name */
    private static Pattern f500a = null;

    public static int a(int i) {
        return i / 1000;
    }

    public static boolean a(Context context) {
        return context.getPackageManager().hasSystemFeature("android.hardware.type.watch");
    }

    public static int b(int i) {
        return (i % 1000) / 100;
    }

    public static boolean c(int i) {
        return b(i) == 3;
    }
}
