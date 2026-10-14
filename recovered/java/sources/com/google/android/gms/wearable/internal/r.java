package com.google.android.gms.wearable.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class r implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new u();

    /* renamed from: a, reason: collision with root package name */
    public final int f602a;
    public final int b;
    public final com.google.android.gms.wearable.c c;

    r(int i, int i2, com.google.android.gms.wearable.c cVar) {
        this.f602a = i;
        this.b = i2;
        this.c = cVar;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        u.a(this, parcel, i);
    }
}
