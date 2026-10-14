package com.google.android.gms.drive.metadata.internal;

import com.google.android.gms.internal.mn;
import com.google.android.gms.internal.my;
import com.google.android.gms.internal.nf;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class g {

    /* renamed from: a, reason: collision with root package name */
    private static Map f223a = new HashMap();

    static {
        a(mn.f502a);
        a(mn.y);
        a(mn.r);
        a(mn.w);
        a(mn.z);
        a(mn.l);
        a(mn.m);
        a(mn.j);
        a(mn.o);
        a(mn.u);
        a(mn.b);
        a(mn.t);
        a(mn.d);
        a(mn.k);
        a(mn.e);
        a(mn.f);
        a(mn.g);
        a(mn.q);
        a(mn.n);
        a(mn.s);
        a(mn.v);
        a(mn.A);
        a(mn.B);
        a(mn.i);
        a(mn.h);
        a(mn.x);
        a(mn.p);
        a(mn.c);
        a(mn.C);
        a(my.f503a);
        a(my.c);
        a(my.d);
        a(my.e);
        a(my.b);
        a(nf.f506a);
        a(nf.b);
    }

    public static com.google.android.gms.drive.metadata.a a(String str) {
        return (com.google.android.gms.drive.metadata.a) f223a.get(str);
    }

    private static void a(com.google.android.gms.drive.metadata.a aVar) {
        if (f223a.containsKey(aVar.a())) {
            throw new IllegalArgumentException("Duplicate field name registered: " + aVar.a());
        }
        f223a.put(aVar.a(), aVar);
    }
}
