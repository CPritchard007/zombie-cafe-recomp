package com.capcom.zombiecafeandroidJP;

import android.content.SharedPreferences;
import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class u extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f116a;
    String b;
    SharedPreferences.Editor c;

    public u(String str, String str2) {
        this.f116a = str;
        this.b = str2;
        Log.d("START SharedPrefsTaskString", this.f116a);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("DO SharedPrefsTaskBool", "Key=" + this.f116a);
        this.c = ZombieCafeAndroid.ad.edit();
        this.c.putString(this.f116a, this.b);
        this.c.commit();
        return null;
    }
}
