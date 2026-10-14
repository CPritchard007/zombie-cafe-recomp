package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class UpdateMetadataRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new v();

    /* renamed from: a, reason: collision with root package name */
    final int f215a;
    final DriveId b;
    final MetadataBundle c;

    UpdateMetadataRequest(int i, DriveId driveId, MetadataBundle metadataBundle) {
        this.f215a = i;
        this.b = driveId;
        this.c = metadataBundle;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        v.a(this, parcel, i);
    }
}
