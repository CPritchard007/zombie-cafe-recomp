package com.google.android.gms.b;

import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class b extends Handler {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f155a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    b(a aVar, Looper looper) {
        super(looper);
        this.f155a = aVar;
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) {
        this.f155a.b.add((Intent) message.obj);
    }
}
