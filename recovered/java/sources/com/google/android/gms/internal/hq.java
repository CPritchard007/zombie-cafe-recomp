package com.google.android.gms.internal;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.pm.ResolveInfo;
import android.graphics.Rect;
import android.net.Uri;
import android.net.UrlQuerySanitizer;
import android.os.Build;
import android.os.Bundle;
import android.view.Window;
import android.webkit.WebSettings;
import android.webkit.WebView;
import com.google.android.gms.ads.AdActivity;
import java.io.IOException;
import java.math.BigInteger;
import java.net.HttpURLConnection;
import java.nio.CharBuffer;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class hq {
    private static String c;

    /* renamed from: a, reason: collision with root package name */
    private static final Object f412a = new Object();
    private static boolean b = true;
    private static boolean d = false;

    private static String a(Context context, String str) {
        String str2;
        synchronized (f412a) {
            if (c != null) {
                str2 = c;
            } else {
                if (Build.VERSION.SDK_INT >= 17) {
                    c = ic.a(context);
                } else if (Cif.b()) {
                    c = e(context);
                } else {
                    Cif.f427a.post(new hs(context));
                    while (c == null) {
                        try {
                            f412a.wait();
                        } catch (InterruptedException e) {
                            str2 = c;
                        }
                    }
                }
                c += " (Mobile; " + str + ")";
                str2 = c;
            }
        }
        return str2;
    }

    public static String a(Readable readable) throws IOException {
        StringBuilder sb = new StringBuilder();
        CharBuffer charBufferAllocate = CharBuffer.allocate(2048);
        while (true) {
            int i = readable.read(charBufferAllocate);
            if (i == -1) {
                return sb.toString();
            }
            charBufferAllocate.flip();
            sb.append((CharSequence) charBufferAllocate, 0, i);
        }
    }

    public static String a(String str) {
        return Uri.parse(str).buildUpon().query(null).build().toString();
    }

    public static Map a(Uri uri) {
        if (uri == null) {
            return null;
        }
        HashMap map = new HashMap();
        UrlQuerySanitizer urlQuerySanitizer = new UrlQuerySanitizer();
        urlQuerySanitizer.setAllowUnregisteredParamaters(true);
        urlQuerySanitizer.setUnregisteredParameterValueSanitizer(UrlQuerySanitizer.getAllButNulLegal());
        urlQuerySanitizer.parseUrl(uri.toString());
        for (UrlQuerySanitizer.ParameterValuePair parameterValuePair : urlQuerySanitizer.getParameterList()) {
            map.put(parameterValuePair.mParameter, parameterValuePair.mValue);
        }
        return map;
    }

    private static JSONArray a(Collection collection) {
        JSONArray jSONArray = new JSONArray();
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            a(jSONArray, it.next());
        }
        return jSONArray;
    }

    static JSONArray a(Object[] objArr) {
        JSONArray jSONArray = new JSONArray();
        for (Object obj : objArr) {
            a(jSONArray, obj);
        }
        return jSONArray;
    }

    private static JSONObject a(Bundle bundle) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        for (String str : bundle.keySet()) {
            a(jSONObject, str, bundle.get(str));
        }
        return jSONObject;
    }

    public static JSONObject a(Map map) throws JSONException {
        try {
            JSONObject jSONObject = new JSONObject();
            for (String str : map.keySet()) {
                a(jSONObject, str, map.get(str));
            }
            return jSONObject;
        } catch (ClassCastException e) {
            throw new JSONException("Could not convert map to JSON: " + e.getMessage());
        }
    }

    public static void a(Context context, String str, WebSettings webSettings) {
        webSettings.setUserAgentString(a(context, str));
    }

    public static void a(Context context, String str, List list) {
        Iterator it = list.iterator();
        while (it.hasNext()) {
            new id(context, str, (String) it.next()).e();
        }
    }

    public static void a(Context context, String str, boolean z, HttpURLConnection httpURLConnection) {
        httpURLConnection.setConnectTimeout(60000);
        httpURLConnection.setInstanceFollowRedirects(z);
        httpURLConnection.setReadTimeout(60000);
        httpURLConnection.setRequestProperty("User-Agent", a(context, str));
        httpURLConnection.setUseCaches(false);
    }

    public static void a(WebView webView) {
        if (Build.VERSION.SDK_INT >= 11) {
            ia.a(webView);
        }
    }

    private static void a(JSONArray jSONArray, Object obj) {
        if (obj instanceof Bundle) {
            jSONArray.put(a((Bundle) obj));
            return;
        }
        if (obj instanceof Map) {
            jSONArray.put(a((Map) obj));
            return;
        }
        if (obj instanceof Collection) {
            jSONArray.put(a((Collection) obj));
        } else if (obj instanceof Object[]) {
            jSONArray.put(a((Object[]) obj));
        } else {
            jSONArray.put(obj);
        }
    }

    private static void a(JSONObject jSONObject, String str, Object obj) throws JSONException {
        if (obj instanceof Bundle) {
            jSONObject.put(str, a((Bundle) obj));
            return;
        }
        if (obj instanceof Map) {
            jSONObject.put(str, a((Map) obj));
            return;
        }
        if (obj instanceof Collection) {
            if (str == null) {
                str = "null";
            }
            jSONObject.put(str, a((Collection) obj));
        } else if (obj instanceof Object[]) {
            jSONObject.put(str, a(Arrays.asList((Object[]) obj)));
        } else {
            jSONObject.put(str, obj);
        }
    }

    public static boolean a() {
        return b;
    }

    public static boolean a(Context context) {
        boolean z;
        Intent intent = new Intent();
        intent.setClassName(context, AdActivity.CLASS_NAME);
        ResolveInfo resolveInfoResolveActivity = context.getPackageManager().resolveActivity(intent, 65536);
        if (resolveInfoResolveActivity == null || resolveInfoResolveActivity.activityInfo == null) {
            ig.e("Could not find com.google.android.gms.ads.AdActivity, please make sure it is declared in AndroidManifest.xml.");
            return false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 16) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "keyboard"));
            z = false;
        } else {
            z = true;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 32) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "keyboardHidden"));
            z = false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 128) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "orientation"));
            z = false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 256) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "screenLayout"));
            z = false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 512) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "uiMode"));
            z = false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 1024) == 0) {
            ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "screenSize"));
            z = false;
        }
        if ((resolveInfoResolveActivity.activityInfo.configChanges & 2048) != 0) {
            return z;
        }
        ig.e(String.format("com.google.android.gms.ads.AdActivity requires the android:configChanges value to contain \"%s\".", "smallestScreenSize"));
        return false;
    }

    public static boolean a(PackageManager packageManager, String str, String str2) {
        return packageManager.checkPermission(str2, str) == 0;
    }

    public static boolean a(ClassLoader classLoader, Class cls, String str) {
        try {
            return cls.isAssignableFrom(Class.forName(str, false, classLoader));
        } catch (Throwable th) {
            return false;
        }
    }

    public static int b() {
        return Build.VERSION.SDK_INT >= 9 ? 6 : 0;
    }

    public static void b(Context context) {
        if (d) {
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.USER_PRESENT");
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        context.getApplicationContext().registerReceiver(new hu(null), intentFilter);
        d = true;
    }

    public static void b(WebView webView) {
        if (Build.VERSION.SDK_INT >= 11) {
            ia.b(webView);
        }
    }

    public static int c() {
        return Build.VERSION.SDK_INT >= 9 ? 7 : 1;
    }

    public static int c(Context context) {
        int i;
        int top = 0;
        if (context instanceof Activity) {
            Window window = ((Activity) context).getWindow();
            Rect rect = new Rect();
            window.getDecorView().getWindowVisibleDisplayFrame(rect);
            i = rect.top;
            top = window.findViewById(R.id.content).getTop() - i;
        } else {
            i = 0;
        }
        return top + i;
    }

    public static String d() throws NoSuchAlgorithmException {
        UUID uuidRandomUUID = UUID.randomUUID();
        byte[] byteArray = BigInteger.valueOf(uuidRandomUUID.getLeastSignificantBits()).toByteArray();
        byte[] byteArray2 = BigInteger.valueOf(uuidRandomUUID.getMostSignificantBits()).toByteArray();
        String string = new BigInteger(1, byteArray).toString();
        for (int i = 0; i < 2; i++) {
            try {
                MessageDigest messageDigest = MessageDigest.getInstance("MD5");
                messageDigest.update(byteArray);
                messageDigest.update(byteArray2);
                byte[] bArr = new byte[8];
                System.arraycopy(messageDigest.digest(), 0, bArr, 0, 8);
                string = new BigInteger(1, bArr).toString();
            } catch (NoSuchAlgorithmException e) {
            }
        }
        return string;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String e(Context context) {
        return new WebView(context).getSettings().getUserAgentString();
    }
}
