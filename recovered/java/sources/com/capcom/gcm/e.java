package com.capcom.gcm;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import android.support.v4.widget.ExploreByTouchHelper;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class e {
    protected static String a(Context context) {
        return "GCM";
    }

    public static void a(Context context, String str) {
        SharedPreferences sharedPreferencesB = b(context);
        int iF = f(context);
        Log.i("GCMUtil", "Saving regId on app version " + iF);
        SharedPreferences.Editor editorEdit = sharedPreferencesB.edit();
        editorEdit.putString("registration_id", str);
        editorEdit.putInt("appVersion", iF);
        editorEdit.commit();
    }

    public static void a(Context context, boolean z) {
        SharedPreferences.Editor editorEdit = b(context).edit();
        editorEdit.putBoolean("display_dialog", z);
        editorEdit.commit();
    }

    public static SharedPreferences b(Context context) {
        return context.getSharedPreferences(a(context), 0);
    }

    public static void b(Context context, boolean z) {
        SharedPreferences.Editor editorEdit = b(context).edit();
        editorEdit.putBoolean("app_running", z);
        editorEdit.commit();
    }

    public static String c(Context context) {
        SharedPreferences sharedPreferencesB = b(context);
        String string = sharedPreferencesB.getString("registration_id", "");
        if (string.isEmpty()) {
            Log.i("GCMUtil", "Registration not found.");
            return "";
        }
        if (sharedPreferencesB.getInt("appVersion", ExploreByTouchHelper.INVALID_ID) == f(context)) {
            return string;
        }
        Log.i("GCMUtil", "App version changed.");
        return "";
    }

    public static String d(Context context) {
        try {
            return context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData.getString("com.google.android.gms.games.APP_ID");
        } catch (PackageManager.NameNotFoundException e) {
            throw new RuntimeException("Could not get package name: " + e);
        }
    }

    public static boolean e(Context context) {
        return b(context).getBoolean("display_dialog", true);
    }

    private static int f(Context context) {
        try {
            return context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
        } catch (PackageManager.NameNotFoundException e) {
            throw new RuntimeException("Could not get package name: " + e);
        }
    }
}
