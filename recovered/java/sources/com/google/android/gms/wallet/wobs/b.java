package com.google.android.gms.wallet.wobs;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class b implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new h();

    /* renamed from: a, reason: collision with root package name */
    String f578a;
    String b;
    private final int c;

    b() {
        this.c = 1;
    }

    b(int i, String str, String str2) {
        this.c = i;
        this.f578a = str;
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
        h.a(this, parcel, i);
    }
}
