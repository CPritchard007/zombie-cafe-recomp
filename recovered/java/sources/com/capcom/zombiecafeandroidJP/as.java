package com.capcom.zombiecafeandroidJP;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class as implements com.capcom.billing.v {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f94a;

    as(ZombieCafeAndroid zombieCafeAndroid) {
        this.f94a = zombieCafeAndroid;
    }

    @Override // com.capcom.billing.v
    public void a(com.capcom.billing.x xVar) {
        ZombieCafeAndroid.logging("Setup finished.");
        if (xVar.b()) {
            ZombieCafeAndroid.logging("iab Setup successful.");
        } else {
            ZombieCafeAndroid.logging("Problem setting up in-app billing: " + xVar);
        }
    }
}
