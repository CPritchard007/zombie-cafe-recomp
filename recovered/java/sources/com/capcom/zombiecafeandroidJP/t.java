package com.capcom.zombiecafeandroidJP;

import android.content.SharedPreferences;
import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class t extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f115a;
    int b;
    SharedPreferences.Editor c;

    public t(String str, int i) {
        this.f115a = str;
        this.b = i;
        Log.d("START SharedPrefsTaskInt", this.f115a);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("DO SharedPrefsTaskInt or Uint", "Key=" + this.f115a);
        this.c = ZombieCafeAndroid.ad.edit();
        this.c.putInt(this.f115a, this.b);
        this.c.commit();
        return null;
    }
}
