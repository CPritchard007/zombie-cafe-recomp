package com.google.android.gms.internal;

import android.os.IBinder;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ca implements by {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f303a;

    ca(IBinder iBinder) {
        this.f303a = iBinder;
    }

    @Override // com.google.android.gms.internal.by
    public com.google.android.gms.a.a a() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            this.f303a.transact(2, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
            return com.google.android.gms.a.b.a(parcelObtain2.readStrongBinder());
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, ai aiVar, String str, cb cbVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            parcelObtain.writeString(str);
            parcelObtain.writeStrongBinder(cbVar != null ? cbVar.asBinder() : null);
            this.f303a.transact(3, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, ai aiVar, String str, String str2, cb cbVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            parcelObtain.writeString(str);
            parcelObtain.writeString(str2);
            parcelObtain.writeStrongBinder(cbVar != null ? cbVar.asBinder() : null);
            this.f303a.transact(7, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, al alVar, ai aiVar, String str, cb cbVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            if (alVar != null) {
                parcelObtain.writeInt(1);
                alVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            parcelObtain.writeString(str);
            parcelObtain.writeStrongBinder(cbVar != null ? cbVar.asBinder() : null);
            this.f303a.transact(1, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, al alVar, ai aiVar, String str, String str2, cb cbVar) {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            parcelObtain.writeStrongBinder(aVar != null ? aVar.asBinder() : null);
            if (alVar != null) {
                parcelObtain.writeInt(1);
                alVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            parcelObtain.writeString(str);
            parcelObtain.writeString(str2);
            parcelObtain.writeStrongBinder(cbVar != null ? cbVar.asBinder() : null);
            this.f303a.transact(6, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f303a;
    }

    @Override // com.google.android.gms.internal.by
    public void b() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            this.f303a.transact(4, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void c() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            this.f303a.transact(5, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void d() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            this.f303a.transact(8, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void e() {
        Parcel parcelObtain = Parcel.obtain();
        Parcel parcelObtain2 = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
            this.f303a.transact(9, parcelObtain, parcelObtain2, 0);
            parcelObtain2.readException();
        } finally {
            parcelObtain2.recycle();
            parcelObtain.recycle();
        }
    }
}
