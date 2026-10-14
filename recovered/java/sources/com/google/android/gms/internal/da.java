package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class da implements Parcelable.Creator {
    static void a(ce ceVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, ceVar.f305a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, ceVar.b, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, ceVar.c, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, ceVar.d, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, ceVar.e, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, ceVar.f, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, ceVar.g, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 8, ceVar.h, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ce createFromParcel(Parcel parcel) {
        String strO = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        String strO2 = null;
        String strO3 = null;
        String strO4 = null;
        String strO5 = null;
        String strO6 = null;
        String strO7 = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    strO7 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 3:
                    strO6 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 4:
                    strO5 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 5:
                    strO4 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 6:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 7:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 8:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new ce(iG, strO7, strO6, strO5, strO4, strO3, strO2, strO);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ce[] newArray(int i) {
        return new ce[i];
    }
}
