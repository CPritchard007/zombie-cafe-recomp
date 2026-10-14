package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ge implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new kf();

    /* renamed from: a, reason: collision with root package name */
    private final int f381a;
    private String b;

    public ge() {
        this(1, null);
    }

    ge(int i, String str) {
        this.f381a = i;
        this.b = str;
    }

    public int a() {
        return this.f381a;
    }

    public String b() {
        return this.b;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof ge) {
            return kg.a(this.b, ((ge) obj).b);
        }
        return false;
    }

    public int hashCode() {
        return lo.a(this.b);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        kf.a(this, parcel, i);
    }
}
