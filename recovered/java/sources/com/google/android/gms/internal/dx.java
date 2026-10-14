package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class dx implements Parcelable.Creator {
    static void a(cq cqVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, cqVar.f317a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, cqVar.a(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, cqVar.b(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, cqVar.c(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 5, cqVar.d(), false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public cq createFromParcel(Parcel parcel) {
        IBinder iBinderP = null;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        int iG = 0;
        IBinder iBinderP2 = null;
        IBinder iBinderP3 = null;
        IBinder iBinderP4 = null;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    break;
                case 2:
                    iBinderP4 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 3:
                    iBinderP3 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 4:
                    iBinderP2 = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                case 5:
                    iBinderP = com.google.android.gms.common.internal.safeparcel.a.p(parcel, iA);
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    break;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new cq(iG, iBinderP4, iBinderP3, iBinderP2, iBinderP);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public cq[] newArray(int i) {
        return new cq[i];
    }
}
