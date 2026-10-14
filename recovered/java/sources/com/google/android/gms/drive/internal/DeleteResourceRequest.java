package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class DeleteResourceRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new af();

    /* renamed from: a, reason: collision with root package name */
    final int f192a;
    final DriveId b;

    DeleteResourceRequest(int i, DriveId driveId) {
        this.f192a = i;
        this.b = driveId;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        af.a(this, parcel, i);
    }
}
