package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnLoadRealtimeResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new l();

    /* renamed from: a, reason: collision with root package name */
    final int f204a;
    final boolean b;

    OnLoadRealtimeResponse(int i, boolean z) {
        this.f204a = i;
        this.b = z;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        l.a(this, parcel, i);
    }
}
