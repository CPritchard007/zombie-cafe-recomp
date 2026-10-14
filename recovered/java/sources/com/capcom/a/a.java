package com.capcom.a;

import android.content.Context;
import android.os.Bundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class a {

    /* renamed from: a, reason: collision with root package name */
    f f17a;

    public a(f fVar) {
        this.f17a = fVar;
    }

    public void a(Context context, d dVar) {
        a(context, dVar, null);
    }

    public void a(Context context, d dVar, Object obj) {
        new b(this, context, dVar, obj).start();
    }

    public void a(String str, Bundle bundle, String str2, d dVar, Object obj) {
        new c(this, str, bundle, str2, dVar, obj).start();
    }

    public void a(String str, d dVar) {
        a(str, new Bundle(), "GET", dVar, null);
    }
}
