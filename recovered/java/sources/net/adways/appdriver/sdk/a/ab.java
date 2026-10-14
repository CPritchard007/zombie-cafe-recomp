package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ab implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final WeakReference f609a;
    public String b;
    private final Queue c;

    public ab(Context context, List list) {
        this.f609a = new WeakReference(context);
        if (list != null) {
            this.c = new LinkedList(list);
        } else {
            this.c = new LinkedList();
        }
    }

    public final void a() {
        this.c.clear();
    }

    public final void a(ag agVar) {
        this.c.add(agVar);
    }

    public final Queue b() {
        return this.c;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ae aeVar;
        ae aeVar2;
        Log.i("appdriver-log", "Communication Start");
        try {
            aeVar = new ae((Context) this.f609a.get());
            try {
                if (af.a((Context) this.f609a.get()).k()) {
                    while (!this.c.isEmpty()) {
                        ag agVar = (ag) this.c.peek();
                        try {
                            agVar.d = this.b;
                            agVar.a((Context) this.f609a.get(), new u((Context) this.f609a.get(), agVar).a(), this);
                            this.c.poll();
                        } catch (Exception e) {
                            Log.e("appdriver-log", "queue task exception", e);
                            throw new an("queue task exception");
                        }
                    }
                    if (this.b != null) {
                        new Handler(Looper.getMainLooper()).post(new ac(this));
                    }
                }
                Log.i("appdriver-log", "Communication End");
            } catch (an e2) {
                aeVar2 = aeVar;
                if (aeVar2 != null) {
                    aeVar2.a(this.c);
                }
                Log.e("appdriver-log", "Communication aborted");
            } catch (Throwable th) {
                th = th;
                if (aeVar != null) {
                    aeVar.a(this.c);
                }
                Log.e("appdriver-log", "SDK internal error", th);
            }
        } catch (an e3) {
            aeVar2 = null;
        } catch (Throwable th2) {
            th = th2;
            aeVar = null;
        }
    }
}
