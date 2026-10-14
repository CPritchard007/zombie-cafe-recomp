package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fm implements SafeParcelable {
    public static final jz CREATOR = new jz();

    /* renamed from: a, reason: collision with root package name */
    final int f366a;
    public final int b;
    final Bundle c;

    fm(int i, int i2, Bundle bundle) {
        this.f366a = i;
        this.b = i2;
        this.c = bundle;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        jz jzVar = CREATOR;
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        jz jzVar = CREATOR;
        jz.a(this, parcel, i);
    }
}
