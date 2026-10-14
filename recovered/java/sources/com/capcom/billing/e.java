package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class e extends c {
    final String[] c;
    final /* synthetic */ BillingService d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(BillingService billingService, int i, String[] strArr) {
        super(billingService, i);
        this.d = billingService;
        this.c = strArr;
    }

    @Override // com.capcom.billing.c
    protected long d() {
        return h.f47a;
    }
}
