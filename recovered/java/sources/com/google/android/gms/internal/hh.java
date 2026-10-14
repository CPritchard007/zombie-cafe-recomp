package com.google.android.gms.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Bundle;
import com.google.android.gms.ads.AdActivity;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class hh {
    private final String b;

    /* renamed from: a, reason: collision with root package name */
    private final Object f404a = new Object();
    private int c = 0;
    private long d = -1;
    private long e = -1;
    private int f = 0;
    private int g = -1;

    public hh(String str) {
        this.b = str;
    }

    public static boolean a(Context context) {
        int identifier = context.getResources().getIdentifier("Theme.Translucent", "style", "android");
        if (identifier == 0) {
            ig.c("Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
            return false;
        }
        try {
            if (identifier == context.getPackageManager().getActivityInfo(new ComponentName(context.getPackageName(), AdActivity.CLASS_NAME), 0).theme) {
                return true;
            }
            ig.c("Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
            return false;
        } catch (PackageManager.NameNotFoundException e) {
            ig.e("Fail to fetch AdActivity theme");
            ig.c("Please set theme of AdActivity to @android:style/Theme.Translucent to enable transparent background interstitial ad.");
            return false;
        }
    }

    public long a() {
        return this.e;
    }

    public Bundle a(Context context, String str) {
        Bundle bundle;
        synchronized (this.f404a) {
            bundle = new Bundle();
            bundle.putString("session_id", this.b);
            bundle.putLong("basets", this.e);
            bundle.putLong("currts", this.d);
            bundle.putString("seq_num", str);
            bundle.putInt("preqs", this.g);
            bundle.putInt("pclick", this.c);
            bundle.putInt("pimp", this.f);
            bundle.putBoolean("support_transparent_background", a(context));
        }
        return bundle;
    }

    public void a(ai aiVar, long j) {
        synchronized (this.f404a) {
            if (this.e == -1) {
                this.e = j;
                this.d = this.e;
            } else {
                this.d = j;
            }
            if (aiVar.c == null || aiVar.c.getInt("gw", 2) != 1) {
                this.g++;
            }
        }
    }

    public void b() {
        synchronized (this.f404a) {
            this.c++;
        }
    }

    public void c() {
        synchronized (this.f404a) {
            this.f++;
        }
    }
}
