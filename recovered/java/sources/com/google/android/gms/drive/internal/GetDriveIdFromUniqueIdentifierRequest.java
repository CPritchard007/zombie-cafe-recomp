package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class GetDriveIdFromUniqueIdentifierRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new ah();

    /* renamed from: a, reason: collision with root package name */
    final int f194a;
    final String b;
    final boolean c;

    GetDriveIdFromUniqueIdentifierRequest(int i, String str, boolean z) {
        this.f194a = i;
        this.b = str;
        this.c = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ah.a(this, parcel, i);
    }
}
