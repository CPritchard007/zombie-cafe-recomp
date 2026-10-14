package com.google.android.gms.drive;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class StorageStats implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    final int f179a;
    final long b;
    final long c;
    final long d;
    final long e;
    final int f;

    StorageStats(int i, long j, long j2, long j3, long j4, int i2) {
        this.f179a = i;
        this.b = j;
        this.c = j2;
        this.d = j3;
        this.e = j4;
        this.f = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
