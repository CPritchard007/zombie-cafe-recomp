package com.capcom.a;

import android.os.Bundle;
import android.webkit.CookieSyncManager;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class g implements h {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f22a;

    g(f fVar) {
        this.f22a = fVar;
    }

    @Override // com.capcom.a.h
    public void a() {
        n.a("Facebook-authorize", "Login canceled");
        this.f22a.k.a();
    }

    @Override // com.capcom.a.h
    public void a(Bundle bundle) {
        CookieSyncManager.getInstance().sync();
        this.f22a.a(bundle.getString("access_token"));
        this.f22a.b(bundle.getString("expires_in"));
        if (!this.f22a.a()) {
            this.f22a.k.a(new i("Failed to receive access token."));
        } else {
            n.a("Facebook-authorize", "Login Success! access_token=" + this.f22a.b() + " expires=" + this.f22a.c());
            this.f22a.k.a(bundle);
        }
    }

    @Override // com.capcom.a.h
    public void a(e eVar) {
        n.a("Facebook-authorize", "Login failed: " + eVar);
        this.f22a.k.a(eVar);
    }

    @Override // com.capcom.a.h
    public void a(i iVar) {
        n.a("Facebook-authorize", "Login failed: " + iVar);
        this.f22a.k.a(iVar);
    }
}
