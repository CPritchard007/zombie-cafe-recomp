package com.capcom.zombiecafeandroidJP;

import android.R;
import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.Resources;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ac extends Handler {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f78a;

    ac(ZombieCafeAndroid zombieCafeAndroid) {
        this.f78a = zombieCafeAndroid;
    }

    private void a() {
        if (this.f78a.ar != null) {
            this.f78a.bi.removeView(this.f78a.ar);
            this.f78a.ar = null;
        }
        if (this.f78a.as != null) {
            this.f78a.bi.removeView(this.f78a.as);
            this.f78a.as = null;
        }
        if (this.f78a.au != null) {
            this.f78a.at.removeView(this.f78a.au);
            this.f78a.au = null;
            this.f78a.bi.removeView(this.f78a.at);
            this.f78a.at = null;
        }
        if (this.f78a.bi != null) {
            ((ViewGroup) this.f78a.bi.getParent()).removeView(this.f78a.bi);
            this.f78a.bi = null;
        }
    }

    private void b() {
        if (this.f78a.D != null) {
            this.f78a.ba.removeView(this.f78a.D);
            this.f78a.D = null;
        }
        if (ZombieCafeAndroid.C != null) {
            this.f78a.aZ.removeView(ZombieCafeAndroid.C);
            ZombieCafeAndroid.C = null;
            this.f78a.ba.removeView(this.f78a.aZ);
            this.f78a.aZ = null;
        }
        if (this.f78a.ba != null) {
            ((ViewGroup) this.f78a.ba.getParent()).removeView(this.f78a.ba);
            this.f78a.ba = null;
        }
    }

    private void c() {
        if (this.f78a.F != null) {
            this.f78a.bc.removeView(this.f78a.F);
            this.f78a.F = null;
        }
        if (this.f78a.G != null) {
            this.f78a.bc.removeView(this.f78a.G);
            this.f78a.G = null;
        }
        if (this.f78a.H != null) {
            this.f78a.bc.removeView(this.f78a.H);
            this.f78a.H = null;
        }
        if (ZombieCafeAndroid.E != null) {
            this.f78a.bb.removeView(ZombieCafeAndroid.E);
            ZombieCafeAndroid.E = null;
            this.f78a.bc.removeView(this.f78a.bb);
            this.f78a.bb = null;
        }
        if (this.f78a.bc != null) {
            ((ViewGroup) this.f78a.bc.getParent()).removeView(this.f78a.bc);
            this.f78a.bc = null;
        }
    }

    @Override // android.os.Handler
    public void handleMessage(Message message) throws Resources.NotFoundException, IOException {
        float f;
        float f2;
        Bundle data = message.getData();
        switch (message.what) {
            case 12345:
            case 12363:
            case 12365:
            case 12366:
            case 12367:
            case 12368:
            case 12369:
            case 12370:
            case 12372:
            case 13008:
            case 13009:
            case 55555:
                break;
            case 12346:
                Toast.makeText(this.f78a, message.getData().getString("text"), 1).show();
                break;
            case 12348:
                Bundle data2 = message.getData();
                new s(data2.getString("key"), data2.getBoolean("data")).execute(new String[0]);
                break;
            case 12349:
                Bundle data3 = message.getData();
                new t(data3.getString("key"), data3.getInt("data")).execute(new String[0]);
                break;
            case 12350:
                Bundle data4 = message.getData();
                new t(data4.getString("key"), data4.getInt("data")).execute(new String[0]);
                break;
            case 12351:
                Bundle data5 = message.getData();
                new u(data5.getString("key"), data5.getString("data")).execute(new String[0]);
                break;
            case 12352:
                SharedPreferences.Editor editorEdit = ZombieCafeAndroid.ad.edit();
                Bundle data6 = message.getData();
                editorEdit.putLong(data6.getString("key"), data6.getLong("data"));
                editorEdit.commit();
                break;
            case 12353:
                if (ZombieCafeAndroid.aX != null) {
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams((int) (ZombieCafeAndroid.o * 0.75f), (int) (ZombieCafeAndroid.p * 0.75f));
                    layoutParams.setMargins((int) (ZombieCafeAndroid.o * 0.15f), (int) (ZombieCafeAndroid.p * 0.22f), (int) (ZombieCafeAndroid.o * 0.05f), (int) (ZombieCafeAndroid.p * 0.32f));
                    ZombieCafeAndroid.aX.setLayoutParams(layoutParams);
                    ZombieCafeAndroid.aX.setBackgroundResource(0);
                    ZombieCafeAndroid.aX.setBackgroundColor(R.color.transparent);
                    ZombieCafeAndroid.aX.setHorizontalScrollBarEnabled(false);
                    ZombieCafeAndroid.aX.getSettings().setJavaScriptEnabled(true);
                    ZombieCafeAndroid.aX.setVisibility(0);
                    break;
                }
                break;
            case 12354:
                if (ZombieCafeAndroid.aX != null) {
                    ZombieCafeAndroid.aX.setVisibility(8);
                    ZombieCafeAndroid.aX.scrollTo(0, 0);
                    break;
                }
                break;
            case 12355:
                if (ZombieCafeAndroid.aX != null) {
                    ZombieCafeAndroid.aX.loadUrl("file:///android_asset/" + message.getData().getString("url"));
                    break;
                }
                break;
            case 12356:
                if (ZombieCafeAndroid.b) {
                    Intent intent = new Intent();
                    intent.setAction("android.intent.action.VIEW");
                    intent.addCategory("android.intent.category.BROWSABLE");
                    intent.setData(Uri.parse(message.getData().getString("url")));
                    this.f78a.startActivity(intent);
                    break;
                }
                break;
            case 12357:
                if (ZombieCafeAndroid.f75a && ZombieCafeAndroid.b) {
                    ZombieCafeAndroid.t.a(message.getData().getString("url"), 2, null);
                    break;
                }
                break;
            case 12358:
                Bundle data7 = message.getData();
                this.f78a.ShowAlertBox(data7.getInt("type"), data7.getString("title"), data7.getString("message"), data7.getString("button1"), data7.getString("button2"));
                break;
            case 12359:
                Bundle data8 = message.getData();
                this.f78a.ShowAlertBox(data8.getInt("type"), data8.getString("title"), data8.getString("message"), data8.getString("button1"), data8.getString("button2"));
                break;
            case 12360:
                if (ZombieCafeAndroid.f75a && ZombieCafeAndroid.b) {
                    Bundle data9 = message.getData();
                    new r(data9.getString("url"), data9.getString(""), data9.getInt("callback")).execute(new String[0]);
                    break;
                }
                break;
            case 12361:
                ZombieCafeAndroid.t.a(ZombieCafeAndroid.w);
                if (!ZombieCafeAndroid.f75a || !ZombieCafeAndroid.b) {
                    Log.d("NOT CONNECTED", "TO THE INTERNET/SERVER");
                    break;
                } else {
                    Bundle data10 = message.getData();
                    if (data10.getInt("action") != 2) {
                        ZombieCafeAndroid.V.a(data10.getInt("action"), data10.getString("option"), data10.getString("path"));
                        break;
                    } else if (!ZombieCafeAndroid.am) {
                        Log.v("ENTERFACEBOOK", "DENIED DUE TO MULTIPLE BUTTON HITS");
                        break;
                    } else {
                        ZombieCafeAndroid.am = false;
                        ZombieCafeAndroid.V.a(data10.getInt("action"), data10.getString("option"), data10.getString("path"));
                    }
                }
                break;
            case 12362:
                if (ZombieCafeAndroid.f75a && ZombieCafeAndroid.b) {
                    Bundle data11 = message.getData();
                    new r(data11.getString("url"), data11.getString("query"), data11.getInt("callback")).execute(new String[0]);
                    break;
                }
                break;
            case 12364:
                Bundle data12 = message.getData();
                new MouseTask(data12.getFloat("x"), data12.getFloat("y")).execute(new String[0]);
                break;
            case 12371:
                Intent intent2 = new Intent("android.intent.action.SEND");
                intent2.setType("text/plain");
                intent2.putExtra("android.intent.extra.EMAIL", new String[]{"androidsupport@capcomcanada.com"});
                intent2.putExtra("android.intent.extra.SUBJECT", "SmurfsVillage Android Support");
                intent2.putExtra("android.intent.extra.TEXT", "Device=" + ZombieCafeAndroid.k + " AndroidId=" + ZombieCafeAndroid.l + "\n\nDESCRIBE YOUR ISSUE HERE:\n");
                try {
                    this.f78a.startActivity(Intent.createChooser(intent2, "Send mail..."));
                } catch (ActivityNotFoundException e) {
                    Log.d("No Email", "Now What?");
                }
                this.f78a.forceGameExit(true);
                break;
            case 12373:
                Log.d("BuySmurfBerries", "Process Message from native");
                break;
            case 12374:
                ZombieCafeAndroid.ProgressBar(message.getData().getInt("data"));
                break;
            case 13002:
                if (ZombieCafeAndroid.f75a && ZombieCafeAndroid.b) {
                    Log.d("inside message", "loadimage");
                    Bundle data13 = message.getData();
                    new n(data13.getString("url"), data13.getString("filename"), data13.getInt("friendindex")).execute(new String[0]);
                    break;
                }
                break;
            case 13003:
                if (ZombieCafeAndroid.aU != null) {
                    Log.d("mNickNameView", "START");
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(ZombieCafeAndroid.o, ZombieCafeAndroid.p);
                    layoutParams2.setMargins(0, 0, 0, 0);
                    ZombieCafeAndroid.bd.addView(ZombieCafeAndroid.aU, layoutParams2);
                    ZombieCafeAndroid.aU.setLayoutParams(layoutParams2);
                    Log.d("mNickNameView", "1");
                    ZombieCafeAndroid.aU.getSettings().setUserAgentString("ZombiCafeAndroidJP/1.1.8");
                    ZombieCafeAndroid.aU.setBackgroundResource(0);
                    ZombieCafeAndroid.aU.setBackgroundColor(R.color.black);
                    String str = "seq=ENTRY&appname=azcjp&im=" + ZombieCafeAndroid.h + "&aid=" + ZombieCafeAndroid.l + "&ud=" + ZombieCafeAndroid.k;
                    Log.d("launchURL", "http://azcjp.jive.bij-cram01.com/index.php");
                    Log.d("launchURLData", str);
                    ZombieCafeAndroid.aU.postUrl("http://azcjp.jive.bij-cram01.com/index.php", str.getBytes());
                    ZombieCafeAndroid.aU.setHorizontalScrollBarEnabled(false);
                    ZombieCafeAndroid.aU.getSettings().setJavaScriptEnabled(true);
                    break;
                }
                break;
            case 13005:
                if (ZombieCafeAndroid.aU != null) {
                    ZombieCafeAndroid.aU.setVisibility(8);
                    ZombieCafeAndroid.aU.scrollTo(0, 0);
                    break;
                }
                break;
            case 13006:
                Bundle data14 = message.getData();
                this.f78a.ShowAlertBox(data14.getInt("type"), data14.getString("title"), data14.getString("message"), data14.getString("button1"), "3");
                break;
            case 13007:
                Bundle data15 = message.getData();
                this.f78a.ShowAlertBox(data15.getInt("type"), data15.getString("title"), data15.getString("message"), data15.getString("button1"), "4");
                break;
            case 13050:
                Log.v("INFOBAR", "Infobar URL = " + data.getString("url"));
                if (ZombieCafeAndroid.f75a && ZombieCafeAndroid.b) {
                    this.f78a.ap = data.getString("url");
                    p pVar = new p(this.f78a.ap);
                    if (pVar != null) {
                        Log.d("INFOBAR", "About To Execute");
                        pVar.execute(new String[0]);
                        break;
                    } else {
                        Log.d("INFOBAR", "Failed!!!");
                        break;
                    }
                }
                break;
            case 13051:
                this.f78a.aq = new ax(this.f78a);
                this.f78a.aq.f99a = data.getBoolean("enableflag");
                this.f78a.aq.b = data.getString("text");
                this.f78a.aq.c = data.getString("tapURL");
                this.f78a.aq.d = data.getBoolean("dispflag");
                this.f78a.aq.e = data.getBoolean("pause");
                this.f78a.aq.f = data.getInt("daycount");
                this.f78a.aq.h = data.getInt("width") * 2;
                this.f78a.aq.g = data.getInt("height") * 2;
                this.f78a.aq.j = data.getInt("x") * 2;
                this.f78a.aq.i = data.getInt("y") * 2;
                this.f78a.aq.k = data.getString("imageURL");
                this.f78a.aq.l = data.getString("open");
                ZombieCafeAndroid.z = data.getString("tapURL");
                a();
                this.f78a.bi = new FrameLayout(ZombieCafeAndroid.aa.getContext());
                float f3 = ZombieCafeAndroid.o;
                float f4 = (int) (ZombieCafeAndroid.p * 0.1f);
                Log.v("INFOBAR", "bgpadx = 0.0:bgpady = 0.0:bgw = " + f3 + ":bgh = " + f4);
                this.f78a.ar = new ImageView(ZombieCafeAndroid.aa.getContext());
                Drawable drawable = ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837541);
                Log.v("INFOBAR", "imgW imgH  = " + drawable.getIntrinsicWidth() + " : " + drawable.getIntrinsicHeight());
                this.f78a.ar.setImageDrawable(drawable);
                this.f78a.ar.setScaleType(ImageView.ScaleType.FIT_XY);
                this.f78a.ar.setPadding((int) 0.0f, (int) 0.0f, 0, 0);
                RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(((int) 0.0f) + ((int) f3), ((int) 0.0f) + ((int) f4));
                Log.v("INFOBAR", "param = 0.0 : 0.0 : " + ((int) 0.0f) + ((int) f3));
                this.f78a.bi.addView(this.f78a.ar, layoutParams3);
                float f5 = (int) f4;
                float f6 = f4 / 4.0f;
                int i = (int) f4;
                this.f78a.at = new HorizontalScrollView(ZombieCafeAndroid.aa.getContext());
                this.f78a.at.setOnTouchListener(new ad(this));
                this.f78a.at.setHorizontalScrollBarEnabled(false);
                int iRound = Math.round(45.0f);
                int iRound2 = Math.round(200.0f * (ZombieCafeAndroid.o / 960.0f));
                this.f78a.aq.m = iRound2;
                int i2 = 0;
                String str2 = "";
                while (i2 < iRound) {
                    i2++;
                    str2 = String.valueOf(str2) + "\u3000";
                }
                String str3 = "";
                for (int i3 = 0; i3 < iRound2; i3++) {
                    str3 = String.valueOf(str3) + "\u3000";
                }
                this.f78a.aq.b = String.valueOf(str2) + this.f78a.aq.b + str3;
                this.f78a.au = new TextView(ZombieCafeAndroid.aa.getContext());
                this.f78a.au.setText(this.f78a.aq.b);
                this.f78a.au.setTextSize(0, (30.0f * ZombieCafeAndroid.p) / 640.0f);
                Log.v("INFOBAR", "textSize = " + this.f78a.au.getTextSize() + " : mScreenHeight = " + ZombieCafeAndroid.p + " : STD_SCREEN_H = 640.0 : cal = " + ((15.0f * ZombieCafeAndroid.p) / 640.0f));
                this.f78a.at.addView(this.f78a.au, new RelativeLayout.LayoutParams(0, (int) f5));
                this.f78a.at.setPadding((int) 0.0f, (int) f6, 0, 0);
                this.f78a.bi.addView(this.f78a.at, new RelativeLayout.LayoutParams(((int) 0.0f) + ((int) 2560.0f), ((int) f6) + ((int) f5)));
                this.f78a.as = new ImageView(ZombieCafeAndroid.aa.getContext());
                this.f78a.as.setImageDrawable(ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837544));
                this.f78a.as.setScaleType(ImageView.ScaleType.FIT_XY);
                this.f78a.as.setPadding((int) 0.0f, (int) 0.0f, 0, 0);
                this.f78a.bi.addView(this.f78a.as, new RelativeLayout.LayoutParams(((int) 0.0f) + i, ((int) 0.0f) + i));
                this.f78a.addContentView(this.f78a.bi, new ViewGroup.LayoutParams(-1, -1));
                this.f78a.bi.setBackgroundColor(0);
                this.f78a.ar.setVisibility(0);
                this.f78a.au.setVisibility(0);
                if (this.f78a.aq.d) {
                    CC_Android.fromNative_ShowWebViewInfobar((int) ((this.f78a.aq.i / 960.0f) * 100.0f), (int) ((this.f78a.aq.j / 640.0f) * 100.0f), (int) ((this.f78a.aq.g / 960.0f) * 100.0f), (int) ((this.f78a.aq.h / 640.0f) * 100.0f), this.f78a.aq.k);
                    break;
                }
                break;
            case 13052:
                if (this.f78a.bi != null) {
                    if (data.getBoolean("force")) {
                        a();
                        break;
                    } else {
                        a();
                        break;
                    }
                }
                break;
            case 13053:
                CC_Android.fromNative_ShowFixWebView(10, 20, 80, 80, ZombieCafeAndroid.z, false, true);
                CC_Android.fromNative_HideInfobar(0, 0, true);
                CC_Android.fromNative_HideWebViewInfobar(0, 0, true);
                break;
            case 13100:
                b();
                ZombieCafeAndroid.C = new WebView(ZombieCafeAndroid.aa.getContext());
                float f7 = (data.getInt("w") * 960.0f) / 100.0f;
                float f8 = (data.getInt("h") * 640.0f) / 100.0f;
                if (f8 <= f7) {
                    float f9 = f7 / f8;
                    f2 = (ZombieCafeAndroid.p / 640.0f) * f8;
                    f = f9 * f2;
                } else {
                    float f10 = f8 / f7;
                    f = (ZombieCafeAndroid.o / 960.0f) * f7;
                    f2 = f10 * f;
                }
                this.f78a.ba = new FrameLayout(ZombieCafeAndroid.aa.getContext());
                this.f78a.D = new ImageView(ZombieCafeAndroid.aa.getContext());
                this.f78a.D.setImageDrawable(ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837539));
                this.f78a.aZ = new FrameLayout(ZombieCafeAndroid.aa.getContext());
                this.f78a.aZ.addView(ZombieCafeAndroid.C, new RelativeLayout.LayoutParams((int) f, (int) f2));
                this.f78a.aZ.setPadding((int) (ZombieCafeAndroid.o * (data.getInt("x") / 100.0f)), (int) (ZombieCafeAndroid.p * (data.getInt("y") / 100.0f)), 0, 0);
                this.f78a.ba.addView(this.f78a.aZ, new RelativeLayout.LayoutParams(-1, -1));
                this.f78a.D.setPadding(((int) (f + (ZombieCafeAndroid.o * (data.getInt("x") / 100.0f)))) - 35, ((int) (ZombieCafeAndroid.p * (data.getInt("y") / 100.0f))) - 35, 0, 0);
                this.f78a.ba.addView(this.f78a.D, new ViewGroup.LayoutParams(-2, -2));
                this.f78a.D.setOnTouchListener(new ae(this));
                this.f78a.addContentView(this.f78a.ba, new ViewGroup.LayoutParams(-1, -1));
                ZombieCafeAndroid.C.setBackgroundResource(0);
                ZombieCafeAndroid.C.loadUrl(data.getString("url"));
                Log.v("YASUMURA WV", "JAVA WebView URL = " + data.getString("url"));
                ZombieCafeAndroid.C.setHorizontalScrollBarEnabled(false);
                ZombieCafeAndroid.C.getSettings().setJavaScriptEnabled(true);
                this.f78a.ba.setBackgroundColor(0);
                ZombieCafeAndroid.C.setVisibility(0);
                this.f78a.D.setVisibility(0);
                break;
            case 13101:
                if (data.getBoolean("force")) {
                    b();
                    break;
                } else if (this.f78a.D != null) {
                    Rect rect = new Rect();
                    this.f78a.D.getGlobalVisibleRect(rect);
                    Log.v("ASYNCH MOUSE TASK", " " + data.getInt("x") + ":" + data.getInt("y"));
                    Log.v("ASYNCH MOUSE TASK", "rect = " + rect);
                    if (rect.top < data.getInt("y") && rect.bottom > data.getInt("y") && rect.left < data.getInt("x") && rect.right > data.getInt("x")) {
                        b();
                        break;
                    }
                }
                break;
            case 13110:
                c();
                ZombieCafeAndroid.E = new WebView(ZombieCafeAndroid.aa.getContext());
                this.f78a.bc = new FrameLayout(ZombieCafeAndroid.aa.getContext());
                this.f78a.I = data.getInt("x");
                this.f78a.J = data.getInt("y");
                this.f78a.K = data.getInt("w");
                this.f78a.L = data.getInt("h");
                this.f78a.M = data.getString("url");
                this.f78a.N = data.getBoolean("displayHomeButton");
                this.f78a.O = data.getBoolean("afterOpenInfobar");
                float f11 = (int) (ZombieCafeAndroid.o * ((this.f78a.K * (1.0f + 0.2f)) / 100.0f));
                float f12 = (int) (ZombieCafeAndroid.p * ((this.f78a.L * (1.0f + 0.2f)) / 100.0f));
                float f13 = (int) ((((0.2f * this.f78a.K) / 100.0f) * ZombieCafeAndroid.o) / 2.0f);
                float f14 = (int) ((((0.2f * this.f78a.L) / 100.0f) * ZombieCafeAndroid.p) / 2.0f);
                float f15 = ((int) (ZombieCafeAndroid.o * (this.f78a.I / 100.0f))) - f13;
                float f16 = ((int) (ZombieCafeAndroid.p * (this.f78a.J / 100.0f))) - f14;
                int i4 = (int) (ZombieCafeAndroid.o * 0.075f);
                Log.v("YASUMURA WV", "bgpadx = " + f15 + ":bgpady = " + f16 + ":bgw = " + f11 + ":bgh = " + f12 + ":adjx = " + f13 + ":adjy = " + f14 + ":btnsizew = " + i4);
                this.f78a.H = new ImageView(ZombieCafeAndroid.aa.getContext());
                Drawable drawable2 = ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837545);
                Log.v("YASUMURA WV", "imgW imgH  = " + drawable2.getIntrinsicWidth() + " : " + drawable2.getIntrinsicHeight());
                this.f78a.H.setImageDrawable(drawable2);
                this.f78a.H.setScaleType(ImageView.ScaleType.FIT_XY);
                this.f78a.H.setPadding((int) f15, (int) f16, 0, 0);
                RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(((int) f15) + ((int) f11), ((int) f16) + ((int) f12));
                this.f78a.bc.addView(this.f78a.H, layoutParams4);
                this.f78a.F = new ImageView(ZombieCafeAndroid.aa.getContext());
                this.f78a.F.setImageDrawable(ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837540));
                this.f78a.F.setScaleType(ImageView.ScaleType.FIT_XY);
                this.f78a.F.setPadding((int) f15, ((int) f16) - (i4 / 2), 0, 0);
                this.f78a.bc.addView(this.f78a.F, new RelativeLayout.LayoutParams(((int) f15) + i4, (((int) f16) - (i4 / 2)) + i4));
                this.f78a.F.setOnTouchListener(new af(this));
                if (this.f78a.N) {
                    this.f78a.G = new ImageView(ZombieCafeAndroid.aa.getContext());
                    this.f78a.G.setImageDrawable(ZombieCafeAndroid.aa.getContext().getResources().getDrawable(2130837542));
                    this.f78a.G.setScaleType(ImageView.ScaleType.FIT_XY);
                    this.f78a.G.setPadding(((int) f15) + i4, ((int) f16) - (i4 / 2), 0, 0);
                    this.f78a.bc.addView(this.f78a.G, new RelativeLayout.LayoutParams(((int) f15) + i4 + i4, (((int) f16) - (i4 / 2)) + i4));
                    this.f78a.G.setOnTouchListener(new ag(this));
                }
                this.f78a.bb = new FrameLayout(ZombieCafeAndroid.getContext());
                this.f78a.bb.addView(ZombieCafeAndroid.E, new RelativeLayout.LayoutParams((int) (ZombieCafeAndroid.o * (this.f78a.K / 100.0f)), (int) (ZombieCafeAndroid.p * (this.f78a.L / 100.0f))));
                this.f78a.bb.setPadding((int) (ZombieCafeAndroid.o * (this.f78a.I / 100.0f)), (int) (ZombieCafeAndroid.p * (this.f78a.J / 100.0f)), 0, 0);
                new RelativeLayout.LayoutParams(-1, -1);
                this.f78a.bc.addView(this.f78a.bb, layoutParams4);
                this.f78a.addContentView(this.f78a.bc, new ViewGroup.LayoutParams(-1, -1));
                ZombieCafeAndroid.E.setBackgroundResource(0);
                ZombieCafeAndroid.E.loadUrl(this.f78a.M);
                Log.v("YASUMURA WV", "JAVA WebView URL = " + this.f78a.M);
                ZombieCafeAndroid.E.setHorizontalScrollBarEnabled(true);
                ZombieCafeAndroid.E.getSettings().setJavaScriptEnabled(true);
                this.f78a.bc.setBackgroundColor(0);
                ZombieCafeAndroid.E.setVisibility(0);
                this.f78a.F.setVisibility(0);
                if (this.f78a.G != null) {
                    this.f78a.G.setVisibility(0);
                }
                this.f78a.H.setVisibility(0);
                break;
            case 13111:
                if (ZombieCafeAndroid.E != null) {
                    if (data.getBoolean("force")) {
                        c();
                        ZombieCafeAndroid.NativeCloseEventForm();
                        break;
                    } else if (this.f78a.F != null) {
                        Rect rect2 = new Rect();
                        this.f78a.F.getGlobalVisibleRect(rect2);
                        Log.v("ASYNCH MOUSE TASK", " " + data.getInt("x") + ":" + data.getInt("y"));
                        Log.v("ASYNCH MOUSE TASK", "rect = " + rect2);
                        if (rect2.top < data.getInt("y") && rect2.bottom > data.getInt("y") && rect2.left < data.getInt("x") && rect2.right > data.getInt("x")) {
                            c();
                            ZombieCafeAndroid.NativeCloseEventForm();
                            break;
                        }
                    }
                }
                break;
            case 13112:
                if (ZombieCafeAndroid.E != null) {
                    boolean z = false;
                    if (data.getBoolean("force")) {
                        z = true;
                    } else if (this.f78a.G != null) {
                        Rect rect3 = new Rect();
                        this.f78a.G.getGlobalVisibleRect(rect3);
                        Log.v("ASYNCH MOUSE TASK", "RELOAD " + data.getInt("x") + ":" + data.getInt("y"));
                        Log.v("ASYNCH MOUSE TASK", "RELOAD rect = " + rect3);
                        if (rect3.top < data.getInt("y") && rect3.bottom > data.getInt("y") && rect3.left < data.getInt("x") && rect3.right > data.getInt("x")) {
                            z = true;
                        }
                    }
                    if (z) {
                        this.f78a.bb.removeView(ZombieCafeAndroid.E);
                        ZombieCafeAndroid.E = null;
                        this.f78a.bc.removeView(this.f78a.bb);
                        this.f78a.bb = null;
                        ZombieCafeAndroid.E = new WebView(ZombieCafeAndroid.aa.getContext());
                        this.f78a.bb = new FrameLayout(ZombieCafeAndroid.getContext());
                        this.f78a.bb.addView(ZombieCafeAndroid.E, new RelativeLayout.LayoutParams((int) (ZombieCafeAndroid.o * (this.f78a.K / 100.0f)), (int) (ZombieCafeAndroid.p * (this.f78a.L / 100.0f))));
                        this.f78a.bb.setPadding((int) (ZombieCafeAndroid.o * (this.f78a.I / 100.0f)), (int) (ZombieCafeAndroid.p * (this.f78a.J / 100.0f)), 0, 0);
                        this.f78a.bc.addView(this.f78a.bb, new RelativeLayout.LayoutParams(-1, -1));
                        ZombieCafeAndroid.E.setBackgroundResource(0);
                        ZombieCafeAndroid.E.loadUrl(this.f78a.M);
                        ZombieCafeAndroid.E.setHorizontalScrollBarEnabled(true);
                        ZombieCafeAndroid.E.getSettings().setJavaScriptEnabled(true);
                        ZombieCafeAndroid.E.setVisibility(0);
                        break;
                    }
                }
                break;
            case 13300:
                this.f78a.asyncQueryInventory();
                break;
            case 13301:
                new Thread(new ah(this)).start();
                break;
            case 13302:
                this.f78a.asyncConsume();
                break;
            case 13400:
                this.f78a.showEnterMigrationPassword();
                break;
            default:
                Log.v("BAD MESSAGE", "IS=" + message.what);
                Toast.makeText(this.f78a, "BAD MESSAGE RECEIVED BY HANDLER", 1).show();
                break;
        }
        super.handleMessage(message);
    }
}
