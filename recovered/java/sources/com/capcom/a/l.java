package com.capcom.a;

import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class l implements View.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ j f26a;

    l(j jVar) {
        this.f26a = jVar;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f26a.e.a();
        this.f26a.dismiss();
    }
}
