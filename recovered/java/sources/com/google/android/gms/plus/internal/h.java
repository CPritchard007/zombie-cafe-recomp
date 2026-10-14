package com.google.android.gms.plus.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import java.util.Arrays;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class h implements SafeParcelable {
    public static final b CREATOR = new b();

    /* renamed from: a, reason: collision with root package name */
    private final int f559a;
    private final String b;
    private final String[] c;
    private final String[] d;
    private final String[] e;
    private final String f;
    private final String g;
    private final String h;
    private final String i;
    private final PlusCommonExtras j;

    h(int i, String str, String[] strArr, String[] strArr2, String[] strArr3, String str2, String str3, String str4, String str5, PlusCommonExtras plusCommonExtras) {
        this.f559a = i;
        this.b = str;
        this.c = strArr;
        this.d = strArr2;
        this.e = strArr3;
        this.f = str2;
        this.g = str3;
        this.h = str4;
        this.i = str5;
        this.j = plusCommonExtras;
    }

    public int a() {
        return this.f559a;
    }

    public String b() {
        return this.b;
    }

    public String[] c() {
        return this.c;
    }

    public String[] d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String[] e() {
        return this.e;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof h)) {
            return false;
        }
        h hVar = (h) obj;
        return this.f559a == hVar.f559a && lo.a(this.b, hVar.b) && Arrays.equals(this.c, hVar.c) && Arrays.equals(this.d, hVar.d) && Arrays.equals(this.e, hVar.e) && lo.a(this.f, hVar.f) && lo.a(this.g, hVar.g) && lo.a(this.h, hVar.h) && lo.a(this.i, hVar.i) && lo.a(this.j, hVar.j);
    }

    public String f() {
        return this.f;
    }

    public String g() {
        return this.g;
    }

    public String h() {
        return this.h;
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.f559a), this.b, this.c, this.d, this.e, this.f, this.g, this.h, this.i, this.j);
    }

    public String i() {
        return this.i;
    }

    public PlusCommonExtras j() {
        return this.j;
    }

    public String toString() {
        return lo.a(this).a("versionCode", Integer.valueOf(this.f559a)).a("accountName", this.b).a("requestedScopes", this.c).a("visibleActivities", this.d).a("requiredFeatures", this.e).a("packageNameForAuth", this.f).a("callingPackageName", this.g).a("applicationName", this.h).a("extra", this.j.toString()).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        b.a(this, parcel, i);
    }
}
