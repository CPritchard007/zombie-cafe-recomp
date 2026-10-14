package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fd implements Parcelable {

    @Deprecated
    public static final Parcelable.Creator CREATOR = new jt();

    /* renamed from: a, reason: collision with root package name */
    private String f358a;
    private String b;
    private String c;

    @Deprecated
    public fd() {
    }

    @Deprecated
    fd(Parcel parcel) {
        a(parcel);
    }

    @Deprecated
    private void a(Parcel parcel) {
        this.f358a = parcel.readString();
        this.b = parcel.readString();
        this.c = parcel.readString();
    }

    @Override // android.os.Parcelable
    @Deprecated
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    @Deprecated
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.f358a);
        parcel.writeString(this.b);
        parcel.writeString(this.c);
    }
}
