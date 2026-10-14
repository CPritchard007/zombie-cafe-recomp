package com.capcom.a;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.content.pm.Signature;
import android.os.Bundle;
import android.text.TextUtils;
import android.webkit.CookieSyncManager;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class f {

    /* renamed from: a, reason: collision with root package name */
    protected static String f21a = "https://m.facebook.com/dialog/";
    protected static String b = "https://graph.facebook.com/";
    protected static String c = "https://api.facebook.com/restserver.php";
    private String g;
    private Activity h;
    private String[] i;
    private int j;
    private h k;
    private String d = null;
    private long e = 0;
    private long f = 0;
    private final long l = 86400000;

    public f(String str) {
        if (str == null) {
            throw new IllegalArgumentException("You must specify your application ID when instantiating a Facebook object. See README for details.");
        }
        this.g = str;
    }

    private void a(Activity activity, String[] strArr) {
        Bundle bundle = new Bundle();
        if (strArr.length > 0) {
            bundle.putString("scope", TextUtils.join(",", strArr));
        }
        CookieSyncManager.createInstance(activity);
        a(activity, "oauth", bundle, new g(this));
    }

    private boolean a(Activity activity, String str, String[] strArr, int i) {
        boolean z = true;
        Intent intent = new Intent();
        intent.setClassName("com.facebook.katana", "com.facebook.katana.ProxyAuth");
        intent.putExtra("client_id", str);
        if (strArr.length > 0) {
            intent.putExtra("scope", TextUtils.join(",", strArr));
        }
        if (!a(activity, intent)) {
            return false;
        }
        this.h = activity;
        this.i = strArr;
        this.j = i;
        try {
            activity.startActivityForResult(intent, i);
        } catch (ActivityNotFoundException e) {
            z = false;
        }
        return z;
    }

    private boolean a(Context context, Intent intent) {
        ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 0);
        if (resolveInfoResolveActivity == null) {
            return false;
        }
        return a(context, resolveInfoResolveActivity.activityInfo.packageName);
    }

    private boolean a(Context context, String str) {
        try {
            for (Signature signature : context.getPackageManager().getPackageInfo(str, 64).signatures) {
                if (signature.toCharsString().equals("30820268308201d102044a9c4610300d06092a864886f70d0101040500307a310b3009060355040613025553310b3009060355040813024341311230100603550407130950616c6f20416c746f31183016060355040a130f46616365626f6f6b204d6f62696c653111300f060355040b130846616365626f6f6b311d301b0603550403131446616365626f6f6b20436f72706f726174696f6e3020170d3039303833313231353231365a180f32303530303932353231353231365a307a310b3009060355040613025553310b3009060355040813024341311230100603550407130950616c6f20416c746f31183016060355040a130f46616365626f6f6b204d6f62696c653111300f060355040b130846616365626f6f6b311d301b0603550403131446616365626f6f6b20436f72706f726174696f6e30819f300d06092a864886f70d010101050003818d0030818902818100c207d51df8eb8c97d93ba0c8c1002c928fab00dc1b42fca5e66e99cc3023ed2d214d822bc59e8e35ddcf5f44c7ae8ade50d7e0c434f500e6c131f4a2834f987fc46406115de2018ebbb0d5a3c261bd97581ccfef76afc7135a6d59e8855ecd7eacc8f8737e794c60a761c536b72b11fac8e603f5da1a2d54aa103b8a13c0dbc10203010001300d06092a864886f70d0101040500038181005ee9be8bcbb250648d3b741290a82a1c9dc2e76a0af2f2228f1d9f9c4007529c446a70175c5a900d5141812866db46be6559e2141616483998211f4a673149fb2232a10d247663b26a9031e15f84bc1c74d141ff98a02d76f85b2c8ab2571b6469b232d8e768a7f7ca04f7abe4a775615916c07940656b58717457b42bd928a2")) {
                    return true;
                }
            }
            return false;
        } catch (PackageManager.NameNotFoundException e) {
            return false;
        }
    }

    public String a(Context context) {
        n.a(context);
        Bundle bundle = new Bundle();
        bundle.putString("method", "auth.expireSession");
        String strA = a(bundle);
        a((String) null);
        a(0L);
        return strA;
    }

    public String a(Bundle bundle) {
        if (bundle.containsKey("method")) {
            return a(null, bundle, "GET");
        }
        throw new IllegalArgumentException("API method must be specified. (parameters must contain key \"method\" and value). See http://developers.facebook.com/docs/reference/rest/");
    }

    public String a(String str, Bundle bundle, String str2) {
        bundle.putString("format", "json");
        if (a()) {
            bundle.putString("access_token", b());
        }
        return n.a(str != null ? String.valueOf(b) + str : c, str2, bundle);
    }

    public void a(long j) {
        this.f = j;
    }

    public void a(Activity activity, String[] strArr, int i, h hVar) {
        this.k = hVar;
        if (i >= 0 ? a(activity, this.g, strArr, i) : false) {
            return;
        }
        a(activity, strArr);
    }

    public void a(Context context, String str, Bundle bundle, h hVar) {
        String str2 = String.valueOf(f21a) + str;
        bundle.putString("display", "touch");
        bundle.putString("redirect_uri", "fbconnect://success");
        if (str.equals("oauth")) {
            bundle.putString("type", "user_agent");
            bundle.putString("client_id", this.g);
        } else {
            bundle.putString("app_id", this.g);
        }
        if (a()) {
            bundle.putString("access_token", b());
        }
        String str3 = String.valueOf(str2) + "?" + n.a(bundle);
        if (context.checkCallingOrSelfPermission("android.permission.INTERNET") != 0) {
            n.a(context, "Error", "Application requires permission to access the Internet");
        } else {
            new j(context, str3, hVar).show();
        }
    }

    public void a(String str) {
        this.d = str;
        this.e = System.currentTimeMillis();
    }

    public boolean a() {
        return b() != null && (c() == 0 || System.currentTimeMillis() < c());
    }

    public String b() {
        return this.d;
    }

    public void b(String str) {
        if (str != null) {
            a(str.equals("0") ? 0L : System.currentTimeMillis() + (Long.parseLong(str) * 1000));
        }
    }

    public long c() {
        return this.f;
    }
}
