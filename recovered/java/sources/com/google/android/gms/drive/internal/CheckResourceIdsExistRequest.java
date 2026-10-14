package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CheckResourceIdsExistRequest implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new x();

    /* renamed from: a, reason: collision with root package name */
    private final int f184a;
    private final List b;

    CheckResourceIdsExistRequest(int i, List list) {
        this.f184a = i;
        this.b = list;
    }

    public int a() {
        return this.f184a;
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
        x.a(this, parcel, i);
    }
}
