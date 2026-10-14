package com.capcom.a;

import android.app.AlertDialog;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.webkit.CookieManager;
import android.webkit.CookieSyncManager;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLDecoder;
import java.net.URLEncoder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class n {

    /* renamed from: a, reason: collision with root package name */
    private static boolean f28a = false;

    public static Bundle a(String str) {
        Bundle bundle = new Bundle();
        if (str != null) {
            for (String str2 : str.split("&")) {
                String[] strArrSplit = str2.split("=");
                if (strArrSplit.length == 2) {
                    bundle.putString(URLDecoder.decode(strArrSplit[0]), URLDecoder.decode(strArrSplit[1]));
                }
            }
        }
        return bundle;
    }

    public static String a(Bundle bundle) {
        if (bundle == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        boolean z = true;
        for (String str : bundle.keySet()) {
            if (bundle.get(str) instanceof String) {
                if (z) {
                    z = false;
                } else {
                    sb.append("&");
                }
                sb.append(String.valueOf(URLEncoder.encode(str)) + "=" + URLEncoder.encode(bundle.getString(str)));
            }
        }
        return sb.toString();
    }

    public static String a(Bundle bundle, String str) {
        if (bundle == null) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (String str2 : bundle.keySet()) {
            Object obj = bundle.get(str2);
            if (obj instanceof String) {
                sb.append("Content-Disposition: form-data; name=\"" + str2 + "\"\r\n\r\n" + ((String) obj));
                sb.append("\r\n--" + str + "\r\n");
            }
        }
        return sb.toString();
    }

    private static String a(InputStream inputStream) throws IOException {
        StringBuilder sb = new StringBuilder();
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream), 1000);
        for (String line = bufferedReader.readLine(); line != null; line = bufferedReader.readLine()) {
            sb.append(line);
        }
        inputStream.close();
        return sb.toString();
    }

    public static String a(String str, String str2, Bundle bundle) throws IOException {
        if (str2.equals("GET")) {
            str = String.valueOf(str) + "?" + a(bundle);
        }
        a("Facebook-Util", String.valueOf(str2) + " URL: " + str);
        HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
        httpURLConnection.setRequestProperty("User-Agent", String.valueOf(System.getProperties().getProperty("http.agent")) + " FacebookAndroidSDK");
        if (!str2.equals("GET")) {
            Bundle bundle2 = new Bundle();
            for (String str3 : bundle.keySet()) {
                Object obj = bundle.get(str3);
                if (obj instanceof byte[]) {
                    bundle2.putByteArray(str3, (byte[]) obj);
                }
            }
            if (!bundle.containsKey("method")) {
                bundle.putString("method", str2);
            }
            if (bundle.containsKey("access_token")) {
                bundle.putString("access_token", URLDecoder.decode(bundle.getString("access_token")));
            }
            httpURLConnection.setRequestMethod("POST");
            httpURLConnection.setRequestProperty("Content-Type", "multipart/form-data;boundary=3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f");
            httpURLConnection.setDoOutput(true);
            httpURLConnection.setDoInput(true);
            httpURLConnection.setRequestProperty("Connection", "Keep-Alive");
            httpURLConnection.connect();
            BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(httpURLConnection.getOutputStream());
            bufferedOutputStream.write(("--3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f\r\n").getBytes());
            bufferedOutputStream.write(a(bundle, "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f").getBytes());
            bufferedOutputStream.write((String.valueOf("\r\n") + "--3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f\r\n").getBytes());
            if (!bundle2.isEmpty()) {
                for (String str4 : bundle2.keySet()) {
                    bufferedOutputStream.write(("Content-Disposition: form-data; filename=\"" + str4 + "\"\r\n").getBytes());
                    bufferedOutputStream.write(("Content-Type: content/unknown\r\n\r\n").getBytes());
                    bufferedOutputStream.write(bundle2.getByteArray(str4));
                    bufferedOutputStream.write((String.valueOf("\r\n") + "--3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f\r\n").getBytes());
                }
            }
            bufferedOutputStream.flush();
        }
        try {
            return a(httpURLConnection.getInputStream());
        } catch (FileNotFoundException e) {
            return a(httpURLConnection.getErrorStream());
        } catch (Exception e2) {
            Log.d("HIGUCHI", "catch (Exception ee)" + e2.toString() + "\n" + e2.getLocalizedMessage());
            return "";
        }
    }

    public static void a(Context context) {
        CookieSyncManager.createInstance(context);
        CookieManager.getInstance().removeAllCookie();
    }

    public static void a(Context context, String str, String str2) {
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(str);
        builder.setMessage(str2);
        builder.create().show();
    }

    public static void a(String str, String str2) {
        if (f28a) {
            Log.d(str, str2);
        }
    }

    public static Bundle b(String str) {
        try {
            URL url = new URL(str.replace("fbconnect", "http"));
            Bundle bundleA = a(url.getQuery());
            bundleA.putAll(a(url.getRef()));
            return bundleA;
        } catch (MalformedURLException e) {
            return new Bundle();
        }
    }
}
