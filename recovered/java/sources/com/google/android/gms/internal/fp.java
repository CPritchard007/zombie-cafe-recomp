package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fp implements SafeParcelable {
    public static final kc CREATOR = new kc();

    /* renamed from: a, reason: collision with root package name */
    final int f368a;
    public final String b;
    public final String c;
    public final boolean d;
    public final int e;
    public final boolean f;
    public final String g;
    public final fm[] h;
    final int[] i;
    public final String j;

    fp(int i, String str, String str2, boolean z, int i2, boolean z2, String str3, fm[] fmVarArr, int[] iArr, String str4) {
        this.f368a = i;
        this.b = str;
        this.c = str2;
        this.d = z;
        this.e = i2;
        this.f = z2;
        this.g = str3;
        this.h = fmVarArr;
        this.i = iArr;
        this.j = str4;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        kc kcVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof fp)) {
            return false;
        }
        fp fpVar = (fp) obj;
        return this.b.equals(fpVar.b) && this.c.equals(fpVar.c) && this.d == fpVar.d;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        kc kcVar = CREATOR;
        kc.a(this, parcel, i);
    }
}
