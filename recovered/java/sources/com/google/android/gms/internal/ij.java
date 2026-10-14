package com.google.android.gms.internal;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.MutableContextWrapper;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ij extends MutableContextWrapper {

    /* renamed from: a, reason: collision with root package name */
    private Activity f429a;
    private Context b;

    public ij(Context context) {
        super(context);
        setBaseContext(context);
    }

    public Context a() {
        return this.f429a;
    }

    @Override // android.content.MutableContextWrapper
    public void setBaseContext(Context context) {
        this.b = context.getApplicationContext();
        this.f429a = context instanceof Activity ? (Activity) context : null;
        super.setBaseContext(this.b);
    }

    @Override // android.content.ContextWrapper, android.content.Context
    public void startActivity(Intent intent) {
        if (this.f429a != null) {
            this.f429a.startActivity(intent);
        } else {
            intent.setFlags(268435456);
            this.b.startActivity(intent);
        }
    }
}
