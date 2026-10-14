package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class FieldWithSortOrder implements SafeParcelable {
    public static final c CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    final String f228a;
    final boolean b;
    final int c;

    FieldWithSortOrder(int i, String str, boolean z) {
        this.c = i;
        this.f228a = str;
        this.b = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
