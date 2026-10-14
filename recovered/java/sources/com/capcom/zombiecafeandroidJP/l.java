package com.capcom.zombiecafeandroidJP;

import android.os.Build;
import java.util.Arrays;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class l {

    /* renamed from: a, reason: collision with root package name */
    private static l f109a = null;
    private static final List i = Arrays.asList("ntt docomo", "au", "softbank", "emobile", "willcom");
    private static final List j = Arrays.asList("44010", "44020", "44053", "44054", "44070", "44071", "44072", "44073", "44074", "44075", "44076");
    private static final List k = Arrays.asList("DOCOMO", "SBM", "KDDI", "KDDI", "KDDI", "KDDI", "KDDI", "KDDI", "KDDI", "KDDI", "KDDI");
    private String b;
    private String c;
    private String d;
    private String e;
    private String f;
    private String g;
    private String h;

    private l() {
        this.b = "";
        this.c = "";
        this.d = "";
        this.e = "";
        this.f = "";
        this.g = "";
        this.h = "";
        try {
            this.b = Build.BRAND;
        } catch (Exception e) {
        }
        this.c = Build.MANUFACTURER;
        this.d = Build.DEVICE;
        this.e = Build.MODEL;
        this.f = Build.PRODUCT;
        this.g = Build.VERSION.RELEASE;
        this.h = Build.VERSION.SDK;
    }

    public static synchronized l a() {
        if (f109a == null) {
            f109a = new l();
        }
        return f109a;
    }

    public String b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }

    public String d() {
        return this.d;
    }

    public String e() {
        return this.e;
    }

    public String f() {
        return this.f;
    }

    public String g() {
        return this.g;
    }

    public String h() {
        return this.h;
    }
}
