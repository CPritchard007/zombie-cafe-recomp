package com.google.android.gms.wearable.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class p implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new s();

    /* renamed from: a, reason: collision with root package name */
    public final int f601a;
    public final int b;
    public final int c;

    p(int i, int i2, int i3) {
        this.f601a = i;
        this.b = i2;
        this.c = i3;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        s.a(this, parcel, i);
    }
}
