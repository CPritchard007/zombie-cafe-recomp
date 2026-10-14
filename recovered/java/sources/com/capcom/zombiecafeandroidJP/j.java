package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class j implements com.capcom.a.d {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f107a;

    j(CapcomFacebook capcomFacebook) {
        this.f107a = capcomFacebook;
    }

    @Override // com.capcom.a.d
    public void a(com.capcom.a.i iVar, Object obj) {
        Log.d("UploadImage Listener ERROR", "Facebook");
    }

    @Override // com.capcom.a.d
    public void a(FileNotFoundException fileNotFoundException, Object obj) {
        Log.d("UploadImage Listener ERROR", "FileNotFound");
    }

    @Override // com.capcom.a.d
    public void a(IOException iOException, Object obj) {
        Log.d("UploadImage Listener ERROR", "IoException");
    }

    @Override // com.capcom.a.d
    public void a(String str, Object obj) {
        Log.d("UploadImage Listener-OnComplete", str);
    }

    @Override // com.capcom.a.d
    public void a(MalformedURLException malformedURLException, Object obj) {
        Log.d("UploadImage Listener ERROR", "Malformedurl");
    }
}
