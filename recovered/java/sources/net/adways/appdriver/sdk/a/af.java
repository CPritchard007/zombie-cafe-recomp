package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import android.telephony.TelephonyManager;
import android.util.Log;
import java.io.File;
import java.lang.ref.WeakReference;
import java.lang.reflect.InvocationTargetException;
import java.util.UUID;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class af {

    /* renamed from: a, reason: collision with root package name */
    private static af f613a = null;
    private final WeakReference b;
    private int c = 0;
    private String d = null;
    private String e = null;
    private int f = 0;
    private String g = null;
    private int h = -1;
    private String i = null;
    private int j = 0;
    private Boolean k = true;
    private String l = null;
    private String m = null;
    private String n = null;
    private String o = null;
    private String p = null;

    private af(Context context) {
        this.b = new WeakReference(context);
    }

    public static af a(Context context) {
        if (f613a == null) {
            ae aeVar = new ae(context);
            try {
                b(context, aeVar.b("SITE_ID", 0), aeVar.b("SITE_KEY", (String) null), aeVar.b("MODE", -1), aeVar.b("ENV", 0));
            } catch (an e) {
                Log.e("appdriver-log", e.getMessage());
                throw new an("system setting have not been initialized, must be setup first.");
            }
        }
        return f613a;
    }

    public static void a(Context context, int i, String str, int i2, int i3) throws an {
        if (f613a == null) {
            b(context, i, str, i2, i3);
        }
    }

    private static void b(Context context, int i, String str, int i2, int i3) throws an {
        v.a("new system setting initial");
        f613a = new af(context);
        ae aeVar = new ae(context);
        if (i <= 0) {
            throw new an("siteId must be an int value larger than 0 ");
        }
        f613a.c = i;
        aeVar.a("SITE_ID", i);
        if (str == null || str.equals("")) {
            throw new an("siteKey can not be set to null");
        }
        f613a.d = str;
        aeVar.a("SITE_KEY", str);
        f613a.h = i2;
        if (i2 > 3 || i2 < 0) {
            throw new an("unsupport mode" + i2);
        }
        aeVar.a("MODE", i2);
        f613a.j = i3;
        aeVar.a("ENV", i3);
        f613a.e();
        f613a.d();
        f613a.i();
        f613a.l();
    }

    public final int a() {
        return this.c;
    }

    public final void a(int i) {
        this.f = i;
    }

    public final void a(String str) {
        this.g = str;
    }

    public final void a(boolean z) {
        if (z) {
            this.i = "1";
        } else {
            this.i = null;
        }
    }

    public final String b() {
        return this.d;
    }

    public final int c() {
        return this.h;
    }

    public final String d() {
        Context context;
        if (this.l == null && (context = (Context) this.b.get()) != null) {
            this.l = ((TelephonyManager) context.getSystemService("phone")).getNetworkOperatorName();
        }
        return this.l;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0045 A[DONT_GENERATE] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final java.lang.String e() {
        /*
            r3 = this;
            java.lang.String r0 = r3.m
            if (r0 != 0) goto L4c
            java.lang.String r0 = "not defined"
            r3.m = r0
            java.lang.ref.WeakReference r0 = r3.b
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto L3b
            android.content.pm.PackageManager r1 = r0.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            java.lang.String r0 = r0.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            r2 = 128(0x80, float:1.794E-43)
            android.content.pm.PackageInfo r0 = r1.getPackageInfo(r0, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            java.lang.String r1 = r0.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            if (r1 == 0) goto L3b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            java.lang.String r2 = r0.versionName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            r1.<init>(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            java.lang.String r2 = "-"
            r1.append(r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            int r0 = r0.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            r1.append(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            java.lang.String r0 = r1.toString()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
            r3.m = r0     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L4f java.lang.Throwable -> L69
        L3b:
            java.lang.String r0 = "not defined"
            java.lang.String r1 = r3.m
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4c
            java.lang.String r0 = "appdriver-log"
            java.lang.String r1 = "failed to get the application version in AndroidManifest.xml"
            android.util.Log.w(r0, r1)
        L4c:
            java.lang.String r0 = r3.m
            return r0
        L4f:
            r0 = move-exception
            java.lang.String r1 = "appdriver-log"
            java.lang.String r2 = "failed to get the application version in AndroidManifest.xml"
            android.util.Log.w(r1, r2, r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = "not defined"
            java.lang.String r1 = r3.m
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4c
            java.lang.String r0 = "appdriver-log"
            java.lang.String r1 = "failed to get the application version in AndroidManifest.xml"
            android.util.Log.w(r0, r1)
            goto L4c
        L69:
            r0 = move-exception
            java.lang.String r1 = "not defined"
            java.lang.String r2 = r3.m
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L7b
            java.lang.String r1 = "appdriver-log"
            java.lang.String r2 = "failed to get the application version in AndroidManifest.xml"
            android.util.Log.w(r1, r2)
        L7b:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: net.adways.appdriver.sdk.a.af.e():java.lang.String");
    }

    public final String f() {
        if (this.g == null || this.g.equals("")) {
            ae aeVar = new ae((Context) this.b.get());
            this.g = aeVar.b("UUID", (String) null);
            if (this.g == null || this.g.equals("")) {
                this.g = UUID.randomUUID().toString();
                aeVar.a("UUID", this.g);
            }
        }
        return this.g;
    }

    public final String g() {
        Context context;
        String string;
        String string2 = null;
        if (this.e == null && (context = (Context) this.b.get()) != null) {
            try {
                Bundle bundle = context.getPackageManager().getApplicationInfo(context.getPackageName(), 128).metaData;
                if (bundle != null) {
                    string2 = bundle.getString("net.adways.appdriver.scheme");
                    string = bundle.getString("net.adways.appdriver.host");
                } else {
                    string = null;
                }
                if (string2 != null) {
                    if (string == null) {
                        string = "undefined";
                    }
                    this.e = string2 + "://" + string + "/";
                } else {
                    Log.w("appdriver-log", "meta-data scheme/host is not found.");
                }
            } catch (PackageManager.NameNotFoundException e) {
                Log.w("appdriver-log", "get appliation info failed when tring to get meta-data scheme/host.", e);
            }
        }
        return this.e;
    }

    public final int h() {
        return this.f;
    }

    public final String i() {
        if (this.n == null) {
            this.n = "0";
            if (new File("/system/bin/su").exists()) {
                this.n = "1";
            }
        }
        return this.n;
    }

    public final void j() {
        if (k()) {
            v.a("get super-switch status");
            new u((Context) this.b.get(), new am()).a();
        }
    }

    public final boolean k() {
        Context context = (Context) this.b.get();
        if (context != null) {
            try {
                this.k = Boolean.valueOf("on".equals(new ae(context).b(am.i(context), "on")));
            } catch (Exception e) {
                Log.e("appdriver-log", "failed to get Super-Switch", e);
            }
        }
        return this.k.booleanValue();
    }

    public final String l() {
        Context context;
        if (this.o == null && (context = (Context) this.b.get()) != null) {
            this.o = ((TelephonyManager) context.getSystemService("phone")).getSimOperatorName();
        }
        return this.o;
    }

    public final String m() {
        return this.i;
    }

    public final boolean n() {
        return this.j == 1;
    }

    public final void o() throws IllegalAccessException, ClassNotFoundException, an, IllegalArgumentException, InvocationTargetException {
        Context context = (Context) this.b.get();
        if (context != null) {
            try {
                v.a("try to get advertising id");
                Object objInvoke = Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient$Info").getMethod("getId", new Class[0]).invoke(Class.forName("com.google.android.gms.ads.identifier.AdvertisingIdClient").getMethod("getAdvertisingIdInfo", Context.class).invoke(null, context), new Object[0]);
                if (objInvoke != null) {
                    this.p = objInvoke.toString();
                    v.a("return advertising id =" + this.p);
                }
            } catch (ClassNotFoundException e) {
                Log.w("appdriver-log", "give up fetching Advertising Id since not found google play services library");
            } catch (InvocationTargetException e2) {
                Log.w("appdriver-log", "get advertising id failed", e2.getTargetException());
            } catch (Exception e3) {
                Log.e("appdriver-log", "crashed when getting advertising id", e3);
                throw new an();
            }
        }
    }

    public final String p() {
        return this.p;
    }
}
