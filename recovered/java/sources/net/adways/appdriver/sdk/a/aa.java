package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.io.UnsupportedEncodingException;
import java.lang.ref.WeakReference;
import java.net.URLEncoder;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.List;
import java.util.SortedMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class aa {

    /* renamed from: a, reason: collision with root package name */
    private final WeakReference f608a;

    public aa(Context context) {
        this.f608a = new WeakReference(context);
    }

    public static String a(String str) throws NoSuchAlgorithmException {
        StringBuilder sb = new StringBuilder();
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            for (byte b : bArrDigest) {
                String hexString = Integer.toHexString(b & 255);
                if (hexString.length() == 1) {
                    sb.append("0");
                }
                sb.append(hexString);
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e) {
            v.a("unsupport algorithm SHA-256", e);
            throw e;
        }
    }

    public static String a(SortedMap sortedMap, String str) {
        if (sortedMap == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();
        for (String str2 : sortedMap.keySet()) {
            sb.append(str2);
            sb.append("=");
            String str3 = (String) sortedMap.get(str2);
            try {
                sb.append(URLEncoder.encode(str3, "UTF-8"));
                sb.append("&");
                sb2.append(str3);
                sb2.append(";");
            } catch (UnsupportedEncodingException e) {
                v.a("make SignedParamString failed", e);
                throw e;
            }
        }
        if (str != null) {
            sb2.append(str);
        }
        return sb.append("digest=").append(a(sb2.toString())).toString();
    }

    private List a(JSONArray jSONArray) throws JSONException {
        ArrayList arrayList = new ArrayList();
        if (jSONArray == null) {
            return arrayList;
        }
        int i = 0;
        while (true) {
            int i2 = i;
            if (i2 >= jSONArray.length()) {
                return arrayList;
            }
            try {
                JSONObject jSONObject = jSONArray.getJSONObject(i2);
                if (!v.a((Context) this.f608a.get(), jSONObject.getString("u"))) {
                    arrayList.add(jSONObject.getString("c"));
                }
            } catch (JSONException e) {
                Log.e("appdriver-log", "JSON format exception", e);
            }
            i = i2 + 1;
        }
    }

    private JSONArray b() {
        Context context = (Context) this.f608a.get();
        if (context == null) {
            return null;
        }
        try {
            JSONObject jSONObjectA = new ae(context).a("SHOTAPP_CAMPAIGN_LIST");
            return jSONObjectA != null ? jSONObjectA.getJSONArray("list") : null;
        } catch (JSONException e) {
            Log.e("appdriver-log", "JSON format exception", e);
            return null;
        }
    }

    public final List a() {
        return a(b());
    }
}
