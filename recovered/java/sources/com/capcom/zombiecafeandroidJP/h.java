package com.capcom.zombiecafeandroidJP;

import android.os.Bundle;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class h implements com.capcom.a.h {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f105a;

    h(CapcomFacebook capcomFacebook) {
        this.f105a = capcomFacebook;
    }

    @Override // com.capcom.a.h
    public void a() {
        Log.d("Authentication with Facebook cancelled!", "bastards!");
        CapcomFacebook.onFacebook(false);
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.h
    public void a(Bundle bundle) {
        Log.d("loginlistener", "Entering...");
        this.f105a.a(this.f105a.i);
        CapcomFacebook.onFacebook(true);
        ZombieCafeAndroid.af = true;
        ZombieCafeAndroid.am = true;
        switch (this.f105a.m) {
            case 0:
                Log.d("loginlistener", "post on wall");
                this.f105a.b(this.f105a.n);
                this.f105a.e();
                break;
            case 1:
                Log.d("loginlistener", "upload picture");
                this.f105a.a(this.f105a.n);
                this.f105a.e();
                break;
            case 2:
                Log.d("loginlistener", "login and fetch user info");
                this.f105a.e();
                break;
            case 3:
                Log.d("loginlistener", "get list of friends");
                this.f105a.c();
                this.f105a.e();
                break;
            case 4:
                Log.d("loginlistener", "post story/pic to the wall");
                this.f105a.d();
                this.f105a.e();
                break;
            case 5:
                Log.d("loginlistener", "Get The User Info");
                break;
            case 8:
                this.f105a.e();
                break;
        }
    }

    @Override // com.capcom.a.h
    public void a(com.capcom.a.e eVar) {
        Log.d("Authentication with Facebook failed!", eVar.getLocalizedMessage());
        CapcomFacebook.onFacebook(false);
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.h
    public void a(com.capcom.a.i iVar) {
        Log.d("Authentication with Facebook failed!", iVar.a());
        CapcomFacebook.onFacebook(false);
        ZombieCafeAndroid.am = true;
    }
}
