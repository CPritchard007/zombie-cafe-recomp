package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class x {

    /* renamed from: a, reason: collision with root package name */
    int f58a;
    String b;

    public x(int i, String str) {
        this.f58a = i;
        if (str == null || str.trim().length() == 0) {
            this.b = l.a(i);
        } else {
            this.b = String.valueOf(str) + " (response: " + l.a(i) + ")";
        }
    }

    public String a() {
        return this.b;
    }

    public boolean b() {
        return this.f58a == 0;
    }

    public boolean c() {
        return !b();
    }

    public String toString() {
        return "IabResult: " + a();
    }
}
