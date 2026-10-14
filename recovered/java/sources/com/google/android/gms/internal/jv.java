package com.google.android.gms.internal;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class jv implements Parcelable.Creator {
    static void a(fg fgVar, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, (Parcelable[]) fgVar.b, i, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1000, fgVar.f361a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, fgVar.c, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, fgVar.d);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fg createFromParcel(Parcel parcel) {
        boolean zC;
        String strO;
        fk[] fkVarArr;
        int iG;
        String str = null;
        boolean z = false;
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        fk[] fkVarArr2 = null;
        int i = 0;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            switch (com.google.android.gms.common.internal.safeparcel.a.a(iA)) {
                case 1:
                    iG = i;
                    String str2 = str;
                    fkVarArr = (fk[]) com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA, fk.CREATOR);
                    zC = z;
                    strO = str2;
                    break;
                case 2:
                    fkVarArr = fkVarArr2;
                    iG = i;
                    boolean z2 = z;
                    strO = com.google.android.gms.common.internal.safeparcel.a.o(parcel, iA);
                    zC = z2;
                    break;
                case 3:
                    zC = com.google.android.gms.common.internal.safeparcel.a.c(parcel, iA);
                    strO = str;
                    fkVarArr = fkVarArr2;
                    iG = i;
                    break;
                case 1000:
                    boolean z3 = z;
                    strO = str;
                    fkVarArr = fkVarArr2;
                    iG = com.google.android.gms.common.internal.safeparcel.a.g(parcel, iA);
                    zC = z3;
                    break;
                default:
                    com.google.android.gms.common.internal.safeparcel.a.b(parcel, iA);
                    zC = z;
                    strO = str;
                    fkVarArr = fkVarArr2;
                    iG = i;
                    break;
            }
            i = iG;
            fkVarArr2 = fkVarArr;
            str = strO;
            z = zC;
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        return new fg(i, fkVarArr2, str, z);
    }

    @Override // android.os.Parcelable.Creator
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public fg[] newArray(int i) {
        return new fg[i];
    }
}
