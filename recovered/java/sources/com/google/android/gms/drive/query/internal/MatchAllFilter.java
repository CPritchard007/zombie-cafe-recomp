package com.google.android.gms.drive.query.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class MatchAllFilter implements SafeParcelable, com.google.android.gms.drive.query.a {
    public static final i CREATOR = new i();

    /* renamed from: a, reason: collision with root package name */
    final int f233a;

    public MatchAllFilter() {
        this(1);
    }

    MatchAllFilter(int i) {
        this.f233a = i;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        i.a(this, parcel, i);
    }
}
