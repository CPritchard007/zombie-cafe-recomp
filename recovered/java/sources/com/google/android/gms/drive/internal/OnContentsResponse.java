package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.Contents;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnContentsResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new e();

    /* renamed from: a, reason: collision with root package name */
    final int f198a;
    final Contents b;

    OnContentsResponse(int i, Contents contents) {
        this.f198a = i;
        this.b = contents;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        e.a(this, parcel, i);
    }
}
