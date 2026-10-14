package com.google.android.gms.internal;

import android.content.DialogInterface;
import android.webkit.JsResult;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class iq implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ JsResult f435a;

    iq(JsResult jsResult) {
        this.f435a = jsResult;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f435a.confirm();
    }
}
