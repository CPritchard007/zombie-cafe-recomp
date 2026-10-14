package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fk implements SafeParcelable {
    final int b;
    public final String c;
    final fp d;
    public final int e;
    public final byte[] f;

    /* renamed from: a, reason: collision with root package name */
    public static final int f364a = Integer.parseInt("-1");
    public static final jy CREATOR = new jy();

    fk(int i, String str, fp fpVar, int i2, byte[] bArr) {
        ls.b(i2 == f364a || kb.a(i2) != null, "Invalid section type " + i2);
        this.b = i;
        this.c = str;
        this.d = fpVar;
        this.e = i2;
        this.f = bArr;
        String strA = a();
        if (strA != null) {
            throw new IllegalArgumentException(strA);
        }
    }

    public String a() {
        if (this.e != f364a && kb.a(this.e) == null) {
            return "Invalid section type " + this.e;
        }
        if (this.c == null || this.f == null) {
            return null;
        }
        return "Both content and blobContent set";
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        jy jyVar = CREATOR;
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        jy jyVar = CREATOR;
        jy.a(this, parcel, i);
    }
}
