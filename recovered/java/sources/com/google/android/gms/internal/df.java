package com.google.android.gms.internal;

import android.view.ViewGroup;
import android.view.ViewParent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class df {

    /* renamed from: a, reason: collision with root package name */
    public final int f329a;
    public final ViewGroup.LayoutParams b;
    public final ViewGroup c;

    public df(ii iiVar) throws dd {
        this.b = iiVar.getLayoutParams();
        ViewParent parent = iiVar.getParent();
        if (!(parent instanceof ViewGroup)) {
            throw new dd("Could not get the parent of the WebView for an overlay.");
        }
        this.c = (ViewGroup) parent;
        this.f329a = this.c.indexOfChild(iiVar);
        this.c.removeView(iiVar);
        iiVar.a(true);
    }
}
