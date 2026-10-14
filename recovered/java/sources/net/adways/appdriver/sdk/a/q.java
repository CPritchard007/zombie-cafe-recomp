package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.webkit.WebView;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class q extends WebView {
    public q(Context context) {
        super(context);
        setScrollBarStyle(33554432);
        getSettings().setBuiltInZoomControls(true);
        getSettings().setJavaScriptEnabled(true);
        getSettings().setUseWideViewPort(true);
        getSettings().setLoadWithOverviewMode(true);
        getSettings().setSupportZoom(false);
        getSettings().setAllowFileAccess(false);
    }
}
