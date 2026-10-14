package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class RemoveEventListenerRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new s();

    /* renamed from: a, reason: collision with root package name */
    final int f212a;
    final DriveId b;
    final int c;

    RemoveEventListenerRequest(int i, DriveId driveId, int i2) {
        this.f212a = i;
        this.b = driveId;
        this.c = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        s.a(this, parcel, i);
    }
}
