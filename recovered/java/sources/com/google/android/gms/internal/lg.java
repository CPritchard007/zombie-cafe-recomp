package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class lg implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new of();

    /* renamed from: a, reason: collision with root package name */
    int[] f493a;
    private final int b;

    lg() {
        this(1, null);
    }

    lg(int i, int[] iArr) {
        this.b = i;
        this.f493a = iArr;
    }

    public int a() {
        return this.b;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        of.a(this, parcel, i);
    }
}
