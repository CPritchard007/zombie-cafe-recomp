package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class r implements Parcelable.Creator {
    static void a(al alVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, alVar.f283a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, alVar.b, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, alVar.c);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, alVar.d);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, alVar.e);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, alVar.f);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, alVar.g);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 8, (Parcelable[]) alVar.h, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public al createFromParcel(Parcel parcel) {
        al[] alVarArr = null;
        int iG = 0;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG2 = 0;
        boolean zC = false;
        int iG3 = 0;
        int iG4 = 0;
        String strO = null;
        int iG5 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG5 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 3:
                    iG4 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 4:
                    iG3 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 5:
                    zC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                    break;
                case 6:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 7:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 8:
                    alVarArr = (al[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, al.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new al(iG5, strO, iG4, iG3, zC, iG2, iG, alVarArr);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public al[] newArray(int i) {
        return new al[i];
    }
}
