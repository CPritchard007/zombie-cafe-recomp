package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class hr implements SafeParcelable {
    public static final lu CREATOR = new lu();

    /* renamed from: a, reason: collision with root package name */
    final int f413a;
    public final String b;
    public final int c;

    public hr(int i, String str, int i2) {
        this.f413a = i;
        this.b = str;
        this.c = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        lu.a(this, parcel, i);
    }
}
