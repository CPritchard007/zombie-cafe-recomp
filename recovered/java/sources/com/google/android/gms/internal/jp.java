package com.google.android.gms.internal;

import android.view.View;
import android.webkit.WebChromeClient;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class jp extends in {
    public jp(ii iiVar) {
        super(iiVar);
    }

    @Override // android.webkit.WebChromeClient
    public void onShowCustomView(View view, int i, WebChromeClient.CustomViewCallback customViewCallback) {
        a(view, i, customViewCallback);
    }
}
