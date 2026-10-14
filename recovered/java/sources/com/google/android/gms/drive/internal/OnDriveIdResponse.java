package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnDriveIdResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new g();

    /* renamed from: a, reason: collision with root package name */
    final int f200a;
    DriveId b;

    OnDriveIdResponse(int i, DriveId driveId) {
        this.f200a = i;
        this.b = driveId;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        g.a(this, parcel, i);
    }
}
