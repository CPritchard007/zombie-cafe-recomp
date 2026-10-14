package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class bx implements bv {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f301a;

    bx(IBinder iBinder) {
        this.f301a = iBinder;
    }

    @Override // com.google.android.gms.internal.bv
    public by a(String str) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IAdapterCreator");
            parcelObtain.writeString(str);
            this.f301a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return bz.a(parcelObtain2.readStrongBinder());
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f301a;
    }
}
