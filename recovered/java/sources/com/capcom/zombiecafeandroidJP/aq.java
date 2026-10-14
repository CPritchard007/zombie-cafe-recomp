package com.capcom.zombiecafeandroidJP;

import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class aq implements com.capcom.billing.s {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f92a;

    aq(ZombieCafeAndroid zombieCafeAndroid) {
        this.f92a = zombieCafeAndroid;
    }

    @Override // com.capcom.billing.s
    public void a(com.capcom.billing.z zVar, com.capcom.billing.x xVar) {
        ZombieCafeAndroid.logging("Consumption finished. Purchase: " + zVar + ", result: " + xVar);
        if (xVar.b()) {
            ZombieCafeAndroid.logging("Consumption successful. Provisioning.");
            String strB = zVar.b();
            String strA = zVar.a();
            long jC = zVar.c();
            String strD = zVar.d();
            Log.d("TOXIN", "orderID:" + strA.toString() + " productID:" + strB.toString());
            ZombieCafeAndroid.logging("orderID:" + strA.toString() + " productID:" + strB.toString());
            com.capcom.billing.aa aaVar = new com.capcom.billing.aa(ZombieCafeAndroid.w);
            aaVar.a(strA, strB, com.capcom.billing.i.PURCHASED, jC, strD);
            aaVar.a();
            ZombieCafeAndroid.boughtToxin(zVar.b());
        } else {
            ZombieCafeAndroid.logging("Error while consuming: " + xVar);
            ZombieCafeAndroid.consumeFailed(zVar.b());
        }
        ZombieCafeAndroid.logging("End consumption flow.");
    }
}
