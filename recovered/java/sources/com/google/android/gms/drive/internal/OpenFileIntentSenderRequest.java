package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.DriveId;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OpenFileIntentSenderRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new q();

    /* renamed from: a, reason: collision with root package name */
    final int f210a;
    final String b;
    final String[] c;
    final DriveId d;

    OpenFileIntentSenderRequest(int i, String str, String[] strArr, DriveId driveId) {
        this.f210a = i;
        this.b = str;
        this.c = strArr;
        this.d = driveId;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        q.a(this, parcel, i);
    }
}
