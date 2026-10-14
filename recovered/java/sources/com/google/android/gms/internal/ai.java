package com.google.android.gms.internal;

import android.location.Location;
import android.os.Bundle;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ai implements SafeParcelable {
    public static final p CREATOR = new p();

    /* renamed from: a, reason: collision with root package name */
    public final int f280a;
    public final long b;
    public final Bundle c;
    public final int d;
    public final List e;
    public final boolean f;
    public final int g;
    public final boolean h;
    public final String i;
    public final aw j;
    public final Location k;
    public final String l;
    public final Bundle m;

    public ai(int i, long j, Bundle bundle, int i2, List list, boolean z, int i3, boolean z2, String str, aw awVar, Location location, String str2, Bundle bundle2) {
        this.f280a = i;
        this.b = j;
        this.c = bundle;
        this.d = i2;
        this.e = list;
        this.f = z;
        this.g = i3;
        this.h = z2;
        this.i = str;
        this.j = awVar;
        this.k = location;
        this.l = str2;
        this.m = bundle2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        p.a(this, parcel, i);
    }
}
