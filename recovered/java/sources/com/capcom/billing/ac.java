package com.capcom.billing;

import android.app.Activity;
import android.content.Intent;
import android.content.IntentSender;
import android.os.Handler;
import java.lang.reflect.Method;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ac {
    private static final Class[] e = {IntentSender.class, Intent.class, Integer.TYPE, Integer.TYPE, Integer.TYPE};

    /* renamed from: a, reason: collision with root package name */
    private final Activity f34a;
    private final Handler b;
    private Method c;
    private Object[] d = new Object[5];

    public ac(Activity activity, Handler handler) {
        this.f34a = activity;
        this.b = handler;
        a();
    }

    private void a() {
        try {
            this.c = this.f34a.getClass().getMethod("startIntentSender", e);
        } catch (NoSuchMethodException e2) {
            this.c = null;
        } catch (SecurityException e3) {
            this.c = null;
        }
    }

    public abstract void a(g gVar, j jVar);
}
