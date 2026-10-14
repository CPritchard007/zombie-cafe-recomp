package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class il implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ db f431a;
    final /* synthetic */ ik b;

    il(ik ikVar, db dbVar) {
        this.b = ikVar;
        this.f431a = dbVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.f431a.k();
    }
}
