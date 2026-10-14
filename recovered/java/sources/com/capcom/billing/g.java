package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class g extends c {
    public final String c;
    public final String d;
    final /* synthetic */ BillingService e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(BillingService billingService, String str, String str2) {
        super(billingService, -1);
        this.e = billingService;
        this.c = str;
        this.d = str2;
    }

    @Override // com.capcom.billing.c
    protected void a(j jVar) {
        ad.a(this.e, this, jVar);
    }

    @Override // com.capcom.billing.c
    protected long d() {
        return h.f47a;
    }
}
