package com.google.android.gms.internal;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.SystemClock;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class eb extends el {

    /* renamed from: a, reason: collision with root package name */
    private String f343a;
    private Context b;
    private String c;
    private ArrayList d;

    public eb(String str, ArrayList arrayList, Context context, String str2) {
        this.c = str;
        this.d = arrayList;
        this.f343a = str2;
        this.b = context;
    }

    private void b() throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
        try {
            this.b.getClassLoader().loadClass("com.google.ads.conversiontracking.IAPConversionReporter").getDeclaredMethod("reportWithProductId", Context.class, String.class, String.class, Boolean.TYPE).invoke(null, this.b, this.c, "", true);
        } catch (ClassNotFoundException e) {
            ig.e("Google Conversion Tracking SDK 1.2.0 or above is required to report a conversion.");
        } catch (NoSuchMethodException e2) {
            ig.e("Google Conversion Tracking SDK 1.2.0 or above is required to report a conversion.");
        } catch (Exception e3) {
            ig.c("Fail to report a conversion.", e3);
        }
    }

    protected int a(int i) {
        if (i == 0) {
            return 1;
        }
        if (i == 1) {
            return 2;
        }
        return i == 4 ? 3 : 0;
    }

    @Override // com.google.android.gms.internal.ek
    public String a() {
        return this.c;
    }

    protected String a(String str, HashMap map) {
        String str2;
        String packageName = this.b.getPackageName();
        try {
            str2 = this.b.getPackageManager().getPackageInfo(packageName, 0).versionName;
        } catch (PackageManager.NameNotFoundException e) {
            ig.c("Error to retrieve app version", e);
            str2 = "";
        }
        long jElapsedRealtime = SystemClock.elapsedRealtime() - hg.d().a();
        for (String str3 : map.keySet()) {
            str = str.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", str3), String.format("$1%s$2", map.get(str3)));
        }
        return str.replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "sessionid"), String.format("$1%s$2", hg.f403a)).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "appid"), String.format("$1%s$2", packageName)).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "osversion"), String.format("$1%s$2", String.valueOf(Build.VERSION.SDK_INT))).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "sdkversion"), String.format("$1%s$2", this.f343a)).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "appversion"), String.format("$1%s$2", str2)).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "timestamp"), String.format("$1%s$2", String.valueOf(jElapsedRealtime))).replaceAll(String.format("(?<!@)((?:@@)*)@%s(?<!@)((?:@@)*)@", "[^@]+"), String.format("$1%s$2", "")).replaceAll("@@", "@");
    }

    @Override // com.google.android.gms.internal.ek
    public void b(int i) throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
        if (i == 1) {
            b();
        }
        HashMap map = new HashMap();
        map.put("status", String.valueOf(i));
        map.put("sku", this.c);
        Iterator it = this.d.iterator();
        while (it.hasNext()) {
            new id(this.b, this.f343a, a((String) it.next(), map)).e();
        }
    }

    @Override // com.google.android.gms.internal.ek
    public void c(int i) throws IllegalAccessException, IllegalArgumentException, InvocationTargetException {
        if (i == 0) {
            b();
        }
        HashMap map = new HashMap();
        map.put("google_play_status", String.valueOf(i));
        map.put("sku", this.c);
        map.put("status", String.valueOf(a(i)));
        Iterator it = this.d.iterator();
        while (it.hasNext()) {
            new id(this.b, this.f343a, a((String) it.next(), map)).e();
        }
    }
}
