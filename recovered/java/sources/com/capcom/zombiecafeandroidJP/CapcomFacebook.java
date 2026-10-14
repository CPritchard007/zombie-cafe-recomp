package com.capcom.zombiecafeandroidJP;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.os.Environment;
import android.util.Log;
import java.io.ByteArrayOutputStream;
import java.io.File;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CapcomFacebook {
    private static final String[] g = {"publish_stream"};
    private static final String[] h = {""};

    /* renamed from: a, reason: collision with root package name */
    public String f67a;
    public String b;
    public String c;
    public String d;
    public String e;
    public String f;
    private com.capcom.a.f i;
    private String j;
    private com.capcom.a.a k;
    private Activity l = (Activity) ZombieCafeAndroid.w;
    private int m;
    private String n;
    private int o;

    public CapcomFacebook(com.capcom.a.f fVar) {
        this.i = fVar;
        this.k = new com.capcom.a.a(this.i);
    }

    public static native void onFacebook(boolean z);

    public static native void sendFriendInfo(int i, int i2, String str, String str2, String str3, String str4, String str5);

    public static native void setFBInfo(String str, String str2, String str3, String str4);

    public void a() {
        Log.d("Clear Credentials", "token=null");
        this.k.a(this.l.getApplicationContext(), new i(this));
        this.i.a((String) null);
        this.i.a(0L);
        a(this.i);
        ZombieCafeAndroid.af = false;
        onFacebook(false);
    }

    public void a(int i, String str, String str2) {
        Log.v("Execute Facebook", "Inside CapcomFaceBook");
        this.m = i;
        switch (this.m) {
            case 0:
                Log.d("CapcomFaceBook", "Gonna Post On Wall");
                String stringExtra = this.l.getIntent().getStringExtra("facebookMessage");
                if (stringExtra != null) {
                    str = stringExtra;
                }
                this.j = str;
                if (!this.i.a()) {
                    b();
                    break;
                } else {
                    b(this.j);
                    break;
                }
            case 1:
                Log.d("CapcomFaceBook", "Gonna Upload a Picture");
                String stringExtra2 = this.l.getIntent().getStringExtra("facebookMessage");
                if (stringExtra2 != null) {
                    str = stringExtra2;
                }
                this.j = str;
                if (!this.i.a()) {
                    b();
                    break;
                } else {
                    a(this.j);
                    break;
                }
            case 2:
                Log.d("CapcomFaceBook", "log in if session is invalid");
                b();
                break;
            case 3:
                Log.d("CapcomFaceBook", "Getting List of Friends?");
                if (!this.i.a()) {
                    b();
                    break;
                } else {
                    Log.d("CapcomFaceBook - Logged On", "Get Zombie Friends()");
                    c();
                    break;
                }
            case 4:
                this.e = str;
                this.f = str2;
                Log.d("CapcomFaceBook, post story", this.e);
                if (!this.i.a()) {
                    b();
                    break;
                } else {
                    d();
                    break;
                }
            case 5:
                Log.d("CapcomFaceBook", "Get Name, Id of User");
                if (this.i.a()) {
                    e();
                    break;
                }
                break;
            case 6:
                Log.d("CapcomFaceBook change account", "log out");
                a();
                break;
            case 7:
                Log.d("CapcomFaceBook isLoggedin", "return isSessionValid()");
                ZombieCafeAndroid.af = this.i.a();
                break;
            case 8:
                Log.d("INIT FACEBOOK USER DATA", "IF INVALID");
                b(this.i);
                if (!this.i.a()) {
                    this.k.a(this.l.getApplicationContext(), (com.capcom.a.d) null);
                    this.i.a((String) null);
                    this.i.a(0L);
                    a(this.i);
                    ZombieCafeAndroid.af = false;
                    break;
                } else {
                    a(this.i);
                    ZombieCafeAndroid.af = true;
                    e();
                    break;
                }
        }
    }

    public void a(String str) {
        Log.v("UPLOAD PICTURE", str);
        new Bundle().putString("method", "photos.upload");
        String absolutePath = new File(Environment.getExternalStorageDirectory(), str).getAbsolutePath();
        Log.d("UploadPicture=" + str, absolutePath);
        Bitmap bitmapDecodeFile = BitmapFactory.decodeFile(absolutePath);
        if (bitmapDecodeFile == null) {
            Log.d("bitmap decoder ERROR,could not find file?", absolutePath);
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putString("method", "photos.upload");
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        bitmapDecodeFile.compress(Bitmap.CompressFormat.PNG, 90, byteArrayOutputStream);
        bundle.putByteArray("picture", byteArrayOutputStream.toByteArray());
        bundle.putString("caption", "Check out my Zombie Cafe!");
        new com.capcom.a.a(this.i).a(null, bundle, "POST", new j(this), null);
        Log.v("FACEBOOK UPLOAD", "SEND THE PICTURE!!!");
    }

    public boolean a(com.capcom.a.f fVar) {
        CC_Android cC_Android = ZombieCafeAndroid.ac;
        CC_Android.fromNative_CCOptionsSetString("access_token", fVar.b());
        Log.i("FACEBOOK EXPIRES", new StringBuilder().append(fVar.c()).toString());
        CC_Android cC_Android2 = ZombieCafeAndroid.ac;
        CC_Android.fromNative_CCOptionsSetUInt("expires_in", 0L);
        return true;
    }

    public void b() {
        Log.d("Capcom Login", "facebook.authorize");
        this.i.a(this.l, g, -1, new h(this));
    }

    public void b(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("message", str);
        this.i.a(this.l, "stream.publish", bundle, new k(this));
    }

    public boolean b(com.capcom.a.f fVar) {
        CC_Android cC_Android = ZombieCafeAndroid.ac;
        fVar.a(CC_Android.fromNative_CCOptionsGetStringJava("access_token", null));
        CC_Android cC_Android2 = ZombieCafeAndroid.ac;
        fVar.a(CC_Android.fromNative_CCOptionsGetUInt("expires_in", 0L));
        return fVar.a();
    }

    public void c() {
        Bundle bundle = new Bundle();
        bundle.putString("method", "fql.query");
        bundle.putString("query", "SELECT uid, name, pic_square, first_name, last_name FROM user WHERE uid IN (SELECT uid2 FROM friend WHERE uid1=me())");
        new com.capcom.a.a(this.i).a(null, bundle, "POST", new f(this), null);
        this.o = 0;
    }

    public void d() {
        Bundle bundle = new Bundle();
        Log.d("Post Story", "On Facebook Wall");
        Log.d("GETTING mStory", this.e);
        Log.d("GETTING mIconPath", "Use Hard Coded Path");
        bundle.putString("picture", "http://zombiecafe.capcomcanada.com/zca/FBIcon.png");
        bundle.putString("link", "https://market.android.com/details?id=com.capcom.zombiecafeandroidJP");
        bundle.putString("caption", this.e);
        this.i.a(this.l, "feed", bundle, new k(this));
    }

    public void e() {
        this.k.a("me", new g(this));
    }
}
