package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class nm implements Parcelable.Creator {
    static void a(jq jqVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, jqVar.b);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, (Parcelable) jqVar.a(), i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, jqVar.b());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, jqVar.c());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jq createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        jm jmVar = null;
        long jI = jq.f457a;
        int iG2 = 102;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 2:
                    jmVar = (jm) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, jm.CREATOR);
                    break;
                case 3:
                    jI = com.google.android.gms.common.internal.safeparcel.a.i(parcel, iA);
                    break;
                case 4:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
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
        return new jq(iG, jmVar, jI, iG2);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jq[] newArray(int i) {
        return new jq[i];
    }
}
