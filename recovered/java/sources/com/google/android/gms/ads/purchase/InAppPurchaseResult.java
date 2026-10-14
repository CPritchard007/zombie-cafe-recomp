package com.google.android.gms.ads.purchase;

import android.content.Intent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface InAppPurchaseResult {
    void finishPurchase();

    String getProductId();

    Intent getPurchaseData();

    int getResultCode();

    boolean isVerified();
}
