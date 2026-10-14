package com.capcom.zombiecafeandroidJP;

import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class au implements View.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f96a;

    au(ZombieCafeAndroid zombieCafeAndroid) {
        this.f96a = zombieCafeAndroid;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        String[] strArr = {((EditText) this.f96a.findViewById(2131427359)).getText().toString(), ((EditText) this.f96a.findViewById(2131427361)).getText().toString(), ((EditText) this.f96a.findViewById(2131427363)).getText().toString(), ((EditText) this.f96a.findViewById(2131427365)).getText().toString()};
        boolean z = false;
        for (int i = 0; i < 4; i++) {
            if (strArr[i] == null || strArr[i].equals("")) {
                z = true;
            }
        }
        if (z) {
            Toast.makeText(this.f96a.getApplicationContext(), "Please enter valid characters.", 1).show();
            return;
        }
        ZombieCafeAndroid.enterMigrationPassword(true, strArr);
        ZombieCafeAndroid.bd.removeView(this.f96a.aw);
        this.f96a.ax = false;
    }
}
