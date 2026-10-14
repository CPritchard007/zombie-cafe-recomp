package com.capcom.zombiecafeandroidJP;

import android.os.Message;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ai implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Message f84a;

    ai(Message message) {
        this.f84a = message;
    }

    @Override // java.lang.Runnable
    public void run() {
        ZombieCafeAndroid.aQ.sendMessage(this.f84a);
    }
}
