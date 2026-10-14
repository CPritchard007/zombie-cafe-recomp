package com.capcom.zombiecafeandroidJP;

import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class av implements View.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f97a;

    av(ZombieCafeAndroid zombieCafeAndroid) {
        this.f97a = zombieCafeAndroid;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        ZombieCafeAndroid.bd.removeView(this.f97a.aw);
        ZombieCafeAndroid.enterMigrationPassword(false, new String[4]);
        this.f97a.ax = false;
    }
}
