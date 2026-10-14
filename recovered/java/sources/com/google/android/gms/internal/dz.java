package com.google.android.gms.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.SystemClock;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class dz extends hl implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    private final Object f340a = new Object();
    private boolean b = false;
    private Context c;
    private fa d;
    private dy e;
    private ef f;
    private List g;
    private ei h;

    public dz(Context context, fa faVar, ei eiVar) {
        this.g = null;
        this.c = context;
        this.d = faVar;
        this.h = eiVar;
        this.e = new dy(context);
        this.f = ef.a(this.c);
        this.g = this.f.a(10L);
    }

    private void a(long j) {
        do {
            if (!b(j)) {
                ig.e("Timeout waiting for pending transaction to be processed.");
            }
        } while (!this.b);
    }

    private void a(ed edVar, String str, String str2) {
        Intent intent = new Intent();
        intent.putExtra("RESPONSE_CODE", 0);
        intent.putExtra("INAPP_PURCHASE_DATA", str);
        intent.putExtra("INAPP_DATA_SIGNATURE", str2);
        Cif.f427a.post(new ea(this, edVar, intent));
    }

    private boolean b(long j) throws InterruptedException {
        long jElapsedRealtime = 60000 - (SystemClock.elapsedRealtime() - j);
        if (jElapsedRealtime <= 0) {
            return false;
        }
        try {
            this.f340a.wait(jElapsedRealtime);
        } catch (InterruptedException e) {
            ig.e("waitWithTimeout_lock interrupted");
        }
        return true;
    }

    private void c() throws ClassNotFoundException {
        if (this.g.isEmpty()) {
            return;
        }
        HashMap map = new HashMap();
        for (ed edVar : this.g) {
            map.put(edVar.c, edVar);
        }
        String str = null;
        while (true) {
            Bundle bundleB = this.e.b(this.c.getPackageName(), str);
            if (bundleB == null || eh.a(bundleB) != 0) {
                break;
            }
            ArrayList<String> stringArrayList = bundleB.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
            ArrayList<String> stringArrayList2 = bundleB.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
            ArrayList<String> stringArrayList3 = bundleB.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
            String string = bundleB.getString("INAPP_CONTINUATION_TOKEN");
            int i = 0;
            while (true) {
                int i2 = i;
                if (i2 >= stringArrayList.size()) {
                    break;
                }
                if (map.containsKey(stringArrayList.get(i2))) {
                    String str2 = stringArrayList.get(i2);
                    String str3 = stringArrayList2.get(i2);
                    String str4 = stringArrayList3.get(i2);
                    ed edVar2 = (ed) map.get(str2);
                    if (edVar2.b.equals(eh.a(str3))) {
                        a(edVar2, str3, str4);
                        map.remove(str2);
                    }
                }
                i = i2 + 1;
            }
            if (string == null || map.isEmpty()) {
                break;
            } else {
                str = string;
            }
        }
        Iterator it = map.keySet().iterator();
        while (it.hasNext()) {
            this.f.a((ed) map.get((String) it.next()));
        }
    }

    @Override // com.google.android.gms.internal.hl
    public void a() {
        synchronized (this.f340a) {
            Context context = this.c;
            Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
            Context context2 = this.c;
            context.bindService(intent, this, 1);
            a(SystemClock.elapsedRealtime());
            this.c.unbindService(this);
            this.e.a();
        }
    }

    @Override // com.google.android.gms.internal.hl
    public void b() {
        synchronized (this.f340a) {
            this.c.unbindService(this);
            this.e.a();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f340a) {
            this.e.a(iBinder);
            c();
            this.b = true;
            this.f340a.notify();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        ig.c("In-app billing service disconnected.");
        this.e.a();
    }
}
