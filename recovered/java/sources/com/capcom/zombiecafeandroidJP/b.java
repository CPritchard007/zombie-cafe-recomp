package com.capcom.zombiecafeandroidJP;

import android.hardware.Sensor;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class b {
    private static Sensor c;
    private static SensorManager d;
    private static a e;
    private static Boolean f;

    /* renamed from: a, reason: collision with root package name */
    private static float f101a = 0.2f;
    private static int b = 1000;
    private static boolean g = false;
    private static SensorEventListener h = new c();

    public static void a(float f2, int i) {
        f101a = f2;
        b = i;
    }

    public static void a(a aVar) {
        d = (SensorManager) ZombieCafeAndroid.getContext().getSystemService("sensor");
        List<Sensor> sensorList = d.getSensorList(1);
        if (sensorList.size() > 0) {
            c = sensorList.get(0);
            g = d.registerListener(h, c, 1);
            e = aVar;
        }
    }

    public static void a(a aVar, float f2, int i) {
        a(f2, i);
        a(aVar);
    }

    public static boolean a() {
        return g;
    }

    public static void b() {
        g = false;
        try {
            if (d == null || h == null) {
                return;
            }
            d.unregisterListener(h);
        } catch (Exception e2) {
        }
    }

    public static boolean c() {
        if (f == null) {
            if (ZombieCafeAndroid.getContext() != null) {
                d = (SensorManager) ZombieCafeAndroid.getContext().getSystemService("sensor");
                f = new Boolean(d.getSensorList(1).size() > 0);
            } else {
                f = Boolean.FALSE;
            }
        }
        return f.booleanValue();
    }
}
