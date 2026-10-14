package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fg implements SafeParcelable {
    public static final jv CREATOR = new jv();

    /* renamed from: a, reason: collision with root package name */
    final int f361a;
    final fk[] b;
    public final String c;
    public final boolean d;

    fg(int i, fk[] fkVarArr, String str, boolean z) {
        this.f361a = i;
        this.b = fkVarArr;
        this.c = str;
        this.d = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        jv jvVar = CREATOR;
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        jv jvVar = CREATOR;
        jv.a(this, parcel, i);
    }
}
