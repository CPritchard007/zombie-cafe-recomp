package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class r extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f113a;
    String b;
    String c;
    int d;

    public r(String str, String str2, int i) {
        this.b = "";
        this.c = "";
        this.f113a = str;
        this.b = str2;
        this.c = "";
        this.d = i;
        Log.d("INSIDE NEWREQUESTTASK", this.b);
        Log.d("HIGUCHI", "NewRequestTask 1");
    }

    public r(String str, String str2, String str3, int i) {
        this.b = "";
        this.c = "";
        this.f113a = str;
        this.b = str2;
        this.c = str3;
        this.d = i;
        Log.d("INSIDE NEWREQUESTTASK", this.f113a);
        Log.d("INSIDE NEWREQUESTTASK", this.b);
        Log.d("INSIDE NEWREQUESTTASK", this.c);
        Log.d("HIGUCHI", "NewRequestTask 1");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("HIGUCHI", "NewRequestTask 2");
        Log.d("NEWREQUEST TASK", "QUERY=" + this.b);
        try {
            Log.d("HIGUCHI", "NewRequestTask 2 1");
            if (ZombieCafeAndroid.t != null) {
                ZombieCafeAndroid.t.a(this.f113a, this.b, this.c, this.d);
            }
        } catch (Exception e) {
            Log.d("HIGUCHI", "NewRequestTask Exeption!!!!!!!!!!!!!!!!! " + e);
        }
        Log.d("HIGUCHI", "NewRequestTask 3 return");
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Void r1) {
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
    }
}
