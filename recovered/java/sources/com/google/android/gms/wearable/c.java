package com.google.android.gms.wearable;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class c implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new e();

    /* renamed from: a, reason: collision with root package name */
    final int f589a;
    private final String b;
    private final String c;
    private final int d;
    private final int e;
    private final boolean f;

    c(int i, String str, String str2, int i2, int i3, boolean z) {
        this.f589a = i;
        this.b = str;
        this.c = str2;
        this.d = i2;
        this.e = i3;
        this.f = z;
    }

    public String a() {
        return this.b;
    }

    public String b() {
        return this.c;
    }

    public int c() {
        return this.d;
    }

    public int d() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean e() {
        return this.f;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return lo.a(Integer.valueOf(this.f589a), Integer.valueOf(cVar.f589a)) && lo.a(this.b, cVar.b) && lo.a(this.c, cVar.c) && lo.a(Integer.valueOf(this.d), Integer.valueOf(cVar.d)) && lo.a(Integer.valueOf(this.e), Integer.valueOf(cVar.e)) && lo.a(Boolean.valueOf(this.f), Boolean.valueOf(cVar.f));
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.f589a), this.b, this.c, Integer.valueOf(this.d), Integer.valueOf(this.e), Boolean.valueOf(this.f));
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("ConnectionConfiguration[ ");
        sb.append("mName=" + this.b);
        sb.append(", mAddress=" + this.c);
        sb.append(", mType=" + this.d);
        sb.append(", mRole=" + this.e);
        sb.append(", mEnabled=" + this.f);
        sb.append("]");
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        e.a(this, parcel, i);
    }
}
