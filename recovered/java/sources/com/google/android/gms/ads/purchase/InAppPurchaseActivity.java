package com.google.android.gms.ads.purchase;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.RemoteException;
import com.google.android.gms.internal.eq;
import com.google.android.gms.internal.ff;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class InAppPurchaseActivity extends Activity {
    public static final String CLASS_NAME = "com.google.android.gms.ads.purchase.InAppPurchaseActivity";
    public static final String SIMPLE_CLASS_NAME = "InAppPurchaseActivity";

    /* renamed from: a, reason: collision with root package name */
    private eq f150a;

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        try {
            if (this.f150a != null) {
                this.f150a.a(i, i2, intent);
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onActivityResult to in-app purchase manager:", e);
        }
        super.onActivityResult(i, i2, intent);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f150a = ff.a((Activity) this);
        if (this.f150a == null) {
            ig.e("Could not create in-app purchase manager.");
            finish();
            return;
        }
        try {
            this.f150a.a();
        } catch (RemoteException e) {
            ig.c("Could not forward onCreate to in-app purchase manager:", e);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        try {
            if (this.f150a != null) {
                this.f150a.b();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onDestroy to in-app purchase manager:", e);
        }
        super.onDestroy();
    }
}
