package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class CameraPosition implements SafeParcelable {
    public static final b CREATOR = new b();

    /* renamed from: a, reason: collision with root package name */
    public final LatLng f539a;
    public final float b;
    public final float c;
    public final float d;
    private final int e;

    CameraPosition(int i, LatLng latLng, float f, float f2, float f3) {
        ls.a(latLng, "null camera target");
        ls.b(0.0f <= f2 && f2 <= 90.0f, "Tilt needs to be between 0 and 90 inclusive");
        this.e = i;
        this.f539a = latLng;
        this.b = f;
        this.c = f2 + 0.0f;
        this.d = (((double) f3) <= 0.0d ? (f3 % 360.0f) + 360.0f : f3) % 360.0f;
    }

    int a() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof CameraPosition)) {
            return false;
        }
        CameraPosition cameraPosition = (CameraPosition) obj;
        return this.f539a.equals(cameraPosition.f539a) && Float.floatToIntBits(this.b) == Float.floatToIntBits(cameraPosition.b) && Float.floatToIntBits(this.c) == Float.floatToIntBits(cameraPosition.c) && Float.floatToIntBits(this.d) == Float.floatToIntBits(cameraPosition.d);
    }

    public int hashCode() {
        return lo.a(this.f539a, Float.valueOf(this.b), Float.valueOf(this.c), Float.valueOf(this.d));
    }

    public String toString() {
        return lo.a(this).a("target", this.f539a).a("zoom", Float.valueOf(this.b)).a("tilt", Float.valueOf(this.c)).a("bearing", Float.valueOf(this.d)).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (com.google.android.gms.maps.a.b.a()) {
            t.a(this, parcel, i);
        } else {
            b.a(this, parcel, i);
        }
    }
}
