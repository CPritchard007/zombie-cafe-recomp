package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.Contents;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CloseContentsRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new z();

    /* renamed from: a, reason: collision with root package name */
    final int f186a;
    final Contents b;
    final Boolean c;

    CloseContentsRequest(int i, Contents contents, Boolean bool) {
        this.f186a = i;
        this.b = contents;
        this.c = bool;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        z.a(this, parcel, i);
    }
}
