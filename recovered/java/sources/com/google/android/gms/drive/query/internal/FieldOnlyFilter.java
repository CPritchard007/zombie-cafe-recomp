package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class FieldOnlyFilter implements SafeParcelable, com.google.android.gms.drive.query.a {
    public static final Parcelable.Creator CREATOR = new b();

    /* renamed from: a, reason: collision with root package name */
    final MetadataBundle f227a;
    final int b;
    private final com.google.android.gms.drive.metadata.a c;

    FieldOnlyFilter(int i, MetadataBundle metadataBundle) {
        this.b = i;
        this.f227a = metadataBundle;
        this.c = e.a(metadataBundle);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        b.a(this, parcel, i);
    }
}
