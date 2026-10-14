package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fi implements SafeParcelable {
    public static final jx CREATOR = new jx();

    /* renamed from: a, reason: collision with root package name */
    final int f362a;
    final String b;
    final String c;
    final String d;

    fi(int i, String str, String str2, String str3) {
        this.f362a = i;
        this.b = str;
        this.c = str2;
        this.d = str3;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        jx jxVar = CREATOR;
        return 0;
    }

    public String toString() {
        return String.format("DocumentId[packageName=%s, corpusName=%s, uri=%s]", this.b, this.c, this.d);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        jx jxVar = CREATOR;
        jx.a(this, parcel, i);
    }
}
