package com.capcom.billing;

import android.content.Context;
import android.util.Log;
import com.capcom.zombiecafeandroidJP.ZombieCafeAndroid;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ad {

    /* renamed from: a, reason: collision with root package name */
    private static final List f35a = new LinkedList();

    private static List a() {
        LinkedList linkedList = new LinkedList();
        synchronized (f35a) {
            Iterator it = f35a.iterator();
            while (it.hasNext()) {
                linkedList.add((ac) it.next());
            }
        }
        return linkedList;
    }

    public static void a(Context context, g gVar, j jVar) {
        Log.e("=======1========", "========1========");
        if (jVar == j.RESULT_USER_CANCELED || jVar == j.RESULT_ERROR) {
            ZombieCafeAndroid.setPurchasingFlag(false);
        }
        Iterator it = a().iterator();
        while (it.hasNext()) {
            ((ac) it.next()).a(gVar, jVar);
            Log.e("=======1========", "========1========");
            Log.e("responseCodeReceived=", jVar.toString());
            Log.e("Request is==================", gVar.toString());
            Log.e("Product ID", gVar.c);
            Log.e("Order ID", "ID=" + gVar.f46a);
            Log.e("=======1========", "========1========");
        }
    }

    public static synchronized void a(ac acVar) {
        synchronized (f35a) {
            f35a.add(acVar);
        }
    }

    public static synchronized void b(ac acVar) {
        synchronized (f35a) {
            f35a.remove(acVar);
        }
    }
}
