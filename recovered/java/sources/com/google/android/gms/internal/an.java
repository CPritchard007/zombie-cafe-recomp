package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.widget.ViewDragHelper;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class an implements Parcelable.Creator {
    static void a(aw awVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, awVar.f288a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, awVar.b);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, awVar.c);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, awVar.d);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, awVar.e);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, awVar.f);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, awVar.g);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 8, awVar.h);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 9, awVar.i);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 10, awVar.j, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 11, awVar.k);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 12, awVar.l, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 13, awVar.m);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 14, awVar.n);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 15, awVar.o, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public aw createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        int iG2 = 0;
        int iG3 = 0;
        int iG4 = 0;
        int iG5 = 0;
        int iG6 = 0;
        int iG7 = 0;
        int iG8 = 0;
        int iG9 = 0;
        String strO = null;
        int iG10 = 0;
        String strO2 = null;
        int iG11 = 0;
        int iG12 = 0;
        String strO3 = null;
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
                    iG3 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 4:
                    iG4 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 5:
                    iG5 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 6:
                    iG6 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 7:
                    iG7 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 8:
                    iG8 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 9:
                    iG9 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 10:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                    iG10 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                    iG11 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 14:
                    iG12 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case ViewDragHelper.EDGE_ALL /* 15 */:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new aw(iG, iG2, iG3, iG4, iG5, iG6, iG7, iG8, iG9, strO, iG10, strO2, iG11, iG12, strO3);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public aw[] newArray(int i) {
        return new aw[i];
    }
}
