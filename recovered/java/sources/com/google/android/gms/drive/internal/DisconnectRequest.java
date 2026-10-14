package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class DisconnectRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new ag();

    /* renamed from: a, reason: collision with root package name */
    final int f193a;

    public DisconnectRequest() {
        this(1);
    }

    DisconnectRequest(int i) {
        this.f193a = i;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ag.a(this, parcel, i);
    }
}
