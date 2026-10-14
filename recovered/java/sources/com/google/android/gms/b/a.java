package com.google.android.gms.b;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Messenger;
import java.io.IOException;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class a {

    /* renamed from: a, reason: collision with root package name */
    static a f154a;
    private Context c;
    private PendingIntent d;
    final BlockingQueue b = new LinkedBlockingQueue();
    private Handler e = new b(this, Looper.getMainLooper());
    private Messenger f = new Messenger(this.e);

    public static synchronized a a(Context context) {
        if (f154a == null) {
            f154a = new a();
            f154a.c = context;
        }
        return f154a;
    }

    private void c(String... strArr) {
        String strB = b(strArr);
        Intent intent = new Intent("com.google.android.c2dm.intent.REGISTER");
        intent.setPackage("com.google.android.gms");
        intent.putExtra("google.messenger", this.f);
        b(intent);
        intent.putExtra("sender", strB);
        this.c.startService(intent);
    }

    public String a(Intent intent) {
        if (!"com.google.android.c2dm.intent.RECEIVE".equals(intent.getAction())) {
            return null;
        }
        String stringExtra = intent.getStringExtra("message_type");
        return stringExtra == null ? "gcm" : stringExtra;
    }

    public String a(String... strArr) throws IOException {
        if (Looper.getMainLooper() == Looper.myLooper()) {
            throw new IOException("MAIN_THREAD");
        }
        this.b.clear();
        c(strArr);
        try {
            Intent intent = (Intent) this.b.poll(5000L, TimeUnit.MILLISECONDS);
            if (intent == null) {
                throw new IOException("SERVICE_NOT_AVAILABLE");
            }
            String stringExtra = intent.getStringExtra("registration_id");
            if (stringExtra != null) {
                return stringExtra;
            }
            intent.getStringExtra("error");
            String stringExtra2 = intent.getStringExtra("error");
            if (stringExtra2 != null) {
                throw new IOException(stringExtra2);
            }
            throw new IOException("SERVICE_NOT_AVAILABLE");
        } catch (InterruptedException e) {
            throw new IOException(e.getMessage());
        }
    }

    String b(String... strArr) {
        if (strArr == null || strArr.length == 0) {
            throw new IllegalArgumentException("No senderIds");
        }
        StringBuilder sb = new StringBuilder(strArr[0]);
        for (int i = 1; i < strArr.length; i++) {
            sb.append(',').append(strArr[i]);
        }
        return sb.toString();
    }

    synchronized void b(Intent intent) {
        if (this.d == null) {
            Intent intent2 = new Intent();
            intent2.setPackage("com.google.example.invalidpackage");
            this.d = PendingIntent.getBroadcast(this.c, 0, intent2, 0);
        }
        intent.putExtra("app", this.d);
    }
}
