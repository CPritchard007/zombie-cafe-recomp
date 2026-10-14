package com.google.android.gms.internal;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class cq implements SafeParcelable {
    public static final dx CREATOR = new dx();

    /* renamed from: a, reason: collision with root package name */
    public final int f317a;
    public final fa b;
    public final ei c;
    public final ek d;
    public final Context e;

    cq(int i, IBinder iBinder, IBinder iBinder2, IBinder iBinder3, IBinder iBinder4) {
        this.f317a = i;
        this.b = (fa) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder));
        this.c = (ei) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder2));
        this.d = (ek) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder3));
        this.e = (Context) com.google.android.gms.a.d.a(com.google.android.gms.a.b.a(iBinder4));
    }

    public cq(ek ekVar, fa faVar, ei eiVar, Context context) {
        this.f317a = 1;
        this.d = ekVar;
        this.b = faVar;
        this.c = eiVar;
        this.e = context;
    }

    public static cq a(Intent intent) {
        try {
            Bundle bundleExtra = intent.getBundleExtra("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo");
            bundleExtra.setClassLoader(cq.class.getClassLoader());
            return (cq) bundleExtra.getParcelable("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo");
        } catch (Exception e) {
            return null;
        }
    }

    public static void a(Intent intent, cq cqVar) {
        Bundle bundle = new Bundle(1);
        bundle.putParcelable("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo", cqVar);
        intent.putExtra("com.google.android.gms.ads.internal.purchase.InAppPurchaseManagerInfo", bundle);
    }

    IBinder a() {
        return com.google.android.gms.a.d.a(this.b).asBinder();
    }

    IBinder b() {
        return com.google.android.gms.a.d.a(this.c).asBinder();
    }

    IBinder c() {
        return com.google.android.gms.a.d.a(this.d).asBinder();
    }

    IBinder d() {
        return com.google.android.gms.a.d.a(this.e).asBinder();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        dx.a(this, parcel, i);
    }
}
