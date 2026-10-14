package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class nk implements Parcelable.Creator {
    static void a(jm jmVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.b(parcel, 1, jmVar.b, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, jmVar.f455a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, jmVar.a(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, jmVar.b());
        com.google.android.gms.common.internal.safeparcel.c.b(parcel, 4, jmVar.c, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, jmVar.c(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, jmVar.d, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jm createFromParcel(Parcel parcel) {
        boolean zC = false;
        ArrayList arrayListB = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        String strO = null;
        ArrayList arrayListC = null;
        String strO2 = null;
        ArrayList arrayListC2 = null;
        int iG = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    arrayListC2 = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, js.CREATOR);
                    break;
                case 2:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 3:
                    zC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                    break;
                case 4:
                    arrayListC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, jw.CREATOR);
                    break;
                case 5:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 6:
                    arrayListB = com.google.android.gms.common.internal.safeparcel.a.B(parcel, iA);
                    break;
                case 1000:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new jm(iG, arrayListC2, strO2, zC, arrayListC, strO, arrayListB);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jm[] newArray(int i) {
        return new jm[i];
    }
}
