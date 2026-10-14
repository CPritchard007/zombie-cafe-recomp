package com.google.android.gms.wallet.wobs;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class n implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new r();

    /* renamed from: a, reason: collision with root package name */
    String f585a;
    String b;
    private final int c;

    n() {
        this.c = 1;
    }

    n(int i, String str, String str2) {
        this.c = i;
        this.f585a = str;
        this.b = str2;
    }

    public int a() {
        return this.c;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        r.a(this, parcel, i);
    }
}
