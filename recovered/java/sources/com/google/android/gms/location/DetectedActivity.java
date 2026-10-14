package com.google.android.gms.location;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class DetectedActivity implements SafeParcelable {
    public static final c CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    int f533a;
    int b;
    private final int c;

    public DetectedActivity(int i, int i2, int i3) {
        this.c = i;
        this.f533a = i2;
        this.b = i3;
    }

    private int a(int i) {
        if (i > 8) {
            return 4;
        }
        return i;
    }

    public int a() {
        return a(this.f533a);
    }

    public int b() {
        return this.c;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "DetectedActivity [type=" + a() + ", confidence=" + this.b + "]";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
