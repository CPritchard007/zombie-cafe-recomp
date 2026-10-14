package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class StreetViewPanoramaOrientation implements SafeParcelable {
    public static final n CREATOR = new n();

    /* renamed from: a, reason: collision with root package name */
    public final float f550a;
    public final float b;
    private final int c;

    public StreetViewPanoramaOrientation(float f, float f2) {
        this(1, f, f2);
    }

    StreetViewPanoramaOrientation(int i, float f, float f2) {
        ls.b(-90.0f <= f && f <= 90.0f, "Tilt needs to be between -90 and 90 inclusive");
        this.c = i;
        this.f550a = 0.0f + f;
        this.b = (((double) f2) <= 0.0d ? (f2 % 360.0f) + 360.0f : f2) % 360.0f;
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
        if (!(obj instanceof StreetViewPanoramaOrientation)) {
            return false;
        }
        StreetViewPanoramaOrientation streetViewPanoramaOrientation = (StreetViewPanoramaOrientation) obj;
        return Float.floatToIntBits(this.f550a) == Float.floatToIntBits(streetViewPanoramaOrientation.f550a) && Float.floatToIntBits(this.b) == Float.floatToIntBits(streetViewPanoramaOrientation.b);
    }

    public int hashCode() {
        return lo.a(Float.valueOf(this.f550a), Float.valueOf(this.b));
    }

    public String toString() {
        return lo.a(this).a("tilt", Float.valueOf(this.f550a)).a("bearing", Float.valueOf(this.b)).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        n.a(this, parcel, i);
    }
}
