package com.google.android.gms.internal;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class kr extends Handler {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ kq f470a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public kr(kq kqVar, Looper looper) {
        super(looper);
        this.f470a = kqVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        if (message.what == 1 && !this.f470a.h()) {
            kt ktVar = (kt) message.obj;
            ktVar.a();
            ktVar.c();
            return;
        }
        if (message.what == 3) {
            this.f470a.k.a(new com.google.android.gms.common.a(((Integer) message.obj).intValue(), null));
            return;
        }
        if (message.what == 4) {
            this.f470a.a(1);
            this.f470a.f = null;
            this.f470a.k.a(((Integer) message.obj).intValue());
        } else if (message.what == 2 && !this.f470a.g()) {
            kt ktVar2 = (kt) message.obj;
            ktVar2.a();
            ktVar2.c();
        } else if (message.what == 2 || message.what == 1) {
            ((kt) message.obj).b();
        } else {
            Log.wtf("GmsClient", "Don't know how to handle this message.");
        }
    }
}
