package com.google.android.gms.internal;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ff extends com.google.android.gms.a.e {

    /* renamed from: a, reason: collision with root package name */
    private static final ff f360a = new ff();

    private ff() {
        super("com.google.android.gms.ads.InAppPurchaseManagerCreatorImpl");
    }

    public static eq a(Activity activity) {
        eq eqVarC;
        try {
            if (b(activity)) {
                ig.a("Using AdOverlay from the client jar.");
                eqVarC = new ec(activity);
            } else {
                eqVarC = f360a.c(activity);
            }
            return eqVarC;
        } catch (fh e) {
            ig.e(e.getMessage());
            return null;
        }
    }

    private static boolean b(Activity activity) throws fh {
        Intent intent = activity.getIntent();
        if (intent.hasExtra("com.google.android.gms.ads.internal.purchase.useClientJar")) {
            return intent.getBooleanExtra("com.google.android.gms.ads.internal.purchase.useClientJar", false);
        }
        throw new fh("InAppPurchaseManager requires the useClientJar flag in intent extras.");
    }

    private eq c(Activity activity) {
        try {
            return er.a(((et) a((Context) activity)).a(com.google.android.gms.a.d.a(activity)));
        } catch (RemoteException e) {
            ig.c("Could not create remote InAppPurchaseManager.", e);
            return null;
        } catch (com.google.android.gms.a.f e2) {
            ig.c("Could not create remote InAppPurchaseManager.", e2);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.a.e
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public et a(IBinder iBinder) {
        return eu.a(iBinder);
    }
}
