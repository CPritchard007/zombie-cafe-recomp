package com.google.android.gms.wallet.wobs;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class g implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new k();

    /* renamed from: a, reason: collision with root package name */
    int f582a;
    String b;
    double c;
    String d;
    long e;
    int f;
    private final int g;

    g() {
        this.g = 1;
        this.f = -1;
        this.f582a = -1;
        this.c = -1.0d;
    }

    g(int i, int i2, String str, double d, String str2, long j, int i3) {
        this.g = i;
        this.f582a = i2;
        this.b = str;
        this.c = d;
        this.d = str2;
        this.e = j;
        this.f = i3;
    }

    public int a() {
        return this.g;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        k.a(this, parcel, i);
    }
}
