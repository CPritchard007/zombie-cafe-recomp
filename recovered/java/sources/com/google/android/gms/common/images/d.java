package com.google.android.gms.common.images;

import android.graphics.Bitmap;
import android.net.Uri;
import android.os.SystemClock;
import com.google.android.gms.common.images.ImageManager;
import com.google.android.gms.internal.kl;
import java.util.ArrayList;
import java.util.concurrent.CountDownLatch;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class d implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ImageManager f174a;
    private final Uri b;
    private final Bitmap c;
    private final CountDownLatch d;
    private boolean e;

    public d(ImageManager imageManager, Uri uri, Bitmap bitmap, boolean z, CountDownLatch countDownLatch) {
        this.f174a = imageManager;
        this.b = uri;
        this.c = bitmap;
        this.e = z;
        this.d = countDownLatch;
    }

    private void a(ImageManager.ImageReceiver imageReceiver, boolean z) {
        ArrayList arrayList = imageReceiver.c;
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            e eVar = (e) arrayList.get(i);
            if (z) {
                eVar.a(this.f174a.c, this.c, false);
            } else {
                this.f174a.j.put(this.b, Long.valueOf(SystemClock.elapsedRealtime()));
                eVar.a(this.f174a.c, this.f174a.g, false);
            }
            if (!(eVar instanceof g)) {
                this.f174a.h.remove(eVar);
            }
        }
    }

    @Override // java.lang.Runnable
    public void run() {
        kl.a("OnBitmapLoadedRunnable must be executed in the main thread");
        boolean z = this.c != null;
        if (this.f174a.f != null) {
            if (this.e) {
                this.f174a.f.a();
                System.gc();
                this.e = false;
                this.f174a.d.post(this);
                return;
            }
            if (z) {
                this.f174a.f.b(new f(this.b), this.c);
            }
        }
        ImageManager.ImageReceiver imageReceiver = (ImageManager.ImageReceiver) this.f174a.i.remove(this.b);
        if (imageReceiver != null) {
            a(imageReceiver, z);
        }
        this.d.countDown();
        synchronized (ImageManager.f170a) {
            ImageManager.b.remove(this.b);
        }
    }
}
