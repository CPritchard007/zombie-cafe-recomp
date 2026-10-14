package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class HasFilter implements SafeParcelable, com.google.android.gms.drive.query.a {
    public static final f CREATOR = new f();

    /* renamed from: a, reason: collision with root package name */
    final MetadataBundle f230a;
    final int b;
    final com.google.android.gms.drive.metadata.a c;

    HasFilter(int i, MetadataBundle metadataBundle) {
        this.b = i;
        this.f230a = metadataBundle;
        this.c = e.a(metadataBundle);
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
