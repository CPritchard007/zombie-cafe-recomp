package net.adways.appdriver.sdk.a;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class s implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ r f626a;

    s(r rVar) {
        this.f626a = rVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        new u(this.f626a.f625a, new l(this.f626a.b)).a();
    }
}
