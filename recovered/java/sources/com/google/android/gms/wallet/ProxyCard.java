package com.google.android.gms.wallet;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ProxyCard implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new o();

    /* renamed from: a, reason: collision with root package name */
    String f572a;
    String b;
    int c;
    int d;
    private final int e;

    ProxyCard(int i, String str, String str2, int i2, int i3) {
        this.e = i;
        this.f572a = str;
        this.b = str2;
        this.c = i2;
        this.d = i3;
    }

    public int a() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        o.a(this, parcel, i);
    }
}
