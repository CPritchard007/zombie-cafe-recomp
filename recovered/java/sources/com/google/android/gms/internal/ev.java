package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ev implements SafeParcelable {
    public static final ih CREATOR = new ih();

    /* renamed from: a, reason: collision with root package name */
    public final int f353a;
    public String b;
    public int c;
    public int d;
    public boolean e;

    public ev(int i, int i2, boolean z) {
        this(1, "afma-sdk-a-v" + i + "." + i2 + "." + (z ? "0" : "1"), i, i2, z);
    }

    ev(int i, String str, int i2, int i3, boolean z) {
        this.f353a = i;
        this.b = str;
        this.c = i2;
        this.d = i3;
        this.e = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ih.a(this, parcel, i);
    }
}
