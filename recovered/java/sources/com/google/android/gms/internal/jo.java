package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class jo implements SafeParcelable {
    public static final nl CREATOR = new nl();

    /* renamed from: a, reason: collision with root package name */
    final int f456a;
    private final String b;
    private final String c;

    jo(int i, String str, String str2) {
        this.f456a = i;
        this.b = str;
        this.c = str2;
    }

    public String a() {
        return this.b;
    }

    public String b() {
        return this.c;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nl nlVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof jo)) {
            return false;
        }
        jo joVar = (jo) obj;
        return lo.a(this.b, joVar.b) && lo.a(this.c, joVar.c);
    }

    public int hashCode() {
        return lo.a(this.b, this.c);
    }

    public String toString() {
        return lo.a(this).a("mPlaceId", this.b).a("mTag", this.c).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nl nlVar = CREATOR;
        nl.a(this, parcel, i);
    }
}
