package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ep implements en {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f351a;

    ep(IBinder iBinder) {
        this.f351a = iBinder;
    }

    @Override // com.google.android.gms.internal.en
    public void a(ek ekVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.purchase.client.IInAppPurchaseListener");
            parcelObtain.writeStrongBinder(ekVar != null ? ekVar.asBinder() : null);
            this.f351a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f351a;
    }
}
