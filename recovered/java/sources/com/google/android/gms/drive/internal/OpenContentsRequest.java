package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OpenContentsRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new p();

    /* renamed from: a, reason: collision with root package name */
    final int f209a;
    final DriveId b;
    final int c;

    OpenContentsRequest(int i, DriveId driveId, int i2) {
        this.f209a = i;
        this.b = driveId;
        this.c = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        p.a(this, parcel, i);
    }
}
