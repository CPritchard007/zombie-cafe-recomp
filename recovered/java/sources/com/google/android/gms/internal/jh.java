package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.Locale;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class jh implements SafeParcelable {
    public static final ni CREATOR = new ni();

    /* renamed from: a, reason: collision with root package name */
    private final int f450a;
    private final String b;
    private final long c;
    private final short d;
    private final double e;
    private final double f;
    private final float g;
    private final int h;
    private final int i;
    private final int j;

    public jh(int i, String str, int i2, short s, double d, double d2, float f, long j, int i3, int i4) {
        a(str);
        a(f);
        a(d, d2);
        int iA = a(i2);
        this.f450a = i;
        this.d = s;
        this.b = str;
        this.e = d;
        this.f = d2;
        this.g = f;
        this.c = j;
        this.h = iA;
        this.i = i3;
        this.j = i4;
    }

    private static int a(int i) {
        int i2 = i & 7;
        if (i2 == 0) {
            throw new IllegalArgumentException("No supported transition specified: " + i);
        }
        return i2;
    }

    private static void a(double d, double d2) {
        if (d > 90.0d || d < -90.0d) {
            throw new IllegalArgumentException("invalid latitude: " + d);
        }
        if (d2 > 180.0d || d2 < -180.0d) {
            throw new IllegalArgumentException("invalid longitude: " + d2);
        }
    }

    private static void a(float f) {
        if (f <= 0.0f) {
            throw new IllegalArgumentException("invalid radius: " + f);
        }
    }

    private static void a(String str) {
        if (str == null || str.length() > 100) {
            throw new IllegalArgumentException("requestId is null or too long: " + str);
        }
    }

    private static String b(int i) {
        switch (i) {
            case 1:
                return "CIRCLE";
            default:
                return null;
        }
    }

    public int a() {
        return this.f450a;
    }

    public short b() {
        return this.d;
    }

    public double c() {
        return this.e;
    }

    public double d() {
        return this.f;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        ni niVar = CREATOR;
        return 0;
    }

    public float e() {
        return this.g;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && (obj instanceof jh)) {
            jh jhVar = (jh) obj;
            return this.g == jhVar.g && this.e == jhVar.e && this.f == jhVar.f && this.d == jhVar.d;
        }
        return false;
    }

    public String f() {
        return this.b;
    }

    public long g() {
        return this.c;
    }

    public int h() {
        return this.h;
    }

    public int hashCode() {
        long jDoubleToLongBits = Double.doubleToLongBits(this.e);
        int i = ((int) (jDoubleToLongBits ^ (jDoubleToLongBits >>> 32))) + 31;
        long jDoubleToLongBits2 = Double.doubleToLongBits(this.f);
        return (((((((i * 31) + ((int) (jDoubleToLongBits2 ^ (jDoubleToLongBits2 >>> 32)))) * 31) + Float.floatToIntBits(this.g)) * 31) + this.d) * 31) + this.h;
    }

    public int i() {
        return this.i;
    }

    public int j() {
        return this.j;
    }

    public String toString() {
        return String.format(Locale.US, "Geofence[%s id:%s transitions:%d %.6f, %.6f %.0fm, resp=%ds, dwell=%dms, @%d]", b(this.d), this.b, Integer.valueOf(this.h), Double.valueOf(this.e), Double.valueOf(this.f), Float.valueOf(this.g), Integer.valueOf(this.i / 1000), Integer.valueOf(this.j), Long.valueOf(this.c));
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ni niVar = CREATOR;
        ni.a(this, parcel, i);
    }
}
