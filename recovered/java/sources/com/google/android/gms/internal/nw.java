package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.internal.ks;
import java.util.HashSet;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class nw implements Parcelable.Creator {
    static void a(ks.b bVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        Set setE = bVar.e();
        if (setE.contains(1)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, bVar.f());
        }
        if (setE.contains(2)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, (Parcelable) bVar.g(), i, true);
        }
        if (setE.contains(3)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, (Parcelable) bVar.h(), i, true);
        }
        if (setE.contains(4)) {
            com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, bVar.i());
        }
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ks.b createFromParcel(Parcel parcel) {
        ks.b.C0000b c0000b = null;
        int iG = 0;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        HashSet hashSet = new HashSet();
        ks.b.a aVar = null;
        int iG2 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    hashSet.add(1);
                    break;
                case 2:
                    ks.b.a aVar2 = (ks.b.a) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ks.b.a.CREATOR);
                    hashSet.add(2);
                    aVar = aVar2;
                    break;
                case 3:
                    ks.b.C0000b c0000b2 = (ks.b.C0000b) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ks.b.C0000b.CREATOR);
                    hashSet.add(3);
                    c0000b = c0000b2;
                    break;
                case 4:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    hashSet.add(4);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new ks.b(hashSet, iG2, aVar, c0000b, iG);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ks.b[] newArray(int i) {
        return new ks.b[i];
    }
}
