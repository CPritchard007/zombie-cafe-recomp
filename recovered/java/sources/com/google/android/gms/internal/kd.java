package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class kd implements Parcelable.Creator {
    static void a(fr frVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, (Parcelable) frVar.b, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, frVar.f369a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, frVar.c);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, frVar.d);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, frVar.e, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, (Parcelable) frVar.f, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fr createFromParcel(Parcel parcel) {
        int iG = 0;
        fg fgVar = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        long jI = 0;
        String strO = null;
        fi fiVar = null;
        int iG2 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    fiVar = (fi) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, fi.CREATOR);
                    break;
                case 2:
                    jI = com.google.android.gms.common.internal.safeparcel.a.i(parcel, iA);
                    break;
                case 3:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 4:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 5:
                    fgVar = (fg) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, fg.CREATOR);
                    break;
                case 1000:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new fr(iG2, fiVar, jI, iG, strO, fgVar);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fr[] newArray(int i) {
        return new fr[i];
    }
}
