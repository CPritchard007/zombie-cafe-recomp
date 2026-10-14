package com.google.android.gms.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class bz extends Binder implements by {
    public bz() {
        attachInterface(this, "com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
    }

    public static by a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
        return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof by)) ? new ca(iBinder) : (by) iInterfaceQueryLocalInterface;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        switch (i) {
            case 1:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                a(com.google.android.gms.a.b.a(parcel.readStrongBinder()), parcel.readInt() != 0 ? al.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? ai.CREATOR.createFromParcel(parcel) : null, parcel.readString(), cc.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 2:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                com.google.android.gms.a.a aVarA = a();
                parcel2.writeNoException();
                parcel2.writeStrongBinder(aVarA != null ? aVarA.asBinder() : null);
                return true;
            case 3:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                a(com.google.android.gms.a.b.a(parcel.readStrongBinder()), parcel.readInt() != 0 ? ai.CREATOR.createFromParcel(parcel) : null, parcel.readString(), cc.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 4:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                b();
                parcel2.writeNoException();
                return true;
            case 5:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                c();
                parcel2.writeNoException();
                return true;
            case 6:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                a(com.google.android.gms.a.b.a(parcel.readStrongBinder()), parcel.readInt() != 0 ? al.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? ai.CREATOR.createFromParcel(parcel) : null, parcel.readString(), parcel.readString(), cc.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 7:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                a(com.google.android.gms.a.b.a(parcel.readStrongBinder()), parcel.readInt() != 0 ? ai.CREATOR.createFromParcel(parcel) : null, parcel.readString(), parcel.readString(), cc.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 8:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                d();
                parcel2.writeNoException();
                return true;
            case 9:
                parcel.enforceInterface("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                e();
                parcel2.writeNoException();
                return true;
            case 1598968902:
                parcel2.writeString("com.google.android.gms.ads.internal.mediation.client.IMediationAdapter");
                return true;
            default:
                return super.onTransact(i, parcel, parcel2, i2);
        }
    }
}
