package com.google.android.gms.common.images;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import com.google.android.gms.internal.ki;
import com.google.android.gms.internal.kj;
import com.google.android.gms.internal.kk;
import com.google.android.gms.internal.kl;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class e {

    /* renamed from: a, reason: collision with root package name */
    final f f175a;
    protected int b;
    protected int c;

    private Drawable a(Context context, kj kjVar, int i) throws Resources.NotFoundException {
        Resources resources = context.getResources();
        if (this.c <= 0) {
            return resources.getDrawable(i);
        }
        kk kkVar = new kk(i, this.c);
        Drawable drawable = (Drawable) kjVar.a(kkVar);
        if (drawable != null) {
            return drawable;
        }
        Drawable drawable2 = resources.getDrawable(i);
        if ((this.c & 1) != 0) {
            drawable2 = a(resources, drawable2);
        }
        kjVar.b(kkVar, drawable2);
        return drawable2;
    }

    protected Drawable a(Resources resources, Drawable drawable) {
        return ki.a(resources, drawable);
    }

    void a(Context context, Bitmap bitmap, boolean z) {
        kl.a(bitmap);
        if ((this.c & 1) != 0) {
            bitmap = ki.a(bitmap);
        }
        a(new BitmapDrawable(context.getResources(), bitmap), z, false, true);
    }

    void a(Context context, kj kjVar, boolean z) {
        a(this.b != 0 ? a(context, kjVar, this.b) : null, z, false, false);
    }

    protected abstract void a(Drawable drawable, boolean z, boolean z2, boolean z3);
}
