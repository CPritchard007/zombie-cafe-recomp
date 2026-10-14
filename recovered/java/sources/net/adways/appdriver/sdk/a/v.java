package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class v {

    /* renamed from: a, reason: collision with root package name */
    private static boolean f629a = false;

    public static int a(Context context) {
        return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
    }

    public static void a(String str) {
    }

    public static void a(String str, Throwable th) {
    }

    public static boolean a(Context context, String str) {
        return context.getPackageManager().resolveActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)), 65536) != null;
    }

    public static String b(String str) {
        return str == null ? "" : str;
    }

    public static boolean b(Context context, String str) throws PackageManager.NameNotFoundException {
        try {
            context.getPackageManager().getApplicationInfo(str, 128);
            return true;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }
}
