package com.google.android.gms.wallet.wobs;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class f implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new m();

    /* renamed from: a, reason: collision with root package name */
    String f581a;
    g b;
    String c;
    l d;
    private final int e;

    f() {
        this.e = 1;
    }

    f(int i, String str, g gVar, String str2, l lVar) {
        this.e = i;
        this.f581a = str;
        this.b = gVar;
        this.c = str2;
        this.d = lVar;
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
        m.a(this, parcel, i);
    }
}
