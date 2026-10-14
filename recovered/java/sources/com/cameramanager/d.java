package com.cameramanager;

import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class d implements View.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cameramanager f15a;

    d(Cameramanager cameramanager) {
        this.f15a = cameramanager;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f15a.j.e.takePicture(this.f15a.g, this.f15a.h, this.f15a.i);
    }
}
