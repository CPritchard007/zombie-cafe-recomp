package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnResourceIdSetResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new m();

    /* renamed from: a, reason: collision with root package name */
    private final int f206a;
    private final List b;

    OnResourceIdSetResponse(int i, List list) {
        this.f206a = i;
        this.b = list;
    }

    public int a() {
        return this.f206a;
    }

    public List b() {
        return this.b;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        m.a(this, parcel, i);
    }
}
