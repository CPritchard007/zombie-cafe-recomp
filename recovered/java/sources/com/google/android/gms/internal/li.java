package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class li implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new og();

    /* renamed from: a, reason: collision with root package name */
    String[] f494a;
    byte[][] b;
    private final int c;

    li() {
        this(1, new String[0], new byte[0][]);
    }

    li(int i, String[] strArr, byte[][] bArr) {
        this.c = i;
        this.f494a = strArr;
        this.b = bArr;
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
        og.a(this, parcel, i);
    }
}
