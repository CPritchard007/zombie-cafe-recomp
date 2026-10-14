package com.capcom.zombiecafeandroidJP;

import android.content.DialogInterface;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class aj implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f85a;

    aj(ZombieCafeAndroid zombieCafeAndroid) {
        this.f85a = zombieCafeAndroid;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        Log.v("TOXIN WARNING", "HAS FINISHED");
        ZombieCafeAndroid.DialogCallBack();
        ZombieCafeAndroid.ClearDialogFlag();
        dialogInterface.dismiss();
    }
}
