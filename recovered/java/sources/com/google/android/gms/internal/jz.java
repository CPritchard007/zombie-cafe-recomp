package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class jz implements Parcelable.Creator {
    static void a(fm fmVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, fmVar.b);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, fmVar.f366a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, fmVar.c, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fm createFromParcel(Parcel parcel) {
        int iG = 0;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        Bundle bundleQ = null;
        int iG2 = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    bundleQ = com.google.android.gms.common.internal.safeparcel.a.q(parcel, iA);
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
        return new fm(iG2, iG, bundleQ);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fm[] newArray(int i) {
        return new fm[i];
    }
}
