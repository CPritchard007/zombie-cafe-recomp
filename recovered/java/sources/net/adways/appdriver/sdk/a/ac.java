package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ac implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ ab f610a;

    ac(ab abVar) {
        this.f610a = abVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(this.f610a.b));
        intent.setFlags(268435456);
        if (this.f610a.f609a.get() != null) {
            v.a("show browser:" + this.f610a.b);
            ((Context) this.f610a.f609a.get()).startActivity(intent);
        }
    }
}
