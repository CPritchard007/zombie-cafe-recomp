package com.capcom.zombiecafeandroidJP;

import android.os.Bundle;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class k implements com.capcom.a.h {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f108a;

    k(CapcomFacebook capcomFacebook) {
        this.f108a = capcomFacebook;
    }

    @Override // com.capcom.a.h
    public void a() {
        Log.d("WallPost Listener Cancel", "hmmmm...");
    }

    @Override // com.capcom.a.h
    public void a(Bundle bundle) {
    }

    @Override // com.capcom.a.h
    public void a(com.capcom.a.e eVar) {
        Log.d("WallPost Listener Error", "Dialog");
    }

    @Override // com.capcom.a.h
    public void a(com.capcom.a.i iVar) {
        Log.d("WallPost Listener Error", "FaceBook");
    }
}
