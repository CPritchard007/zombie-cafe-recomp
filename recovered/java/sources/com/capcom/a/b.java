package com.capcom.a;

import android.content.Context;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class b extends Thread {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f18a;
    private final /* synthetic */ Context b;
    private final /* synthetic */ d c;
    private final /* synthetic */ Object d;

    b(a aVar, Context context, d dVar, Object obj) {
        this.f18a = aVar;
        this.b = context;
        this.c = dVar;
        this.d = obj;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            String strA = this.f18a.f17a.a(this.b);
            if (this.c != null) {
                if (strA.length() == 0 || strA.equals("false")) {
                    this.c.a(new i("auth.expireSession failed"), this.d);
                } else {
                    this.c.a(strA, this.d);
                }
            }
        } catch (FileNotFoundException e) {
            this.c.a(e, this.d);
        } catch (MalformedURLException e2) {
            this.c.a(e2, this.d);
        } catch (IOException e3) {
            this.c.a(e3, this.d);
        }
    }
}
