package com.google.android.gms.maps.model;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class StreetViewPanoramaLink implements SafeParcelable {
    public static final k CREATOR = new k();

    /* renamed from: a, reason: collision with root package name */
    public final String f548a;
    public final float b;
    private final int c;

    StreetViewPanoramaLink(int i, String str, float f) {
        this.c = i;
        this.f548a = str;
        this.b = (((double) f) <= 0.0d ? (f % 360.0f) + 360.0f : f) % 360.0f;
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
        if (!(obj instanceof StreetViewPanoramaLink)) {
            return false;
        }
        StreetViewPanoramaLink streetViewPanoramaLink = (StreetViewPanoramaLink) obj;
        return this.f548a.equals(streetViewPanoramaLink.f548a) && Float.floatToIntBits(this.b) == Float.floatToIntBits(streetViewPanoramaLink.b);
    }

    public int hashCode() {
        return lo.a(this.f548a, Float.valueOf(this.b));
    }

    public String toString() {
        return lo.a(this).a("panoId", this.f548a).a("bearing", Float.valueOf(this.b)).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        k.a(this, parcel, i);
    }
}
