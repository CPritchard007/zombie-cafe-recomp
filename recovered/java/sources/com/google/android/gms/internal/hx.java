package com.google.android.gms.internal;

import android.content.DialogInterface;
import android.content.Intent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class hx implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f419a;
    final /* synthetic */ hw b;

    hx(hw hwVar, String str) {
        this.b = hwVar;
        this.f419a = str;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.b.f418a.startActivity(Intent.createChooser(new Intent("android.intent.action.SEND").setType("text/plain").putExtra("android.intent.extra.TEXT", this.f419a), "Share via"));
    }
}
