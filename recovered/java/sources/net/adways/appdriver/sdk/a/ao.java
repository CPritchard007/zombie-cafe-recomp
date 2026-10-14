package net.adways.appdriver.sdk.a;

import android.content.Context;
import java.lang.ref.WeakReference;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ao {

    /* renamed from: a, reason: collision with root package name */
    public final WeakReference f618a;

    public ao(Context context) {
        this.f618a = new WeakReference(context);
    }

    public ab a(Context context) {
        return new ab((Context) this.f618a.get(), new ae(context).a());
    }
}
