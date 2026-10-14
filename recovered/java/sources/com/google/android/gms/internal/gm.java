package com.google.android.gms.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class gm extends Binder implements gl {
    public gm() {
        attachInterface(this, "com.google.android.gms.ads.internal.request.IAdRequestService");
    }

    public static gl a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.ads.internal.request.IAdRequestService");
        return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof gl)) ? new gn(iBinder) : (gl) iInterfaceQueryLocalInterface;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        switch (i) {
            case 1:
                parcel.enforceInterface("com.google.android.gms.ads.internal.request.IAdRequestService");
                du duVarA = a(parcel.readInt() != 0 ? ds.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                if (duVarA != null) {
                    parcel2.writeInt(1);
                    duVarA.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            case 1598968902:
                parcel2.writeString("com.google.android.gms.ads.internal.request.IAdRequestService");
                return true;
            default:
                return super.onTransact(i, parcel, parcel2, i2);
        }
    }
}
