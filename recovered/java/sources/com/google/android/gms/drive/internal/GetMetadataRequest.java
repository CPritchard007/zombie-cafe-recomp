package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class GetMetadataRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new ai();

    /* renamed from: a, reason: collision with root package name */
    final int f195a;
    final DriveId b;

    GetMetadataRequest(int i, DriveId driveId) {
        this.f195a = i;
        this.b = driveId;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ai.a(this, parcel, i);
    }
}
