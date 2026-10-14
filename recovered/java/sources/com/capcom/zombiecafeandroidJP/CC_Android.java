package com.capcom.zombiecafeandroidJP;

import android.content.IntentSender;
import android.content.SharedPreferences;
import android.content.res.AssetFileDescriptor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.media.MediaPlayer;
import android.opengl.GLUtils;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.support.v4.internal.view.SupportMenu;
import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
import java.util.Calendar;
import java.util.Iterator;
import javax.microedition.khronos.opengles.GL10;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CC_Android implements MediaPlayer.OnCompletionListener, MediaPlayer.OnPreparedListener {
    public static MediaPlayer c;
    public static int e;
    public static int f;
    public static GL10 i;
    private static ZombieCafeAndroid o;

    /* renamed from: a, reason: collision with root package name */
    public static boolean f66a = false;
    public static boolean b = false;
    private static int m = -1;
    public static MediaPlayer[] d = new MediaPlayer[2];
    private static float n = 1.0f;
    public static String[] g = new String[256];
    public static String[] h = new String[2];
    public static String[] j = new String[20];
    public static String[] k = new String[20];
    static boolean l = false;

    public CC_Android(ZombieCafeAndroid zombieCafeAndroid) {
        o = zombieCafeAndroid;
        i = o.getGlObj();
        Log.d("CC_Android", "Created");
    }

    private static int CCNextPO2(int i2) {
        int i3 = i2 - 1;
        int i4 = i3 | (i3 >> 1);
        int i5 = i4 | (i4 >> 2);
        int i6 = i5 | (i5 >> 4);
        int i7 = i6 | (i6 >> 8);
        return (i7 | (i7 >> 16)) + 1;
    }

    private static InputStream OpenHttpConnection(String str) throws IOException {
        URLConnection uRLConnectionOpenConnection = new URL(str).openConnection();
        if (!(uRLConnectionOpenConnection instanceof HttpURLConnection)) {
            throw new IOException("Not an HTTP connection");
        }
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) uRLConnectionOpenConnection;
            httpURLConnection.setAllowUserInteraction(false);
            httpURLConnection.setInstanceFollowRedirects(true);
            httpURLConnection.setRequestMethod("GET");
            httpURLConnection.connect();
            InputStream inputStream = httpURLConnection.getResponseCode() == 200 ? httpURLConnection.getInputStream() : null;
            Log.d("Return OpenConnection", "=" + inputStream);
            return inputStream;
        } catch (Exception e2) {
            throw new IOException("Error connecting");
        }
    }

    public static void fromNative_Accelerometer(boolean z) {
        ZombieCafeAndroid.ToggleAccelerometer(z);
    }

    public static void fromNative_AsyncConsume() {
        ZombieCafeAndroid.runSystemThread(13302, new Bundle());
    }

    public static void fromNative_AsyncQueryInventory() {
        ZombieCafeAndroid.runSystemThread(13300, new Bundle());
    }

    public static void fromNative_BuyStuff(int i2) throws IntentSender.SendIntentException {
        o.BuyToxin(i2);
    }

    public static boolean fromNative_CCOptionsGetBool(String str, boolean z) {
        return ZombieCafeAndroid.ad.getBoolean(str, z);
    }

    public static float fromNative_CCOptionsGetFloat(String str, float f2) {
        return ZombieCafeAndroid.ad.getFloat(str, f2);
    }

    public static int fromNative_CCOptionsGetInt(String str, int i2) {
        return ZombieCafeAndroid.ad.getInt(str, i2);
    }

    public static byte[] fromNative_CCOptionsGetString(String str, String str2) {
        String string = ZombieCafeAndroid.ad.getString(str, str2);
        return string == null ? new byte[]{0} : string.getBytes();
    }

    public static String fromNative_CCOptionsGetStringJava(String str, String str2) {
        return ZombieCafeAndroid.ad.getString(str, str2);
    }

    public static long fromNative_CCOptionsGetUInt(String str, long j2) {
        long j3 = ZombieCafeAndroid.ad.getInt(str, ((int) j2) & SupportMenu.USER_MASK);
        Log.d("CCOptionsGetUInt=" + str, "Data=" + j3);
        return j3;
    }

    public static double fromNative_CCOptionsGetUInt64(String str, double d2) {
        long j2 = ZombieCafeAndroid.ad.getLong(str, (long) d2);
        Log.d("CCOptionsGetInt64=" + str, "Data=" + j2);
        return j2;
    }

    public static void fromNative_CCOptionsInit(String str) {
        Log.d("CCOptionsInit", "File=" + str);
    }

    public static void fromNative_CCOptionsSetBool(String str, boolean z) {
        SharedPreferences.Editor editorEdit = ZombieCafeAndroid.ad.edit();
        editorEdit.putBoolean(str, z);
        editorEdit.commit();
    }

    public static void fromNative_CCOptionsSetFloat(String str, float f2) {
    }

    public static void fromNative_CCOptionsSetInt(String str, int i2) {
        SharedPreferences.Editor editorEdit = ZombieCafeAndroid.ad.edit();
        editorEdit.putInt(str, i2);
        editorEdit.commit();
    }

    public static void fromNative_CCOptionsSetString(String str, String str2) {
        Bundle bundle = new Bundle();
        bundle.putString("key", str);
        bundle.putString("data", str2);
        ZombieCafeAndroid.runSystemThread(12351, bundle);
    }

    public static void fromNative_CCOptionsSetUInt(String str, long j2) {
        SharedPreferences.Editor editorEdit = ZombieCafeAndroid.ad.edit();
        editorEdit.putInt(str, ((int) j2) & SupportMenu.USER_MASK);
        editorEdit.commit();
    }

    public static void fromNative_CCOptionsSetUInt64(String str, double d2) {
        ZombieCafeAndroid.ad.getLong(str, (long) d2);
        Log.d("CCOptionsSetUInt64=" + str, "Data=" + d2);
        SharedPreferences.Editor editorEdit = ZombieCafeAndroid.ad.edit();
        editorEdit.putLong(str, (long) d2);
        editorEdit.commit();
    }

    public static long fromNative_CCSecondsSince1970() {
        return System.currentTimeMillis() / 1000;
    }

    public static void fromNative_CRAMAction(int i2) {
        new Bundle().putInt("action", i2);
    }

    public static boolean fromNative_CanOpenHero() {
        Log.v("CC_Android fromNative_CanOpenHero", "/========== START ==========/");
        Log.v("CC_Android fromNative_CanOpenHero", "/==========  END  ==========/");
        return o.nativeCanOpenHero();
    }

    public static boolean fromNative_CanOpenNinja() {
        Log.v("CC_Android fromNative_CanOpenNinja", "/========== START ==========/");
        Log.v("CC_Android fromNative_CanOpenNinja", "/==========  END  ==========/");
        return o.nativeCanOpenNinja();
    }

    public static boolean fromNative_CanOpenSnoopyPuzzle() {
        return o.nativeCanOpenSnoopyPuzzle();
    }

    public static boolean fromNative_Connected() {
        return ZombieCafeAndroid.b;
    }

    public static void fromNative_DeleteNotification() {
    }

    public static void fromNative_ER3Parse(String str) throws JSONException {
        int iIntValue;
        int iIntValue2;
        int iIntValue3;
        int iIntValue4;
        int iIntValue5;
        int iIntValue6;
        boolean z;
        int i2 = 0;
        Log.v("CC_Android fromNative_ER3Parse", "/========== START ==========/");
        try {
            JSONObject jSONObject = new JSONObject(str);
            String string = jSONObject.getString("eventid");
            String string2 = jSONObject.getString("status");
            String string3 = jSONObject.getString("point");
            String string4 = jSONObject.getString("pos");
            String string5 = jSONObject.getString("starttime");
            String string6 = jSONObject.getString("endtime");
            boolean z2 = true;
            if (string != null) {
                iIntValue5 = Integer.valueOf(string).intValue();
            } else {
                z2 = false;
                iIntValue5 = 0;
            }
            if (string2 != null) {
                try {
                    iIntValue4 = Integer.valueOf(string2).intValue();
                } catch (JSONException e2) {
                    e = e2;
                    iIntValue = 0;
                    iIntValue2 = 0;
                    iIntValue3 = 0;
                    iIntValue4 = 0;
                    e.printStackTrace();
                    Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
                    Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
                    Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
                    Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
                    Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
                    Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
                    Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
                }
            } else {
                z2 = false;
                iIntValue4 = 0;
            }
            if (string3 != null) {
                try {
                    iIntValue3 = Integer.valueOf(string3).intValue();
                } catch (JSONException e3) {
                    e = e3;
                    iIntValue = 0;
                    iIntValue2 = 0;
                    iIntValue3 = 0;
                    e.printStackTrace();
                    Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
                    Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
                    Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
                    Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
                    Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
                    Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
                    Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
                }
            } else {
                z2 = false;
                iIntValue3 = 0;
            }
            if (string4 != null) {
                try {
                    iIntValue2 = Integer.valueOf(string4).intValue();
                } catch (JSONException e4) {
                    e = e4;
                    iIntValue = 0;
                    iIntValue2 = 0;
                    e.printStackTrace();
                    Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
                    Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
                    Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
                    Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
                    Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
                    Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
                    Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
                }
            } else {
                z2 = false;
                iIntValue2 = 0;
            }
            if (string5 != null) {
                try {
                    iIntValue = Integer.valueOf(string5).intValue();
                } catch (JSONException e5) {
                    e = e5;
                    iIntValue = 0;
                    e.printStackTrace();
                    Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
                    Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
                    Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
                    Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
                    Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
                    Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
                    Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
                }
            } else {
                z2 = false;
                iIntValue = 0;
            }
            if (string6 != null) {
                try {
                    boolean z3 = z2;
                    iIntValue6 = Integer.valueOf(string6).intValue();
                    z = z3;
                } catch (JSONException e6) {
                    e = e6;
                    e.printStackTrace();
                    Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
                    Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
                    Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
                    Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
                    Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
                    Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
                    Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
                }
            } else {
                z = false;
                iIntValue6 = 0;
            }
            if (z) {
                i2 = iIntValue6;
            } else {
                iIntValue = 0;
                iIntValue2 = 0;
                iIntValue3 = 0;
                iIntValue4 = 0;
                iIntValue5 = 0;
            }
            if (o != null) {
                o.nativeER3Parse(iIntValue5, iIntValue4, iIntValue3, iIntValue2, iIntValue, i2);
            }
        } catch (JSONException e7) {
            e = e7;
            iIntValue = 0;
            iIntValue2 = 0;
            iIntValue3 = 0;
            iIntValue4 = 0;
            iIntValue5 = 0;
        }
        Log.v("CC_Android fromNative_ER3Parse", "eventid = " + iIntValue5);
        Log.v("CC_Android fromNative_ER3Parse", "status = " + iIntValue4);
        Log.v("CC_Android fromNative_ER3Parse", "point = " + iIntValue3);
        Log.v("CC_Android fromNative_ER3Parse", "pos = " + iIntValue2);
        Log.v("CC_Android fromNative_ER3Parse", "starttime = " + iIntValue);
        Log.v("CC_Android fromNative_ER3Parse", "endtime = " + i2);
        Log.v("CC_Android fromNative_ER3Parse", "/==========  END  ==========/");
    }

    public static void fromNative_EnableRemoteNotification(boolean z) {
        Log.v("ZombieCafeAndroid-GCM", new StringBuilder().append(z).toString());
        com.capcom.gcm.e.a(o.getApplicationContext(), z);
    }

    public static byte[] fromNative_EncodeURL(String str) throws UnsupportedEncodingException {
        String strEncode = "";
        try {
            strEncode = URLEncoder.encode(str, "UTF-8");
        } catch (UnsupportedEncodingException e2) {
            e2.printStackTrace();
        }
        Log.d("Input URL", str);
        Log.d("Encoded Out", strEncode);
        return strEncode.getBytes();
    }

    public static void fromNative_EndLoading() {
        Log.d("CC_Android", "fromNative_EndLoading");
        ZombieCafeAndroid.g = false;
    }

    public static void fromNative_EventGetGiftParse(String str) throws JSONException {
        Log.v("CC_Android fromNative_EventGetGiftParse", "/========== START ==========/");
        String str2 = "";
        int[] iArr = new int[10];
        String[] strArr = new String[10];
        int[] iArr2 = new int[10];
        int[] iArr3 = new int[10];
        int[] iArr4 = new int[10];
        int[] iArr5 = new int[10];
        int[] iArr6 = new int[10];
        int i2 = 0;
        try {
            JSONArray jSONArray = new JSONArray(str);
            int length = jSONArray.length();
            if (jSONArray != null && length != 0) {
                for (int i3 = 0; i3 < length; i3++) {
                    JSONObject jSONObject = jSONArray.getJSONObject(i3);
                    if (jSONObject != null) {
                        String string = jSONObject.getString("id");
                        String string2 = jSONObject.getString("fromuuid");
                        String string3 = jSONObject.getString("fromuname");
                        String string4 = jSONObject.getString("kind");
                        String string5 = jSONObject.getString("itemkind");
                        String string6 = jSONObject.getString("itemid");
                        String string7 = jSONObject.getString("quantity");
                        String string8 = jSONObject.getString("getcount");
                        boolean z = true;
                        if (string != null) {
                            str2 = String.valueOf(str2) + string + ":";
                        } else {
                            str2 = String.valueOf(str2) + "error:";
                            z = false;
                        }
                        if (string2 != null) {
                            iArr[i2] = Integer.valueOf(string2).intValue();
                        } else {
                            iArr[i2] = 0;
                            z = false;
                        }
                        if (string3 != null) {
                            strArr[i2] = string3;
                        } else {
                            strArr[i2] = "error";
                            z = false;
                        }
                        if (string4 != null) {
                            iArr2[i2] = Integer.valueOf(string4).intValue();
                        } else {
                            iArr2[i2] = 0;
                            z = false;
                        }
                        if (string5 != null) {
                            iArr3[i2] = Integer.valueOf(string5).intValue();
                        } else {
                            iArr3[i2] = 0;
                            z = false;
                        }
                        if (string6 != null) {
                            iArr4[i2] = Integer.valueOf(string6).intValue();
                        } else {
                            iArr4[i2] = 0;
                            z = false;
                        }
                        if (string7 != null) {
                            iArr5[i2] = Integer.valueOf(string7).intValue();
                        } else {
                            iArr5[i2] = 0;
                            z = false;
                        }
                        if (string8 != null) {
                            iArr6[i2] = Integer.valueOf(string8).intValue();
                        } else {
                            iArr6[i2] = 0;
                            z = false;
                        }
                        if (z) {
                            i2++;
                        } else {
                            iArr[i2] = 0;
                            iArr4[i2] = 0;
                            iArr5[i2] = 0;
                            iArr6[i2] = 0;
                        }
                        if (o != null) {
                            o.nativeEventGetGiftParse(str2, iArr, iArr2, iArr4, iArr5, iArr6, i2);
                        }
                    } else {
                        for (int i4 = 0; i4 < 10; i4++) {
                            iArr[i4] = 0;
                            iArr4[i4] = 0;
                            iArr5[i4] = 0;
                            iArr6[i4] = 0;
                        }
                    }
                }
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_EventGetGiftParse", "/==========  END  ==========/");
    }

    public static void fromNative_Facebook2(int i2, String str, String str2) {
        Log.d("fromNative_Facebook", str);
        Bundle bundle = new Bundle();
        bundle.putInt("action", i2);
        bundle.putString("option", str);
        bundle.putString("path", str2);
        ZombieCafeAndroid.runSystemThread(12361, bundle);
    }

    public static int fromNative_GetAndroidDevice() {
        return 0;
    }

    public static byte[] fromNative_GetAndroidID() {
        return ZombieCafeAndroid.l.getBytes();
    }

    public static byte[] fromNative_GetCountryCode() {
        return ZombieCafeAndroid.n.getBytes();
    }

    public static int fromNative_GetDate(int i2) {
        Calendar calendar = Calendar.getInstance();
        switch (i2) {
            case 0:
                return calendar.get(1);
            case 1:
                return calendar.get(2) + 1;
            case 2:
                return calendar.get(5);
            case 3:
                return calendar.get(11);
            case 4:
                return calendar.get(12);
            case 5:
                return calendar.get(13);
            default:
                return 99;
        }
    }

    public static byte[] fromNative_GetDateString(int i2) {
        String date = o.getDate(i2);
        Log.d("fromnative_GetDateString", date);
        return date.getBytes();
    }

    public static byte[] fromNative_GetDeviceID() {
        return ZombieCafeAndroid.k.getBytes();
    }

    public static byte[] fromNative_GetDeviceInfoForURL() {
        return (String.valueOf(String.valueOf(String.valueOf(String.valueOf(String.valueOf(String.valueOf(String.valueOf("") + "&brand=" + l.a().b()) + "&mani=" + l.a().c()) + "&dev=" + l.a().d()) + "&model=" + l.a().e()) + "&prod=" + l.a().f()) + "&ASDK=" + l.a().g()) + "&SDK=" + l.a().h()).getBytes();
    }

    public static void fromNative_GetEntryParse(String str) throws JSONException {
        String string;
        String str2;
        String string2;
        String str3;
        Log.v("CC_Android fromNative_GetEntryParse", "/========== START ==========/");
        Log.v("HIGUCHI getEntryString = ", str);
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject != null) {
                JSONObject jSONObject2 = new JSONObject(jSONObject.getString("entry"));
                if (jSONObject2 != null) {
                    String string3 = jSONObject2.getString("rwd_adways");
                    string = jSONObject2.getString("news_idx");
                    str2 = string3;
                } else {
                    string = "";
                    str2 = "";
                }
                JSONObject jSONObject3 = new JSONObject(jSONObject.getString("vip"));
                if (jSONObject3 != null) {
                    String string4 = jSONObject3.getString("flg");
                    string2 = jSONObject3.getString("rk");
                    str3 = string4;
                } else {
                    string2 = "";
                    str3 = "";
                }
                int iIntValue = str2 != null ? Integer.valueOf(str2).intValue() : 9999;
                int iIntValue2 = string != null ? Integer.valueOf(string).intValue() : 0;
                int iIntValue3 = str3 != null ? Integer.valueOf(str3).intValue() : 0;
                int iIntValue4 = string2 != null ? Integer.valueOf(string2).intValue() : 0;
                if (o != null) {
                    o.nativeGetEntryParse(iIntValue, iIntValue3, iIntValue4, iIntValue2);
                }
                Log.v("HIGUCHI", "Yes JSON Objects.");
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_GetEntryParse", "/==========  END  ==========/");
    }

    public static void fromNative_GetEventValueParse(String str) throws JSONException {
        Log.v("CC_Android fromNative_GetEventValueParse", "/========== START ==========/");
        int[] iArr = new int[10];
        int[] iArr2 = new int[10];
        int[] iArr3 = new int[10];
        String[] strArr = new String[10];
        int[] iArr4 = new int[10];
        String[] strArr2 = new String[10];
        int i2 = 0;
        try {
            JSONObject jSONObject = new JSONObject(str);
            int length = jSONObject.length();
            Iterator<String> itKeys = jSONObject.keys();
            if (length <= 10 && jSONObject != null) {
                while (itKeys.hasNext()) {
                    JSONObject jSONObject2 = jSONObject.getJSONObject(itKeys.next());
                    if (jSONObject2 != null) {
                        String string = jSONObject2.getString("supportid");
                        String string2 = jSONObject2.getString("category");
                        String string3 = jSONObject2.getString("item_id");
                        String string4 = jSONObject2.getString("place");
                        String string5 = jSONObject2.getString("quantity");
                        String string6 = jSONObject2.getString("message");
                        boolean z = true;
                        if (string != null) {
                            iArr[i2] = Integer.valueOf(string).intValue();
                        } else {
                            iArr[i2] = 0;
                            z = false;
                        }
                        if (string2 != null) {
                            iArr2[i2] = Integer.valueOf(string2).intValue();
                        } else {
                            iArr2[i2] = 0;
                            z = false;
                        }
                        if (string3 != null) {
                            iArr3[i2] = Integer.valueOf(string3).intValue();
                        } else {
                            iArr3[i2] = 0;
                            z = false;
                        }
                        if (string4 != null) {
                            strArr[i2] = string4;
                        } else {
                            strArr[i2] = "error";
                            z = false;
                        }
                        if (string5 != null) {
                            iArr4[i2] = Integer.valueOf(string5).intValue();
                        } else {
                            iArr4[i2] = 0;
                            z = false;
                        }
                        if (string6 != null) {
                            strArr2[i2] = string6;
                        } else {
                            strArr2[i2] = "error";
                            z = false;
                        }
                        if (z) {
                            i2++;
                        } else {
                            iArr[i2] = 0;
                            iArr2[i2] = 0;
                            iArr3[i2] = 0;
                            strArr[i2] = "";
                            iArr4[i2] = 0;
                            strArr2[i2] = "";
                        }
                        if (o != null) {
                            o.nativeGetEventValueParse(iArr, iArr2, iArr3, strArr, iArr4, strArr2, i2);
                        }
                    } else {
                        for (int i3 = 0; i3 < 10; i3++) {
                            iArr[i3] = 0;
                            iArr2[i3] = 0;
                            iArr3[i3] = 0;
                            strArr[i3] = "";
                            iArr4[i3] = 0;
                            strArr2[i3] = "";
                        }
                    }
                }
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_GetEventValueParse", "/==========  END  ==========/");
    }

    public static void fromNative_GetGameInfoParse(String str) throws JSONException {
        JSONObject jSONObject;
        try {
            JSONObject jSONObject2 = new JSONObject(str);
            if (jSONObject2 == null || (jSONObject = new JSONObject(jSONObject2.getString("hco"))) == null) {
                return;
            }
            int i2 = jSONObject.getInt("tiertype");
            int i3 = jSONObject.getInt("saleid");
            long j2 = jSONObject.getLong("starttime");
            long j3 = jSONObject.getLong("endtime");
            long j4 = jSONObject.getLong("time");
            int i4 = jSONObject.getInt("mc");
            JSONArray jSONArray = jSONObject.getJSONArray("items");
            int length = jSONArray.length();
            if (o != null) {
                o.nativeGetGameInfoHCOSettingParse(i2, i3, j4, i4, j2, j3, length);
            }
            for (int i5 = 0; i5 < length; i5++) {
                JSONObject jSONObject3 = jSONArray.getJSONObject(i5);
                if (jSONObject3 != null) {
                    int i6 = jSONObject3.getInt("type");
                    int i7 = jSONObject3.getInt("id");
                    int i8 = jSONObject3.getInt("level");
                    int i9 = jSONObject3.getInt("zombility");
                    int i10 = jSONObject3.getInt("ampoule");
                    if (o != null) {
                        o.nativeGetGameInfoHCOItemParse(i6, i7, i8, i9, i10, i5);
                    }
                }
            }
        } catch (JSONException e2) {
            Log.v("getGameInfoString", "rootObject exeption");
            e2.printStackTrace();
        }
    }

    public static int fromNative_GetGraphicSet() {
        return 0;
    }

    public static byte[] fromNative_GetIMEI() {
        Log.v("CC_Android fromNative_GetIMEI ", "/========== START ==========/");
        byte[] bytes = ZombieCafeAndroid.h.getBytes();
        Log.v("CC_Android fromNative_GetIMEI ", "/==========  END  ==========/");
        return bytes;
    }

    public static byte[] fromNative_GetProductID() {
        return ZombieCafeAndroid.m.getBytes();
    }

    public static Object fromNative_GetTrueTypeFont(String str, int i2) {
        Log.i("CapcomTrueTypeFont", "GetTrueTypeFont 1: " + str + "," + i2);
        TrueTypeFont trueTypeFont = null;
        try {
            trueTypeFont = TrueTypeFont.getInstance(o.getAssets(), str, i2);
        } catch (Exception e2) {
            Log.e("CapcomTrueTypeFont", "Unknown resource from: " + str);
        }
        Log.i("CapcomTrueTypeFont", "GetTrueTypeFont 2: " + str + "," + i2);
        return trueTypeFont;
    }

    public static void fromNative_HideFixWebView(int i2, int i3, boolean z) {
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putBoolean("force", z);
        ZombieCafeAndroid.runSystemThread(13111, bundle);
    }

    public static void fromNative_HideInfobar(int i2, int i3, boolean z) {
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putBoolean("force", z);
        ZombieCafeAndroid.runSystemThread(13052, bundle);
    }

    public static void fromNative_HideWebView() {
        ZombieCafeAndroid.runSystemThread(12354, new Bundle());
    }

    public static void fromNative_HideWebViewInfobar(int i2, int i3, boolean z) {
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putBoolean("force", z);
        ZombieCafeAndroid.runSystemThread(13101, bundle);
    }

    public static void fromNative_HideWebViewNickName() {
        Log.v("CC_Android fromNative_HideWebViewNickName ", "/========== START ==========/");
        ZombieCafeAndroid.runSystemThread(13005, new Bundle());
        Log.v("CC_Android fromNative_HideWebViewNickName ", "/==========  END  ==========/");
    }

    public static void fromNative_HideWebViewRanking(int i2, int i3, boolean z) {
        Log.v("CC_Android fromNative_HideWebViewRanking", "/========== START ==========/");
        Log.v("CC_Android fromNative_HideWebViewRanking", "x = " + i2 + " y = " + i3);
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putBoolean("force", z);
        ZombieCafeAndroid.runSystemThread(13111, bundle);
        Log.v("CC_Android fromNative_HideWebViewRanking", "/========== END ==========/");
    }

    public static boolean fromNative_IsConnected() {
        Log.d("fromNative", "Is Connected?");
        return ZombieCafeAndroid.isConnected();
    }

    public static boolean fromNative_IsOpenFixWebView() {
        return ZombieCafeAndroid.E != null;
    }

    public static void fromNative_JSONTakeOverDataParse(String str) throws JSONException {
        Log.v("CC_Android fromNative_JSONTakeOverDataParse", "/========== START ==========/");
        Log.v(" fromNative_JSONTakeOverDataParse = ", str);
        try {
            JSONObject jSONObject = new JSONObject(str);
            String string = jSONObject.getString("code");
            String string2 = jSONObject.getString("title");
            String string3 = jSONObject.getString("msg");
            String string4 = "";
            String string5 = "";
            int iIntValue = string != null ? Integer.valueOf(string).intValue() : 0;
            if (iIntValue < 200) {
                string4 = jSONObject.getString("pwd");
                string5 = jSONObject.getString("limittime");
            }
            if (o != null) {
                o.nativeJSONTakeOverDataParse(iIntValue, string2, string3, string4, string5);
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_JSONTakeOverDataParse", "/========== END ==========/");
    }

    public static void fromNative_JSONTakeOverDataParse2(String str) throws JSONException {
        Log.v("CC_Android fromNative_JSONTakeOverDataParse2", "/========== START ==========/");
        Log.v(" fromNative_JSONTakeOverDataParse2 = ", str);
        try {
            JSONObject jSONObject = new JSONObject(str);
            String string = jSONObject.getString("code");
            String string2 = jSONObject.getString("title");
            String string3 = jSONObject.getString("msg");
            int iIntValue = string != null ? Integer.valueOf(string).intValue() : 0;
            String string4 = iIntValue < 200 ? jSONObject.getString("transferid") : "";
            if (o != null) {
                o.nativeJSONTakeOverDataParse2(iIntValue, string2, string3, string4);
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_JSONTakeOverDataParse2", "/========== END ==========/");
    }

    public static void fromNative_LaunchCameraManager(String str) {
        o.LaunchCameraManager(str);
    }

    public static void fromNative_LaunchURL(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(12355, bundle);
    }

    public static void fromNative_LaunchURL2(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(12356, bundle);
    }

    public static void fromNative_LoadFBIconFromURL(String str, String str2, int i2) {
        Log.d("fromNative", "LoadFBIconFromURL");
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        bundle.putString("filename", str2);
        bundle.putInt("friendindex", i2);
        ZombieCafeAndroid.runSystemThread(13002, bundle);
    }

    public static void fromNative_LoadFromURL(String str, byte[] bArr) {
        Log.d("fromNative", "LoadFromURL->" + str);
        Log.d("fromNative", "LoadToLoc  ->" + bArr);
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        bundle.putByteArray("data", bArr);
    }

    public static void fromNative_LoadImageFromURL(String str, String str2, String str3, int i2) {
        Log.d("fromNative", "LoadImageFromURL - but really just a webpage");
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        bundle.putString("query", str2);
        bundle.putString("filename", str3);
        bundle.putInt("callback", i2);
        r rVar = new r(bundle.getString("url"), bundle.getString("query"), bundle.getString("filename"), bundle.getInt("callback"));
        if (rVar == null) {
            Log.d("LoadImageFromURL", "Failed!!!");
        } else {
            Log.d("LoadImageFromURL", "About To Execute");
            rVar.execute(new String[0]);
        }
    }

    public static boolean fromNative_LoggedIn() {
        return o.IsLoggedIn();
    }

    public static byte[] fromNative_MD5Data(byte[] bArr, int i2) {
        return o.md5Data(bArr, i2).getBytes();
    }

    public static byte[] fromNative_MD5String(String str) {
        return o.md5String(str).getBytes();
    }

    public static void fromNative_NewRequest(String str, String str2, int i2) {
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        bundle.putString("query", str2);
        bundle.putInt("callback", i2);
        Log.d("fromNative_NewRequest", str2);
        r rVar = new r(bundle.getString("url"), bundle.getString("query"), bundle.getInt("callback"));
        if (rVar == null) {
            Log.d("NewRequest", "Failed!!!");
        } else {
            Log.d("NewRequest", "About To Execute");
            rVar.execute(new String[0]);
        }
    }

    public static void fromNative_NickNameError() {
        Log.v("CC_Android fromNative_NickNameError ", "/========== START ==========/");
        ZombieCafeAndroid.runSystemThread(13007, new Bundle());
        Log.v("CC_Android fromNative_NickNameError ", "/==========  END  ==========/");
    }

    public static void fromNative_NickNameFaild() {
        Log.v("CC_Android fromNative_NickNameFaild ", "/========== START ==========/");
        ZombieCafeAndroid.runSystemThread(13006, new Bundle());
        Log.v("CC_Android fromNative_NickNameFaild ", "/==========  END  ==========/");
    }

    public static void fromNative_NickNameUpdatePage() {
        Log.v("CC_Android fromNative_NickNameUpdatePage", "/========== START ==========/");
        o.openNickNameEditPage();
        Log.v("CC_Android fromNative_NickNameUpdatePage", "/==========  END  ==========/");
    }

    public static void fromNative_OpenGooglePlay() {
        Log.v("YASUMURA", "JAVA side Open Google Play");
        o.openGooglePlay();
    }

    public static void fromNative_OpenSupportPage() {
        Log.v("YASUMURA", "JAVA side Open Support Page");
        o.openSupportPage();
    }

    public static void fromNative_PaypalButton(boolean z) {
        Bundle bundle = new Bundle();
        bundle.putBoolean("action", z);
        ZombieCafeAndroid.runSystemThread(12369, bundle);
    }

    public static void fromNative_ProgressBar(int i2) {
        o.ListFiles();
    }

    public static void fromNative_RankingGetGiftParse(String str) throws JSONException {
        Log.v("CC_Android fromNative_RankingGetGiftParse", "/========== START ==========/");
        String[] strArr = new String[14];
        int[] iArr = new int[14];
        int[] iArr2 = new int[14];
        int[] iArr3 = new int[14];
        int[] iArr4 = new int[14];
        String[] strArr2 = new String[14];
        int i2 = 0;
        try {
            JSONArray jSONArray = new JSONArray(str);
            int length = jSONArray.length();
            if (jSONArray != null && length != 0) {
                for (int i3 = 0; i3 < length; i3++) {
                    JSONObject jSONObject = jSONArray.getJSONObject(i3);
                    if (jSONObject != null) {
                        String string = jSONObject.getString("id");
                        String string2 = jSONObject.getString("category");
                        String string3 = jSONObject.getString("itemcategory");
                        String string4 = jSONObject.getString("itemid");
                        String string5 = jSONObject.getString("quantity");
                        String string6 = jSONObject.getString("message");
                        boolean z = true;
                        if (string != null) {
                            strArr[i2] = string;
                        } else {
                            strArr[i2] = "error";
                            z = false;
                        }
                        if (string2 != null) {
                            iArr[i2] = Integer.valueOf(string2).intValue();
                        } else {
                            iArr[i2] = 0;
                            z = false;
                        }
                        if (string3 != null) {
                            iArr2[i2] = Integer.valueOf(string3).intValue();
                        } else {
                            iArr2[i2] = 0;
                            z = false;
                        }
                        if (string4 != null) {
                            iArr3[i2] = Integer.valueOf(string4).intValue();
                        } else {
                            iArr3[i2] = 0;
                            z = false;
                        }
                        if (string5 != null) {
                            iArr4[i2] = Integer.valueOf(string5).intValue();
                        } else {
                            iArr4[i2] = 0;
                            z = false;
                        }
                        if (string6 != null) {
                            strArr2[i2] = string6;
                        } else {
                            strArr2[i2] = "error";
                            z = false;
                        }
                        if (z) {
                            i2++;
                        } else {
                            strArr[i2] = "error";
                            iArr[i2] = 0;
                            iArr2[i2] = 0;
                            iArr3[i2] = 0;
                            iArr4[i2] = 0;
                            strArr2[i2] = "error";
                        }
                    }
                }
                if (o != null) {
                    o.nativeRankingGetGiftParse(strArr, iArr, iArr2, iArr3, iArr4, strArr2, i2);
                }
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_EventGetGiftParse", "/==========  END  ==========/");
    }

    public static void fromNative_ReloadFixWebView(int i2, int i3, boolean z) {
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putBoolean("force", z);
        ZombieCafeAndroid.runSystemThread(13112, bundle);
    }

    public static void fromNative_SaveCRAMImage(byte[] bArr, int i2) {
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:2:0x0000. Please report as an issue. */
    public static void fromNative_SaveCRAMInfo(int i2, String str) {
        switch (i2) {
        }
    }

    public static void fromNative_Screenshot(String str) throws IOException {
        o.TakeScreenshot(str);
    }

    public static void fromNative_SendAppDriver(String str) {
        Log.v("CC_Android fromNative_sendAppDriver", "/========== START ==========/");
        o.sendAppDriver(str);
        Log.v("CC_Android fromNative_sendAppDriver", "/==========  END  ==========/");
    }

    public static void fromNative_SendEmail() {
        ZombieCafeAndroid.runSystemThread(12371, new Bundle());
    }

    public static void fromNative_SendNotification(int i2, String str, int i3, int i4) {
        ZombieCafeAndroid.sendNotification(i2, str, i3, i4);
    }

    public static void fromNative_SetPCostArr(int i2, String str) {
        k[i2] = str;
    }

    public static void fromNative_SetPNameArr(int i2, String str) {
        j[i2] = str;
    }

    public static void fromNative_ShowFixWebView(int i2, int i3, int i4, int i5, String str) {
        fromNative_ShowFixWebView(i2, i3, i4, i5, str, false, false);
    }

    public static void fromNative_ShowFixWebView(int i2, int i3, int i4, int i5, String str, boolean z, boolean z2) {
        Log.v("YASUMURA WV ", "JAVA fromNative_ShowFixWebView x = " + i2 + " y = " + i3 + " w = " + i4 + " h = " + i5 + " url = " + str);
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putInt("w", i4);
        bundle.putInt("h", i5);
        bundle.putString("url", str);
        bundle.putBoolean("displayHomeButton", z);
        bundle.putBoolean("afterOpenInfobar", z2);
        ZombieCafeAndroid.runSystemThread(13110, bundle);
    }

    public static void fromNative_ShowToast(String str) {
        Log.d("Show Toast Message", str);
        Bundle bundle = new Bundle();
        bundle.putString("text", str);
        ZombieCafeAndroid.runSystemThread(12346, bundle);
    }

    public static void fromNative_ShowWebView() {
        ZombieCafeAndroid.runSystemThread(12353, new Bundle());
    }

    public static void fromNative_ShowWebViewInfobar(int i2, int i3, int i4, int i5, String str) {
        Log.v("YASUMURA WV ", "JAVA fromNative_ShowWebViewInfobar x = " + i2 + " y = " + i3 + " w = " + i4 + " h = " + i5 + " url = " + str);
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putInt("w", i4);
        bundle.putInt("h", i5);
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(13100, bundle);
    }

    public static void fromNative_ShowWebViewNickName() {
        Log.v("CC_Android fromNative_ShowWebViewNickName ", "/========== START ==========/");
        ZombieCafeAndroid.runSystemThread(13003, new Bundle());
        Log.v("CC_Android fromNative_ShowWebViewNickName ", "/==========  END  ==========/");
    }

    public static void fromNative_ShowWebViewRanking(int i2, int i3, int i4, int i5, String str) {
        Log.v("CC_Android fromNative_ShowWebViewRanking", "/========== START ==========/");
        Log.v("CC_Android fromNative_ShowWebViewRanking", "x = " + i2 + " y = " + i3 + " w = " + i4 + " h = " + i5 + " url = " + str);
        Bundle bundle = new Bundle();
        bundle.putInt("x", i2);
        bundle.putInt("y", i3);
        bundle.putInt("w", i4);
        bundle.putInt("h", i5);
        bundle.putString("url", str);
        bundle.putBoolean("displayHomeButton", false);
        bundle.putBoolean("afterOpenInfobar", false);
        ZombieCafeAndroid.runSystemThread(13110, bundle);
        Log.v("CC_Android fromNative_ShowWebViewRanking", "/========== END ==========/");
    }

    public static boolean fromNative_SoundsLoaded() {
        return (ZombieCafeAndroid.ag == null || ZombieCafeAndroid.ah) ? false : true;
    }

    public static void fromNative_StartInfobar(String str) {
        Log.v("YASUMURA WV ", "JAVA fromNative_StartInfobar url = " + str);
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(13050, bundle);
    }

    public static void fromNative_StartInfobarOpen(String str) {
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(13053, bundle);
    }

    public static void fromNative_SurvivalCheckGiftParse(String str) throws JSONException {
        JSONObject jSONObject;
        Log.v("CC_Android fromNative_SurvivalCheckGiftParse", "/========== START ==========/");
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray != null && (jSONObject = jSONArray.getJSONObject(0)) != null) {
                String string = jSONObject.getString("kind");
                String string2 = jSONObject.getString("quantity");
                int iIntValue = string != null ? Integer.valueOf(string).intValue() : 0;
                int iIntValue2 = string2 != null ? Integer.valueOf(string2).intValue() : 0;
                if (o != null) {
                    o.nativeSurvivalCheckGiftParse(iIntValue, iIntValue2);
                }
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_SurvivalCheckGiftParse", "/==========  END  ==========/");
    }

    public static void fromNative_SurvivalGetGiftParse(String str) throws JSONException {
        JSONObject jSONObject;
        Log.v("CC_Android fromNative_SurvivalGetGiftParse", "/========== START ==========/");
        try {
            JSONArray jSONArray = new JSONArray(str);
            if (jSONArray != null && (jSONObject = jSONArray.getJSONObject(0)) != null) {
                String string = jSONObject.getString("id");
                String string2 = jSONObject.getString("hiveid");
                String string3 = jSONObject.getString("appcode");
                String string4 = jSONObject.getString("eventid");
                String string5 = jSONObject.getString("fPosition");
                String string6 = jSONObject.getString("span");
                String string7 = jSONObject.getString("kind");
                String string8 = jSONObject.getString("item_id");
                String string9 = jSONObject.getString("zombielvl");
                String string10 = jSONObject.getString("zombility");
                String string11 = jSONObject.getString("quantity");
                int iIntValue = string != null ? Integer.valueOf(string).intValue() : 0;
                int iIntValue2 = string2 != null ? Integer.valueOf(string2).intValue() : 0;
                if (string3 == null) {
                    string3 = "error";
                }
                int iIntValue3 = string4 != null ? Integer.valueOf(string4).intValue() : 0;
                int iIntValue4 = string5 != null ? Integer.valueOf(string5).intValue() : 0;
                int iIntValue5 = string6 != null ? Integer.valueOf(string6).intValue() : 0;
                int iIntValue6 = string7 != null ? Integer.valueOf(string7).intValue() : 0;
                int iIntValue7 = string8 != null ? Integer.valueOf(string8).intValue() : 0;
                int iIntValue8 = string9 != null ? Integer.valueOf(string9).intValue() : 0;
                int iIntValue9 = string10 != null ? Integer.valueOf(string10).intValue() : 0;
                int iIntValue10 = string11 != null ? Integer.valueOf(string11).intValue() : 0;
                if (o != null) {
                    o.nativeSurvivalGetGiftParse(iIntValue, iIntValue2, string3, iIntValue3, iIntValue4, iIntValue5, iIntValue6, iIntValue7, iIntValue8, iIntValue9, iIntValue10);
                }
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_SurvivalGetGiftParse", "/==========  END  ==========/");
    }

    public static void fromNative_SurvivalParse(String str) throws JSONException {
        JSONObject jSONObject;
        boolean z;
        int iIntValue;
        JSONArray jSONArray;
        Log.v("CC_Android fromNative_SurvivalParse", "/========== START ==========/");
        boolean z2 = false;
        int[] iArr = new int[0];
        int[] iArr2 = new int[0];
        int[] iArr3 = new int[0];
        int[] iArr4 = new int[0];
        int i2 = 0;
        int[] iArr5 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        try {
            JSONArray jSONArray2 = new JSONArray(str);
            if (jSONArray2 != null && (jSONObject = jSONArray2.getJSONObject(0)) != null) {
                JSONObject jSONObject2 = jSONObject.getJSONObject("survival");
                if (jSONObject2 != null) {
                    z = true;
                    int iIntValue2 = Integer.valueOf(jSONObject2.getString("eventid")).intValue();
                    iIntValue = Integer.valueOf(jSONObject2.getString("status")).intValue();
                    jSONObject2.getString("title");
                    jSONObject2.getString("description");
                    int iIntValue3 = Integer.valueOf(jSONObject2.getString("theme")).intValue();
                    int iIntValue4 = Integer.valueOf(jSONObject2.getString("start")).intValue();
                    int iIntValue5 = Integer.valueOf(jSONObject2.getString("end")).intValue();
                    int iIntValue6 = Integer.valueOf(jSONObject2.getString("interval_time")).intValue();
                    int iIntValue7 = Integer.valueOf(jSONObject2.getString("position")).intValue();
                    int iIntValue8 = Integer.valueOf(jSONObject2.getString("butcher")).intValue();
                    int iIntValue9 = Integer.valueOf(jSONObject2.getString("totalbutcher")).intValue();
                    int iIntValue10 = Integer.valueOf(jSONObject2.getString("span")).intValue();
                    iArr5[0] = iIntValue2;
                    iArr5[1] = iIntValue;
                    iArr5[2] = iIntValue3;
                    iArr5[3] = iIntValue4;
                    iArr5[4] = iIntValue5;
                    iArr5[5] = iIntValue6;
                    iArr5[6] = iIntValue7;
                    iArr5[7] = iIntValue8;
                    iArr5[8] = iIntValue9;
                    iArr5[9] = iIntValue10;
                } else {
                    z = false;
                    iIntValue = 0;
                }
                if (iIntValue == 1 && (jSONArray = jSONObject.getJSONArray("milestones")) != null) {
                    iArr = new int[jSONArray.length()];
                    iArr2 = new int[jSONArray.length()];
                    iArr3 = new int[jSONArray.length()];
                    iArr4 = new int[jSONArray.length()];
                    String[] strArr = new String[jSONArray.length()];
                    for (int i3 = 0; i3 < jSONArray.length(); i3++) {
                        JSONObject jSONObject3 = jSONArray.getJSONObject(i3);
                        iArr[i3] = Integer.valueOf(jSONObject3.getString("milestone")).intValue();
                        iArr2[i3] = Integer.valueOf(jSONObject3.getString("kind")).intValue();
                        iArr3[i3] = Integer.valueOf(jSONObject3.getString("itemid")).intValue();
                        iArr4[i3] = Integer.valueOf(jSONObject3.getString("quantity")).intValue();
                        strArr[i3] = jSONObject3.getString("message");
                        i2++;
                    }
                }
                if (o != null) {
                    o.nativeSurvivalParse(iArr5, iArr, iArr2, iArr3, iArr4, i2);
                }
                z2 = z;
            }
            if (!z2) {
                int iIntValue11 = 0;
                JSONObject jSONObject4 = jSONArray2.getJSONObject(0);
                if (jSONObject4 != null) {
                    String string = jSONObject4.getString("status");
                    iIntValue11 = string != null ? Integer.valueOf(string).intValue() : 0;
                }
                o.nativeSurvivalParse2(iIntValue11);
            }
        } catch (JSONException e2) {
            e2.printStackTrace();
        }
        Log.v("CC_Android fromNative_SurvivalParse", "/==========  END  ==========/");
    }

    public static boolean fromNative_URLRequest(String str) {
        Log.d("fromNative", "URLRequest");
        Bundle bundle = new Bundle();
        bundle.putString("url", str);
        ZombieCafeAndroid.runSystemThread(12357, bundle);
        return true;
    }

    public static void fromNative_UpdateWidget(int i2, String str) {
    }

    public static void fromNative_VanityKeyboard() {
        o.showKeyboard();
    }

    public static void fromNative_createGatyaTest(String str) {
        File externalStorageDirectory = Environment.getExternalStorageDirectory();
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM", "yokota");
        File file = new File(new File(String.valueOf(externalStorageDirectory.getAbsolutePath()) + "/Android/temp.txt").getParent());
        if (!file.exists()) {
            file.mkdir();
        }
        File file2 = new File(new File(String.valueOf(externalStorageDirectory.getAbsolutePath()) + "/Android/data/temp.txt").getParent());
        if (!file2.exists()) {
            file2.mkdir();
        }
        File file3 = new File(String.valueOf(externalStorageDirectory.getAbsolutePath()) + "/Android/data/" + o.getApplicationContext().getPackageName() + "/test.txt");
        File file4 = new File(file3.getParent());
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-sd", externalStorageDirectory.getAbsolutePath());
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-file", file3.getAbsolutePath());
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-file", file3.getName());
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-dire", file4.getName());
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-dire", file4.getAbsolutePath());
        if (file4.exists()) {
            return;
        }
        Log.v("ZombieCafeAndroidfromNative_createGatyaTestGCM-1", o.getApplicationContext().getPackageName());
        file4.mkdir();
    }

    public static void fromNative_dismissDialogNoClick() {
        Log.d("DismissDialog", "????");
    }

    public static boolean fromNative_doesFileExist(String str) throws IOException {
        int iAvailable;
        try {
            if (str.contains(".smurfmap") || str.contains(".smurfsmap") || str.contains(".dat") || str.contains(".jpg") || str.contains(".caf") || str.contains("2011") || str.contains("2012") || str.contains("2013") || str.contains(".mkt") || str.contains(".crmhvr")) {
                Log.e("DoesFileExist OUR RESOURCES", str);
                FileInputStream fileInputStreamOpenFileInput = o.openFileInput(str);
                iAvailable = fileInputStreamOpenFileInput.available();
                fileInputStreamOpenFileInput.close();
                Log.e("doesFileExist1=" + iAvailable, "GRRR");
            } else {
                Log.e("DoesFileExist ANDROID ASSETS", str);
                AssetFileDescriptor assetFileDescriptorOpenFd = o.getAssets().openFd(str);
                iAvailable = (int) assetFileDescriptorOpenFd.getLength();
                Log.d("NATIVEFILEEXIST=" + str, "Length=" + iAvailable);
                assetFileDescriptorOpenFd.close();
                Log.v("doesFileExist2=" + iAvailable, str);
            }
            return ((long) iAvailable) != -1;
        } catch (Exception e2) {
            return false;
        }
    }

    public static boolean fromNative_fileAppend(String str, int i2, int i3, byte[] bArr) throws IOException {
        try {
            FileOutputStream fileOutputStreamOpenFileOutput = o.openFileOutput(str, 0);
            fileOutputStreamOpenFileOutput.getChannel().position(i2);
            fileOutputStreamOpenFileOutput.write(bArr, 0, i3);
            fileOutputStreamOpenFileOutput.close();
            return true;
        } catch (Exception e2) {
            e2.printStackTrace();
            return false;
        }
    }

    public static boolean fromNative_fileDelete(String str) {
        try {
            File file = new File(o.getFilesDir(), str);
            if (file.exists()) {
                if (file.delete()) {
                    return true;
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return false;
    }

    public static int fromNative_fileGetSize(String str) throws IOException {
        int iAvailable;
        try {
            if (str.contains(".smurfmap") || str.contains(".smurfsmap") || str.contains(".dat") || str.contains(".jpg") || str.contains(".caf") || str.contains("2011") || str.contains("2012") || str.contains("2013") || str.contains(".mkt") || str.contains(".crmhvr")) {
                FileInputStream fileInputStreamOpenFileInput = o.openFileInput(str);
                iAvailable = fileInputStreamOpenFileInput.available();
                fileInputStreamOpenFileInput.close();
            } else {
                AssetFileDescriptor assetFileDescriptorOpenFd = o.getAssets().openFd(str);
                iAvailable = (int) assetFileDescriptorOpenFd.getLength();
                assetFileDescriptorOpenFd.close();
            }
            if (iAvailable == -1) {
                return -1;
            }
            return iAvailable;
        } catch (Exception e2) {
            return -1;
        }
    }

    public static byte[] fromNative_fileRead(String str) throws IOException {
        byte[] bArr = null;
        try {
            if (str.contains(".smurfmap") || str.contains(".smurfsmap") || str.contains(".dat") || str.contains(".jpg") || str.contains(".caf") || str.contains("2011") || str.contains("2012") || str.contains("2013") || str.contains(".mkt") || str.contains(".crmhvr")) {
                FileInputStream fileInputStreamOpenFileInput = o.openFileInput(str);
                byte[] bArr2 = new byte[fileInputStreamOpenFileInput.available()];
                if (bArr2 == null) {
                    Log.v("FILE READ ERROR", "NO MEMORY");
                } else {
                    fileInputStreamOpenFileInput.read(bArr2);
                    fileInputStreamOpenFileInput.close();
                    bArr = bArr2;
                }
            } else {
                AssetFileDescriptor assetFileDescriptorOpenFd = o.getAssets().openFd(str);
                int length = (int) assetFileDescriptorOpenFd.getLength();
                assetFileDescriptorOpenFd.close();
                InputStream inputStreamOpen = o.getAssets().open(str);
                byte[] bArr3 = new byte[length];
                if (bArr3 == null) {
                    Log.v("FILE READ ERROR2", "NO MEMORY");
                } else {
                    inputStreamOpen.read(bArr3);
                    inputStreamOpen.close();
                    bArr = bArr3;
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        return bArr;
    }

    public static void fromNative_fileRename(String str, String str2) {
        try {
            Log.d("RENAME:" + str, "TO" + str2);
            if (new File(o.getFilesDir(), str).renameTo(new File(o.getFilesDir(), str2))) {
                Log.d("SUCCESS!", "FILE RENAMED");
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    public static boolean fromNative_fileWrite(String str, int i2, int i3, byte[] bArr) {
        try {
            FileOutputStream fileOutputStreamOpenFileOutput = o.openFileOutput(str, 0);
            fileOutputStreamOpenFileOutput.getChannel().position(i2);
            fileOutputStreamOpenFileOutput.write(bArr, 0, i3);
            fileOutputStreamOpenFileOutput.close();
            return true;
        } catch (Exception e2) {
            e2.printStackTrace();
            return false;
        }
    }

    public static void fromNative_freeDialog() {
        Log.d("FreeDialog", "???");
    }

    public static void fromNative_freeSound() throws IllegalStateException {
        if (ZombieCafeAndroid.ag != null) {
            for (int i2 = 0; i2 < e; i2++) {
                c.stop();
                c.release();
            }
        }
        for (int i3 = 0; i3 < f; i3++) {
            d[i3].stop();
            d[i3].release();
        }
    }

    public static void fromNative_initDialog(int i2, String str, String str2, String str3, String str4) {
        Log.d("Dialog", "Title=" + str);
        Bundle bundle = new Bundle();
        bundle.putInt("type", i2);
        bundle.putString("title", str);
        bundle.putString("message", str2);
        bundle.putString("button1", str3);
        bundle.putString("button2", str4);
        ZombieCafeAndroid.runSystemThread(12359, bundle);
    }

    public static void fromNative_initDialogNoCallBack(String str, String str2, String str3) {
        Log.d("DialogCallback", "Title=" + str);
        Bundle bundle = new Bundle();
        bundle.putString("title", str);
        bundle.putString("message", str2);
        bundle.putString("button", str3);
        ZombieCafeAndroid.runSystemThread(12358, bundle);
    }

    public static boolean fromNative_initSound(int i2, int i3, boolean z) {
        e = i2;
        f = i3;
        return true;
    }

    public static boolean fromNative_isEffectPlaying(int i2) {
        return true;
    }

    public static boolean fromNative_isMusicPlaying(int i2) {
        if (f66a) {
            Log.d("fromNative_isMusicPlaying", "NOMUSIC");
            return false;
        }
        if (d == null) {
            Log.d("fromNative_isMusicPlaying", "mMusics == null");
            return false;
        }
        if (d[i2] != null) {
            return d[i2].isPlaying();
        }
        Log.d("fromNative_isMusicPlaying", "mMusics[" + i2 + "] == null");
        return false;
    }

    public static void fromNative_launchEnterMigrationPasswordActiviy() {
        if (o != null) {
            Log.v("fromNative_launchEnterMigrationPasswordActiviy", " --START--");
            ZombieCafeAndroid.runSystemThread(13400, null);
        }
    }

    public static void fromNative_loadAndPlayMusic(int i2, int i3, float f2, boolean z) throws IllegalStateException, IOException, IllegalArgumentException {
        Log.d("fromNative_loadAndPlay", "musicid = " + i3);
        ZombieCafeAndroid.x.ai = i3;
        fromNative_stopMusic(i2);
        fromNative_unloadMusic(i2);
        fromNative_loadMusic(i2, ZombieCafeAndroid.x.GetMusicFilename(ZombieCafeAndroid.x.ai));
        fromNative_loopMusic(i2, z);
        fromNative_startMusic(i2);
    }

    public static boolean fromNative_loadEffect(int i2, String str) {
        if (b) {
            return false;
        }
        if (g[i2] != null && g[i2] == str) {
            return true;
        }
        g[i2] = str;
        Log.d("SOUND: LOAD", "FILENAME: " + str + " ID=" + Integer.toString(i2));
        return true;
    }

    public static boolean fromNative_loadMusic(int i2, String str) throws IllegalStateException, IOException, IllegalArgumentException {
        if (f66a || str == "") {
            return false;
        }
        if (str.contains(".mp3")) {
            str = str.replace(".mp3", ".ogg");
        }
        if (d == null) {
            System.out.println("mMusics == null");
            return false;
        }
        System.out.println("mMusics != null");
        if (h[i2] != null && h[i2] == str) {
            if (d[i2] != null) {
                try {
                    d[i2].prepare();
                    d[i2].setLooping(false);
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
                System.out.println("music already exists");
                return true;
            }
            System.out.println("mMusics[id] == null");
        }
        try {
            if (d[i2] != null) {
                System.out.println("mMusics[id] != null");
                if (d[i2].isPlaying()) {
                    d[i2].stop();
                }
                d[i2].release();
                d[i2] = null;
                h[i2] = null;
            } else {
                System.out.println("mMusics[id] == null");
            }
        } catch (Exception e3) {
            e3.printStackTrace();
        }
        h[i2] = str;
        if (str.contains(".wav")) {
            str = "sounds/" + str;
        }
        if (str.contains(".mp3") || str.contains(".ogg")) {
            if (str.contains(".mp3")) {
                str = str.replace(".mp3", ".ogg");
            }
            str = "Music/" + str;
        }
        System.out.println("filename: " + str);
        try {
            d[i2] = new MediaPlayer();
            AssetFileDescriptor assetFileDescriptorOpenFd = o.getAssets().openFd(str);
            if (((int) assetFileDescriptorOpenFd.getLength()) == -1) {
                System.out.println("There's no file");
            }
            d[i2].setDataSource(assetFileDescriptorOpenFd.getFileDescriptor(), assetFileDescriptorOpenFd.getStartOffset(), assetFileDescriptorOpenFd.getLength());
            d[i2].prepare();
            d[i2].setLooping(true);
            d[i2].setVolume(n, n);
            assetFileDescriptorOpenFd.close();
            return true;
        } catch (Exception e4) {
            e4.printStackTrace();
            d[i2] = null;
            h[i2] = null;
            return false;
        }
    }

    public static int[] fromNative_loadTexture(String str, boolean z) throws IOException {
        Log.d("fromNative_loadTexture", "function called");
        FileInputStream fileInputStreamOpenFileInput = null;
        int[] iArr = new int[6];
        for (int i2 = 0; i2 < 6; i2++) {
            iArr[i2] = 0;
        }
        try {
            try {
                fileInputStreamOpenFileInput = o.openFileInput(str);
                Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(fileInputStreamOpenFileInput);
                int iCCNextPO2 = CCNextPO2(bitmapDecodeStream.getWidth());
                int iCCNextPO22 = CCNextPO2(bitmapDecodeStream.getHeight());
                Log.d("fromNative_loadTexture", "1");
                iArr[0] = iCCNextPO2;
                iArr[1] = iCCNextPO22;
                iArr[2] = 1;
                iArr[4] = bitmapDecodeStream.getWidth();
                iArr[5] = bitmapDecodeStream.getHeight();
                Log.d("fromNative_loadTexture", "2: w:" + iArr[0] + " h:" + iArr[1] + " bitmapWidth:" + iArr[4] + " bitmapHeight:" + iArr[5]);
                Bitmap bitmapCreateBitmap = z ? Bitmap.createBitmap(iCCNextPO2, iCCNextPO22, Bitmap.Config.ARGB_8888) : Bitmap.createBitmap(iCCNextPO2, iCCNextPO22, Bitmap.Config.ARGB_4444);
                Log.d("fromNative_loadTexture", "3");
                Canvas canvas = new Canvas(bitmapCreateBitmap);
                Log.d("fromNative_loadTexture", "3.5");
                canvas.drawBitmap(bitmapDecodeStream, 0.0f, 0.0f, new Paint());
                Log.d("fromNative_loadTexture", "4");
                iArr[3] = generateTexture(bitmapCreateBitmap);
                Log.d("fromNative_loadTexture", "5:" + iArr[3]);
                bitmapCreateBitmap.recycle();
                Log.d("fromNative_loadTexture", "6");
                bitmapDecodeStream.recycle();
                Log.d("fromNative_loadTexture", "7");
            } catch (Exception e2) {
                e2.printStackTrace();
                Log.d("fromNative_loadTexture", "Exception occured");
                try {
                    fileInputStreamOpenFileInput.close();
                } catch (Exception e3) {
                    e3.printStackTrace();
                }
                Log.d("fromNative_loadTexture", "done");
            }
            for (int i3 = 0; i3 < 6; i3++) {
                Log.d("fromNative_loadTexture", "ret[" + i3 + "] == " + iArr[i3]);
            }
            return iArr;
        } finally {
            try {
                fileInputStreamOpenFileInput.close();
            } catch (Exception e4) {
                e4.printStackTrace();
            }
            Log.d("fromNative_loadTexture", "done");
        }
    }

    public static boolean fromNative_loopMusic(int i2, boolean z) {
        if (f66a || d == null || d[i2] == null) {
            return false;
        }
        try {
            Log.d("fromNative_loopMusic", "mMusics[" + i2 + "].setLooping(" + z + ")");
            d[i2].setLooping(z);
            return true;
        } catch (Exception e2) {
            Log.d("fromNative_loopMusic", "Error!!!!!!");
            e2.printStackTrace();
            return false;
        }
    }

    public static boolean fromNative_pauseMusic(int i2) {
        if (f66a || d == null || d[i2] == null) {
            return false;
        }
        if (d[i2].isPlaying()) {
            try {
                d[i2].pause();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return true;
    }

    public static boolean fromNative_setEffectVolume(int i2, float f2) {
        return !b;
    }

    public static boolean fromNative_setMusicLoop(int i2, boolean z) {
        if (f66a) {
            return false;
        }
        if (d == null) {
            System.out.println("mMusic is null");
            return false;
        }
        if (d[i2] == null) {
            System.out.println("mMusics[" + i2 + "] is null");
            return false;
        }
        d[i2].setLooping(z);
        return true;
    }

    public static boolean fromNative_setMusicVolume(int i2, float f2) {
        if (f66a || d == null || d[i2] == null) {
            return false;
        }
        d[i2].setVolume(f2, f2);
        return true;
    }

    public static void fromNative_showDialog() {
        Log.d("ShowDialog", "????");
    }

    public static boolean fromNative_startEffect(int i2) throws IllegalStateException, IOException, IllegalArgumentException {
        Log.d("SOUND: START", "ID: " + Integer.toString(i2));
        if (b) {
            return false;
        }
        try {
            Log.d("SOUND: START", "FILENAME: " + g[i2]);
            if (m != i2) {
                m = i2;
                String str = g[i2];
                if (str.contains(".ogg")) {
                    str = "sounds/" + str;
                }
                Log.d("SOUND: START", "FILENAME: " + str);
                if (c != null) {
                    if (c.isPlaying()) {
                        if (Build.VERSION.SDK_INT >= 19) {
                            Log.d("OS ver = ", new StringBuilder().append(Build.VERSION.SDK_INT).toString());
                        } else {
                            c.stop();
                            Log.d("OS ver = ", new StringBuilder().append(Build.VERSION.SDK_INT).toString());
                        }
                    }
                    c.release();
                    c = null;
                }
                c = new MediaPlayer();
                AssetFileDescriptor assetFileDescriptorOpenFd = o.getAssets().openFd(str);
                c.setDataSource(assetFileDescriptorOpenFd.getFileDescriptor(), assetFileDescriptorOpenFd.getStartOffset(), assetFileDescriptorOpenFd.getLength());
                c.prepare();
                c.setLooping(false);
                assetFileDescriptorOpenFd.close();
            }
            c.seekTo(0);
            c.start();
            return true;
        } catch (Exception e2) {
            try {
                e2.printStackTrace();
                return false;
            } catch (Exception e3) {
                e3.printStackTrace();
                return false;
            }
        }
    }

    public static boolean fromNative_startMusic(int i2) {
        if (f66a) {
            return false;
        }
        System.out.println("fromNative_startMusic id:" + i2);
        if (d == null) {
            Log.d("fromNative_startMusic", "mMusics == null");
            return false;
        }
        if (d[i2] == null) {
            Log.d("fromNative_startMusic", "mMusics[" + i2 + "] == null");
            return false;
        }
        try {
            Log.d("fromNative_startMusic", "mMusics[" + i2 + "].start()");
            d[i2].start();
            return true;
        } catch (Exception e2) {
            Log.d("fromNative_startMusic", "Error!!!!!!");
            e2.printStackTrace();
            return false;
        }
    }

    public static boolean fromNative_stopEffect(int i2) throws IllegalStateException, IOException {
        if (b) {
            return true;
        }
        if (c == null) {
            return false;
        }
        if (m != i2) {
            return true;
        }
        c.stop();
        try {
            c.prepare();
            return true;
        } catch (IOException e2) {
            e2.printStackTrace();
            return true;
        }
    }

    public static boolean fromNative_stopMusic(int i2) {
        fromNative_pauseMusic(i2);
        return true;
    }

    public static boolean fromNative_unloadEffect(int i2) {
        return true;
    }

    public static boolean fromNative_unloadMusic(int i2) {
        if (f66a) {
            return false;
        }
        try {
        } catch (Exception e2) {
            e2.printStackTrace();
            d[i2] = null;
            h[i2] = null;
        }
        if (d == null) {
            System.out.println("mMusic == null");
            return false;
        }
        if (d[i2] != null) {
            d[i2].release();
            d[i2] = null;
            h[i2] = null;
        }
        return true;
    }

    public static int generateTexture(Bitmap bitmap) {
        int[] iArr = new int[1];
        Log.d("generateTexture", "0");
        i.glGenTextures(1, iArr, 0);
        Log.d("generateTexture", "1");
        i.glBindTexture(3553, iArr[0]);
        Log.d("generateTexture", "2");
        i.glTexParameterf(3553, 10241, 9728.0f);
        i.glTexParameterf(3553, 10240, 9728.0f);
        Log.d("generateTexture", "3");
        i.glTexParameterf(3553, 10242, 10497.0f);
        i.glTexParameterf(3553, 10243, 10497.0f);
        Log.d("generateTexture", "4");
        GLUtils.texImage2D(3553, 0, bitmap, 0);
        Log.d("generateTexture", "5");
        return iArr[0];
    }

    public void getGLObj() {
        i = o.getGlObj();
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public void onCompletion(MediaPlayer mediaPlayer) {
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public void onPrepared(MediaPlayer mediaPlayer) {
    }
}
