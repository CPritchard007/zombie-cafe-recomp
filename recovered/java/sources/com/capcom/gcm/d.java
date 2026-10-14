package com.capcom.gcm;

import android.content.Intent;
import android.os.Bundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class d {

    /* renamed from: a, reason: collision with root package name */
    private String f65a;
    private String b;
    private String c;
    private String d;
    private String e;

    protected d() {
    }

    public static d a(Intent intent) {
        return a(intent.getExtras());
    }

    public static d a(Bundle bundle) {
        d dVar = new d();
        if (bundle != null && !bundle.isEmpty()) {
            dVar.f65a = a(bundle, "message", null);
            dVar.b = a(bundle, "title", null);
            dVar.c = a(bundle, "ok", null);
            dVar.d = a(bundle, "cancel", null);
            dVar.e = a(bundle, "url", null);
        }
        return dVar;
    }

    private static String a(Bundle bundle, String str, String str2) {
        try {
            return bundle.containsKey(str) ? b(bundle.getCharSequence(str)) : str2;
        } catch (Exception e) {
            return str2;
        }
    }

    private static boolean a(Object obj) {
        if (obj == null) {
            return true;
        }
        return "".equals(obj.toString());
    }

    private static String b(Object obj) {
        return a(obj) ? "" : obj.toString();
    }

    private static void b(Bundle bundle, String str, String str2) {
        try {
            bundle.putCharSequence(str, b(str2));
        } catch (Exception e) {
        }
    }

    public String a() {
        return b(this.f65a);
    }

    public String b() {
        return b(this.b);
    }

    public void b(Intent intent) {
        Bundle bundle = new Bundle();
        b(bundle);
        intent.putExtras(bundle);
    }

    public void b(Bundle bundle) {
        if (bundle != null) {
            b(bundle, "message", this.f65a);
            b(bundle, "title", this.b);
            b(bundle, "ok", this.c);
            b(bundle, "cancel", this.d);
            b(bundle, "url", this.e);
        }
    }

    public String c() {
        return b(this.c);
    }

    public String d() {
        return b(this.d);
    }

    public String e() {
        return b(this.e);
    }
}
