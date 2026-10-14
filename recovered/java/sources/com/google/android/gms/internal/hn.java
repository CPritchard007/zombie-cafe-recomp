package com.google.android.gms.internal;

import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class hn {

    /* renamed from: a, reason: collision with root package name */
    private static final ThreadFactory f409a = new hp();
    private static final ThreadPoolExecutor b = new ThreadPoolExecutor(0, 10, 65, TimeUnit.SECONDS, new SynchronousQueue(true), f409a);

    public static int a() {
        return b.getPoolSize();
    }

    public static void a(Runnable runnable) {
        try {
            b.execute(new ho(runnable));
        } catch (RejectedExecutionException e) {
            ig.c("Too many background threads already running. Aborting task.  Current pool size: " + a(), e);
        }
    }
}
