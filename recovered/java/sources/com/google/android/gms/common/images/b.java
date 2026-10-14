package com.google.android.gms.common.images;

import android.graphics.Bitmap;
import com.google.android.gms.internal.lt;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class b extends lt {
    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.internal.lt
    public int a(f fVar, Bitmap bitmap) {
        return bitmap.getHeight() * bitmap.getRowBytes();
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.internal.lt
    public void a(boolean z, f fVar, Bitmap bitmap, Bitmap bitmap2) {
        super.a(z, (Object) fVar, (Object) bitmap, (Object) bitmap2);
    }
}
