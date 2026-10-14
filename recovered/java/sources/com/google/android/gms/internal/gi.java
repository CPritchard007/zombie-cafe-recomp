package com.google.android.gms.internal;

import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class gi implements Parcelable.Creator {
    static void a(ds dsVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, dsVar.f336a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, dsVar.b, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, (Parcelable) dsVar.c, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, (Parcelable) dsVar.d, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, dsVar.e, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, (Parcelable) dsVar.f, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 7, (Parcelable) dsVar.g, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 8, dsVar.h, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 9, dsVar.i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 10, dsVar.j, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 11, (Parcelable) dsVar.k, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 12, dsVar.l, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 13, dsVar.m, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ds createFromParcel(Parcel parcel) {
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        Bundle bundleQ = null;
        ai aiVar = null;
        al alVar = null;
        String strO = null;
        ApplicationInfo applicationInfo = null;
        PackageInfo packageInfo = null;
        String strO2 = null;
        String strO3 = null;
        String strO4 = null;
        ev evVar = null;
        Bundle bundleQ2 = null;
        String strO5 = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    bundleQ = com.google.android.gms.common.internal.safeparcel.a.q(parcel, iA);
                    break;
                case 3:
                    aiVar = (ai) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ai.CREATOR);
                    break;
                case 4:
                    alVar = (al) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, al.CREATOR);
                    break;
                case 5:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 6:
                    applicationInfo = (ApplicationInfo) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ApplicationInfo.CREATOR);
                    break;
                case 7:
                    packageInfo = (PackageInfo) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, PackageInfo.CREATOR);
                    break;
                case 8:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 9:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 10:
                    strO4 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                    evVar = (ev) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, ev.CREATOR);
                    break;
                case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                    bundleQ2 = com.google.android.gms.common.internal.safeparcel.a.q(parcel, iA);
                    break;
                case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                    strO5 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new ds(iG, bundleQ, aiVar, alVar, strO, applicationInfo, packageInfo, strO2, strO3, strO4, evVar, bundleQ2, strO5);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ds[] newArray(int i) {
        return new ds[i];
    }
}
