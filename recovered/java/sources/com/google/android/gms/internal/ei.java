package com.google.android.gms.internal;

import android.content.Intent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ei {

    /* renamed from: a, reason: collision with root package name */
    private final String f349a;

    public ei(String str) {
        this.f349a = str;
    }

    public String a() {
        return hq.d();
    }

    public boolean a(String str, int i, Intent intent) {
        if (str == null || intent == null) {
            return false;
        }
        String strB = eh.b(intent);
        String strC = eh.c(intent);
        if (strB == null || strC == null) {
            return false;
        }
        if (!str.equals(eh.a(strB))) {
            ig.e("Developer payload not match.");
            return false;
        }
        if (this.f349a == null || ej.a(this.f349a, strB, strC)) {
            return true;
        }
        ig.e("Fail to verify signature.");
        return false;
    }
}
