package com.capcom.a;

import android.os.Bundle;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class c extends Thread {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f19a;
    private final /* synthetic */ String b;
    private final /* synthetic */ Bundle c;
    private final /* synthetic */ String d;
    private final /* synthetic */ d e;
    private final /* synthetic */ Object f;

    c(a aVar, String str, Bundle bundle, String str2, d dVar, Object obj) {
        this.f19a = aVar;
        this.b = str;
        this.c = bundle;
        this.d = str2;
        this.e = dVar;
        this.f = obj;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        try {
            this.e.a(this.f19a.f17a.a(this.b, this.c, this.d), this.f);
        } catch (FileNotFoundException e) {
            this.e.a(e, this.f);
        } catch (MalformedURLException e2) {
            this.e.a(e2, this.f);
        } catch (IOException e3) {
            this.e.a(e3, this.f);
        }
    }
}
