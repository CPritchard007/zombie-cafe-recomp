package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.v4.widget.ViewDragHelper;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class dg implements Parcelable.Creator {
    static void a(ch chVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, chVar.f308a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, (Parcelable) chVar.b, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, chVar.a(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, chVar.b(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, chVar.c(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, chVar.d(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, chVar.g, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 8, chVar.h);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 9, chVar.i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 10, chVar.f(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 11, chVar.k);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 12, chVar.l);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 13, chVar.m, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 14, (Parcelable) chVar.n, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 15, chVar.e(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 17, (Parcelable) chVar.q, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 16, chVar.p, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ch createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        ce ceVar = null;
        IBinder iBinderP = null;
        IBinder iBinderP2 = null;
        IBinder iBinderP3 = null;
        IBinder iBinderP4 = null;
        String strO = null;
        boolean zC = false;
        String strO2 = null;
        IBinder iBinderP5 = null;
        int iG2 = 0;
        int iG3 = 0;
        String strO3 = null;
        ev evVar = null;
        IBinder iBinderP6 = null;
        String strO4 = null;
        v vVar = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    ceVar = (ce) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ce.CREATOR);
                    break;
                case 3:
                    iBinderP = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 4:
                    iBinderP2 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 5:
                    iBinderP3 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 6:
                    iBinderP4 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 7:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 8:
                    zC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                    break;
                case 9:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 10:
                    iBinderP5 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                    iG2 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                    iG3 = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 14:
                    evVar = (ev) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ev.CREATOR);
                    break;
                case ViewDragHelper.EDGE_ALL /* 15 */:
                    iBinderP6 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 16:
                    strO4 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 17:
                    vVar = (v) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, v.CREATOR);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new ch(iG, ceVar, iBinderP, iBinderP2, iBinderP3, iBinderP4, strO, zC, strO2, iBinderP5, iG2, iG3, strO3, evVar, iBinderP6, strO4, vVar);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ch[] newArray(int i) {
        return new ch[i];
    }
}
