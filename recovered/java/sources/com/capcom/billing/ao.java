package com.capcom.billing;

import android.os.Handler;
import android.util.Log;
import com.capcom.zombiecafeandroidJP.ZombieCafeAndroid;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ao extends ac {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f45a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ao(SmurfsBilling smurfsBilling, Handler handler) {
        super(smurfsBilling, handler);
        this.f45a = smurfsBilling;
    }

    @Override // com.capcom.billing.ac
    public void a(g gVar, j jVar) {
        Log.v("SMURFSVILLAGE", "OnRequestPurchaseResponse");
        Log.d("SmurfsBilling", String.valueOf(gVar.c) + ": " + jVar);
        if (jVar == j.RESULT_OK) {
            Log.i("SmurfsBilling", "purchase was successfully sent to server");
            Log.e("========3============", "========3==========");
            Log.v("ZOMBIE CAFE PURCHASE RESPONSE IS OK", "DEBUG TOXIN IS GIVEN TO USER!");
            Log.v("Product ID", gVar.c);
            Log.e("========3============", "========3==========");
            this.f45a.a();
            this.f45a.a(gVar.c, "sending purchase request");
            return;
        }
        if (jVar == j.RESULT_USER_CANCELED) {
            Log.i("SmurfsBilling", "user canceled purchase");
            this.f45a.a(gVar.c, "dismissed purchase dialog");
            ZombieCafeAndroid.setPurchasingFlag(false);
            ZombieCafeAndroid.setOpenPurchaceScreenFlag(false);
            this.f45a.a();
            return;
        }
        Log.i("SmurfsBilling", "purchase failed");
        this.f45a.a(gVar.c, "request purchase returned " + jVar);
        ZombieCafeAndroid.setPurchasingFlag(false);
        ZombieCafeAndroid.setOpenPurchaceScreenFlag(false);
        this.f45a.a();
    }
}
