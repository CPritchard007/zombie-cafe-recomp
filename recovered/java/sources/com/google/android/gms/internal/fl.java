package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.android.gms.ads.purchase.InAppPurchase;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fl implements InAppPurchase {

    /* renamed from: a, reason: collision with root package name */
    private final ek f365a;

    public fl(ek ekVar) {
        this.f365a = ekVar;
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchase
    public String getProductId() {
        try {
            return this.f365a.a();
        } catch (RemoteException e) {
            ig.c("Could not forward getProductId to InAppPurchase", e);
            return null;
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchase
    public void recordPlayBillingResolution(int i) {
        try {
            this.f365a.c(i);
        } catch (RemoteException e) {
            ig.c("Could not forward recordPlayBillingResolution to InAppPurchase", e);
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchase
    public void recordResolution(int i) {
        try {
            this.f365a.b(i);
        } catch (RemoteException e) {
            ig.c("Could not forward recordResolution to InAppPurchase", e);
        }
    }
}
