package com.google.android.gms.internal;

import android.content.Context;
import android.location.Location;
import android.os.Bundle;
import com.google.android.gms.ads.mediation.NetworkExtras;
import com.google.android.gms.ads.search.SearchAdRequest;
import java.util.Collections;
import java.util.Date;
import java.util.Map;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ah {

    /* renamed from: a, reason: collision with root package name */
    public static final String f279a = Cif.a("emulator");
    private final Date b;
    private final String c;
    private final int d;
    private final Set e;
    private final Location f;
    private final boolean g;
    private final Bundle h;
    private final Map i;
    private final String j;
    private final SearchAdRequest k;
    private final int l;
    private final Set m;

    public ah(aj ajVar) {
        this(ajVar, null);
    }

    public ah(aj ajVar, SearchAdRequest searchAdRequest) {
        this.b = ajVar.e;
        this.c = ajVar.f;
        this.d = ajVar.g;
        this.e = Collections.unmodifiableSet(ajVar.f281a);
        this.f = ajVar.h;
        this.g = ajVar.i;
        this.h = ajVar.b;
        this.i = Collections.unmodifiableMap(ajVar.c);
        this.j = ajVar.j;
        this.k = searchAdRequest;
        this.l = ajVar.k;
        this.m = Collections.unmodifiableSet(ajVar.d);
    }

    @Deprecated
    public NetworkExtras a(Class cls) {
        return (NetworkExtras) this.i.get(cls);
    }

    public Date a() {
        return this.b;
    }

    public boolean a(Context context) {
        return this.m.contains(Cif.a(context));
    }

    public Bundle b(Class cls) {
        return this.h.getBundle(cls.getName());
    }

    public String b() {
        return this.c;
    }

    public int c() {
        return this.d;
    }

    public Bundle c(Class cls) {
        Bundle bundle = this.h.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter");
        if (bundle != null) {
            return bundle.getBundle(cls.getClass().getName());
        }
        return null;
    }

    public Set d() {
        return this.e;
    }

    public Location e() {
        return this.f;
    }

    public boolean f() {
        return this.g;
    }

    public String g() {
        return this.j;
    }

    public SearchAdRequest h() {
        return this.k;
    }

    public Map i() {
        return this.i;
    }

    public Bundle j() {
        return this.h;
    }

    public int k() {
        return this.l;
    }
}
