package com.google.android.gms.internal;

import android.location.Location;
import android.os.Bundle;
import com.google.ads.mediation.admob.AdMobAdapter;
import com.google.android.gms.ads.mediation.NetworkExtras;
import com.google.android.gms.ads.mediation.admob.AdMobExtras;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class aj {
    private Date e;
    private String f;
    private Location h;
    private String j;

    /* renamed from: a, reason: collision with root package name */
    private final HashSet f281a = new HashSet();
    private final Bundle b = new Bundle();
    private final HashMap c = new HashMap();
    private final HashSet d = new HashSet();
    private int g = -1;
    private boolean i = false;
    private int k = -1;

    public void a(int i) {
        this.g = i;
    }

    public void a(Location location) {
        this.h = location;
    }

    @Deprecated
    public void a(NetworkExtras networkExtras) {
        if (networkExtras instanceof AdMobExtras) {
            a(AdMobAdapter.class, ((AdMobExtras) networkExtras).getExtras());
        } else {
            this.c.put(networkExtras.getClass(), networkExtras);
        }
    }

    public void a(Class cls, Bundle bundle) {
        this.b.putBundle(cls.getName(), bundle);
    }

    public void a(String str) {
        this.f281a.add(str);
    }

    public void a(Date date) {
        this.e = date;
    }

    public void a(boolean z) {
        this.i = z;
    }

    public void b(Class cls, Bundle bundle) {
        if (this.b.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter") == null) {
            this.b.putBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter", new Bundle());
        }
        this.b.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter").putBundle(cls.getName(), bundle);
    }

    public void b(String str) {
        this.d.add(str);
    }

    public void b(boolean z) {
        this.k = z ? 1 : 0;
    }

    public void c(String str) {
        this.f = str;
    }

    public void d(String str) {
        this.j = str;
    }
}
