package com.google.android.gms.internal;

import android.content.Context;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class gp implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f388a;
    final /* synthetic */ ds b;
    final /* synthetic */ gs c;
    final /* synthetic */ im d;
    final /* synthetic */ String e;

    gp(Context context, ds dsVar, gs gsVar, im imVar, String str) {
        this.f388a = context;
        this.b = dsVar;
        this.c = gsVar;
        this.d = imVar;
        this.e = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        ii iiVarA = ii.a(this.f388a, new al(), false, false, null, this.b.k);
        iiVarA.setWillNotDraw(true);
        this.c.a(iiVarA);
        ik ikVarF = iiVarA.f();
        ikVarF.a("/invalidRequest", this.c.f391a);
        ikVarF.a("/loadAdURL", this.c.b);
        ikVarF.a("/log", ar.g);
        ikVarF.a(this.d);
        ig.a("Loading the JS library.");
        iiVarA.loadUrl(this.e);
    }
}
