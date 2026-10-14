package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class mf implements Parcelable.Creator {
    static void a(ie ieVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, ieVar.a());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, ieVar.e(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, (Parcelable) ieVar.f(), i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ie createFromParcel(Parcel parcel) {
        ib ibVar = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        Parcel parcelC = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    parcelC = com.google.android.gms.common.internal.safeparcel.a.C(parcel, iA);
                    break;
                case 3:
                    ibVar = (ib) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ib.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new ie(iG, parcelC, ibVar);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ie[] newArray(int i) {
        return new ie[i];
    }
}
