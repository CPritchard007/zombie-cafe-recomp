package com.google.android.gms.wallet.fragment;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class WalletFragmentStyle implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    final int f576a;
    Bundle b;
    int c;

    public WalletFragmentStyle() {
        this.f576a = 1;
        this.b = new Bundle();
    }

    WalletFragmentStyle(int i, Bundle bundle, int i2) {
        this.f576a = i;
        this.b = bundle;
        this.c = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
