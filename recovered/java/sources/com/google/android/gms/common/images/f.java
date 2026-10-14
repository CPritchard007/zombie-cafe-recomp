package com.google.android.gms.common.images;

import android.net.Uri;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class f {

    /* renamed from: a, reason: collision with root package name */
    public final Uri f176a;

    public f(Uri uri) {
        this.f176a = uri;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof f)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        return lo.a(((f) obj).f176a, this.f176a);
    }

    public int hashCode() {
        return lo.a(this.f176a);
    }
}
