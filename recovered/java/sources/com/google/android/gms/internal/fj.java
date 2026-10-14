package com.google.android.gms.internal;

import android.content.Intent;
import android.os.RemoteException;
import com.google.android.gms.ads.purchase.InAppPurchaseResult;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fj implements InAppPurchaseResult {

    /* renamed from: a, reason: collision with root package name */
    private final ex f363a;

    public fj(ex exVar) {
        this.f363a = exVar;
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchaseResult
    public void finishPurchase() {
        try {
            this.f363a.e();
        } catch (RemoteException e) {
            ig.c("Could not forward finishPurchase to InAppPurchaseResult", e);
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchaseResult
    public String getProductId() {
        try {
            return this.f363a.b();
        } catch (RemoteException e) {
            ig.c("Could not forward getProductId to InAppPurchaseResult", e);
            return null;
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchaseResult
    public Intent getPurchaseData() {
        try {
            return this.f363a.c();
        } catch (RemoteException e) {
            ig.c("Could not forward getPurchaseData to InAppPurchaseResult", e);
            return null;
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchaseResult
    public int getResultCode() {
        try {
            return this.f363a.d();
        } catch (RemoteException e) {
            ig.c("Could not forward getPurchaseData to InAppPurchaseResult", e);
            return 0;
        }
    }

    @Override // com.google.android.gms.ads.purchase.InAppPurchaseResult
    public boolean isVerified() {
        try {
            return this.f363a.a();
        } catch (RemoteException e) {
            ig.c("Could not forward isVerified to InAppPurchaseResult", e);
            return false;
        }
    }
}
