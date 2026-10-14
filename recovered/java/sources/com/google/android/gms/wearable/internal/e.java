package com.google.android.gms.wearable.internal;

import android.os.IBinder;
import android.os.Parcel;
import com.google.android.gms.common.data.DataHolder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class e implements c {

    /* renamed from: a, reason: collision with root package name */
    private IBinder f599a;

    e(IBinder iBinder) {
        this.f599a = iBinder;
    }

    @Override // com.google.android.gms.wearable.internal.c
    public void a(DataHolder dataHolder) {
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.wearable.internal.IWearableListener");
            if (dataHolder != null) {
                parcelObtain.writeInt(1);
                dataHolder.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            this.f599a.transact(1, parcelObtain, null, 1);
        } finally {
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.wearable.internal.c
    public void a(af afVar) {
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.wearable.internal.IWearableListener");
            if (afVar != null) {
                parcelObtain.writeInt(1);
                afVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            this.f599a.transact(2, parcelObtain, null, 1);
        } finally {
            parcelObtain.recycle();
        }
    }

    @Override // com.google.android.gms.wearable.internal.c
    public void a(ai aiVar) {
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.wearable.internal.IWearableListener");
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            this.f599a.transact(3, parcelObtain, null, 1);
        } finally {
            parcelObtain.recycle();
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.f599a;
    }

    @Override // com.google.android.gms.wearable.internal.c
    public void b(ai aiVar) {
        Parcel parcelObtain = Parcel.obtain();
        try {
            parcelObtain.writeInterfaceToken("com.google.android.gms.wearable.internal.IWearableListener");
            if (aiVar != null) {
                parcelObtain.writeInt(1);
                aiVar.writeToParcel(parcelObtain, 0);
            } else {
                parcelObtain.writeInt(0);
            }
            this.f599a.transact(4, parcelObtain, null, 1);
        } finally {
            parcelObtain.recycle();
        }
    }
}
