package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.Collections;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class du implements SafeParcelable {
    public static final gk CREATOR = new gk();

    /* renamed from: a, reason: collision with root package name */
    public final int f337a;
    public final String b;
    public final String c;
    public final List d;
    public final int e;
    public final List f;
    public final long g;
    public final boolean h;
    public final long i;
    public final List j;
    public final long k;
    public final int l;
    public final String m;
    public final long n;
    public final String o;
    public final boolean p;
    public final String q;
    public final String r;

    public du(int i) {
        this(7, null, null, null, i, null, -1L, false, -1L, null, -1L, -1, null, -1L, null, false, null, null);
    }

    public du(int i, long j) {
        this(7, null, null, null, i, null, -1L, false, -1L, null, j, -1, null, -1L, null, false, null, null);
    }

    du(int i, String str, String str2, List list, int i2, List list2, long j, boolean z, long j2, List list3, long j3, int i3, String str3, long j4, String str4, boolean z2, String str5, String str6) {
        this.f337a = i;
        this.b = str;
        this.c = str2;
        this.d = list != null ? Collections.unmodifiableList(list) : null;
        this.e = i2;
        this.f = list2 != null ? Collections.unmodifiableList(list2) : null;
        this.g = j;
        this.h = z;
        this.i = j2;
        this.j = list3 != null ? Collections.unmodifiableList(list3) : null;
        this.k = j3;
        this.l = i3;
        this.m = str3;
        this.n = j4;
        this.o = str4;
        this.p = z2;
        this.q = str5;
        this.r = str6;
    }

    public du(String str, String str2, List list, List list2, long j, boolean z, long j2, List list3, long j3, int i, String str3, long j4, String str4, String str5) {
        this(7, str, str2, list, -2, list2, j, z, j2, list3, j3, i, str3, j4, str4, false, null, str5);
    }

    public du(String str, String str2, List list, List list2, long j, boolean z, long j2, List list3, long j3, int i, String str3, long j4, String str4, boolean z2, String str5, String str6) {
        this(7, str, str2, list, -2, list2, j, z, j2, list3, j3, i, str3, j4, str4, z2, str5, str6);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        gk.a(this, parcel, i);
    }
}
