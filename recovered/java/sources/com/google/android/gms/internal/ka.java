package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ka implements SafeParcelable {
    public static final nr CREATOR = new nr();

    /* renamed from: a, reason: collision with root package name */
    public final int f462a;
    public final String b;
    public final String c;

    public ka(int i, String str, String str2) {
        this.f462a = i;
        this.b = str;
        this.c = str2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nr nrVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof ka)) {
            return false;
        }
        ka kaVar = (ka) obj;
        return this.c.equals(kaVar.c) && this.b.equals(kaVar.b);
    }

    public int hashCode() {
        return lo.a(this.b, this.c);
    }

    public String toString() {
        return lo.a(this).a("clientPackageName", this.b).a("locale", this.c).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nr nrVar = CREATOR;
        nr.a(this, parcel, i);
    }
}
