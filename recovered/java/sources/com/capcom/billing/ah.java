package com.capcom.billing;

import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ah implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ SmurfsBilling f38a;
    private final /* synthetic */ Uri b;

    ah(SmurfsBilling smurfsBilling, Uri uri) {
        this.f38a = smurfsBilling;
        this.b = uri;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        Log.v("Go To Help Screen", "Kill current activity");
        this.f38a.startActivity(new Intent("android.intent.action.VIEW", this.b));
        this.f38a.a();
    }
}
