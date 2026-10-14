package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.Parcelable;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class hg {
    private static final hg c = new hg();

    /* renamed from: a, reason: collision with root package name */
    public static final String f403a = c.b;
    private final Object d = new Object();
    private BigInteger f = BigInteger.ONE;
    private final HashSet g = new HashSet();
    private final HashMap h = new HashMap();
    private boolean i = false;
    public final String b = hq.d();
    private final hh e = new hh(this.b);

    private hg() {
    }

    public static Bundle a(Context context, hi hiVar, String str) {
        return c.b(context, hiVar, str);
    }

    public static hg a() {
        return c;
    }

    public static void a(HashSet hashSet) {
        c.b(hashSet);
    }

    public static String b() {
        return c.c();
    }

    public static hh d() {
        return c.e();
    }

    public static boolean f() {
        return c.g();
    }

    public void a(he heVar) {
        synchronized (this.d) {
            this.g.add(heVar);
        }
    }

    public void a(String str, hj hjVar) {
        synchronized (this.d) {
            this.h.put(str, hjVar);
        }
    }

    public Bundle b(Context context, hi hiVar, String str) {
        Bundle bundle;
        synchronized (this.d) {
            bundle = new Bundle();
            bundle.putBundle("app", this.e.a(context, str));
            Bundle bundle2 = new Bundle();
            for (String str2 : this.h.keySet()) {
                bundle2.putBundle(str2, ((hj) this.h.get(str2)).a());
            }
            bundle.putBundle("slots", bundle2);
            ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
            Iterator it = this.g.iterator();
            while (it.hasNext()) {
                arrayList.add(((he) it.next()).d());
            }
            bundle.putParcelableArrayList("ads", arrayList);
            hiVar.a(this.g);
            this.g.clear();
        }
        return bundle;
    }

    public void b(HashSet hashSet) {
        synchronized (this.d) {
            this.g.addAll(hashSet);
        }
    }

    public String c() {
        String string;
        synchronized (this.d) {
            string = this.f.toString();
            this.f = this.f.add(BigInteger.ONE);
        }
        return string;
    }

    public hh e() {
        hh hhVar;
        synchronized (this.d) {
            hhVar = this.e;
        }
        return hhVar;
    }

    public boolean g() {
        boolean z;
        synchronized (this.d) {
            z = this.i;
            this.i = true;
        }
        return z;
    }
}
