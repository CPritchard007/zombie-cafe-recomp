package com.capcom.billing;

import android.content.DialogInterface;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ak implements DialogInterface.OnCancelListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f41a;

    ak(SmurfsBilling smurfsBilling) {
        this.f41a = smurfsBilling;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public void onCancel(DialogInterface dialogInterface) {
        if (dialogInterface != null) {
            dialogInterface.cancel();
            this.f41a.a();
        }
    }
}
