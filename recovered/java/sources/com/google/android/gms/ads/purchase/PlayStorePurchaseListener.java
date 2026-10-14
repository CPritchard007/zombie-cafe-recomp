package com.google.android.gms.ads.purchase;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface PlayStorePurchaseListener {
    boolean isValidPurchase(String str);

    void onInAppPurchaseFinished(InAppPurchaseResult inAppPurchaseResult);
}
