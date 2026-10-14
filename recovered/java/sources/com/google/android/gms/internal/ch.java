package com.google.android.gms.internal;

import android.content.Intent;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ch implements SafeParcelable {
    public static final dg CREATOR = new dg();

    /* renamed from: a, reason: collision with root package name */
    public final int f308a;
    public final ce b;
    public final oy c;
    public final dh d;
    public final ii e;
    public final aq f;
    public final String g;
    public final boolean h;
    public final String i;
    public final dm j;
    public final int k;
    public final int l;
    public final String m;
    public final ev n;
    public final bc o;
    public final String p;
    public final v q;

    ch(int i, ce ceVar, IBinder iBinder, IBinder iBinder2, IBinder iBinder3, IBinder iBinder4, String str, boolean z, String str2, IBinder iBinder5, int i2, int i3, String str3, ev evVar, IBinder iBinder6, String str4, v vVar) {
        this.f308a = i;
        this.b = ceVar;
        this.c = (oy) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder));
        this.d = (dh) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder2));
        this.e = (ii) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder3));
        this.f = (aq) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder4));
        this.g = str;
        this.h = z;
        this.i = str2;
        this.j = (dm) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder5));
        this.k = i2;
        this.l = i3;
        this.m = str3;
        this.n = evVar;
        this.o = (bc) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder6));
        this.p = str4;
        this.q = vVar;
    }

    public ch(ce ceVar, oy oyVar, dh dhVar, dm dmVar, ev evVar) {
        this.f308a = 4;
        this.b = ceVar;
        this.c = oyVar;
        this.d = dhVar;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = false;
        this.i = null;
        this.j = dmVar;
        this.k = -1;
        this.l = 4;
        this.m = null;
        this.n = evVar;
        this.o = null;
        this.p = null;
        this.q = null;
    }

    public ch(oy oyVar, dh dhVar, aq aqVar, dm dmVar, ii iiVar, boolean z, int i, String str, ev evVar, bc bcVar) {
        this.f308a = 4;
        this.b = null;
        this.c = oyVar;
        this.d = dhVar;
        this.e = iiVar;
        this.f = aqVar;
        this.g = null;
        this.h = z;
        this.i = null;
        this.j = dmVar;
        this.k = i;
        this.l = 3;
        this.m = str;
        this.n = evVar;
        this.o = bcVar;
        this.p = null;
        this.q = null;
    }

    public ch(oy oyVar, dh dhVar, aq aqVar, dm dmVar, ii iiVar, boolean z, int i, String str, String str2, ev evVar, bc bcVar) {
        this.f308a = 4;
        this.b = null;
        this.c = oyVar;
        this.d = dhVar;
        this.e = iiVar;
        this.f = aqVar;
        this.g = str2;
        this.h = z;
        this.i = str;
        this.j = dmVar;
        this.k = i;
        this.l = 3;
        this.m = null;
        this.n = evVar;
        this.o = bcVar;
        this.p = null;
        this.q = null;
    }

    public ch(oy oyVar, dh dhVar, dm dmVar, ii iiVar, int i, ev evVar, String str, v vVar) {
        this.f308a = 4;
        this.b = null;
        this.c = oyVar;
        this.d = dhVar;
        this.e = iiVar;
        this.f = null;
        this.g = null;
        this.h = false;
        this.i = null;
        this.j = dmVar;
        this.k = i;
        this.l = 1;
        this.m = null;
        this.n = evVar;
        this.o = null;
        this.p = str;
        this.q = vVar;
    }

    public ch(oy oyVar, dh dhVar, dm dmVar, ii iiVar, boolean z, int i, ev evVar) {
        this.f308a = 4;
        this.b = null;
        this.c = oyVar;
        this.d = dhVar;
        this.e = iiVar;
        this.f = null;
        this.g = null;
        this.h = z;
        this.i = null;
        this.j = dmVar;
        this.k = i;
        this.l = 2;
        this.m = null;
        this.n = evVar;
        this.o = null;
        this.p = null;
        this.q = null;
    }

    public static ch a(Intent intent) {
        try {
            Bundle bundleExtra = intent.getBundleExtra("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo");
            bundleExtra.setClassLoader(ch.class.getClassLoader());
            return (ch) bundleExtra.getParcelable("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo");
        } catch (Exception e) {
            return null;
        }
    }

    public static void a(Intent intent, ch chVar) {
        Bundle bundle = new Bundle(1);
        bundle.putParcelable("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo", chVar);
        intent.putExtra("com.google.android.gms.ads.inernal.overlay.AdOverlayInfo", bundle);
    }

    IBinder a() {
        return com.google.android.gms.a.d.a(this.c).asBinder();
    }

    IBinder b() {
        return com.google.android.gms.a.d.a(this.d).asBinder();
    }

    IBinder c() {
        return com.google.android.gms.a.d.a(this.e).asBinder();
    }

    IBinder d() {
        return com.google.android.gms.a.d.a(this.f).asBinder();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    IBinder e() {
        return com.google.android.gms.a.d.a(this.o).asBinder();
    }

    IBinder f() {
        return com.google.android.gms.a.d.a(this.j).asBinder();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        dg.a(this, parcel, i);
    }
}
