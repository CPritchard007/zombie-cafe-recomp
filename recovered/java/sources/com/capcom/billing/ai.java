package com.capcom.billing;

import android.content.DialogInterface;
import android.widget.TextView;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ai implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f39a;
    private final /* synthetic */ TextView b;

    ai(SmurfsBilling smurfsBilling, TextView textView) {
        this.f39a = smurfsBilling;
        this.b = textView;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f39a.o = this.b.getText().toString();
    }
}
