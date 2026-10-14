package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class i implements com.capcom.a.d {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f106a;

    public i(CapcomFacebook capcomFacebook) {
        this.f106a = capcomFacebook;
    }

    @Override // com.capcom.a.d
    public void a(com.capcom.a.i iVar, Object obj) {
        Log.d("GeneralInfo", "FacebookError");
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.d
    public void a(FileNotFoundException fileNotFoundException, Object obj) {
        Log.d("GeneralInfo", "FileNotFound");
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.d
    public void a(IOException iOException, Object obj) {
        Log.d("GeneralInfo", "IOException");
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.d
    public void a(String str, Object obj) {
        Log.d("LogoutRequestListener", "logout");
        ZombieCafeAndroid.am = true;
    }

    @Override // com.capcom.a.d
    public void a(MalformedURLException malformedURLException, Object obj) {
        Log.d("GeneralInfo", "Malformed URL");
        ZombieCafeAndroid.am = true;
    }
}
