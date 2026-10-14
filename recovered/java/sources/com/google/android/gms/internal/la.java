package com.google.android.gms.internal;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class la extends Handler {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ kz f488a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public la(kz kzVar, Looper looper) {
        super(looper);
        this.f488a = kzVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message.what != 1) {
            Log.wtf("GmsClientEvents", "Don't know how to handle this message.");
            return;
        }
        synchronized (this.f488a.c) {
            if (this.f488a.b.n() && this.f488a.b.g() && this.f488a.c.contains(message.obj)) {
                ((com.google.android.gms.common.api.c) message.obj).a(this.f488a.b.l());
            }
        }
    }
}
