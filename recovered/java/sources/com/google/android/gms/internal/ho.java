package com.google.android.gms.internal;

import android.os.Process;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ho implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Runnable f410a;

    ho(Runnable runnable) {
        this.f410a = runnable;
    }

    @Override // java.lang.Runnable
    public void run() throws SecurityException, IllegalArgumentException {
        Process.setThreadPriority(10);
        this.f410a.run();
    }
}
