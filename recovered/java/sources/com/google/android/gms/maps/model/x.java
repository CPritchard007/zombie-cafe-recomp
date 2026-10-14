package com.google.android.gms.maps.model;

import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class x {
    static void a(LatLng latLng, Parcel parcel, int i) {
        int iA = com.google.android.gms.common.internal.safeparcel.c.a(parcel);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 1, latLng.a());
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 2, latLng.f542a);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, 3, latLng.b);
        com.google.android.gms.common.internal.safeparcel.c.a(parcel, iA);
    }
}
