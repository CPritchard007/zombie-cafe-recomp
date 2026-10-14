package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class LoadRealtimeRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    final int f197a;
    final DriveId b;
    final boolean c;

    LoadRealtimeRequest(int i, DriveId driveId, boolean z) {
        this.f197a = i;
        this.b = driveId;
        this.c = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
