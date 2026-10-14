package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnMetadataResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new k();

    /* renamed from: a, reason: collision with root package name */
    final int f205a;
    final MetadataBundle b;

    OnMetadataResponse(int i, MetadataBundle metadataBundle) {
        this.f205a = i;
        this.b = metadataBundle;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        k.a(this, parcel, i);
    }
}
