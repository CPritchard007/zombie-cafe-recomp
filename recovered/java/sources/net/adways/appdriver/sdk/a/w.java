package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import java.util.concurrent.Executors;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class w {

    /* renamed from: a, reason: collision with root package name */
    private static w f630a = null;

    private w() {
    }

    public static synchronized w a() {
        if (f630a == null) {
            f630a = new w();
        }
        return f630a;
    }

    private void a(Activity activity, int i, String str, int i2, net.adways.appdriver.sdk.b bVar) {
        try {
            Context applicationContext = activity.getApplicationContext();
            if (bVar != null) {
                af.a(applicationContext, i, str, bVar.a(), i2);
                af.a(applicationContext).a(bVar.c());
                af.a(applicationContext).a(bVar.b());
                af.a(applicationContext).a(bVar.d());
            } else {
                af.a(applicationContext, i, str, 0, i2);
            }
            Executors.newSingleThreadExecutor().execute(new x(this, applicationContext, activity));
        } catch (an e) {
            Log.e("appdriver-log", "AppDriver SDK setup failed", e);
        } catch (Throwable th) {
            Log.e("appdriver-log", "AppDriver SDK internal error", th);
        }
    }

    private void a(Activity activity, Bundle bundle) {
        Executors.newSingleThreadExecutor().execute(new y(this, activity, bundle));
    }

    static /* synthetic */ void a(w wVar, Activity activity) {
        Uri data = activity.getIntent().getData();
        if (data != null) {
            ae aeVar = new ae(activity);
            aeVar.a("click_id", data.getQueryParameter("click_id"));
            aeVar.a("identifier", data.getQueryParameter("cookie_identifier"));
            aeVar.a("user", data.getQueryParameter("user"));
            aeVar.a("advertisement", data.getQueryParameter("advertisement"));
        }
    }

    public final void a(Activity activity, int i, String str) {
        a(activity, i, str, 0, null);
    }

    public final void b(Activity activity, int i, String str) {
        Bundle bundle = new Bundle();
        bundle.putInt("media_id", i);
        bundle.putString("identifier", str);
        bundle.putString("requestType", aj.REWARD_INDEX_I.name());
        a(activity, bundle);
    }
}
