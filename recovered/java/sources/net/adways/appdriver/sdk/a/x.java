package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Context;
import android.util.Log;
import java.util.concurrent.Executors;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class x implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ Context f631a;
    private /* synthetic */ Activity b;
    private /* synthetic */ w c;

    x(w wVar, Context context, Activity activity) {
        this.c = wVar;
        this.f631a = context;
        this.b = activity;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Log.i("appdriver-log", "AppDriver SDK setup start");
        try {
            af.a(this.f631a).j();
            af.a(this.f631a).o();
            if (af.a(this.f631a).c() != 0) {
                w.a(this.c, this.b);
                ao aoVar = new ao(this.f631a);
                Context context = (Context) aoVar.f618a.get();
                if (context != null) {
                    ab abVarA = aoVar.a(context);
                    int iC = af.a(context).c();
                    if (iC > 0) {
                        if ((iC & 2) == 2) {
                            abVarA.a(new aq());
                        }
                        if ((iC & 1) == 1) {
                            abVarA.a(new ap());
                        }
                        Executors.newSingleThreadExecutor().execute(abVarA);
                    } else {
                        Log.w("appdriver-log", "can not execute under indicated mode");
                    }
                }
                Log.i("appdriver-log", "AppDriver SDK setup end");
            }
        } catch (an e) {
            Log.e("appdriver-log", "AppDriver SDK setup failed", e);
        } catch (Throwable th) {
            Log.e("appdriver-log", "AppDriver SDK internal error", th);
        }
    }
}
