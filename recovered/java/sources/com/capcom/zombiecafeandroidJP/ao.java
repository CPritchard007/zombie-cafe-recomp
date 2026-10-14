package com.capcom.zombiecafeandroidJP;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ao implements com.capcom.billing.w {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f90a;

    ao(ZombieCafeAndroid zombieCafeAndroid) {
        this.f90a = zombieCafeAndroid;
    }

    @Override // com.capcom.billing.w
    public void a(com.capcom.billing.x xVar, com.capcom.billing.y yVar) {
        ZombieCafeAndroid.logging("Query inventory finished.");
        if (xVar.c()) {
            ZombieCafeAndroid.logging("Failed to query inventory: " + xVar);
            return;
        }
        ZombieCafeAndroid.logging("Query inventory was successful.");
        int i = 0;
        while (true) {
            try {
                if (i >= ZombieCafeAndroid.bm.length) {
                    break;
                }
                if (ZombieCafeAndroid.bm[i] != null) {
                    ZombieCafeAndroid.logging("sku:" + ZombieCafeAndroid.bm[i].f98a);
                    ZombieCafeAndroid.logging("nameID:" + ZombieCafeAndroid.bm[i].b);
                    String str = ZombieCafeAndroid.bm[i].f98a;
                    if (yVar.b(str)) {
                        this.f90a.U = yVar.a(str);
                        ZombieCafeAndroid.ConfirmToAliveNativePre(str);
                        break;
                    }
                }
                i++;
            } catch (Exception e) {
                ZombieCafeAndroid.logging("onQueryInventoryFinished has errors:" + e.toString());
                return;
            } finally {
                ZombieCafeAndroid.logging("onQueryInventoryFinished end");
            }
        }
        ZombieCafeAndroid.logging("Initial inventory query finished; onQueryInventoryFinished.");
    }
}
