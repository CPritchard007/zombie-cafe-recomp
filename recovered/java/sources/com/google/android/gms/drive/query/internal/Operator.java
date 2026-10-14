package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class Operator implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new k();

    /* renamed from: a, reason: collision with root package name */
    public static final Operator f235a = new Operator("=");
    public static final Operator b = new Operator("<");
    public static final Operator c = new Operator("<=");
    public static final Operator d = new Operator(">");
    public static final Operator e = new Operator(">=");
    public static final Operator f = new Operator("and");
    public static final Operator g = new Operator("or");
    public static final Operator h = new Operator("not");
    public static final Operator i = new Operator("contains");
    final String j;
    final int k;

    Operator(int i2, String str) {
        this.k = i2;
        this.j = str;
    }

    private Operator(String str) {
        this(1, str);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            Operator operator = (Operator) obj;
            return this.j == null ? operator.j == null : this.j.equals(operator.j);
        }
        return false;
    }

    public int hashCode() {
        return (this.j == null ? 0 : this.j.hashCode()) + 31;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i2) {
        k.a(this, parcel, i2);
    }
}
