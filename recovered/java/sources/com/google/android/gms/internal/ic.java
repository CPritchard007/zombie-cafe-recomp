package com.google.android.gms.internal;

import android.content.Context;
import android.webkit.WebSettings;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ic {
    public static String a(Context context) {
        return WebSettings.getDefaultUserAgent(context);
    }

    public static void a(Context context, WebSettings webSettings) {
        ia.a(context, webSettings);
        webSettings.setMediaPlaybackRequiresUserGesture(false);
    }
}
