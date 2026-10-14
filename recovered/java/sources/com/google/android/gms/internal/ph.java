package com.google.android.gms.internal;

import android.content.pm.PackageManager;
import java.lang.ref.WeakReference;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ph implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ oz f525a;
    final /* synthetic */ pg b;
    private final WeakReference c;

    ph(pg pgVar, oz ozVar) {
        this.b = pgVar;
        this.f525a = ozVar;
        this.c = new WeakReference(this.f525a);
    }

    @Override // java.lang.Runnable
    public void run() throws PackageManager.NameNotFoundException {
        this.b.d = false;
        oz ozVar = (oz) this.c.get();
        if (ozVar != null) {
            ozVar.b(this.b.c);
        }
    }
}
