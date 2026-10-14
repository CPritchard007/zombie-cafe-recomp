package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.Contents;
import com.google.android.gms.drive.DriveId;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CloseContentsAndUpdateMetadataRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new y();

    /* renamed from: a, reason: collision with root package name */
    final int f185a;
    final DriveId b;
    final MetadataBundle c;
    final Contents d;
    final boolean e;
    final String f;

    CloseContentsAndUpdateMetadataRequest(int i, DriveId driveId, MetadataBundle metadataBundle, Contents contents, boolean z, String str) {
        this.f185a = i;
        this.b = driveId;
        this.c = metadataBundle;
        this.d = contents;
        this.e = z;
        this.f = str;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        y.a(this, parcel, i);
    }
}
