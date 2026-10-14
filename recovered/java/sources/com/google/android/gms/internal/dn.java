package com.google.android.gms.internal;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class dn extends com.google.android.gms.a.e {

    /* renamed from: a, reason: collision with root package name */
    private static final dn f334a = new dn();

    private dn() {
        super("com.google.android.gms.ads.AdOverlayCreatorImpl");
    }

    public static dp a(Activity activity) {
        dp dpVarC;
        try {
            if (b(activity)) {
                ig.a("Using AdOverlay from the client jar.");
                dpVarC = new db(activity);
            } else {
                dpVarC = f334a.c(activity);
            }
            return dpVarC;
        } catch (Cdo e) {
            ig.e(e.getMessage());
            return null;
        }
    }

    private static boolean b(Activity activity) throws Cdo {
        Intent intent = activity.getIntent();
        if (intent.hasExtra("com.google.android.gms.ads.internal.overlay.useClientJar")) {
            return intent.getBooleanExtra("com.google.android.gms.ads.internal.overlay.useClientJar", false);
        }
        throw new Cdo("Ad overlay requires the useClientJar flag in intent extras.");
    }

    private dp c(Activity activity) {
        try {
            return dq.a(((dt) a((Context) activity)).a(com.google.android.gms.a.d.a(activity)));
        } catch (RemoteException e) {
            ig.c("Could not create remote AdOverlay.", e);
            return null;
        } catch (com.google.android.gms.a.f e2) {
            ig.c("Could not create remote AdOverlay.", e2);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.a.e
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public dt a(IBinder iBinder) {
        return dv.a(iBinder);
    }
}
