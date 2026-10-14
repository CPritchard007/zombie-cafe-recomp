package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class v implements SafeParcelable {
    public static final pe CREATOR = new pe();

    /* renamed from: a, reason: collision with root package name */
    public final int f530a;
    public final boolean b;
    public final boolean c;

    v(int i, boolean z, boolean z2) {
        this.f530a = i;
        this.b = z;
        this.c = z2;
    }

    public v(boolean z, boolean z2) {
        this.f530a = 1;
        this.b = z;
        this.c = z2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        pe.a(this, parcel, i);
    }
}
