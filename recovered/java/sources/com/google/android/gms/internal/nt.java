package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.HashSet;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class nt implements Parcelable.Creator {
    static void a(kp kpVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        Set setE = kpVar.e();
        if (setE.contains(1)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, kpVar.f());
        }
        if (setE.contains(2)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, kpVar.g(), true);
        }
        if (setE.contains(4)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, (Parcelable) kpVar.h(), i, true);
        }
        if (setE.contains(5)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, kpVar.i(), true);
        }
        if (setE.contains(6)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, (Parcelable) kpVar.j(), i, true);
        }
        if (setE.contains(7)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, kpVar.k(), true);
        }
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public kp createFromParcel(Parcel parcel) {
        String strO = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        HashSet hashSet = new HashSet();
        int iG = 0;
        kn knVar = null;
        String strO2 = null;
        kn knVar2 = null;
        String strO3 = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    hashSet.add(1);
                    break;
                case 2:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    hashSet.add(2);
                    break;
                case 3:
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
                case 4:
                    kn knVar3 = (kn) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, kn.CREATOR);
                    hashSet.add(4);
                    knVar2 = knVar3;
                    break;
                case 5:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    hashSet.add(5);
                    break;
                case 6:
                    kn knVar4 = (kn) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, kn.CREATOR);
                    hashSet.add(6);
                    knVar = knVar4;
                    break;
                case 7:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    hashSet.add(7);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new kp(hashSet, iG, strO3, knVar2, strO2, knVar, strO);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public kp[] newArray(int i) {
        return new kp[i];
    }
}
