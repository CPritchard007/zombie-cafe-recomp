package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ag implements ae {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f278a;

    ag(IBinder iBinder) {
        this.f278a = iBinder;
    }

    @Override // com.google.android.gms.internal.ae
    public void a(String str, String str2) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.client.IAppEventListener");
            parcelObtain.writeString(str);
            parcelObtain.writeString(str2);
            this.f278a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f278a;
    }
}
