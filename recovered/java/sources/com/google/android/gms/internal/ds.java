package com.google.android.gms.internal;

import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Bundle;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ds implements SafeParcelable {
    public static final gi CREATOR = new gi();

    /* renamed from: a, reason: collision with root package name */
    public final int f336a;
    public final Bundle b;
    public final ai c;
    public final al d;
    public final String e;
    public final ApplicationInfo f;
    public final PackageInfo g;
    public final String h;
    public final String i;
    public final String j;
    public final ev k;
    public final Bundle l;
    public final String m;

    ds(int i, Bundle bundle, ai aiVar, al alVar, String str, ApplicationInfo applicationInfo, PackageInfo packageInfo, String str2, String str3, String str4, ev evVar, Bundle bundle2, String str5) {
        this.f336a = i;
        this.b = bundle;
        this.c = aiVar;
        this.d = alVar;
        this.e = str;
        this.f = applicationInfo;
        this.g = packageInfo;
        this.h = str2;
        this.i = str3;
        this.j = str4;
        this.k = evVar;
        this.l = bundle2;
        this.m = str5;
    }

    public ds(Bundle bundle, ai aiVar, al alVar, String str, ApplicationInfo applicationInfo, PackageInfo packageInfo, String str2, String str3, String str4, ev evVar, Bundle bundle2, String str5) {
        this(3, bundle, aiVar, alVar, str, applicationInfo, packageInfo, str2, str3, str4, evVar, bundle2, str5);
    }

    public ds(gh ghVar, String str, String str2) {
        this(ghVar.f384a, ghVar.b, ghVar.c, ghVar.d, ghVar.e, ghVar.f, str, ghVar.g, ghVar.h, ghVar.j, ghVar.i, str2);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        gi.a(this, parcel, i);
    }
}
