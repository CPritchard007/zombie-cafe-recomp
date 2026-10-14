package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnDownloadProgressResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new f();

    /* renamed from: a, reason: collision with root package name */
    final int f199a;
    final long b;
    final long c;

    OnDownloadProgressResponse(int i, long j, long j2) {
        this.f199a = i;
        this.b = j;
        this.c = j2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        f.a(this, parcel, i);
    }
}
