package com.google.android.gms.games;

import android.net.Uri;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class c extends d {
    c() {
    }

    @Override // com.google.android.gms.games.d, android.os.Parcelable.Creator
    /* renamed from: a */
    public PlayerEntity createFromParcel(Parcel parcel) {
        if (PlayerEntity.b(PlayerEntity.C()) || PlayerEntity.b(PlayerEntity.class.getCanonicalName())) {
            return super.createFromParcel(parcel);
        }
        String string = parcel.readString();
        String string2 = parcel.readString();
        String string3 = parcel.readString();
        String string4 = parcel.readString();
        return new PlayerEntity(10, string, string2, string3 == null ? null : Uri.parse(string3), string4 == null ? null : Uri.parse(string4), parcel.readLong(), -1, -1L, null, null, null, null, null, true);
    }
}
