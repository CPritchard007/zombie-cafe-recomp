package com.google.android.gms.internal;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.os.AsyncTask;
import android.view.View;
import android.webkit.WebView;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class fz extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ fy f377a;
    private final WebView b;
    private Bitmap c;

    public fz(fy fyVar, WebView webView) {
        this.f377a = fyVar;
        this.b = webView;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public synchronized Boolean doInBackground(Void... voidArr) {
        boolean zValueOf;
        int width = this.c.getWidth();
        int height = this.c.getHeight();
        if (width == 0 || height == 0) {
            zValueOf = false;
        } else {
            int i = 0;
            for (int i2 = 0; i2 < width; i2 += 10) {
                for (int i3 = 0; i3 < height; i3 += 10) {
                    if (this.c.getPixel(i2, i3) != 0) {
                        i++;
                    }
                }
            }
            zValueOf = Boolean.valueOf(((double) i) / (((double) (width * height)) / 100.0d) > 0.1d);
        }
        return zValueOf;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Boolean bool) {
        fy.c(this.f377a);
        if (bool.booleanValue() || this.f377a.c() || this.f377a.f <= 0) {
            this.f377a.c = bool.booleanValue();
            this.f377a.g.a(this.f377a.f376a);
        } else if (this.f377a.f > 0) {
            if (ig.a(2)) {
                ig.a("Ad not detected, scheduling another run.");
            }
            this.f377a.d.postDelayed(this.f377a, this.f377a.e);
        }
    }

    @Override // android.os.AsyncTask
    protected synchronized void onPreExecute() {
        this.c = Bitmap.createBitmap(this.f377a.i, this.f377a.h, Bitmap.Config.ARGB_8888);
        this.b.setVisibility(0);
        this.b.measure(View.MeasureSpec.makeMeasureSpec(this.f377a.i, 0), View.MeasureSpec.makeMeasureSpec(this.f377a.h, 0));
        this.b.layout(0, 0, this.f377a.i, this.f377a.h);
        this.b.draw(new Canvas(this.c));
        this.b.invalidate();
    }
}
