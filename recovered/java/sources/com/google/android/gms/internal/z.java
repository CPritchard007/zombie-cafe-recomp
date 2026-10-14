package com.google.android.gms.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.support.v4.widget.ViewDragHelper;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class z extends Binder implements y {
    public z() {
        attachInterface(this, "com.google.android.gms.ads.internal.client.IAdManager");
    }

    public static y a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.ads.internal.client.IAdManager");
        return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof y)) ? new aa(iBinder) : (y) iInterfaceQueryLocalInterface;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) {
        switch (i) {
            case 1:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                com.google.android.gms.a.a aVarA = a();
                parcel2.writeNoException();
                parcel2.writeStrongBinder(aVarA != null ? aVarA.asBinder() : null);
                return true;
            case 2:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                b();
                parcel2.writeNoException();
                return true;
            case 3:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                boolean zC = c();
                parcel2.writeNoException();
                parcel2.writeInt(zC ? 1 : 0);
                return true;
            case 4:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                boolean zA = a(parcel.readInt() != 0 ? ai.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(zA ? 1 : 0);
                return true;
            case 5:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                d();
                parcel2.writeNoException();
                return true;
            case 6:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                e();
                parcel2.writeNoException();
                return true;
            case 7:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                a(w.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 8:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                a(af.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case 9:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                f();
                parcel2.writeNoException();
                return true;
            case 10:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                g();
                parcel2.writeNoException();
                return true;
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                h();
                parcel2.writeNoException();
                return true;
            case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                al alVarI = i();
                parcel2.writeNoException();
                if (alVarI == null) {
                    parcel2.writeInt(0);
                    return true;
                }
                parcel2.writeInt(1);
                alVarI.writeToParcel(parcel2, 1);
                return true;
            case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                a(parcel.readInt() != 0 ? al.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                return true;
            case 14:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                a(eo.a(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            case ViewDragHelper.EDGE_ALL /* 15 */:
                parcel.enforceInterface("com.google.android.gms.ads.internal.client.IAdManager");
                a(fb.a(parcel.readStrongBinder()), parcel.readString());
                parcel2.writeNoException();
                return true;
            case 1598968902:
                parcel2.writeString("com.google.android.gms.ads.internal.client.IAdManager");
                return true;
            default:
                return super.onTransact(i, parcel, parcel2, i2);
        }
    }
}
