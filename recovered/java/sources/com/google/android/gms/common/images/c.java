package com.google.android.gms.common.images;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.ParcelFileDescriptor;
import android.util.Log;
import com.google.android.gms.internal.kl;
import java.io.IOException;
import java.util.concurrent.CountDownLatch;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class c implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ImageManager f173a;
    private final Uri b;
    private final ParcelFileDescriptor c;

    public c(ImageManager imageManager, Uri uri, ParcelFileDescriptor parcelFileDescriptor) {
        this.f173a = imageManager;
        this.b = uri;
        this.c = parcelFileDescriptor;
    }

    @Override // java.lang.Runnable
    public void run() throws InterruptedException, IOException {
        kl.b("LoadBitmapFromDiskRunnable can't be executed in the main thread");
        boolean z = false;
        Bitmap bitmapDecodeFileDescriptor = null;
        if (this.c != null) {
            try {
                bitmapDecodeFileDescriptor = BitmapFactory.decodeFileDescriptor(this.c.getFileDescriptor());
            } catch (OutOfMemoryError e) {
                Log.e("ImageManager", "OOM while loading bitmap for uri: " + this.b, e);
                z = true;
            }
            try {
                this.c.close();
            } catch (IOException e2) {
                Log.e("ImageManager", "closed failed", e2);
            }
        }
        CountDownLatch countDownLatch = new CountDownLatch(1);
        this.f173a.d.post(new d(this.f173a, this.b, bitmapDecodeFileDescriptor, z, countDownLatch));
        try {
            countDownLatch.await();
        } catch (InterruptedException e3) {
            Log.w("ImageManager", "Latch interrupted while posting " + this.b);
        }
    }
}
