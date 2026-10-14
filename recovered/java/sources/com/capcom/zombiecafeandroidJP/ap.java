package com.capcom.zombiecafeandroidJP;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ap implements com.capcom.billing.u {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f91a;

    ap(ZombieCafeAndroid zombieCafeAndroid) {
        this.f91a = zombieCafeAndroid;
    }

    @Override // com.capcom.billing.u
    public void a(com.capcom.billing.x xVar, com.capcom.billing.z zVar) {
        ZombieCafeAndroid.logging("Purchase finished: " + xVar + ", purchase: " + zVar);
        if (xVar.c()) {
            ZombieCafeAndroid.logging("Error purchasing: " + xVar);
            ZombieCafeAndroid.ConfirmToAliveNative(-1, 0, false);
            CC_Android.fromNative_ProgressBar(0);
            ZombieCafeAndroid.setPurchasingFlag(false);
            return;
        }
        ZombieCafeAndroid.logging("Purchase successful.");
        this.f91a.U = zVar;
        ZombieCafeAndroid.ConfirmToAliveNativePre(zVar.b());
        CC_Android.fromNative_ProgressBar(0);
    }
}
