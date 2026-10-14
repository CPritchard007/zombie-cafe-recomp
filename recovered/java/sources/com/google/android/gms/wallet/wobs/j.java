package com.google.android.gms.wallet.wobs;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class j implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new o();

    /* renamed from: a, reason: collision with root package name */
    String f583a;
    String b;
    private final int c;

    j() {
        this.c = 1;
    }

    j(int i, String str, String str2) {
        this.c = i;
        this.f583a = str;
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
        o.a(this, parcel, i);
    }
}
