package com.google.android.gms.internal;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class e extends BroadcastReceiver {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f341a;

    e(c cVar) {
        this.f341a = cVar;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        this.f341a.b(false);
    }
}
