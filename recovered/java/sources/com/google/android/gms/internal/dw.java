package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class dw implements dt {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f338a;

    dw(IBinder iBinder) {
        this.f338a = iBinder;
    }

    @Override // com.google.android.gms.internal.dt
    public IBinder a(com.google.android.gms.a.a aVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.overlay.client.IAdOverlayCreator");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            this.f338a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return parcelObtain2.readStrongBinder();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f338a;
    }
}
