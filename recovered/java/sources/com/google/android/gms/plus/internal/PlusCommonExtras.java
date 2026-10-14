package com.google.android.gms.plus.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class PlusCommonExtras implements SafeParcelable {
    private final int b;
    private String c;
    private String d;

    /* renamed from: a, reason: collision with root package name */
    public static String f558a = "PlusCommonExtras";
    public static final a CREATOR = new a();

    public PlusCommonExtras() {
        this.b = 1;
        this.c = "";
        this.d = "";
    }

    PlusCommonExtras(int i, String str, String str2) {
        this.b = i;
        this.c = str;
        this.d = str2;
    }

    public int a() {
        return this.b;
    }

    public String b() {
        return this.c;
    }

    public String c() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof PlusCommonExtras)) {
            return false;
        }
        PlusCommonExtras plusCommonExtras = (PlusCommonExtras) obj;
        return this.b == plusCommonExtras.b && lo.a(this.c, plusCommonExtras.c) && lo.a(this.d, plusCommonExtras.d);
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.b), this.c, this.d);
    }

    public String toString() {
        return lo.a(this).a("versionCode", Integer.valueOf(this.b)).a("Gpsrc", this.c).a("ClientCallingPackage", this.d).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        a.a(this, parcel, i);
    }
}
