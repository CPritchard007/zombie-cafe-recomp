package com.google.android.gms.drive.realtime.internal.event;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ValueChangedDetails implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new g();

    /* renamed from: a, reason: collision with root package name */
    final int f246a;
    final int b;

    ValueChangedDetails(int i, int i2) {
        this.f246a = i;
        this.b = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        g.a(this, parcel, i);
    }
}
