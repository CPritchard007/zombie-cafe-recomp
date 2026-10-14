package com.google.android.gms.internal;

import android.content.DialogInterface;
import android.webkit.JsResult;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class io implements DialogInterface.OnCancelListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ JsResult f433a;

    io(JsResult jsResult) {
        this.f433a = jsResult;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public void onCancel(DialogInterface dialogInterface) {
        this.f433a.cancel();
    }
}
