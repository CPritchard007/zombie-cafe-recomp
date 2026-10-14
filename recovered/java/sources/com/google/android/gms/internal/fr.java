package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fr implements SafeParcelable {
    public static final kd CREATOR = new kd();

    /* renamed from: a, reason: collision with root package name */
    final int f369a;
    final fi b;
    final long c;
    final int d;
    public final String e;
    final fg f;

    fr(int i, fi fiVar, long j, int i2, String str, fg fgVar) {
        this.f369a = i;
        this.b = fiVar;
        this.c = j;
        this.d = i2;
        this.e = str;
        this.f = fgVar;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        kd kdVar = CREATOR;
        return 0;
    }

    public String toString() {
        return String.format("UsageInfo[documentId=%s, timestamp=%d, usageType=%d]", this.b, Long.valueOf(this.c), Integer.valueOf(this.d));
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        kd kdVar = CREATOR;
        kd.a(this, parcel, i);
    }
}
