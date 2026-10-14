package com.google.android.gms.wallet;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class NotifyTransactionStatusRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new m();

    /* renamed from: a, reason: collision with root package name */
    final int f570a;
    String b;
    int c;
    String d;

    NotifyTransactionStatusRequest() {
        this.f570a = 1;
    }

    NotifyTransactionStatusRequest(int i, String str, int i2, String str2) {
        this.f570a = i;
        this.b = str;
        this.c = i2;
        this.d = str2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        m.a(this, parcel, i);
    }
}
