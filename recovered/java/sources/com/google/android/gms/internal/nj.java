package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class nj implements Parcelable.Creator {
    static void a(jk jkVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, jkVar.b());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, jkVar.a());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, jkVar.c());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, (Parcelable) jkVar.d(), i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jk createFromParcel(Parcel parcel) {
        int iG = 0;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG2 = -1;
        jm jmVar = null;
        int iG3 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 3:
                    jmVar = (jm) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, jm.CREATOR);
                    break;
                case 1000:
                    iG3 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new jk(iG3, iG, iG2, jmVar);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public jk[] newArray(int i) {
        return new jk[i];
    }
}
