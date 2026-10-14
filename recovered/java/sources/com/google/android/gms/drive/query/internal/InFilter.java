package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.metadata.internal.MetadataBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class InFilter implements SafeParcelable, com.google.android.gms.drive.query.a {
    public static final g CREATOR = new g();

    /* renamed from: a, reason: collision with root package name */
    final MetadataBundle f231a;
    final int b;
    private final com.google.android.gms.drive.metadata.g c;

    InFilter(int i, MetadataBundle metadataBundle) {
        this.b = i;
        this.f231a = metadataBundle;
        this.c = (com.google.android.gms.drive.metadata.g) e.a(metadataBundle);
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
