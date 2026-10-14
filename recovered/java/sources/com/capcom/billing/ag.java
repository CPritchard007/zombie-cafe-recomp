package com.capcom.billing;

import android.content.DialogInterface;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ag implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f37a;

    ag(SmurfsBilling smurfsBilling) {
        this.f37a = smurfsBilling;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        Log.v("What Button is This?", "Kill current activity");
        this.f37a.a();
    }
}
