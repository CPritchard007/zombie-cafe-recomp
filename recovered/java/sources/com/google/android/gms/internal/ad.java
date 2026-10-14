package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ad implements ab {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f277a;

    ad(IBinder iBinder) {
        this.f277a = iBinder;
    }

    @Override // com.google.android.gms.internal.ab
    public IBinder a(com.google.android.gms.a.a aVar, al alVar, String str, bv bvVar, int i) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.client.IAdManagerCreator");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            if (alVar != null) {
                parcelObtain.writeInt(1);
                alVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            parcelObtain.writeString(str);
            parcelObtain.writeStrongBinder(bvVar != null ? bvVar.asBinder() : null);
            parcelObtain.writeInt(i);
            this.f277a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return parcelObtain2.readStrongBinder();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f277a;
    }
}
