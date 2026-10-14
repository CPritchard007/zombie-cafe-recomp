package com.capcom.zombiecafeandroidJP;

import android.content.SharedPreferences;
import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class s extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f114a;
    boolean b;
    SharedPreferences.Editor c;

    public s(String str, boolean z) {
        this.f114a = str;
        this.b = z;
        Log.d("START SharedPrefsTaskBool", this.f114a);
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("DO SharedPrefsTaskBool", "Key=" + this.f114a);
        this.c = ZombieCafeAndroid.ad.edit();
        this.c.putBoolean(this.f114a, this.b);
        this.c.commit();
        return null;
    }
}
