package com.google.android.gms.common.images;

import android.graphics.drawable.Drawable;
import com.google.android.gms.internal.lo;
import java.lang.ref.WeakReference;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class g extends e {
    private WeakReference d;

    @Override // com.google.android.gms.common.images.e
    protected void a(Drawable drawable, boolean z, boolean z2, boolean z3) {
        a aVar;
        if (z2 || (aVar = (a) this.d.get()) == null) {
            return;
        }
        aVar.a(this.f175a.f176a, drawable, z3);
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof g)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        g gVar = (g) obj;
        a aVar = (a) this.d.get();
        a aVar2 = (a) gVar.d.get();
        return aVar2 != null && aVar != null && lo.a(aVar2, aVar) && lo.a(gVar.f175a, this.f175a);
    }

    public int hashCode() {
        return lo.a(this.f175a);
    }
}
