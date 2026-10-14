package com.google.android.gms.internal;

import android.content.Intent;
import android.net.Uri;
import android.support.v4.view.accessibility.AccessibilityEventCompat;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class lf {

    /* renamed from: a, reason: collision with root package name */
    private static final Uri f492a = Uri.parse("http://plus.google.com/");
    private static final Uri b = f492a.buildUpon().appendPath("circles").appendPath("find").build();

    public static Intent a() {
        return new Intent("android.settings.DATE_SETTINGS");
    }

    public static Intent a(String str) {
        Uri uriFromParts = Uri.fromParts("package", str, null);
        Intent intent = new Intent("android.settings.APPLICATION_DETAILS_SETTINGS");
        intent.setData(uriFromParts);
        return intent;
    }

    public static Intent b(String str) {
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setData(c(str));
        intent.setPackage("com.android.vending");
        intent.addFlags(AccessibilityEventCompat.TYPE_GESTURE_DETECTION_END);
        return intent;
    }

    private static Uri c(String str) {
        return Uri.parse("market://details").buildUpon().appendQueryParameter("id", str).build();
    }
}
