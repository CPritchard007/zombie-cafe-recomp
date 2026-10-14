package com.google.android.gms.drive.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.events.ChangeEvent;
import com.google.android.gms.drive.events.FileConflictEvent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class OnEventResponse implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new h();

    /* renamed from: a, reason: collision with root package name */
    final int f201a;
    final int b;
    final ChangeEvent c;
    final FileConflictEvent d;

    OnEventResponse(int i, int i2, ChangeEvent changeEvent, FileConflictEvent fileConflictEvent) {
        this.f201a = i;
        this.b = i2;
        this.c = changeEvent;
        this.d = fileConflictEvent;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        h.a(this, parcel, i);
    }
}
