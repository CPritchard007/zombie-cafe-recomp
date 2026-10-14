package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class LatLng implements SafeParcelable {
    public static final f CREATOR = new f();

    /* renamed from: a, reason: collision with root package name */
    public final double f542a;
    public final double b;
    private final int c;

    LatLng(int i, double d, double d2) {
        this.c = i;
        if (-180.0d > d2 || d2 >= 180.0d) {
            this.b = ((((d2 - 180.0d) % 360.0d) + 360.0d) % 360.0d) - 180.0d;
        } else {
            this.b = d2;
        }
        this.f542a = Math.max(-90.0d, Math.min(90.0d, d));
    }

    int a() {
        return this.c;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof LatLng)) {
            return false;
        }
        LatLng latLng = (LatLng) obj;
        return Double.doubleToLongBits(this.f542a) == Double.doubleToLongBits(latLng.f542a) && Double.doubleToLongBits(this.b) == Double.doubleToLongBits(latLng.b);
    }

    public int hashCode() {
        long jDoubleToLongBits = Double.doubleToLongBits(this.f542a);
        int i = ((int) (jDoubleToLongBits ^ (jDoubleToLongBits >>> 32))) + 31;
        long jDoubleToLongBits2 = Double.doubleToLongBits(this.b);
        return (i * 31) + ((int) (jDoubleToLongBits2 ^ (jDoubleToLongBits2 >>> 32)));
    }

    public String toString() {
        return "lat/lng: (" + this.f542a + "," + this.b + ")";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (com.google.android.gms.maps.a.b.a()) {
            x.a(this, parcel, i);
        } else {
            f.a(this, parcel, i);
        }
    }
}
