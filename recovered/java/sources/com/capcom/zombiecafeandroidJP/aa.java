package com.capcom.zombiecafeandroidJP;

import android.content.DialogInterface;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class aa implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f76a;

    aa(ZombieCafeAndroid zombieCafeAndroid) {
        this.f76a = zombieCafeAndroid;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f76a.forceGameExit(true);
    }
}
