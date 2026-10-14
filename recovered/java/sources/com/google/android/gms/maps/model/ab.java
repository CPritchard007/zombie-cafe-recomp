package com.google.android.gms.maps.model;

import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ab {
    static void a(Tile tile, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, tile.a());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, tile.f551a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, tile.b);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 4, tile.c, false);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }
}
