package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.maps.model.LatLng;
import java.util.ArrayList;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class no implements Parcelable.Creator {
    static void a(ju juVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, juVar.a(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, juVar.f460a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, (Parcelable) juVar.b(), i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, juVar.c(), false);
        com.google.android.gms.common.internal.safeparcel.c.b(parcel, 4, juVar.d(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, juVar.e(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 6, juVar.f(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ju createFromParcel(Parcel parcel) {
        String strO = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        String strO2 = null;
        ArrayList arrayListC = null;
        String strO3 = null;
        LatLng latLng = null;
        String strO4 = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    strO4 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 2:
                    latLng = (LatLng) com.google.android.gms.common.internal.safeparcel.a.a(parcel, iA, LatLng.CREATOR);
                    break;
                case 3:
                    strO3 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 4:
                    arrayListC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA, js.CREATOR);
                    break;
                case 5:
                    strO2 = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    break;
                case 6:
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
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
        return new ju(iG, strO4, latLng, strO3, arrayListC, strO2, strO);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public ju[] newArray(int i) {
        return new ju[i];
    }
}
