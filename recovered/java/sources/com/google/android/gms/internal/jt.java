package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class jt implements Parcelable.Creator {
    jt() {
    }

    @Override // android.os.Parcelable.Creator
    @Deprecated
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fd createFromParcel(Parcel parcel) {
        return new fd(parcel);
    }

    @Override // android.os.Parcelable.Creator
    @Deprecated
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fd[] newArray(int i) {
        return new fd[i];
    }
}
