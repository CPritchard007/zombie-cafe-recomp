package com.capcom.zombiecafeandroidJP;

import android.provider.Settings;
import android.util.Log;
import java.io.UnsupportedEncodingException;
import java.util.UUID;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class m {
    public static int c = 32;
    public static int d = 5;
    public static int e = 6;
    public static int f = 7;

    /* renamed from: a, reason: collision with root package name */
    public int f110a = 0;
    public int b = 0;
    public String[] g = new String[c];
    public String[] h = new String[c];
    public String[] i = new String[c];
    public int[] j = new int[c];
    public int[] k = new int[c];
    public int[] l = new int[c];
    public int[] m = new int[c];
    public int[] n = new int[c];
    public boolean[] o = new boolean[c];

    m() {
        Log.e("Adding Valid Android Devices", "to overall list");
        a("samsung", "SCH-I800", "Galaxy Tab", 0, -150, 1024, 600, d, true);
        a("Motorola", "Xoom", "The Zoom", 0, -272, 1280, 752, d, true);
        a("Samsung", "SCH-I500", "Fascination", 0, 0, 854, 400, d, true);
        a("Samsung", "SCH-I400", "Continuum", 0, 0, 800, 480, d, true);
        a("Samsung", "SPH-D700", "Epic 4G", 0, 0, 800, 480, d, true);
        a("samsung", "SC-02B", "NT DOCOMO", 0, 0, 800, 480, d, true);
        a("samsung", "GT-P7100", "Galaxy Tab 10.1", 0, -275, 1280, 800, d, true);
        a("LGE", "Vortex", "Vortex", 0, 175, 480, 320, d, true);
        a("LGE", "Ally", "LG Ally", 0, 0, 800, 480, d, true);
        a("LGE", "LS670", "Sprint - LG Optimus S", 0, 175, 480, 320, d, true);
        a("HTC", "PG06100", "EVO Shift 4G", 0, 0, 800, 480, d, true);
        a("HTC", "ADR6300", "Droid Incredible", 0, 0, 800, 480, d, true);
        a("HTC", "ADR6400L", "Thunderbolt", 0, 0, 800, 480, d, true);
        a("KYOCERA", "Zio", "Sanyo Zio", 0, 0, 800, 480, d, false);
        a("Motorola", "Droid", "Droid", 0, 0, 854, 400, d, true);
        a("motorola", "DROID2 GLOBAL", "DROID 2 GLOBAL", 0, 0, 854, 400, d, true);
        a("motorola", "DROID PRO", "DROID PRO", 0, 175, 480, 320, d, true);
        a("motorola", "DROIDX", "DROID X", 0, 0, 854, 480, d, true);
        a("Samsung", "SPH-M920", "Transform", 0, 150, 480, 320, d, true);
        a("Samsung", "SPH-M910", "Intercept", 0, 240, 400, 240, d, true);
        a("motorola", "WX445", "CITRUS", 0, 240, 320, 240, e, true);
        b();
    }

    public static void a() {
        UUID uuidNameUUIDFromBytes;
        String str = "000000000000000";
        ZombieCafeAndroid.l = Settings.Secure.getString(ZombieCafeAndroid.getContext().getContentResolver(), "android_id");
        ZombieCafeAndroid.h = str;
        UUID uuid = new UUID(ZombieCafeAndroid.l.hashCode(), (str.hashCode() << 32) | r0.hashCode());
        Log.d("/======= getDeviceID ==========/", "This AndroidID = " + ZombieCafeAndroid.l);
        Log.d("/======= getDeviceID ==========/", "This SimSerialNumber = " + ("000000000000000"));
        Log.d("/======= getDeviceID ==========/", "This DeviceId = " + str);
        ZombieCafeAndroid.k = uuid.toString();
        Log.d("This Android Has a Device ID of length=" + ZombieCafeAndroid.k.length(), ZombieCafeAndroid.k);
        Log.d("The Simple Telephony Manage Device ID is", str.toString());
        String string = Settings.Secure.getString(ZombieCafeAndroid.w.getContentResolver(), "android_id");
        Log.d("The ANDROID_ID Device ID is", string);
        if ("9774d56d682e549c".equals(string)) {
            Log.v("THIS ANDROID_ID IS BAD!!!", "USE THE TELEPHONY DEVICE ID");
            return;
        }
        try {
            uuidNameUUIDFromBytes = UUID.nameUUIDFromBytes(string.getBytes("utf8"));
        } catch (UnsupportedEncodingException e2) {
            e2.printStackTrace();
            uuidNameUUIDFromBytes = null;
        }
        Log.v("THIS ANDROID_ID IS GOOD! Length=" + uuidNameUUIDFromBytes.toString().length(), uuidNameUUIDFromBytes.toString());
    }

    void a(String str, String str2, String str3, int i, int i2, int i3, int i4, int i5, boolean z) {
        if (this.f110a == c) {
            Log.e("ANDROID ERROR!", "TOO MANY DEVICES!");
            return;
        }
        this.g[this.f110a] = str;
        this.h[this.f110a] = str2;
        this.i[this.f110a] = str3;
        this.j[this.f110a] = i3;
        this.k[this.f110a] = i4;
        this.l[this.f110a] = i;
        this.m[this.f110a] = i2;
        this.n[this.f110a] = i5;
        this.o[this.f110a] = z;
        this.f110a++;
    }

    public void b() {
        Log.d("COMPLETE LIST", "ANDRIOD DEVICES");
        Log.d("=============", "===============");
        for (int i = 0; i < this.f110a; i++) {
            Log.d("[" + this.g[i] + "-" + this.h[i] + "]", String.valueOf(this.i[i]) + "[" + this.n[i] + "]");
        }
        Log.d("", "");
    }
}
