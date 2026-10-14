package com.capcom.zombiecafeandroidJP;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.util.Log;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import org.apache.http.HttpEntity;
import org.apache.http.HttpResponse;
import org.apache.http.HttpVersion;
import org.apache.http.StatusLine;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.methods.HttpPost;
import org.apache.http.conn.scheme.PlainSocketFactory;
import org.apache.http.conn.scheme.Scheme;
import org.apache.http.conn.scheme.SchemeRegistry;
import org.apache.http.conn.ssl.SSLSocketFactory;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.impl.conn.tsccm.ThreadSafeClientConnManager;
import org.apache.http.params.BasicHttpParams;
import org.apache.http.params.HttpConnectionParams;
import org.apache.http.params.HttpProtocolParams;
import org.apache.http.util.ByteArrayBuffer;
import org.apache.http.util.EntityUtils;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class URLManager {

    /* renamed from: a, reason: collision with root package name */
    public static int f74a = 0;
    public static int b = 2;
    public static int c = 73;
    public static int d = 80;
    private Context e;
    private final String f;

    URLManager(Context context) {
        this.e = context;
        this.f = this.e.getFilesDir().toString();
        a(context);
    }

    public static native void DownloadFBIconCallback(int i);

    public static native void LoadedBannerTextureCallback(byte[] bArr, int i);

    public static native void NewRequestCallback(byte[] bArr, int i);

    public static native void NewRequestServerCallback(boolean z, byte[] bArr, int i, int i2);

    public static synchronized DefaultHttpClient a() {
        BasicHttpParams basicHttpParams;
        SchemeRegistry schemeRegistry;
        basicHttpParams = new BasicHttpParams();
        HttpConnectionParams.setStaleCheckingEnabled(basicHttpParams, false);
        HttpConnectionParams.setConnectionTimeout(basicHttpParams, 20000);
        HttpConnectionParams.setSoTimeout(basicHttpParams, 20000);
        HttpConnectionParams.setSocketBufferSize(basicHttpParams, 8192);
        HttpProtocolParams.setVersion(basicHttpParams, HttpVersion.HTTP_1_1);
        HttpProtocolParams.setContentCharset(basicHttpParams, "ISO-8859-1");
        HttpProtocolParams.setUseExpectContinue(basicHttpParams, true);
        HttpProtocolParams.setUserAgent(basicHttpParams, "ZombieCafe/1.0.0.0a");
        schemeRegistry = new SchemeRegistry();
        schemeRegistry.register(new Scheme("http", PlainSocketFactory.getSocketFactory(), 80));
        schemeRegistry.register(new Scheme("https", SSLSocketFactory.getSocketFactory(), 443));
        return new DefaultHttpClient(new ThreadSafeClientConnManager(basicHttpParams, schemeRegistry), basicHttpParams);
    }

    public static String b(String str) throws IOException {
        String string = "";
        StringBuffer stringBuffer = new StringBuffer();
        try {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new URL(str).openStream()));
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    string = stringBuffer.toString();
                    return string;
                }
                stringBuffer.append(line);
            }
        } catch (Exception e) {
            Log.e("HttpRequest=" + str, e.toString());
            return string;
        }
    }

    public void a(String str) throws IOException {
        try {
            if (!a(this.e)) {
                Log.d("INFOBAR", "Internet IS NOT CONNECTING!");
                return;
            }
            URL url = new URL(str);
            long jCurrentTimeMillis = System.currentTimeMillis();
            Log.d("INFOBAR", "URL: " + str);
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setRequestMethod("GET");
            httpURLConnection.connect();
            if (httpURLConnection.getResponseCode() != 200) {
                Log.d("INFOBAR", "COULD NOT OPEN HTTP");
                return;
            }
            Log.d("INFOBAR", "HTTP_OK");
            InputStream inputStream = httpURLConnection.getInputStream();
            if (inputStream == null) {
                Log.d("INFOBAR", "COULD NOT GET THE STREAM");
                return;
            }
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
            Log.d("INFOBAR", "r = " + bufferedReader.toString());
            String line = bufferedReader.readLine();
            boolean z = false;
            String str2 = "";
            String str3 = "";
            boolean z2 = false;
            boolean z3 = false;
            int iIntValue = 100;
            int iIntValue2 = 160;
            int iIntValue3 = 240;
            int iIntValue4 = 50;
            int iIntValue5 = 50;
            String str4 = "";
            String str5 = "";
            int i = 0;
            while (line != null) {
                Log.d("INFOBAR", "inputLine = " + line);
                switch (i) {
                    case 0:
                        z = false;
                        if (Integer.valueOf(line).intValue() != 1) {
                            break;
                        } else {
                            z = true;
                            break;
                        }
                    case 1:
                        str2 = line;
                        break;
                    case 2:
                        str3 = line;
                        break;
                    case 3:
                        z2 = false;
                        String[] strArrSplit = line.split("=", 0);
                        if (strArrSplit.length >= 2 && Integer.valueOf(strArrSplit[1]).intValue() == 1) {
                            z2 = true;
                            break;
                        } else {
                            break;
                        }
                    case 4:
                        z3 = false;
                        String[] strArrSplit2 = line.split("=", 0);
                        if (strArrSplit2.length >= 2 && Integer.valueOf(strArrSplit2[1]).intValue() == 1) {
                            z3 = true;
                            break;
                        } else {
                            break;
                        }
                    case 5:
                        String[] strArrSplit3 = line.split("=", 0);
                        if (strArrSplit3.length < 2) {
                            break;
                        } else {
                            iIntValue = Integer.valueOf(strArrSplit3[1]).intValue();
                            break;
                        }
                    case 6:
                        String[] strArrSplit4 = line.split("=", 0);
                        if (strArrSplit4.length < 2) {
                            break;
                        } else {
                            iIntValue2 = Integer.valueOf(strArrSplit4[1]).intValue();
                            break;
                        }
                    case 7:
                        String[] strArrSplit5 = line.split("=", 0);
                        if (strArrSplit5.length < 2) {
                            break;
                        } else {
                            iIntValue3 = Integer.valueOf(strArrSplit5[1]).intValue();
                            break;
                        }
                    case 8:
                        String[] strArrSplit6 = line.split("=", 0);
                        if (strArrSplit6.length < 2) {
                            break;
                        } else {
                            iIntValue4 = Integer.valueOf(strArrSplit6[1]).intValue();
                            break;
                        }
                    case 9:
                        String[] strArrSplit7 = line.split("=", 0);
                        if (strArrSplit7.length < 2) {
                            break;
                        } else {
                            iIntValue5 = Integer.valueOf(strArrSplit7[1]).intValue();
                            break;
                        }
                    case 10:
                        String[] strArrSplit8 = line.split("=", 0);
                        if (strArrSplit8.length < 2) {
                            break;
                        } else {
                            str4 = strArrSplit8[1];
                            break;
                        }
                    case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                        String[] strArrSplit9 = line.split("=", 0);
                        if (strArrSplit9.length < 2) {
                            break;
                        } else {
                            str5 = strArrSplit9[1];
                            break;
                        }
                }
                line = bufferedReader.readLine();
                i++;
            }
            inputStream.close();
            httpURLConnection.disconnect();
            Log.d("INFOBAR", "download ready in" + ((System.currentTimeMillis() - jCurrentTimeMillis) / 1000) + " sec");
            Bundle bundle = new Bundle();
            bundle.putBoolean("enableflag", z);
            bundle.putString("text", str2);
            bundle.putString("tapURL", str3);
            bundle.putBoolean("dispflag", z2);
            bundle.putBoolean("pause", z3);
            bundle.putInt("daycount", iIntValue);
            bundle.putInt("width", iIntValue2);
            bundle.putInt("height", iIntValue3);
            bundle.putInt("x", iIntValue4);
            bundle.putInt("y", iIntValue5);
            bundle.putString("imageURL", str4);
            bundle.putString("open", str5);
            ZombieCafeAndroid.runSystemThread(13051, bundle);
        } catch (IOException e) {
            Log.d("INFOBAR", "Error: " + e);
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public void a(String str, int i, byte[] bArr) throws IOException {
        try {
            if (!a(this.e)) {
                Log.d("DownloadURL", "Internet IS NOT CONNECTING!");
                return;
            }
            URL url = new URL(str);
            long jCurrentTimeMillis = System.currentTimeMillis();
            Log.d("URLManager", "URL: " + str);
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setRequestMethod("GET");
            httpURLConnection.connect();
            if (httpURLConnection.getResponseCode() == 200) {
                Log.d("URLManager", "HTTP_OK");
                InputStream inputStream = httpURLConnection.getInputStream();
                if (inputStream != null) {
                    Log.d("URLManager", "STREAM IS OK DoWhat=" + i);
                    switch (i) {
                        case 0:
                            Log.d("URLManager", "Get Texture To Buffer=" + str);
                            String strB = b(str);
                            int length = strB.length();
                            byte[] bytes = strB.getBytes();
                            Log.d("LoadedCallback", "Downloaded=" + length);
                            LoadedBannerTextureCallback(bytes, 2000);
                            inputStream.close();
                            httpURLConnection.disconnect();
                            break;
                        case 1:
                            StringBuffer stringBuffer = new StringBuffer("");
                            int i2 = 0;
                            while (true) {
                                byte b2 = (byte) inputStream.read();
                                if (b2 == -1) {
                                    Log.d("URLManager", "Loaded Data =" + i2);
                                    Log.d("URLData", stringBuffer.toString());
                                    ByteArrayBuffer byteArrayBuffer = new ByteArrayBuffer(0);
                                    for (int i3 = 0; i3 < i2; i3++) {
                                        byteArrayBuffer.append((byte) stringBuffer.charAt(i3));
                                        Log.d("ConvertChar=" + i3, new StringBuilder().append(stringBuffer.charAt(i3)).toString());
                                    }
                                    byteArrayBuffer.append(0);
                                    NewRequestCallback(byteArrayBuffer.toByteArray(), i2);
                                    inputStream.close();
                                    httpURLConnection.disconnect();
                                    break;
                                } else {
                                    stringBuffer.append((int) b2);
                                    i2++;
                                }
                            }
                        case 2:
                            String line = new BufferedReader(new InputStreamReader(inputStream)).readLine();
                            Log.d("StreamReader", line);
                            NewRequestCallback(line.getBytes(), line.length() + 1);
                            inputStream.close();
                            httpURLConnection.disconnect();
                            break;
                        case 3:
                            Log.d("URLManager", "Downloading a Picture into image buffer");
                            inputStream.close();
                            httpURLConnection.disconnect();
                            break;
                        default:
                            inputStream.close();
                            httpURLConnection.disconnect();
                            break;
                    }
                    return;
                }
                Log.d("URLManager", "COULD NOT GET THE STREAM");
            } else {
                Log.d("URLManager", "COULD NOT OPEN HTTP");
            }
            Log.d("URLManager", "download ready in" + ((System.currentTimeMillis() - jCurrentTimeMillis) / 1000) + " sec");
        } catch (IOException e) {
            Log.d("URLManager", "Error: " + e);
        }
    }

    public void a(String str, String str2, int i, byte[] bArr) throws IOException {
        Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "friendindex = " + i + " : --------------------------------------------------");
        Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "0 URL: " + str);
        Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "filename: " + str2);
        try {
            if (!a(this.e)) {
                Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "Internet IS NOT CONNECTING!");
                return;
            }
            URL url = new URL(str);
            long jCurrentTimeMillis = System.currentTimeMillis();
            Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "1 URL: " + str);
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setRequestMethod("GET");
            Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "0 httpConn.getRequestMethod() =  " + httpURLConnection.getRequestMethod());
            httpURLConnection.connect();
            Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "1");
            if (httpURLConnection.getResponseCode() == 200) {
                Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "HTTP_OK");
                InputStream inputStream = httpURLConnection.getInputStream();
                if (inputStream != null) {
                    Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "Downloading a Picture into image buffer");
                    Bitmap bitmapDecodeStream = BitmapFactory.decodeStream(inputStream);
                    Bitmap bitmapCopy = bitmapDecodeStream.copy(Bitmap.Config.ARGB_8888, true);
                    int width = bitmapCopy.getWidth();
                    int height = bitmapCopy.getHeight();
                    bitmapCopy.getPixels(new int[width * height], 0, width, 0, 0, width, height);
                    Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "image : width = " + width + " : height = " + height);
                    inputStream.close();
                    httpURLConnection.disconnect();
                    String str3 = ZombieCafeAndroid.w.getCacheDir() + File.separator + str2;
                    try {
                        try {
                            FileOutputStream fileOutputStream = new FileOutputStream(new File(str3));
                            bitmapDecodeStream.compress(Bitmap.CompressFormat.JPEG, 100, fileOutputStream);
                            fileOutputStream.close();
                            Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl", "Saved OK path = " + str3);
                            DownloadFBIconCallback(i);
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    } catch (FileNotFoundException e2) {
                        e2.printStackTrace();
                    }
                } else {
                    Log.d("FriendInfo DownloadFBIconFromUrl", "COULD NOT GET THE STREAM");
                }
            } else {
                Log.d("FriendInfo DownloadFBIconFromUrl", "COULD NOT OPEN HTTP");
            }
            Log.d("FriendInfo DownloadFBIconFromUrl", "download ready in" + ((System.currentTimeMillis() - jCurrentTimeMillis) / 1000) + " sec");
        } catch (IOException e3) {
            Log.d("FriendInfo L_GetMyMetadata DownloadFBIconFromUrl DownloadFBIconFromUrl", "Error: " + e3);
        }
    }

    public void a(String str, String str2, String str3, int i) {
        HttpEntity entity;
        if (!a(this.e)) {
            Log.d("Server Manager", "Internet IS NOT CONNECTING!");
            NewRequestServerCallback(false, null, 0, i);
            return;
        }
        Log.d("ServerManager", "Internet Is Connected");
        Log.d("ServerManager", "Passed QUERY: " + str2 + " Callback=" + i);
        if (i == b || i == f74a || i == d) {
            if (i == b || i == d) {
                Log.d("Upload Map", "to server");
            } else {
                Log.d("Upload Analytics", "to server");
            }
            String strReplace = str2.replace(" ", "%20").replace("<", "%3c").replace(">", "%3e");
            File file = i == b ? new File(this.e.getFilesDir(), "ServerData.dat") : i == d ? new File(this.e.getFilesDir(), "UploadData.dat") : new File(this.e.getFilesDir(), "adata.mkt");
            if (file == null) {
                Log.d("DAMN! HTTP POST ERROR", "FILE NOT FOUND");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            Log.d("Upload:" + file.getName(), "To:" + strReplace);
            try {
                HttpPost httpPost = new HttpPost(strReplace.replace(" ", "%20").replace("<", "%3c").replace(">", "%3e"));
                Log.d("SAVEGAMESTATE", "PHASE1");
                if (ZombieCafeAndroid.v == null || httpPost == null) {
                    Log.d("BAD CLIENT OR POST", "FOR UPLOAD...ABORT");
                    NewRequestServerCallback(false, null, 0, i);
                    return;
                }
                Log.d("SAVEGAMESTATE", "ABOUT TO GET NEW FILEBODY");
                a.a.a.a.a.a.d dVar = new a.a.a.a.a.a.d(file, "fnam", "plain/text", "UTF-8");
                Log.d("SAVEGAMESTATE", "MADE IT PAST FILEBODY");
                if (dVar == null) {
                    Log.d("BAD FILEBODY", "FOR UPLOAD..ABORT");
                    NewRequestServerCallback(false, null, 0, i);
                    return;
                }
                a.a.a.a.a.h hVar = new a.a.a.a.a.h(a.a.a.a.a.e.STRICT);
                if (hVar == null) {
                    Log.d("BAD REQENTITY", "FOR UPLOAD..");
                    NewRequestServerCallback(false, null, 0, i);
                    return;
                }
                if (i == b || i == d) {
                    hVar.a("fnam", dVar);
                } else {
                    hVar.a("adata", dVar);
                }
                httpPost.setEntity(hVar);
                Log.d("SAVEGAMESTATE", "PHASE3");
                if (httpPost != null && (entity = ZombieCafeAndroid.v.execute(httpPost).getEntity()) != null) {
                    String string = EntityUtils.toString(entity);
                    Log.d("Response content length: ", "is " + entity.getContentLength());
                    Log.d("RESPONSE", string);
                    ZombieCafeAndroid.nativeResultPostString(string);
                    new NetworkTask(true, null, 0, i).execute(new String[0]);
                }
                Log.d("SAVEGAMESTATE", "PHASE4");
                return;
            } catch (Exception e) {
                Log.d("SAVEGAMESTATE", "EXCEPTION 0 " + e);
                e.printStackTrace();
                NewRequestServerCallback(false, null, 0, i);
                Log.d("SAVEGAMESTATE", "EXCEPTION 1");
                return;
            }
        }
        try {
            Log.d("REQUEST DATA QUERY IS", str2);
            HttpGet httpGet = new HttpGet(str2.replace(" ", "%20").replace("<", "%3c").replace(">", "%3e"));
            Log.d("HTTPGET", "ACQUIRED");
            if (httpGet == null) {
                Log.d("HTTP GET", "FAILED!!!! Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            Log.d("HTTPCLIENT", "ACQUIRED");
            if (ZombieCafeAndroid.v == null) {
                Log.d("HTTPCLIENT", "is null, Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            Log.d("HTTPCLIENT", "EXECUTE-PRE");
            HttpResponse httpResponseExecute = ZombieCafeAndroid.v.execute(httpGet);
            Log.d("HTTPCLIENT", "EXECUTE-POST");
            if (httpResponseExecute == null) {
                Log.d("RESPONSE TO CLIENT", "is null, Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            StatusLine statusLine = httpResponseExecute.getStatusLine();
            if (statusLine == null) {
                Log.d("RESPONSE Statusline", "is null, Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            if (statusLine.getStatusCode() != 200) {
                throw new IOException(statusLine.getReasonPhrase());
            }
            Log.d(" Statuscode", "is ok..SC_OK");
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            if (byteArrayOutputStream == null) {
                Log.d("Output Stream", "is null, Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            if (i != c) {
                httpResponseExecute.getEntity().writeTo(byteArrayOutputStream);
                int size = byteArrayOutputStream.size();
                if (new byte[size] == null) {
                    Log.d("byte buffer", "is null, Bad!!!");
                    NewRequestServerCallback(false, null, 0, i);
                    return;
                } else {
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    byteArrayOutputStream.close();
                    Log.d("BYTEARRAYOUTPUTSTREAM DOWNLOAD", "=" + size);
                    new NetworkTask(true, byteArray, size, i).execute(new String[0]);
                    return;
                }
            }
            Log.d("UrlManager", "LOADIMAGEFROMURL");
            httpResponseExecute.getEntity().writeTo(byteArrayOutputStream);
            int size2 = byteArrayOutputStream.size();
            if (new byte[size2] == null) {
                Log.d("byte buffer", "is null, Bad!!!");
                NewRequestServerCallback(false, null, 0, i);
                return;
            }
            byte[] byteArray2 = byteArrayOutputStream.toByteArray();
            byteArrayOutputStream.close();
            Bitmap bitmapDecodeByteArray = BitmapFactory.decodeByteArray(byteArray2, 0, size2);
            Bitmap bitmapCopy = bitmapDecodeByteArray.copy(Bitmap.Config.ARGB_8888, true);
            int width = bitmapCopy.getWidth();
            int height = bitmapCopy.getHeight();
            bitmapCopy.getPixels(new int[width * height], 0, width, 0, 0, width, height);
            Log.d("UrlManager", "image : width = " + width + " : height = " + height);
            try {
                FileOutputStream fileOutputStreamOpenFileOutput = ZombieCafeAndroid.w.openFileOutput(str3, 0);
                bitmapDecodeByteArray.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStreamOpenFileOutput);
                fileOutputStreamOpenFileOutput.close();
                Log.d("UrlManager", "Texture saved OK path = " + ZombieCafeAndroid.w.getExternalFilesDir(null) + str3);
                new NetworkTask(true, null, 0, i).execute(new String[0]);
            } catch (FileNotFoundException e2) {
                e2.printStackTrace();
                NewRequestServerCallback(false, null, 0, i);
            } catch (IOException e3) {
                e3.printStackTrace();
                NewRequestServerCallback(false, null, 0, i);
            }
        } catch (Exception e4) {
            Log.e("log_tag", "Error in http connection: " + e4.toString());
            e4.printStackTrace();
            Log.e("log_tag", "1");
            NewRequestServerCallback(false, null, 0, i);
            Log.e("log_tag", "2");
        }
    }

    public boolean a(Context context) {
        ZombieCafeAndroid.b = false;
        return false;
    }
}
