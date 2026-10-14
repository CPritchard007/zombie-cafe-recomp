package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ew implements et {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f354a;

    ew(IBinder iBinder) {
        this.f354a = iBinder;
    }

    @Override // com.google.android.gms.internal.et
    public IBinder a(com.google.android.gms.a.a aVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseManagerCreator");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            this.f354a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return parcelObtain2.readStrongBinder();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f354a;
    }
}
