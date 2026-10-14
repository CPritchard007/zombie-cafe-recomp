package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class y implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f632a;
    final /* synthetic */ Bundle b;

    y(w wVar, Activity activity, Bundle bundle) {
        this.f632a = activity;
        this.b = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            Log.i("appdriver-log", "AppDriver SDK open OfferWall start");
            af afVarA = af.a(this.f632a);
            if (afVarA.p() == null) {
                afVarA.j();
                afVarA.o();
            }
            new Handler(Looper.getMainLooper()).post(new z(this, afVarA));
        } catch (an e) {
            Log.e("appdriver-log", "AppDriver SDK reward failed!", e);
        } catch (Throwable th) {
            Log.e("appdriver-log", "AppDriver SDK internal error", th);
        }
    }
}
