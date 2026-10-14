package com.google.android.gms.ads.identifier;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.common.e;
import com.google.android.gms.common.g;
import com.google.android.gms.common.i;
import com.google.android.gms.internal.ls;
import com.google.android.gms.internal.ov;
import com.google.android.gms.internal.ow;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdvertisingIdClient {

    public final class Info {

        /* renamed from: a, reason: collision with root package name */
        private final String f144a;
        private final boolean b;

        public Info(String str, boolean z) {
            this.f144a = str;
            this.b = z;
        }

        public String getId() {
            return this.f144a;
        }

        public boolean isLimitAdTrackingEnabled() {
            return this.b;
        }
    }

    static Info a(Context context, i iVar) {
        try {
            try {
                ov ovVarA = ow.a(iVar.a());
                return new Info(ovVarA.a(), ovVarA.a(true));
            } finally {
                try {
                    context.unbindService(iVar);
                } catch (IllegalArgumentException e) {
                    Log.i("AdvertisingIdClient", "getAdvertisingIdInfo unbindService failed.", e);
                }
            }
        } catch (RemoteException e2) {
            Log.i("AdvertisingIdClient", "GMS remote exception ", e2);
            throw new IOException("Remote exception");
        } catch (InterruptedException e3) {
            throw new IOException("Interrupted exception");
        }
    }

    static i a(Context context) throws PackageManager.NameNotFoundException, e, IOException {
        try {
            context.getPackageManager().getPackageInfo("com.android.vending", 0);
            try {
                g.b(context);
                i iVar = new i();
                Intent intent = new Intent("com.google.android.gms.ads.identifier.service.START");
                intent.setPackage("com.google.android.gms");
                if (context.bindService(intent, iVar, 1)) {
                    return iVar;
                }
                throw new IOException("Connection failure");
            } catch (e e) {
                throw new IOException(e);
            }
        } catch (PackageManager.NameNotFoundException e2) {
            throw new e(9);
        }
    }

    public static Info getAdvertisingIdInfo(Context context) {
        ls.c("Calling this from your main thread can lead to deadlock");
        return a(context, a(context));
    }
}
