package com.google.android.gms.maps.model;

import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class TileOverlayOptions implements SafeParcelable {
    public static final q CREATOR = new q();

    /* renamed from: a, reason: collision with root package name */
    private final int f552a;
    private com.google.android.gms.maps.model.a.a b;
    private r c;
    private boolean d;
    private float e;
    private boolean f;

    public TileOverlayOptions() {
        this.d = true;
        this.f = true;
        this.f552a = 1;
    }

    TileOverlayOptions(int i, IBinder iBinder, boolean z, float f, boolean z2) {
        this.d = true;
        this.f = true;
        this.f552a = i;
        this.b = com.google.android.gms.maps.model.a.b.a(iBinder);
        this.c = this.b == null ? null : new p(this);
        this.d = z;
        this.e = f;
        this.f = z2;
    }

    int a() {
        return this.f552a;
    }

    IBinder b() {
        return this.b.asBinder();
    }

    public float c() {
        return this.e;
    }

    public boolean d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean e() {
        return this.f;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (com.google.android.gms.maps.a.b.a()) {
            ac.a(this, parcel, i);
        } else {
            q.a(this, parcel, i);
        }
    }
}
