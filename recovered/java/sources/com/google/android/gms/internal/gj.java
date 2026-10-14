package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class gj implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new kh();

    /* renamed from: a, reason: collision with root package name */
    private final int f385a;
    private double b;
    private boolean c;
    private int d;

    public gj() {
        this(1, Double.NaN, false, -1);
    }

    gj(int i, double d, boolean z, int i2) {
        this.f385a = i;
        this.b = d;
        this.c = z;
        this.d = i2;
    }

    public int a() {
        return this.f385a;
    }

    public double b() {
        return this.b;
    }

    public boolean c() {
        return this.c;
    }

    public int d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof gj)) {
            return false;
        }
        gj gjVar = (gj) obj;
        return this.b == gjVar.b && this.c == gjVar.c && this.d == gjVar.d;
    }

    public int hashCode() {
        return lo.a(Double.valueOf(this.b), Boolean.valueOf(this.c), Integer.valueOf(this.d));
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        kh.a(this, parcel, i);
    }
}
