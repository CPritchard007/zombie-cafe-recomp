package net.adways.appdriver.sdk.a;

import android.content.Intent;
import android.util.Log;
import net.adways.appdriver.sdk.ADARewardActivity;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class z implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ af f633a;
    private /* synthetic */ y b;

    z(y yVar, af afVar) {
        this.b = yVar;
        this.f633a = afVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (!this.f633a.k()) {
            Log.i("appdriver-log", "AppDriver SDK reward canceled as server unavailable");
            return;
        }
        Intent intent = new Intent(this.b.f632a, (Class<?>) ADARewardActivity.class);
        intent.putExtras(this.b.b);
        this.b.f632a.startActivityForResult(intent, net.adways.appdriver.sdk.a.f607a);
        Log.i("appdriver-log", "AppDriver SDK reward end");
    }
}
