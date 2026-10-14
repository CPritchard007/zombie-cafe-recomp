package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class jk implements SafeParcelable {
    public static final nj CREATOR = new nj();

    /* renamed from: a, reason: collision with root package name */
    private final int f453a;
    private final int b;
    private final int c;
    private final jm d;

    jk(int i, int i2, int i3, jm jmVar) {
        this.f453a = i;
        this.b = i2;
        this.c = i3;
        this.d = jmVar;
    }

    public int a() {
        return this.f453a;
    }

    public int b() {
        return this.b;
    }

    public int c() {
        return this.c;
    }

    public jm d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nj njVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof jk)) {
            return false;
        }
        jk jkVar = (jk) obj;
        return this.b == jkVar.b && this.c == jkVar.c && this.d.equals(jkVar.d);
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.b), Integer.valueOf(this.c));
    }

    public String toString() {
        return lo.a(this).a("transitionTypes", Integer.valueOf(this.b)).a("loiteringTimeMillis", Integer.valueOf(this.c)).a("placeFilter", this.d).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nj njVar = CREATOR;
        nj.a(this, parcel, i);
    }
}
