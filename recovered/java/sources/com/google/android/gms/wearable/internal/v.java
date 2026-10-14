package com.google.android.gms.wearable.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class v implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new y();

    /* renamed from: a, reason: collision with root package name */
    public final int f604a;
    public final int b;
    public final m c;

    v(int i, int i2, m mVar) {
        this.f604a = i;
        this.b = i2;
        this.c = mVar;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        y.a(this, parcel, i);
    }
}
