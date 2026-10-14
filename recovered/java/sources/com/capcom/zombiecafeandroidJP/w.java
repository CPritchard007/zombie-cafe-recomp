package com.capcom.zombiecafeandroidJP;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PointF;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class w {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ TrueTypeFont f117a;
    private final char b;
    private final PointF c;

    public w(TrueTypeFont trueTypeFont, char c, float f, float f2) {
        this.f117a = trueTypeFont;
        this.b = c;
        this.c = new PointF(f, f2);
    }

    public float a() {
        return this.c.x;
    }

    public void a(Canvas canvas, Paint paint, float f, float f2) {
        canvas.drawText(new char[]{this.b}, 0, 1, this.c.x + f, this.c.y + f2, paint);
    }

    public float b() {
        return this.f117a.getCharWidth(this.b);
    }
}
