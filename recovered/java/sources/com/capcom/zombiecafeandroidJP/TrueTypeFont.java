package com.capcom.zombiecafeandroidJP;

import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.support.v4.view.ViewCompat;
import android.util.FloatMath;
import android.util.Log;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class TrueTypeFont {

    /* renamed from: a, reason: collision with root package name */
    private static String f73a = "CapcomTrueTypeFont";
    private static final Map b = Collections.synchronizedMap(new HashMap());
    private final x c;
    private final Typeface d;
    private int l;
    private int m;
    private int f = ViewCompat.MEASURED_STATE_MASK;
    private int g = 0;
    private int h = 0;
    private float i = 0.0f;
    private float j = 0.0f;
    private float k = 1.0f;
    private final Paint e = new Paint();

    static {
        try {
            initTrueTypeFont();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private TrueTypeFont(x xVar, Typeface typeface) {
        this.c = xVar;
        this.d = typeface;
        this.e.setTypeface(this.d);
        this.e.setAntiAlias(true);
        this.l = 0;
        this.m = 0;
    }

    private Bitmap doDrawString(String str, int i, int i2, boolean z, boolean z2, int i3, int i4) {
        int length = str.length();
        LinkedList<List> linkedList = new LinkedList();
        float f = i3 / 100.0f;
        float f2 = i4 / 100.0f;
        ArrayList arrayList = null;
        int i5 = 0;
        float fAbs = (Math.abs(getAscent()) + i2) - 0.0f;
        float charWidth = i + 0.0f;
        float fMax = 0.0f;
        for (int i6 = 0; i6 < length; i6++) {
            char cCharAt = str.charAt(i6);
            if (cCharAt == '\n') {
                charWidth = 0.0f;
                fAbs += getTextHeight() * f2;
                arrayList = null;
            } else {
                if (arrayList == null) {
                    arrayList = new ArrayList(length);
                    linkedList.add(arrayList);
                }
                arrayList.add(new w(this, cCharAt, charWidth, fAbs));
                charWidth += getCharWidth(cCharAt) * f;
                fMax = Math.max(charWidth, fMax);
                i5++;
            }
        }
        int iCeil = (int) FloatMath.ceil(4.0f + fMax + 0.0f);
        int iCeil2 = (int) FloatMath.ceil(Math.abs(getDescent()) + fAbs + 1.0f + 0.0f);
        Bitmap bitmapCreateBitmap = Bitmap.createBitmap(nextPowerOfTwo(iCeil), nextPowerOfTwo(iCeil2), Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmapCreateBitmap);
        this.e.setColor(this.f);
        for (List list : linkedList) {
            if (!list.isEmpty()) {
                float fCeil = z ? FloatMath.ceil((iCeil - ((int) FloatMath.ceil(Math.abs(((w) list.get(list.size() - 1)).b() - ((w) list.get(0)).a())))) / 2) : 0.0f;
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    ((w) it.next()).a(canvas, this.e, fCeil, 0.0f);
                }
            }
        }
        this.l = iCeil;
        this.m = iCeil2;
        return bitmapCreateBitmap;
    }

    public static synchronized TrueTypeFont getInstance(AssetManager assetManager, String str, int i) {
        TrueTypeFont trueTypeFont;
        Log.i(f73a, "getInstance 1: " + str + "," + i);
        x xVar = new x(null);
        xVar.f118a = str;
        xVar.b = i;
        trueTypeFont = (TrueTypeFont) b.get(xVar);
        if (trueTypeFont == null) {
            trueTypeFont = new TrueTypeFont(xVar, Typeface.createFromAsset(assetManager, str));
            b.put(xVar, trueTypeFont);
            Log.i(f73a, "getInstance new: " + str + "," + i);
        }
        Log.i(f73a, "getInstance 2: " + str + "," + i);
        return trueTypeFont;
    }

    private static native void initTrueTypeFont();

    private int nextPowerOfTwo(int i) {
        int i2 = 2;
        while (i2 < i) {
            i2 <<= 1;
        }
        return i2;
    }

    private static int rgba(float f, float f2, float f3, float f4) {
        return Color.argb((int) ((255.0f * f4) + 0.5f), (int) ((f * 255.0f) + 0.5f), (int) ((f2 * 255.0f) + 0.5f), (int) ((f3 * 255.0f) + 0.5f));
    }

    public Bitmap drawString(String str, int i, int i2, boolean z, boolean z2, int i3, int i4) {
        try {
            return doDrawString(str, i, i2, z, z2, i3, i4);
        } catch (Throwable th) {
            th.printStackTrace();
            return null;
        }
    }

    protected void finalize() throws Throwable {
        Log.i(f73a, "finalize 1: " + this.c.f118a + "," + this.c.b);
        synchronized (this) {
            b.remove(this.c);
        }
        Log.i(f73a, "finalize 1: " + this.c.f118a + "," + this.c.b);
        super.finalize();
    }

    public int getAscent() {
        try {
            return this.e.getFontMetricsInt().ascent;
        } catch (Throwable th) {
            th.printStackTrace();
            return 0;
        }
    }

    public int getCharWidth(char c) {
        if (this.e.getTextWidths(new char[]{c}, 0, 1, new float[]{0.0f}) > 0) {
            return (int) (((int) FloatMath.ceil(r2[0])) + this.i + 0);
        }
        return 0;
    }

    public int getDescent() {
        try {
            return (int) FloatMath.ceil(this.e.getFontMetrics().descent);
        } catch (Throwable th) {
            th.printStackTrace();
            return 0;
        }
    }

    public int getDrawnHeight() {
        return this.m;
    }

    public int getDrawnWidth() {
        return this.l;
    }

    public int getLeading() {
        try {
            return (int) FloatMath.ceil(this.e.getFontMetrics().leading);
        } catch (Throwable th) {
            th.printStackTrace();
            return 0;
        }
    }

    public int getStringWidth(String str, int i, int i2) {
        if (i2 < 0) {
            i2 = str.length();
        }
        if (i > i2) {
            return 0;
        }
        Log.v(f73a, "getStringWidth: " + str.substring(i, i2));
        int iCeil = (int) FloatMath.ceil(this.e.measureText(str, i, i2) + (this.i * (i2 - i)));
        Log.v(f73a, "getStringWidth: " + str.substring(i, i2) + " width=" + iCeil);
        return iCeil;
    }

    public int getTextHeight() {
        try {
            Paint.FontMetrics fontMetrics = this.e.getFontMetrics();
            return (int) FloatMath.ceil(Math.abs(fontMetrics.bottom) + Math.abs(fontMetrics.top));
        } catch (Throwable th) {
            th.printStackTrace();
            return 0;
        }
    }

    public int getUnitsPerEm() {
        return 1024;
    }

    public void setColor(float f, float f2, float f3, float f4) {
        this.f = rgba(f, f2, f3, f4);
    }

    public void setEdge(int i, float f, float f2, float f3, float f4) {
        this.g = i;
        this.h = rgba(f, f2, f3, f4);
    }

    public void setPadding(float f, float f2) {
        this.i = f;
        this.j = f2;
    }

    public void setShadow(float f, float f2, float f3, float f4, float f5, float f6, float f7) {
        this.e.setShadowLayer(f, f2, f3, rgba(f4, f5, f6, f7));
    }

    public void setSize(float f) {
        this.e.setTextSize(f);
        this.k = f / getUnitsPerEm();
    }
}
