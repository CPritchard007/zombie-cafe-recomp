package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class LatLngBounds implements SafeParcelable {
    public static final e CREATOR = new e();

    /* renamed from: a, reason: collision with root package name */
    public final LatLng f543a;
    public final LatLng b;
    private final int c;

    LatLngBounds(int i, LatLng latLng, LatLng latLng2) {
        ls.a(latLng, "null southwest");
        ls.a(latLng2, "null northeast");
        ls.b(latLng2.f542a >= latLng.f542a, "southern latitude exceeds northern latitude (%s > %s)", Double.valueOf(latLng.f542a), Double.valueOf(latLng2.f542a));
        this.c = i;
        this.f543a = latLng;
        this.b = latLng2;
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
        if (!(obj instanceof LatLngBounds)) {
            return false;
        }
        LatLngBounds latLngBounds = (LatLngBounds) obj;
        return this.f543a.equals(latLngBounds.f543a) && this.b.equals(latLngBounds.b);
    }

    public int hashCode() {
        return lo.a(this.f543a, this.b);
    }

    public String toString() {
        return lo.a(this).a("southwest", this.f543a).a("northeast", this.b).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (com.google.android.gms.maps.a.b.a()) {
            w.a(this, parcel, i);
        } else {
            e.a(this, parcel, i);
        }
    }
}
