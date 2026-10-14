package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.content.pm.PackageManager;
import android.util.Log;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import org.apache.http.HttpResponse;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class am extends ag {
    public am() {
        super(aj.APPDRIVER_SUPER_SWITCH_Z, "z");
    }

    public static String i(Context context) {
        return String.format(Locale.US, "SUPER_SWITCH_%d", Integer.valueOf(v.a(context)));
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_SITE_AVAILABLE_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_SITE_AVAILABLE_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return g(context);
    }

    @Override // net.adways.appdriver.sdk.a.ag, net.adways.appdriver.sdk.a.t
    public final ai a(Context context, HttpResponse httpResponse) {
        int statusCode = httpResponse.getStatusLine().getStatusCode();
        if (statusCode == 401) {
            Log.i("appdriver-log", "server unavailable");
            if (context != null) {
                try {
                    new ae(context).a(i(context), "off");
                    Log.i("appdriver-log", "super switch changed to off");
                } catch (PackageManager.NameNotFoundException e) {
                    Log.w("appdriver-log", "failed to get app version code", e);
                }
            } else {
                v.a("super switch not changed since it can not cache in preference file");
            }
        } else if (statusCode == 200) {
            v.a("switch not changed since server available");
        } else {
            v.a("switch not changed since unknown server status " + statusCode);
        }
        return ai.Success;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    public final Map c(Context context) {
        HashMap map = new HashMap();
        map.put("app", af.a(context).e());
        return map;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final Map h(Context context) {
        return null;
    }
}
