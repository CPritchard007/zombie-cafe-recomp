package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class z extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f120a;

    z(ZombieCafeAndroid zombieCafeAndroid) {
        this.f120a = zombieCafeAndroid;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public String doInBackground(Void... voidArr) {
        try {
            if (this.f120a.bj == null) {
                this.f120a.bj = com.google.android.gms.b.a.a(ZombieCafeAndroid.w);
            }
            String strD = com.capcom.gcm.e.d(ZombieCafeAndroid.w);
            Log.i("ZombieCafeAndroid-GCM", "sender ID=" + strD);
            this.f120a.bk = this.f120a.bj.a(strD);
            String str = "Device registered, registration ID=" + this.f120a.bk;
            Log.i("ZombieCafeAndroid-GCM", str);
            this.f120a.sendRegistrationIdToBackend(ZombieCafeAndroid.w, this.f120a.bk);
            return str;
        } catch (IOException e) {
            return "Error :" + e.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(String str) {
    }
}
