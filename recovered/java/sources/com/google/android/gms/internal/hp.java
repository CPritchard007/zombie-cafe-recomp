package com.google.android.gms.internal;

import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class hp implements ThreadFactory {

    /* renamed from: a, reason: collision with root package name */
    private final AtomicInteger f411a = new AtomicInteger(1);

    hp() {
    }

    @Override // java.util.concurrent.ThreadFactory
    public Thread newThread(Runnable runnable) {
        return new Thread(runnable, "AdWorker #" + this.f411a.getAndIncrement());
    }
}
