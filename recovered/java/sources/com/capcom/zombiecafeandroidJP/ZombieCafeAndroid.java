package com.capcom.zombiecafeandroidJP;

import android.R;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.AlarmManager;
import android.app.AlertDialog;
import android.app.KeyguardManager;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.IntentSender;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.Message;
import android.os.Process;
import android.support.v4.media.TransportMediator;
import android.support.v4.util.TimeUtils;
import android.support.v4.widget.ViewDragHelper;
import android.telephony.TelephonyManager;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Display;
import android.view.KeyEvent;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.Button;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.cameramanager.Cameramanager;
import com.capcom.billing.SmurfsBilling;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.URLConnection;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.ShortBuffer;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import javax.microedition.khronos.opengles.GL10;
import org.apache.http.HttpResponse;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.util.ByteArrayBuffer;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ZombieCafeAndroid extends d implements a {
    static com.capcom.billing.l Q;
    public static CapcomFacebook V;
    public static int X;
    public static boolean Y;
    public static int Z;
    public static String aA;
    public static String aB;
    public static boolean aC;
    static ProgressDialog aD;
    static int aE;
    static String[] aF;
    static int aG;
    public static int aK;
    public static AlertDialog aL;
    public static AlertDialog.Builder aM;
    public static String aN;
    private static Handler aQ;
    private static NotificationManager aR;
    private static AlarmManager aS;
    public static boolean af;
    public static com.capcom.a.f ak;
    public static String an;
    public static String ay;
    public static String az;
    private static RelativeLayout bd;
    private static aw[] bm;
    private static String bn;
    private static boolean bq;
    public static String h;
    public static int j;
    public static String l;
    public static String m;
    public static String n;
    public static int o;
    public static int p;
    public static double q;
    public static DefaultHttpClient v;
    public static Context w;
    public static ZombieCafeAndroid x;
    public HorizontalScrollView at;
    Button av;
    View aw;
    private FrameLayout ba;
    private FrameLayout bc;
    private FrameLayout bi;
    private com.google.android.gms.b.a bj;
    private String bk;

    /* renamed from: a, reason: collision with root package name */
    public static boolean f75a = true;
    public static boolean b = false;
    private static Thread aP = null;
    public static boolean c = false;
    public static boolean d = true;
    public static String e = "";
    public static boolean f = true;
    public static boolean g = true;
    public static m i = null;
    public static String k = "";
    public static boolean r = false;
    public static Display s = null;
    public static URLManager t = null;
    public static int y = -1;
    public static String z = "";
    private static WebView aU = null;
    private static WebView aV = null;
    public static boolean A = true;
    public static String B = "";
    private static WebView aX = null;
    private static WebView aY = null;
    public static WebView C = null;
    public static WebView E = null;
    public static String P = "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAvcgSHbfx4Rpnxse4jbmJGlI2ArTtOcKd6rJVolPYM6bnajBThoJfIh9+ghjRZyqsnHkAKlaDUruODQIpiPlsIW9XJiJX9cexVwTINWrFgs83zwccn31goaiHujseuymVH3iaosmimkLRfMBY37TTpOEEWSiJBPu19QNLEhwY5gzwUnsFL1qGHCC0UJ95i99jf+URJIi7KmghV9A/YwLxvPnzgAZrZR72HgZXSMZBytb0ZpCJgLsL2wSKwNOmGziNAbs5kollX/qG2qqcZgsYvYJA6KV53cSEToA9Ot0oIYj7oXUthqsWS2in7nqAndgjYrIBTRvjWvJXGGl14M3k3wIDAQAB";
    static boolean R = false;
    static String S = "";
    static int T = -1;
    public static float[] W = new float[32];
    public static SmurfsGLSurfaceView aa = null;
    public static int ab = 0;
    public static CC_Android ac = null;
    public static SharedPreferences ad = null;
    public static SoundManager ag = null;
    public static boolean ah = true;
    public static int aj = 0;
    public static e[] al = new e[64];
    public static boolean am = true;
    public static int ao = 325617;
    private static String[] be = new String[5];
    private static int[] bf = new int[5];
    public ImageView u = null;
    private b aT = null;
    private EditText aW = null;
    private FrameLayout aZ = null;
    public ImageView D = null;
    private FrameLayout bb = null;
    public ImageView F = null;
    public ImageView G = null;
    public ImageView H = null;
    public int I = 0;
    public int J = 0;
    public int K = 0;
    public int L = 0;
    public String M = "";
    public boolean N = false;
    public boolean O = false;
    com.capcom.billing.z U = null;
    public Cameramanager ae = null;
    public int ai = 0;
    private final float bg = 960.0f;
    private final float bh = 640.0f;
    public String ap = "";
    public ax aq = null;
    public ImageView ar = null;
    public ImageView as = null;
    public TextView au = null;
    Boolean ax = false;
    private BroadcastReceiver bl = new y(this);
    private String[] bo = new String[20];
    private String[] bp = new String[20];
    com.capcom.billing.w aH = new ao(this);
    com.capcom.billing.u aI = new ap(this);
    com.capcom.billing.s aJ = new aq(this);
    Runnable aO = new ar(this);

    static {
        System.loadLibrary("ZombieCafeAndroid");
        ay = "";
        az = "Quit Zombie Cafe?";
        aA = "Quit";
        aB = "Cancel";
        aC = false;
        aD = null;
        bm = new aw[20];
        aF = new String[20];
        aG = 0;
        aN = "Zombie Cafe is free to play, but you can buy additional Toxin. Toxin is paid for through your Google Play account.";
        bq = false;
    }

    public static native boolean CheckDoneLoading();

    public static native boolean CheckIfInHelpScreen();

    public static native void ClearDialogFlag();

    public static native boolean ConfirmToAliveNative(int i2, int i3, boolean z2);

    public static boolean ConfirmToAliveNativePre(String str) {
        logging("ConfirmToAliveNativePre productID:" + str);
        return ConfirmToAliveNative(getExpId(str), -1, false);
    }

    public static native void DialogCallBack();

    public static void DownloadFromUrlForPurchase(String str, int i2, byte[] bArr) throws IOException {
        try {
            logging("DownloadFromUrl 0 url = " + str);
            URL url = new URL(str);
            logging("DownloadFromUrl 1");
            System.currentTimeMillis();
            URLConnection uRLConnectionOpenConnection = url.openConnection();
            logging("DownloadFromUrl 2");
            HttpURLConnection httpURLConnection = (HttpURLConnection) uRLConnectionOpenConnection;
            logging("DownloadFromUrl 3");
            httpURLConnection.setRequestMethod("GET");
            httpURLConnection.connect();
            logging("DownloadFromUrl 4");
            if (httpURLConnection.getResponseCode() != 200) {
                logging("httpConn.getResponseCode() != HttpURLConnection.HTTP_OK");
                return;
            }
            InputStream inputStream = httpURLConnection.getInputStream();
            logging("DownloadFromUrl 5");
            if (inputStream == null) {
                logging("in == null");
                return;
            }
            switch (i2) {
                case 0:
                    String httpData = getHttpData(str);
                    logging("DownloadFromUrl 6 0");
                    int length = httpData.length();
                    httpData.getBytes();
                    logging("Downloaded=" + length);
                    inputStream.close();
                    httpURLConnection.disconnect();
                    return;
                case 1:
                    getHttpData(str);
                    logging("DownloadFromUrl 6 1");
                    StringBuffer stringBuffer = new StringBuffer("");
                    int i3 = 0;
                    while (true) {
                        byte b2 = (byte) inputStream.read();
                        if (b2 == -1) {
                            logging("URLData:" + stringBuffer.toString());
                            ByteArrayBuffer byteArrayBuffer = new ByteArrayBuffer(0);
                            for (int i4 = 0; i4 < i3; i4++) {
                                byteArrayBuffer.append((byte) stringBuffer.charAt(i4));
                                logging("ConvertChar=" + i4 + " " + stringBuffer.charAt(i4));
                            }
                            byteArrayBuffer.append(0);
                            PurchaseInfoOkCallBack();
                            break;
                        } else {
                            stringBuffer.append((int) b2);
                            i3++;
                        }
                    }
            }
            inputStream.close();
            httpURLConnection.disconnect();
        } catch (Exception e2) {
            logging("RHURLManager Error: " + e2);
        }
    }

    public static native void ER3Parse(int i2, int i3, int i4, int i5, int i6, int i7);

    public static native void EventGetGiftParse(String str, int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, int[] iArr5, int i2);

    public static native void GetEntryParse(int i2, int i3, int i4, int i5);

    public static native void GetEventValueParse(int[] iArr, int[] iArr2, int[] iArr3, String[] strArr, int[] iArr4, String[] strArr2, int i2);

    public static native void GetGameInfoHCOItemParse(int i2, int i3, int i4, int i5, int i6, int i7);

    public static native void GetGameInfoHCOSettingParse(int i2, int i3, long j2, int i4, long j3, long j4, int i5);

    public static native boolean HandleBackButton();

    public static native void JSONTakeOverDataParse(int i2, String str, String str2, String str3, String str4);

    public static native void JSONTakeOverDataParse2(int i2, String str, String str2, String str3);

    public static native void NativeCloseEventForm();

    public static void PrintMemory() {
        Log.d("===MEMORY===", "===MEMORY===");
        Log.d(" ", " ");
        Log.e("Max=" + Runtime.getRuntime().maxMemory() + " Total=" + Runtime.getRuntime().totalMemory(), "Free=" + Runtime.getRuntime().freeMemory());
        Log.d(" ", " ");
        Log.d("======END======", "=====END======");
    }

    public static void ProgressBar(int i2) {
        switch (i2) {
            case 0:
                Log.d("Progress Bar", "OFF!");
                if (aD != null) {
                    aD.dismiss();
                    break;
                }
                break;
            case 1:
                Log.d("Progress Bar", "ON!!");
                aD = ProgressDialog.show(getContext(), "", "Please wait...", true);
                break;
            default:
                Log.d("Progress Bar", "BAD VALUE");
                break;
        }
    }

    public static native void PurchaseAndroidToxin(int i2, int i3);

    public static native void PurchaseInfoOkCallBack();

    public static native void RankingGetGiftParse(String[] strArr, int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, String[] strArr2, int i2);

    public static native void ResultPostString(String str);

    public static native void StartNotifications();

    public static native void SurvivalCheckGiftParse(int i2, int i3);

    public static native void SurvivalGetGiftParse(int i2, int i3, String str, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11);

    public static native void SurvivalInfo(int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, int[] iArr5, int i2);

    public static native void SurvivalInfo2(int i2);

    public static void ToggleAccelerometer(boolean z2) {
        if (z2) {
            if (b.c()) {
                b.a((a) w, 0.5f, 333);
            }
        } else if (b.a()) {
            b.b();
        }
    }

    public static void addSounds() {
        CC_Android.fromNative_loadEffect(0, "blendershort.ogg");
        CC_Android.fromNative_loadEffect(1, "blender.ogg");
        CC_Android.fromNative_loadEffect(2, "brains1.ogg");
        CC_Android.fromNative_loadEffect(3, "brains2.ogg");
        CC_Android.fromNative_loadEffect(4, "brains3.ogg");
        CC_Android.fromNative_loadEffect(5, "brains4.ogg");
        CC_Android.fromNative_loadEffect(6, "brains5.ogg");
        CC_Android.fromNative_loadEffect(7, "brains6.ogg");
        CC_Android.fromNative_loadEffect(8, "cash1.ogg");
        CC_Android.fromNative_loadEffect(9, "cash2.ogg");
        CC_Android.fromNative_loadEffect(10, "cash3.ogg");
        CC_Android.fromNative_loadEffect(11, "chopping1.ogg");
        CC_Android.fromNative_loadEffect(12, "dinnerambiantloop.ogg");
        CC_Android.fromNative_loadEffect(13, "drinkpour.ogg");
        CC_Android.fromNative_loadEffect(14, "frying.ogg");
        CC_Android.fromNative_loadEffect(15, "groan1.ogg");
        CC_Android.fromNative_loadEffect(16, "groan2.ogg");
        CC_Android.fromNative_loadEffect(17, "groan3.ogg");
        CC_Android.fromNative_loadEffect(18, "groan4.ogg");
        CC_Android.fromNative_loadEffect(19, "groan5.ogg");
        CC_Android.fromNative_loadEffect(20, "groan6.ogg");
        CC_Android.fromNative_loadEffect(21, "grunt1.ogg");
        CC_Android.fromNative_loadEffect(22, "grunt2.ogg");
        CC_Android.fromNative_loadEffect(23, "grunt3.ogg");
        CC_Android.fromNative_loadEffect(24, "grunt4.ogg");
        CC_Android.fromNative_loadEffect(25, "grunt5.ogg");
        CC_Android.fromNative_loadEffect(26, "grunt6.ogg");
        CC_Android.fromNative_loadEffect(27, "grunt7.ogg");
        CC_Android.fromNative_loadEffect(28, "grunt8.ogg");
        CC_Android.fromNative_loadEffect(29, "grunt9.ogg");
        CC_Android.fromNative_loadEffect(30, "grunt10.ogg");
        CC_Android.fromNative_loadEffect(31, "grunt11.ogg");
        CC_Android.fromNative_loadEffect(32, "pageflip1.ogg");
        CC_Android.fromNative_loadEffect(33, "pageflip2.ogg");
        CC_Android.fromNative_loadEffect(34, "pageflip3.ogg");
        CC_Android.fromNative_loadEffect(35, "pageflip4.ogg");
        CC_Android.fromNative_loadEffect(36, "click1.ogg");
        CC_Android.fromNative_loadEffect(37, "click2.ogg");
        CC_Android.fromNative_loadEffect(38, "click3.ogg");
        CC_Android.fromNative_loadEffect(39, "click4.ogg");
        CC_Android.fromNative_loadEffect(40, "click5.ogg");
        CC_Android.fromNative_loadEffect(41, "click6.ogg");
        CC_Android.fromNative_loadEffect(42, "click7.ogg");
        CC_Android.fromNative_loadEffect(43, "click8.ogg");
        CC_Android.fromNative_loadEffect(44, "click9.ogg");
        CC_Android.fromNative_loadEffect(45, "click10.ogg");
        CC_Android.fromNative_loadEffect(46, "click11.ogg");
        CC_Android.fromNative_loadEffect(47, "click12.ogg");
        CC_Android.fromNative_loadEffect(48, "click13.ogg");
        CC_Android.fromNative_loadEffect(49, "click14.ogg");
        CC_Android.fromNative_loadEffect(50, "click15.ogg");
        CC_Android.fromNative_loadEffect(51, "click16.ogg");
        CC_Android.fromNative_loadEffect(52, "click17.ogg");
        CC_Android.fromNative_loadEffect(53, "click18.ogg");
        CC_Android.fromNative_loadEffect(54, "click19.ogg");
        CC_Android.fromNative_loadEffect(55, "click20.ogg");
        CC_Android.fromNative_loadEffect(56, "click21.ogg");
        CC_Android.fromNative_loadEffect(57, "longcook.ogg");
        CC_Android.fromNative_loadEffect(58, "textboxpop1.ogg");
        CC_Android.fromNative_loadEffect(59, "dish1.ogg");
        CC_Android.fromNative_loadEffect(60, "dish2.ogg");
        CC_Android.fromNative_loadEffect(61, "dish3.ogg");
        CC_Android.fromNative_loadEffect(62, "manscream1.ogg");
        CC_Android.fromNative_loadEffect(63, "pickupitem1.ogg");
        CC_Android.fromNative_loadEffect(64, "putdownitem1.ogg");
        CC_Android.fromNative_loadEffect(65, "dooropen1.ogg");
        CC_Android.fromNative_loadEffect(66, "groupscream1.ogg");
        CC_Android.fromNative_loadEffect(67, "hit1.ogg");
        CC_Android.fromNative_loadEffect(68, "hit2.ogg");
        CC_Android.fromNative_loadEffect(69, "hit3.ogg");
        CC_Android.fromNative_loadEffect(70, "hit4.ogg");
        CC_Android.fromNative_loadEffect(71, "hit5.ogg");
        CC_Android.fromNative_loadEffect(72, "selectinghuman1.ogg");
        CC_Android.fromNative_loadEffect(73, "selectinghuman2.ogg");
        CC_Android.fromNative_loadEffect(74, "selectinghuman3.ogg");
        CC_Android.fromNative_loadEffect(75, "selectinghuman4.ogg");
        CC_Android.fromNative_loadEffect(76, "selectinghuman5.ogg");
        CC_Android.fromNative_loadEffect(77, "selectinghuman7.ogg");
        CC_Android.fromNative_loadEffect(78, "selectinghuman8.ogg");
        CC_Android.fromNative_loadEffect(79, "selectinghuman9.ogg");
        CC_Android.fromNative_loadEffect(80, "selectinghuman6.ogg");
        CC_Android.fromNative_loadEffect(81, "selectinghuman10.ogg");
        CC_Android.fromNative_loadEffect(82, "selectinghuman11.ogg");
        CC_Android.fromNative_loadEffect(83, "selectinghuman12.ogg");
        CC_Android.fromNative_loadEffect(84, "selectinghuman13.ogg");
        CC_Android.fromNative_loadEffect(85, "selectinghuman14.ogg");
        CC_Android.fromNative_loadEffect(86, "groan7.ogg");
        CC_Android.fromNative_loadEffect(87, "groan8.ogg");
        CC_Android.fromNative_loadEffect(88, "groan9.ogg");
        CC_Android.fromNative_loadEffect(89, "groan10.ogg");
        CC_Android.fromNative_loadEffect(90, "objectplacement1.ogg");
        CC_Android.fromNative_loadEffect(91, "objectplacement2.ogg");
        CC_Android.fromNative_loadEffect(92, "zombiedying.ogg");
        CC_Android.fromNative_loadEffect(93, "zombiedying2.ogg");
        CC_Android.fromNative_loadEffect(94, "zombiedyingfemale.ogg");
        CC_Android.fromNative_loadEffect(95, "zombiedyingfemale2.ogg");
        CC_Android.fromNative_loadEffect(96, "zombieeating4.ogg");
        CC_Android.fromNative_loadEffect(97, "fly.ogg");
        CC_Android.fromNative_loadEffect(98, "signflicker.ogg");
        CC_Android.fromNative_loadEffect(99, "neonsign.ogg");
        CC_Android.fromNative_loadEffect(100, "impact2.ogg");
        CC_Android.fromNative_loadEffect(101, "impact7.ogg");
        CC_Android.fromNative_loadEffect(102, "impact8.ogg");
        CC_Android.fromNative_loadEffect(103, "impact9.ogg");
        CC_Android.fromNative_loadEffect(104, "impact10.ogg");
        CC_Android.fromNative_loadEffect(105, "impact11.ogg");
        CC_Android.fromNative_loadEffect(106, "impact12.ogg");
        CC_Android.fromNative_loadEffect(107, "grunt12.ogg");
        CC_Android.fromNative_loadEffect(108, "grunt13.ogg");
        CC_Android.fromNative_loadEffect(109, "grunt14.ogg");
        CC_Android.fromNative_loadEffect(110, "grunt15.ogg");
        CC_Android.fromNative_loadEffect(111, "grunt16.ogg");
        CC_Android.fromNative_loadEffect(112, "grunt17.ogg");
        CC_Android.fromNative_loadEffect(113, "grunt18.ogg");
        CC_Android.fromNative_loadEffect(114, "grunt19.ogg");
        CC_Android.fromNative_loadEffect(115, "grunt20.ogg");
        CC_Android.fromNative_loadEffect(116, "grunt21.ogg");
        CC_Android.fromNative_loadEffect(117, "grunt22.ogg");
        CC_Android.fromNative_loadEffect(118, "grunt23.ogg");
        CC_Android.fromNative_loadEffect(119, "scream1.ogg");
        CC_Android.fromNative_loadEffect(120, "scream2.ogg");
        CC_Android.fromNative_loadEffect(121, "scream3.ogg");
        CC_Android.fromNative_loadEffect(122, "scream4.ogg");
        CC_Android.fromNative_loadEffect(123, "scream5.ogg");
        CC_Android.fromNative_loadEffect(124, "scream6.ogg");
        CC_Android.fromNative_loadEffect(125, "scream7.ogg");
        CC_Android.fromNative_loadEffect(TransportMediator.KEYCODE_MEDIA_PLAY, "femalescream1.ogg");
        CC_Android.fromNative_loadEffect(TransportMediator.KEYCODE_MEDIA_PAUSE, "femalescream2.ogg");
        CC_Android.fromNative_loadEffect(128, "femalescream3.ogg");
        CC_Android.fromNative_loadEffect(129, "femalescream4.ogg");
        CC_Android.fromNative_loadEffect(TransportMediator.KEYCODE_MEDIA_RECORD, "femalescream6.ogg");
        CC_Android.fromNative_loadEffect(131, "femalescream7.ogg");
        CC_Android.fromNative_loadEffect(132, "femalescream9.ogg");
        CC_Android.fromNative_loadEffect(133, "femalescream10.ogg");
        CC_Android.fromNative_loadEffect(134, "femalegroupscream1.ogg");
        CC_Android.fromNative_loadEffect(135, "femalegroupscream2.ogg");
        CC_Android.fromNative_loadEffect(136, "femalegroupscream3.ogg");
        CC_Android.fromNative_loadEffect(137, "groupscream2.ogg");
        CC_Android.fromNative_loadEffect(138, "groupscream3.ogg");
        CC_Android.fromNative_loadEffect(139, "groupscream4.ogg");
        CC_Android.fromNative_loadEffect(140, "groupscream5.ogg");
        CC_Android.fromNative_loadEffect(141, "malegroupscream1.ogg");
        CC_Android.fromNative_loadEffect(142, "malegroupscream2.ogg");
        CC_Android.fromNative_loadEffect(143, "malegroupscream3.ogg");
        CC_Android.fromNative_loadEffect(144, "malegrunt1.ogg");
        CC_Android.fromNative_loadEffect(145, "malegrunt4.ogg");
        CC_Android.fromNative_loadEffect(146, "malegrunt8.ogg");
        CC_Android.fromNative_loadEffect(147, "malegrunt9.ogg");
        CC_Android.fromNative_loadEffect(148, "malegrunt10.ogg");
        CC_Android.fromNative_loadEffect(149, "malegrunt11.ogg");
        CC_Android.fromNative_loadEffect(150, "malegrunt12.ogg");
        CC_Android.fromNative_loadEffect(151, "malegrunt13.ogg");
        CC_Android.fromNative_loadEffect(152, "maledying1.ogg");
        CC_Android.fromNative_loadEffect(153, "maledying2.ogg");
        CC_Android.fromNative_loadEffect(154, "maledying3.ogg");
        CC_Android.fromNative_loadEffect(155, "maledying4.ogg");
        CC_Android.fromNative_loadEffect(156, "maledying6.ogg");
        CC_Android.fromNative_loadEffect(157, "maledying7.ogg");
        CC_Android.fromNative_loadEffect(158, "maledying8.ogg");
        CC_Android.fromNative_loadEffect(159, "femalegrunt1.ogg");
        CC_Android.fromNative_loadEffect(160, "femalegrunt2.ogg");
        CC_Android.fromNative_loadEffect(161, "femalegrunt3.ogg");
        CC_Android.fromNative_loadEffect(162, "femalegrunt4.ogg");
        CC_Android.fromNative_loadEffect(163, "femalegrunt5.ogg");
        CC_Android.fromNative_loadEffect(164, "femalegrunt6.ogg");
        CC_Android.fromNative_loadEffect(165, "femalegrunt7.ogg");
        CC_Android.fromNative_loadEffect(166, "femalegrunt8.ogg");
        CC_Android.fromNative_loadEffect(167, "femalegrunt9.ogg");
        CC_Android.fromNative_loadEffect(168, "femaledying1edit.ogg");
        CC_Android.fromNative_loadEffect(169, "femaledying2.ogg");
        CC_Android.fromNative_loadEffect(170, "femaledying6.ogg");
        CC_Android.fromNative_loadEffect(171, "femaledying7edit.ogg");
        CC_Android.fromNative_loadEffect(172, "femaledying8.ogg");
        CC_Android.fromNative_loadEffect(173, "zombierefreshmale1.ogg");
        CC_Android.fromNative_loadEffect(174, "zombierefreshmale2.ogg");
        CC_Android.fromNative_loadEffect(175, "zombierefreshfemale1.ogg");
        CC_Android.fromNative_loadEffect(176, "zombierefreshfemale2.ogg");
        CC_Android.fromNative_loadEffect(177, "select1.ogg");
        CC_Android.fromNative_loadEffect(178, "select2.ogg");
        CC_Android.fromNative_loadEffect(179, "select3.ogg");
        CC_Android.fromNative_loadEffect(180, "select4.ogg");
        CC_Android.fromNative_loadEffect(181, "select5.ogg");
        CC_Android.fromNative_loadEffect(182, "select6.ogg");
        CC_Android.fromNative_loadEffect(183, "cash2tip.ogg");
        CC_Android.fromNative_loadEffect(184, "bookclose1.ogg");
        CC_Android.fromNative_loadEffect(185, "buyerror1.ogg");
        CC_Android.fromNative_loadEffect(186, "rotate1.ogg");
        CC_Android.fromNative_loadEffect(187, "rotate2.ogg");
        CC_Android.fromNative_loadEffect(188, "rotate3.ogg");
        CC_Android.fromNative_loadEffect(189, "objectplacement13.ogg");
        CC_Android.fromNative_loadEffect(190, "unlockdialog1.ogg");
        CC_Android.fromNative_loadEffect(191, "eggtimer1.ogg");
        CC_Android.fromNative_loadEffect(192, "dish4.ogg");
        CC_Android.fromNative_loadEffect(193, "dish5.ogg");
        CC_Android.fromNative_loadEffect(194, "dish6.ogg");
        CC_Android.fromNative_loadEffect(195, "dish7.ogg");
        CC_Android.fromNative_loadEffect(196, "dish8.ogg");
        CC_Android.fromNative_loadEffect(197, "camera.ogg");
        CC_Android.fromNative_loadEffect(198, "daydreammale.ogg");
        CC_Android.fromNative_loadEffect(199, "daydreamfemale.ogg");
        CC_Android.fromNative_loadEffect(200, "pop4.ogg");
        CC_Android.fromNative_loadEffect(201, "hauntedhousetransformationpoof.ogg");
        CC_Android.fromNative_loadEffect(202, "boom.ogg");
    }

    public static void boughtToxin(String str) {
        int i2;
        Log.d("HCO", "BOUGHT");
        Log.d("BOUGHT ZOMBIE TOXIN!!!! GIVE THE FOLLOWING:", str);
        aE = -1;
        for (int i3 = 0; i3 < 20; i3++) {
            if (str.matches(CC_Android.j[i3])) {
                aE = i3;
            }
        }
        switch (aE) {
            case 0:
                Log.d("Product 0", "50 Toxin");
                i2 = 50;
                break;
            case 1:
                Log.d("Product 1", "125 Toxin");
                i2 = 125;
                break;
            case 2:
                Log.d("Product 2", "350 Toxin");
                i2 = 350;
                break;
            case 3:
                Log.d("Product 3", "800 Toxin");
                i2 = 800;
                break;
            case 4:
                Log.d("Product 4", "2000 Toxin");
                i2 = 2000;
                break;
            default:
                Log.d("No Toxin!", "Bad or HCO/PCO");
                i2 = 0;
                break;
        }
        if (aE >= 20) {
            return;
        }
        PurchaseAndroidToxin(i2, aE);
        setPurchasingFlag(false);
        setOpenPurchaceScreenFlag(false);
    }

    private static void closeStream(Closeable closeable) throws IOException {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException e2) {
            }
        }
    }

    public static boolean consumeFailed(String str) {
        return consumeFailedAndroid();
    }

    public static native boolean consumeFailedAndroid();

    public static void deleteNotification() {
        Log.e("DeleteNotifications", "DELETE!");
        Intent intent = new Intent(w, (Class<?>) AlarmReceiver.class);
        for (int i2 = 0; i2 < 5; i2++) {
            intent.setData(Uri.parse("Unique" + String.valueOf(ao + i2)));
            try {
                aS.cancel(PendingIntent.getBroadcast(w, 192837, intent, 0));
            } catch (Exception e2) {
                Log.e("AlarmManager update was not canceled. ", "FAILED!");
            }
        }
    }

    public static native void deviceShaken();

    public static native void enterMigrationPassword(boolean z2, String[] strArr);

    public static Context getContext() {
        return w;
    }

    public static int getExpId(String str) {
        logging("productId = " + str);
        int i2 = 0;
        while (true) {
            if (i2 < 20) {
                if (str.matches(CC_Android.j[i2])) {
                    break;
                }
                i2++;
            } else {
                i2 = -1;
                break;
            }
        }
        logging("getExpId id=" + i2);
        return i2;
    }

    public static String getHttpData(String str) throws IOException {
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
        } catch (Exception e2) {
            logging("HttpRequest=" + str + " error=" + e2.toString());
            return string;
        }
    }

    public static native boolean getOpenPurchaceScreenFlag();

    public static native boolean getPurchasingFlag();

    public static native int getUserCash();

    public static native String getUserCram();

    public static native String getUserFbId();

    public static native String getUserHiveId();

    public static native int getUserLevel();

    public static native int getUserTime();

    public static native int getUserToxin();

    static boolean isConnected() {
        t.a(w);
        if (f75a && b) {
            Log.d("We have internet", "and are connected");
            return true;
        }
        Log.d("We are not connected", "ignore server time");
        return false;
    }

    static void logging(String str) {
    }

    public static native void mouseDown(float f2, float f3, int i2);

    public static native void mouseMove(float[] fArr, int i2);

    public static void mouseMoves(float f2, float f3, float f4, float f5, int i2) {
        if (i2 > 2) {
            return;
        }
        W[i2 * 2] = f2;
        W[(i2 * 2) + 1] = f3;
        if (X < 2) {
            X++;
        }
        mouseMove(W, X);
    }

    public static native void mouseUp(float f2, float f3, int i2);

    public static int nGetUserCash() {
        return getUserCash();
    }

    public static String nGetUserCram() {
        return getUserCram();
    }

    public static String nGetUserFbId() {
        return getUserFbId();
    }

    public static String nGetUserHiveId() {
        return getUserHiveId();
    }

    public static int nGetUserLevel() {
        return getUserLevel();
    }

    public static int nGetUserTime() {
        return getUserTime();
    }

    public static int nGetUserToxin() {
        return getUserToxin();
    }

    public static void nativeResultPostString(String str) {
        Log.d("nativeResultPostString", "");
        ResultPostString(str);
    }

    public static native void pause();

    private static CharSequence readEula(Activity activity) throws Throwable {
        BufferedReader bufferedReader;
        Throwable th;
        BufferedReader bufferedReader2 = null;
        try {
            bufferedReader = new BufferedReader(new InputStreamReader(activity.getAssets().open("EULA")));
        } catch (IOException e2) {
        } catch (Throwable th2) {
            bufferedReader = null;
            th = th2;
        }
        try {
            StringBuilder sb = new StringBuilder();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    closeStream(bufferedReader);
                    return sb;
                }
                sb.append(line).append('\n');
            }
        } catch (IOException e3) {
            bufferedReader2 = bufferedReader;
            closeStream(bufferedReader2);
            return "";
        } catch (Throwable th3) {
            th = th3;
            closeStream(bufferedReader);
            throw th;
        }
    }

    private void registerInBackground() {
        new z(this).execute(null, null, null);
    }

    public static native void resume();

    public static void runSystemThread(int i2, Bundle bundle) {
        Message message = new Message();
        message.what = i2;
        message.setData(bundle);
        new Thread(new ai(message)).start();
    }

    public static void sendNotification(int i2, String str, int i3, int i4) {
        Log.v("ZombieCafeAndroid: Notification=" + i2, String.valueOf(str) + " ]t=" + i4);
        try {
            Calendar calendar = Calendar.getInstance();
            calendar.add(13, i4);
            Intent intent = new Intent(w, (Class<?>) AlarmReceiver.class);
            intent.setData(Uri.parse("Unique" + String.valueOf(ao + i3)));
            intent.putExtra("alarm_message", str);
            intent.putExtra("type", i2);
            aS.set(0, calendar.getTimeInMillis(), PendingIntent.getBroadcast(w, 192837, intent, 268435456));
            Log.e("ZombieCafeAndroid: Unique ID", String.valueOf(ao + i3));
            Log.e("ZombieCafeAndroid: Notification Text", str);
            Log.e("ZombieCafeAndroid: Offset Time", new StringBuilder().append(i4).toString());
            PendingIntent broadcast = PendingIntent.getBroadcast(w, 0, intent, 0);
            Calendar calendar2 = Calendar.getInstance();
            calendar2.setTimeInMillis(System.currentTimeMillis());
            calendar2.add(13, i4);
            aS.set(0, calendar2.getTimeInMillis(), broadcast);
        } catch (Exception e2) {
            Log.e("EXCEPTION ERROR", "SETTING NOTIFICATION ALARM");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendRegistrationIdToBackend(Context context, String str) {
        try {
            StringBuffer stringBuffer = new StringBuffer();
            stringBuffer.append("http://zc-ad.bij-games.com/v170/");
            stringBuffer.append("setToken.php");
            StringBuffer stringBuffer2 = new StringBuffer();
            stringBuffer2.append("udid=" + k);
            stringBuffer2.append("&deviceid=" + ("000000000000000"));
            stringBuffer2.append("&im=" + h);
            stringBuffer2.append("&aid=" + l);
            stringBuffer2.append("&serial=" + ("000000000000000"));
            stringBuffer2.append("&appname=azcjp");
            stringBuffer2.append("&appver=78");
            stringBuffer2.append("&token=" + this.bk);
            String str2 = String.valueOf(stringBuffer.toString()) + "?" + stringBuffer2.toString();
            if (v == null) {
                Log.w("ZombieCafeAndroid-GCM", "Send device token failed: No Http client.");
                return;
            }
            HttpGet httpGet = new HttpGet(str2);
            Log.i("ZombieCafeAndroid-GCM", "Send device token: " + str2);
            HttpResponse httpResponseExecute = v.execute(httpGet);
            if (httpResponseExecute == null || httpResponseExecute.getStatusLine().getStatusCode() != 200) {
                Log.w("ZombieCafeAndroid-GCM", "Send device token failed:  status=" + (httpResponseExecute == null ? "??" : httpResponseExecute.getStatusLine()));
            } else {
                com.capcom.gcm.e.a(w, this.bk);
            }
        } catch (Exception e2) {
            Log.w("ZombieCafeAndroid-GCM", "Send device token failed: " + e2.getMessage());
        }
    }

    public static native void setOpenPurchaceScreenFlag(boolean z2);

    public static native void setPurchasingFlag(boolean z2);

    public static native void setVanityString(String str);

    public static native void updateAccelerometer(float f2, float f3, float f4);

    public void BuyToxin(int i2) throws IntentSender.SendIntentException {
        int i3;
        Log.d("Player is attempting", "To buy some smurfberries=" + i2);
        aE = i2;
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setClassName(w, SmurfsBilling.class.getName());
        String str = "";
        String str2 = "";
        if (i2 == -1) {
            intent.putExtra("NumberOfItems", 20);
            intent.putExtra("ItemName0", CC_Android.j[0]);
            intent.putExtra("ItemCost0", CC_Android.k[0]);
            intent.putExtra("ItemName1", CC_Android.j[1]);
            intent.putExtra("ItemCost1", CC_Android.k[1]);
            intent.putExtra("ItemName2", CC_Android.j[2]);
            intent.putExtra("ItemCost2", CC_Android.k[2]);
            intent.putExtra("ItemName3", CC_Android.j[3]);
            intent.putExtra("ItemCost3", CC_Android.k[3]);
            intent.putExtra("ItemName4", CC_Android.j[4]);
            intent.putExtra("ItemCost4", CC_Android.k[4]);
            intent.putExtra("ItemName5", CC_Android.j[5]);
            intent.putExtra("ItemCost5", CC_Android.k[5]);
            intent.putExtra("ItemName6", CC_Android.j[6]);
            intent.putExtra("ItemCost6", CC_Android.k[6]);
            intent.putExtra("ItemName7", CC_Android.j[7]);
            intent.putExtra("ItemCost7", CC_Android.k[7]);
            intent.putExtra("ItemName8", CC_Android.j[8]);
            intent.putExtra("ItemCost8", CC_Android.k[8]);
            intent.putExtra("ItemName9", CC_Android.j[9]);
            intent.putExtra("ItemCost9", CC_Android.k[9]);
            intent.putExtra("ItemName10", CC_Android.j[10]);
            intent.putExtra("ItemCost10", CC_Android.k[10]);
            intent.putExtra("ItemName11", CC_Android.j[11]);
            intent.putExtra("ItemCost11", CC_Android.k[11]);
            intent.putExtra("ItemName12", CC_Android.j[12]);
            intent.putExtra("ItemCost12", CC_Android.k[12]);
            intent.putExtra("ItemName13", CC_Android.j[13]);
            intent.putExtra("ItemCost13", CC_Android.k[13]);
            intent.putExtra("ItemName14", CC_Android.j[14]);
            intent.putExtra("ItemCost14", CC_Android.k[14]);
            intent.putExtra("ItemName15", CC_Android.j[15]);
            intent.putExtra("ItemCost15", CC_Android.k[15]);
            intent.putExtra("ItemName16", CC_Android.j[16]);
            intent.putExtra("ItemCost16", CC_Android.k[16]);
            intent.putExtra("ItemName17", CC_Android.j[17]);
            intent.putExtra("ItemCost17", CC_Android.k[17]);
            intent.putExtra("ItemName18", CC_Android.j[18]);
            intent.putExtra("ItemCost18", CC_Android.k[18]);
            intent.putExtra("ItemName19", CC_Android.j[19]);
            intent.putExtra("ItemCost19", CC_Android.k[19]);
            i3 = 20;
        } else {
            intent.putExtra("NumberOfItems", 1);
            intent.putExtra("ItemName0", CC_Android.j[i2]);
            intent.putExtra("ItemCost0", CC_Android.k[i2]);
            str = CC_Android.j[i2];
            str2 = CC_Android.k[i2];
            i3 = 1;
        }
        r = true;
        Log.d("Player is attempting", "1");
        setPurchasingFlag(true);
        Log.d("Player is attempting", "2");
        String strEntryCatalog = entryCatalog(i3, str, str2);
        if (strEntryCatalog.equals("")) {
            logging("catalog is not available.");
        } else {
            launchPurchase(strEntryCatalog);
        }
    }

    public void ClearFixWebView() {
        if (this.F != null) {
            this.bc.removeView(this.F);
            this.F = null;
        }
        if (this.G != null) {
            this.bc.removeView(this.G);
            this.G = null;
        }
        if (this.H != null) {
            this.bc.removeView(this.H);
            this.H = null;
        }
        if (E != null) {
            this.bb.removeView(E);
            E = null;
            this.bc.removeView(this.bb);
            this.bb = null;
        }
        if (this.bc != null) {
            ((ViewGroup) this.bc.getParent()).removeView(this.bc);
            this.bc = null;
        }
    }

    public void ClearInfoWebView() {
        if (this.D != null) {
            this.ba.removeView(this.D);
            this.D = null;
        }
        if (C != null) {
            this.aZ.removeView(C);
            C = null;
            this.ba.removeView(this.aZ);
            this.aZ = null;
        }
        if (this.ba != null) {
            ((ViewGroup) this.ba.getParent()).removeView(this.ba);
            this.ba = null;
        }
    }

    public String GetMusicFilename(int i2) {
        switch (i2) {
            case 1:
                return "Zombie Sting 1g.mp3";
            case 2:
                return "Zombie Sting 2g.mp3";
            case 3:
                return "Zombie Sting 3g.mp3";
            case 4:
                return "Zombie Sting 1g.mp3";
            case 5:
                return "Zombie Sting 1g.mp3";
            case 6:
                return "Zombie Sting 6g.mp3";
            case 7:
                return "Zombie Mini Cue 1g.mp3";
            case 8:
                return "Zombie Mini Cue 2g.mp3";
            case 9:
                return "Zombie Mini Cue 3g.mp3";
            case 10:
                return "Zombie Theme V1.mp3";
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                return "Zombie Theme V1.mp3";
            case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                return "Zombie Theme V1.mp3";
            case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                return "Zombie Theme V1.mp3";
            case 14:
                return "Zombie Sting 2g.mp3";
            case ViewDragHelper.EDGE_ALL /* 15 */:
                return "Zombie Mini Cue 1V2.mp3";
            case 16:
                return "Zombie Sting 3g.mp3";
            case 17:
                return "Zombie Sting 3g.mp3";
            case 18:
                return "Zombie Sting 3g.mp3";
            case TimeUtils.HUNDRED_DAY_FIELD_LEN /* 19 */:
                return "Zombie Cafe Haunted House.mp3";
            default:
                return "Zombie Theme V1.mp3";
        }
    }

    public boolean IsLoggedIn() {
        if (t.a(w)) {
            return af;
        }
        Log.d("IsLoggedIn", "NO! User does not have internet");
        return false;
    }

    public void LaunchCameraManager(String str) {
        Intent intent = new Intent("android.intent.action.VIEW");
        intent.setClassName(this, Cameramanager.class.getName());
        Log.d("==================================LaunchCamera", str);
        intent.putExtra("filename", str);
        startActivity(intent);
    }

    public void ListFiles() {
        Log.d("INTERNAL", "FILES");
        File filesDir = getFilesDir();
        Log.d("Our files are stored at", filesDir.getName());
        File[] fileArrListFiles = filesDir.listFiles();
        for (int i2 = 0; i2 < fileArrListFiles.length; i2++) {
            Log.d("File#" + i2, fileArrListFiles[i2].getName());
            Log.d("FileSize", Long.toString(fileArrListFiles[i2].length()));
            Log.d("FileName Length=" + fileArrListFiles[i2].getName().length(), "Hours Ago=" + ((CC_Android.fromNative_CCSecondsSince1970() - fileArrListFiles[i2].lastModified()) / 3600));
        }
        Log.d("SDCARD", "FILES");
        File externalStorageDirectory = Environment.getExternalStorageDirectory();
        if (externalStorageDirectory == null) {
            Log.d("NO SDCARD", "NO SDCARD");
            return;
        }
        Log.d("Our files are stored at", externalStorageDirectory.getName());
        File[] fileArrListFiles2 = externalStorageDirectory.listFiles();
        if (fileArrListFiles2 != null) {
            for (int i3 = 0; i3 < fileArrListFiles2.length; i3++) {
                Log.d("File#" + i3, fileArrListFiles2[i3].getName());
                Log.d("FileSize", Long.toString(fileArrListFiles2[i3].length()));
            }
        }
    }

    public void ShowAlertBox(int i2, String str, String str2, String str3, String str4) {
        aM = new AlertDialog.Builder(this);
        aM.setCancelable(false);
        aK = i2;
        aM.setInverseBackgroundForced(true);
        switch (i2) {
            case 0:
                bq = true;
                ShowAlertBox(1, "title", "eula,", "", "");
                break;
            case 1:
                aM.setTitle("Notice!");
                aM.setMessage(aN);
                new Handler().postDelayed(this.aO, 8000L);
                break;
            case 2:
                aM.setTitle("Notice!");
                aM.setMessage(aN);
                aM.setPositiveButton(str3, new aj(this));
                break;
            case 3:
                aM.setTitle("Notice!");
                aM.setMessage(aN);
                aM.setPositiveButton(str3, new ak(this));
                onBackPressed();
                break;
            case 4:
                aM.setTitle("Notice!");
                aM.setMessage(aN);
                aM.setPositiveButton(str3, new al(this));
                forceGameExit(true);
                break;
        }
        aL = aM.create();
        aL.show();
    }

    public void TakeScreenshot(String str) throws IOException {
        Log.d("Screenshot=" + str, "W=" + o + " H=" + p);
        javaTakeScreenshot(str, o, p);
    }

    public void Tick(float f2) {
        if (this.au == null || this.aq == null || this.at == null) {
            return;
        }
        this.at.post(new an(this, f2));
    }

    public boolean asyncConsume() {
        if (!Q.a()) {
            logging("helper setup has not already done.");
            return false;
        }
        logging("Setup successful. start consume.");
        Q.a(this.U, this.aJ);
        httpBuySbLog(w, this.U.b(), this.U.a(), this.U.c(), this.U.d());
        return true;
    }

    public boolean asyncQueryInventory() {
        if (!Q.a()) {
            logging("helper setup has not already done.");
            return false;
        }
        logging("Setup successful. Querying inventory.");
        for (int i2 = 0; i2 < this.bo.length; i2++) {
            this.bo[i2] = CC_Android.j[i2];
            this.bp[i2] = CC_Android.k[i2];
        }
        entryCatalog(20, "", "");
        Q.a(this.aH);
        return true;
    }

    protected boolean checkPlayServices() {
        int iA = com.google.android.gms.common.g.a(this);
        if (iA == 0) {
            return true;
        }
        if (com.google.android.gms.common.g.b(iA)) {
            com.google.android.gms.common.g.a(iA, this, 9000).show();
        } else {
            Log.i("ZombieCafeAndroid-GCM", "This device is not supported.");
        }
        return false;
    }

    public void clearNotifications() {
        be[0] = "Your Cafe Needs Attention!";
        be[1] = "Your Cafe Needs Attention!";
        be[2] = "Your Cafe Needs Attention!";
        be[3] = "Your Cafe Needs Attention!";
        be[4] = "Your Cafe Needs Attention!";
        bf[0] = 0;
        bf[1] = 0;
        bf[2] = 0;
        bf[3] = 0;
        bf[4] = 0;
    }

    @Override // android.app.Activity, android.view.Window.Callback
    public boolean dispatchKeyEvent(KeyEvent keyEvent) {
        Log.e("&&&&&&&", "&&&&&&");
        Log.e("dispatchKeyEvent, looking for:26", "Hardware Key=" + keyEvent.getKeyCode());
        Log.e("&&&&&&&", "&&&&&&");
        if (keyEvent.getKeyCode() != 26) {
            return super.dispatchKeyEvent(keyEvent);
        }
        Log.v("POWER KEY WAS HIT", "STOP MUSIC! SAVE GAME, START NOTIFICATIONS");
        boolean z2 = CC_Android.f66a;
        return true;
    }

    protected void doIabFinish() {
        logging("doIabFinish");
        if (Q != null) {
            Q.c();
        }
        Q = null;
    }

    public String entryCatalog(int i2, String str, String str2) {
        logging("Extra data from smurfs");
        logging("======================");
        logging("numberOfItems:" + String.valueOf(i2));
        aG = i2;
        if (str.equals("")) {
            logging("all catalog entry.");
            for (int i3 = 0; i3 < aG; i3++) {
                String str3 = this.bo[i3];
                aF[i3] = str3;
                bm[i3] = new aw(str3, aF[i3], ay.UNMANAGED);
                bn = str3;
                logging("SKU=" + str3);
            }
        } else {
            logging("one catalog entry.");
            aF[0] = str;
            bm[0] = new aw(str, aF[0], ay.UNMANAGED);
            bn = str;
        }
        logging("SKU=" + bn);
        return bn;
    }

    void forceGameExit(boolean z2) {
        if (z2) {
            Log.e("FORCEGAME EXIT", "Kill the whole game");
        } else {
            Log.e("FORCEGAME EXIT", "Keep running...");
        }
        if (z2) {
            Process.killProcess(Process.myPid());
        } else {
            finish();
        }
    }

    public String getDate(int i2) {
        Calendar calendar = Calendar.getInstance();
        System.out.println("Current time => " + calendar.getTime());
        String str = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(calendar.getTime());
        Log.d("Date with Time=" + i2, str);
        return str;
    }

    public GL10 getGlObj() {
        CapcomRenderer capcomRenderer = aa.f71a;
        return CapcomRenderer.f68a;
    }

    public void hideKeyboard() {
    }

    public void httpBuySbLog(Context context, String str, String str2, long j2, String str3) {
        logging("httpBuySbLog 0");
        int expId = getExpId(str);
        logging("mBought=" + expId);
        if (expId != -1) {
            int iNGetUserLevel = nGetUserLevel();
            String str4 = "http://vip.bij-games.com:10080/iap/setiap_index.php?udid=" + k + "&fbid=" + (nGetUserFbId() != "" ? nGetUserFbId() : "") + "&gcid=android&cn=ja_JP&lvl=" + iNGetUserLevel + "&sc=" + nGetUserCash() + "&mc=" + nGetUserToxin() + "&iapid=" + expId + "&osver=&device=&appver=" + (nGetUserCram() != "" ? nGetUserCram() : "") + "&time=" + nGetUserTime() + "&ou=android&po=" + str2 + "&pt=" + j2 + "&oid=android&vid=android&adid=android&hiveid=" + (nGetUserHiveId() != "" ? nGetUserHiveId() : "") + "&appname=azcjp&im=000000000000000&dP=" + str3;
            Bundle bundle = new Bundle();
            bundle.putString("url", str4);
            logging("httpBuySbLog url = " + str4);
            Bundle bundle2 = new Bundle();
            S = bundle.getString("url");
            T = 1;
            runSystemThread(13301, bundle2);
        }
    }

    public void javaTakeScreenshot(String str, int i2, int i3) throws IOException {
        int i4;
        int i5;
        GL10 gl10 = CapcomRenderer.f68a;
        if (i2 > 1000) {
            i5 = i2 - 200;
            i4 = i3 - 100;
        } else {
            i4 = i3;
            i5 = i2;
        }
        int i6 = i5 * i4;
        ByteBuffer byteBufferAllocateDirect = ByteBuffer.allocateDirect(i6 * 4);
        byteBufferAllocateDirect.order(ByteOrder.nativeOrder());
        gl10.glReadPixels(0, 0, i5, i4, 6408, 5121, byteBufferAllocateDirect);
        int[] iArr = new int[i6];
        byteBufferAllocateDirect.asIntBuffer().get(iArr);
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(i5, i4, Bitmap.Config.RGB_565);
        bitmapCreateBitmap.setPixels(iArr, i6 - i5, -i5, 0, 0, i5, i4);
        short[] sArr = new short[i6];
        ShortBuffer shortBufferWrap = ShortBuffer.wrap(sArr);
        bitmapCreateBitmap.copyPixelsToBuffer(shortBufferWrap);
        for (int i7 = 0; i7 < i6; i7++) {
            short s2 = sArr[i7];
            sArr[i7] = (short) (((s2 & 63488) >> 11) | ((s2 & 31) << 11) | (s2 & 2016));
        }
        shortBufferWrap.rewind();
        bitmapCreateBitmap.copyPixelsFromBuffer(shortBufferWrap);
        String absolutePath = new File(Environment.getExternalStorageDirectory(), str).getAbsolutePath();
        Log.d("SDCARD Write Out File", absolutePath);
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(absolutePath);
            bitmapCreateBitmap.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStream);
            fileOutputStream.flush();
            fileOutputStream.close();
        } catch (Exception e2) {
        }
        Log.d("Took Screen Shot???", absolutePath);
        Log.d("Bitmap W" + bitmapCreateBitmap.getWidth(), "bitmap H" + bitmapCreateBitmap.getHeight());
    }

    public boolean launchPurchase(String str) throws IntentSender.SendIntentException {
        boolean zA = Q.a();
        boolean zB = Q.b();
        if (!zA || zB) {
            logging("failed to launch purchase: setup=" + String.valueOf(zA) + "async=" + String.valueOf(zB));
            return false;
        }
        logging("launch purchase");
        Q.a(this, str, 10001, this.aI);
        return true;
    }

    public String md5Data(byte[] bArr, int i2) throws NoSuchAlgorithmException {
        Log.d("Md5DataIn", "length=" + i2);
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.reset();
            messageDigest.update(bArr, 0, i2);
            byte[] bArrDigest = messageDigest.digest();
            int length = bArrDigest.length;
            StringBuilder sb = new StringBuilder(length << 1);
            for (int i3 = 0; i3 < length; i3++) {
                sb.append(Character.forDigit((bArrDigest[i3] & 240) >> 4, 16));
                sb.append(Character.forDigit(bArrDigest[i3] & 15, 16));
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public String md5String(String str) throws NoSuchAlgorithmException {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.reset();
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            int length = bArrDigest.length;
            StringBuilder sb = new StringBuilder(length << 1);
            for (int i2 = 0; i2 < length; i2++) {
                sb.append(Character.forDigit((bArrDigest[i2] & 240) >> 4, 16));
                sb.append(Character.forDigit(bArrDigest[i2] & 15, 16));
            }
            return sb.toString();
        } catch (NoSuchAlgorithmException e2) {
            e2.printStackTrace();
            return null;
        }
    }

    public boolean nativeCanOpenHero() {
        return false;
    }

    public boolean nativeCanOpenNinja() {
        return false;
    }

    public boolean nativeCanOpenSnoopyPuzzle() {
        return false;
    }

    public void nativeER3Parse(int i2, int i3, int i4, int i5, int i6, int i7) {
        ER3Parse(i2, i3, i4, i5, i6, i7);
    }

    public void nativeEventGetGiftParse(String str, int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, int[] iArr5, int i2) {
        EventGetGiftParse(str, iArr, iArr2, iArr3, iArr4, iArr5, i2);
    }

    public void nativeGetEntryParse(int i2, int i3, int i4, int i5) {
        GetEntryParse(i2, i3, i4, i5);
    }

    public void nativeGetEventValueParse(int[] iArr, int[] iArr2, int[] iArr3, String[] strArr, int[] iArr4, String[] strArr2, int i2) {
        GetEventValueParse(iArr, iArr2, iArr3, strArr, iArr4, strArr2, i2);
    }

    public void nativeGetGameInfoHCOItemParse(int i2, int i3, int i4, int i5, int i6, int i7) {
        GetGameInfoHCOItemParse(i2, i3, i4, i5, i6, i7);
    }

    public void nativeGetGameInfoHCOSettingParse(int i2, int i3, long j2, int i4, long j3, long j4, int i5) {
        GetGameInfoHCOSettingParse(i2, i3, j2, i4, j3, j4, i5);
    }

    public void nativeJSONTakeOverDataParse(int i2, String str, String str2, String str3, String str4) {
        JSONTakeOverDataParse(i2, str, str2, str3, str4);
    }

    public void nativeJSONTakeOverDataParse2(int i2, String str, String str2, String str3) {
        JSONTakeOverDataParse2(i2, str, str2, str3);
    }

    public void nativeRankingGetGiftParse(String[] strArr, int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, String[] strArr2, int i2) {
        RankingGetGiftParse(strArr, iArr, iArr2, iArr3, iArr4, strArr2, i2);
    }

    public void nativeSurvivalCheckGiftParse(int i2, int i3) {
        SurvivalCheckGiftParse(i2, i3);
    }

    public void nativeSurvivalGetGiftParse(int i2, int i3, String str, int i4, int i5, int i6, int i7, int i8, int i9, int i10, int i11) {
        SurvivalGetGiftParse(i2, i3, str, i4, i5, i6, i7, i8, i9, i10, i11);
    }

    public void nativeSurvivalParse(int[] iArr, int[] iArr2, int[] iArr3, int[] iArr4, int[] iArr5, int i2) {
        SurvivalInfo(iArr, iArr2, iArr3, iArr4, iArr5, i2);
    }

    public void nativeSurvivalParse2(int i2) {
        SurvivalInfo2(i2);
    }

    @Override // com.capcom.zombiecafeandroidJP.a
    public void onAccelerationChanged(float f2, float f3, float f4) {
    }

    @Override // android.app.Activity
    public void onActivityResult(int i2, int i3, Intent intent) {
        Log.v("OnActivityResult", "Enter");
        if (Q.a(i2, i3, intent)) {
            logging("onActivityResult handled by IABUtil.");
        } else {
            logging("onActivityResult failed by IABUtil.");
            super.onActivityResult(i2, i3, intent);
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        Log.v("ONBACKPRESSED", "Handle Back Button");
        if (HandleBackButton()) {
            Log.v("ONBACKPRESSED", "About To Exit, get notifications..");
            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle(ay);
            builder.setMessage(az);
            builder.setPositiveButton(aA, new aa(this));
            builder.setNegativeButton(aB, new ab(this));
            builder.show();
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        w = this;
        x = this;
        this.ai = 13;
        setVolumeControlStream(3);
        super.onCreate(bundle);
        Log.e("===================", "==========");
        Log.e("===================", "==========");
        Log.e("ZOMBIECAFE ONCREATE", "IS RUNNING");
        Log.e("===================", "==========");
        Log.e("===================", "==========");
        Log.i("FIXMEMORYLEAK", "MEMORY CLASS : " + ((ActivityManager) getSystemService("activity")).getMemoryClass() + " MB");
        Log.i("FIXMEMORYLEAK", "MAX MEMORY   : " + ((Runtime.getRuntime().maxMemory() / 1024) / 1024) + " MB");
        Q = new com.capcom.billing.l(this, P);
        Q.a(false);
        logging("iab Starting setup.");
        Q.a(new as(this));
        net.adways.appdriver.sdk.a.a(this, 3031, "0391c8decafd1d8b5d011a0077b3e719");
        Thread.setDefaultUncaughtExceptionHandler(new at(this));
        aR = (NotificationManager) getSystemService("notification");
        aS = (AlarmManager) getSystemService("alarm");
        getWindow().addFlags(128);
        ((NotificationManager) getSystemService("notification")).cancelAll();
        clearNotifications();
        s = getWindowManager().getDefaultDisplay();
        ak = new com.capcom.a.f("305409282881599");
        Log.v("ZombieCafeAndroid", "About to start sound manager");
        if (ag == null) {
            ag = new SoundManager();
            if (!CC_Android.b) {
                new v().execute(new String[0]);
            }
        }
        aa = new SmurfsGLSurfaceView(this);
        bd = new RelativeLayout(this);
        bd.addView(aa);
        setContentView(bd);
        new o().execute(new String[0]);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Log.d("=====================", "==================");
        Log.d("Activity in OnDestroy", "Should be finished");
        Log.d("=====================", "==================");
        super.onDestroy();
        doIabFinish();
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i2, KeyEvent keyEvent) {
        Log.e("&&&&&&&", "&&&&&&");
        Log.e("onKeydown", "Hardware Key=" + i2);
        Log.e("&&&&&&&", "&&&&&&");
        if (i2 == 84 || i2 == 84 || i2 == 111 || i2 == 26) {
            return true;
        }
        return super.onKeyDown(i2, keyEvent);
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onLowMemory() {
        super.onLowMemory();
        ab++;
        Log.e("ERROR!!!", "LOW MEMORY TIMES=" + ab);
    }

    @Override // android.app.Activity
    protected void onPause() {
        Log.e("&&&&&", "&&&&");
        Log.d("Activity in OnPause", "About To Exit");
        Log.e("&&&&&", "&&&&");
        com.capcom.gcm.e.b(getContext(), false);
        pause();
        super.onPause();
        aa.onPause();
        if (ag != null) {
            ag.setEnabled(false);
        }
        if (!CC_Android.f66a) {
            CC_Android.fromNative_pauseMusic(0);
        }
        if (aX != null) {
            aX.setVisibility(8);
            aX.destroy();
            aX = null;
        }
        if (E != null) {
            ClearFixWebView();
        }
        if (aU != null) {
            aU.setVisibility(8);
            aU.destroy();
            aU = null;
        }
        if (aV != null) {
            aV.setVisibility(8);
            aV.destroy();
            aV = null;
        }
        if (aY != null) {
            aY.setVisibility(8);
            aY.destroy();
            aY = null;
        }
        if (r) {
            Log.e("ONPause, Buying berries", "so don't start notifications");
            return;
        }
        StartNotifications();
        try {
            unregisterReceiver(this.bl);
        } catch (Exception e2) {
            Log.e("onPause", "Error: unregisterReceiver");
            e2.printStackTrace();
        }
    }

    @Override // android.app.Activity
    protected void onPostResume() {
        Log.d("Activity in OnPostResume", "After exit");
        super.onPostResume();
    }

    @Override // android.app.Activity
    protected void onRestart() {
        Log.d("Activity in OnRestart", "After exit");
        super.onRestart();
    }

    @Override // android.app.Activity
    protected void onResume() {
        Log.d("Activity in OnResume", "After exit");
        super.onResume();
        aa.onResume();
        resume();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.USER_PRESENT");
        registerReceiver(this.bl, intentFilter);
        if (((KeyguardManager) w.getSystemService("keyguard")).inKeyguardRestrictedInputMode()) {
            Log.d("Activity in OnResume", "Locked");
        } else {
            Log.d("Activity in OnResume", "Unlocked 0");
            if (ag != null) {
                Log.d("Activity in OnResume", "Unlocked 1");
                ag.setEnabled(true);
                if (!CC_Android.f66a) {
                    Log.d("Activity in OnResume", "Unlocked 2");
                    CC_Android.fromNative_startMusic(0);
                }
            }
            Log.d("Activity in OnResume", "Unlocked 100");
        }
        r = false;
        clearNotifications();
        t.a(w);
        if (v == null) {
            v = URLManager.a();
        }
        A = false;
        if (b.c()) {
            b.a(this);
        }
        if (aX == null) {
            Log.e("OnResume...WEBVIEW IS NULL", "GET A NEW ONE!");
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams((int) (o * 0.75f), (int) (p * 0.75f));
            layoutParams.setMargins((int) (o * 0.15f), (int) (p * 0.22f), (int) (o * 0.05f), (int) (p * 0.32f));
            aX = new WebView(aa.getContext());
            if (aX != null) {
                bd.addView(aX, layoutParams);
                aX.loadUrl("file:///android_asset/data/help.html");
                aX.setBackgroundResource(0);
                aX.setBackgroundColor(R.color.transparent);
                aX.setHorizontalScrollBarEnabled(false);
                aX.getSettings().setJavaScriptEnabled(true);
                Log.v("About to the Check Help Screen", "HELP?");
                if (CheckIfInHelpScreen()) {
                    Log.v("HelpScreen", "Turn ON!");
                    aX.setVisibility(0);
                } else {
                    Log.v("HelpScreen", "Turn OFF!");
                    aX.setVisibility(8);
                }
            }
        }
        if (aU == null) {
            Log.e("OnResume...NickNameView IS NULL", "GET A NEW ONE!");
            new RelativeLayout.LayoutParams(o, p).setMargins(0, 0, 0, 0);
            aU = new WebView(aa.getContext());
        }
        if (aV == null) {
            Log.e("OnResume...RankingView IS NULL", "GET A NEW ONE!");
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(o, (int) (p * 0.75f));
            layoutParams2.setMargins(0, (int) (p * 0.25f), 0, 0);
            aV = new WebView(aa.getContext());
            aV.setWebViewClient(new am(this));
            if (aV != null) {
                Log.d("ZombieCafeAndroid", "if mRankingView Not Null");
                bd.addView(aV, layoutParams2);
                aV.setHorizontalScrollBarEnabled(false);
                aV.setVerticalScrollBarEnabled(false);
                aV.getSettings().setJavaScriptEnabled(true);
                if (CheckIfInHelpScreen()) {
                    Log.v("HelpScreen", "Turn ON!");
                    aV.setVisibility(0);
                } else {
                    Log.v("HelpScreen", "Turn OFF!");
                    aV.setVisibility(8);
                }
            }
        }
        if (aY == null) {
            Log.e("OnResume...InfoView IS NULL", "GET A NEW ONE!");
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(o, (int) (p * 0.75f));
            layoutParams3.setMargins(0, (int) (p * 0.25f), 0, 0);
            aY = new WebView(aa.getContext());
            if (aY != null) {
                bd.addView(aY, layoutParams3);
                aY.loadUrl("file:///android_asset/smurfs_help.html");
                aY.setBackgroundResource(0);
                aY.setBackgroundColor(R.color.transparent);
                aY.setHorizontalScrollBarEnabled(false);
                aY.setVerticalScrollBarEnabled(false);
                aY.getSettings().setJavaScriptEnabled(true);
                if (CheckIfInHelpScreen()) {
                    Log.v("HelpScreen", "Turn ON!");
                    aY.setVisibility(0);
                } else {
                    Log.v("HelpScreen", "Turn OFF!");
                    aY.setVisibility(8);
                }
            }
        }
        ((NotificationManager) getSystemService("notification")).cancelAll();
        com.capcom.gcm.e.b(getContext(), true);
        getDate(0);
    }

    @Override // com.capcom.zombiecafeandroidJP.a
    public void onShake(float f2) {
        System.out.println("onShake with force " + f2);
        deviceShaken();
    }

    @Override // android.app.Activity
    public void onStart() {
        super.onStart();
        w = this;
        Log.d("=====================", "==================");
        Log.d("Zombie Cafe ONSTART", "Get Devices");
        Log.d("=====================", "==================");
        if (ad == null) {
            ad = getSharedPreferences("Options", 0);
        }
        if (this.aT == null) {
            this.aT = new b();
        }
        b.a(this, 0.5f, 333);
        Log.e("===DEVICE INFO===", "===DEVICE INFO===");
        Display defaultDisplay = getWindowManager().getDefaultDisplay();
        o = defaultDisplay.getWidth();
        p = defaultDisplay.getHeight();
        DisplayMetrics displayMetrics = new DisplayMetrics();
        defaultDisplay.getMetrics(displayMetrics);
        double d2 = displayMetrics.widthPixels / displayMetrics.xdpi;
        double d3 = displayMetrics.heightPixels / displayMetrics.ydpi;
        double dSqrt = Math.sqrt((d2 * d2) + (d3 * d3));
        Log.v("inch", String.valueOf(dSqrt) + ":" + d2 + ":" + d3);
        q = dSqrt;
        Log.e("Manufacturer", Build.MANUFACTURER);
        Log.e("Model", Build.MODEL);
        Log.e("Device", Build.DEVICE);
        Log.e("Brand", Build.BRAND);
        Log.e("Board", Build.BOARD);
        Log.e("ScreenWidth=" + o, "ScreenHeight=" + p);
        if (i == null) {
            i = new m();
        }
        m.a();
        j = 0;
        m = String.valueOf(Build.MANUFACTURER) + ":" + Build.MODEL + ":" + Build.DEVICE;
        Log.d("PRODUCTID", m);
        m.replaceAll(" ", "_");
        n = w.getResources().getConfiguration().locale.getCountry();
        Log.d("COUNTRYCODE", n);
        Log.d("======END======", "=====END======");
        System.setProperty("http.agent", "ZombieCafe/1.0.0.0a");
        an = System.getProperty("http.agent");
        Log.e("ANDROID USER AGENT", an);
        Log.e("Final ScreenWidth=" + o, "Final ScreenHeight=" + p);
        if (!CC_Android.f66a && !aC) {
            aC = true;
            new q().execute(new String[0]);
        }
        aQ = new ac(this);
        if (ac == null) {
            ac = new CC_Android(this);
            ac.getGLObj();
        }
        for (int i2 = 0; i2 < 10; i2++) {
            W[i2] = 0.0f;
        }
        if (t == null) {
            t = new URLManager(w);
        }
        t.a(w);
        if (v == null) {
            v = URLManager.a();
        }
        boolean zCheckPlayServices = checkPlayServices();
        Log.i("ZombieCafeAndroid-GCM", "Check the Google Play Services Support: " + zCheckPlayServices);
        if (zCheckPlayServices) {
            this.bj = com.google.android.gms.b.a.a(this);
            this.bk = com.capcom.gcm.e.c(w);
            Log.i("ZombieCafeAndroid-GCM", "First registration ID=" + this.bk);
            if (this.bk.isEmpty()) {
                registerInBackground();
            }
        } else {
            Log.i("ZombieCafeAndroid-GCM", "No valid Google Play Services APK found.");
        }
        B = "";
    }

    @Override // android.app.Activity
    protected void onStop() {
        Log.d("=====================", "==================");
        Log.d("Activity in OnStop", "About to exit?");
        Log.d("=====================", "==================");
        super.onStop();
        if (b.a()) {
            b.b();
        }
        StartNotifications();
    }

    public void openGooglePlay() {
        Log.v("YASUMURA", "openGooglePlay");
        startActivity(new Intent("android.intent.action.VIEW", Uri.parse("http://market.android.com/details?id=com.capcom.zombiecafeandroidJP")));
    }

    public void openNickNameEditPage() {
        Log.v("openNickNameEditPage", "/========== START ==========/");
        String str = "000000000000000";
        String str2 = "000000000000000";
        startActivity(new Intent("android.intent.action.VIEW", Uri.parse(String.valueOf("http://azcjp.jive.bij-cram01.com/index.php") + ("?seq=UPDATE&appname=azcjp&im=" + h + "&aid=" + l + "&ud=" + k))));
        Log.v("openNickNameEditPage", "/========== END ==========/");
    }

    public void openSupportPage() {
        Log.v("TAKAOKA", "openSupportPage");
        String str = "000000000000000";
        String str2 = "http://bij.beeline-i.info/cs/jp-a/zombiecafe/index.php?uuid=" + k + "&deviceid=" + str + "&im=" + h + "&aid=" + l + "&serial=" + ("000000000000000") + "&ca=" + ((TelephonyManager) getContext().getSystemService("phone")).getSimOperator() + "&apriname=com.capcom.zombiecafeandroidJP";
        Log.v("openSupportPage = ", str2);
        startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str2)));
    }

    public void sendAppDriver(String str) {
        String str2 = k;
        String str3 = String.valueOf(str2) + "_" + str + "_azcjp";
        Log.d("HIGUCHI", "String identifier = " + str3);
        if (str2 == "" || str == "") {
            return;
        }
        net.adways.appdriver.sdk.a.b(this, 3254, str3);
    }

    public void showEnterMigrationPassword() {
        this.aw = getLayoutInflater().inflate(2130903044, (ViewGroup) null);
        bd.addView(this.aw, new ViewGroup.LayoutParams(-1, -1));
        bd.bringChildToFront(this.aw);
        this.ax = true;
        this.av = (Button) findViewById(2131427366);
        this.av.setOnClickListener(new au(this));
        ((Button) findViewById(2131427357)).setOnClickListener(new av(this));
    }

    public void showKeyboard() {
    }
}
