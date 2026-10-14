package com.google.android.gms.wearable.internal;

import android.os.Parcel;
import android.os.ParcelFileDescriptor;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class x implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new aa();

    /* renamed from: a, reason: collision with root package name */
    public final int f605a;
    public final int b;
    public final ParcelFileDescriptor c;

    x(int i, int i2, ParcelFileDescriptor parcelFileDescriptor) {
        this.f605a = i;
        this.b = i2;
        this.c = parcelFileDescriptor;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        aa.a(this, parcel, i | 1);
    }
}
