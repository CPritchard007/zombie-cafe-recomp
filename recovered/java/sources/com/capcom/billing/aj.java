package com.capcom.billing;

import android.content.DialogInterface;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class aj implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f40a;

    aj(SmurfsBilling smurfsBilling) {
        this.f40a = smurfsBilling;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f40a.a();
    }
}
