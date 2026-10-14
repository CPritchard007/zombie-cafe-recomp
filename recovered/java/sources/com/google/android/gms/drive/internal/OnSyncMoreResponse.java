package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnSyncMoreResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new o();

    /* renamed from: a, reason: collision with root package name */
    final int f208a;
    final boolean b;

    OnSyncMoreResponse(int i, boolean z) {
        this.f208a = i;
        this.b = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        o.a(this, parcel, i);
    }
}
