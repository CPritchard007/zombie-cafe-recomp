package com.capcom.gcm;

import android.content.DialogInterface;
import android.content.Intent;
import com.capcom.zombiecafeandroidJP.ZombieCafeAndroid;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class b implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f63a;

    b(a aVar) {
        this.f63a = aVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        Intent intent = new Intent();
        intent.setClass(this.f63a.getActivity(), ZombieCafeAndroid.class);
        intent.setFlags(268435456);
        this.f63a.startActivity(intent);
    }
}
