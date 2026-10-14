package com.capcom.billing;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class f extends c {
    final String[] c;
    final /* synthetic */ BillingService d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(BillingService billingService, int i, String[] strArr) {
        super(billingService, i);
        this.d = billingService;
        this.c = strArr;
    }

    @Override // com.capcom.billing.c
    protected void a(RemoteException remoteException) {
    }

    @Override // com.capcom.billing.c
    protected long d() {
        return 0L;
    }
}
