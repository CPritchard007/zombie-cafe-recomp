package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class StreetViewPanoramaCamera implements SafeParcelable {
    public static final j CREATOR = new j();

    /* renamed from: a, reason: collision with root package name */
    public final float f547a;
    public final float b;
    public final float c;
    private final int d;
    private StreetViewPanoramaOrientation e;

    StreetViewPanoramaCamera(int i, float f, float f2, float f3) {
        ls.b(-90.0f <= f2 && f2 <= 90.0f, "Tilt needs to be between -90 and 90 inclusive");
        this.d = i;
        this.f547a = f;
        this.b = 0.0f + f2;
        this.c = (((double) f3) <= 0.0d ? (f3 % 360.0f) + 360.0f : f3) % 360.0f;
        this.e = new m().a(f2).b(f3).a();
    }

    int a() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof StreetViewPanoramaCamera)) {
            return false;
        }
        StreetViewPanoramaCamera streetViewPanoramaCamera = (StreetViewPanoramaCamera) obj;
        return Float.floatToIntBits(this.f547a) == Float.floatToIntBits(streetViewPanoramaCamera.f547a) && Float.floatToIntBits(this.b) == Float.floatToIntBits(streetViewPanoramaCamera.b) && Float.floatToIntBits(this.c) == Float.floatToIntBits(streetViewPanoramaCamera.c);
    }

    public int hashCode() {
        return lo.a(Float.valueOf(this.f547a), Float.valueOf(this.b), Float.valueOf(this.c));
    }

    public String toString() {
        return lo.a(this).a("zoom", Float.valueOf(this.f547a)).a("tilt", Float.valueOf(this.b)).a("bearing", Float.valueOf(this.c)).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        j.a(this, parcel, i);
    }
}
