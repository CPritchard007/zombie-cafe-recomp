package com.google.android.gms.ads;

import android.content.Context;
import com.google.android.gms.internal.Cif;
import com.google.android.gms.internal.al;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdSize {
    public static final int AUTO_HEIGHT = -2;
    public static final int FULL_WIDTH = -1;

    /* renamed from: a, reason: collision with root package name */
    private final int f137a;
    private final int b;
    private final String c;
    public static final AdSize BANNER = new AdSize(320, 50, "320x50_mb");
    public static final AdSize FULL_BANNER = new AdSize(468, 60, "468x60_as");
    public static final AdSize LARGE_BANNER = new AdSize(320, 100, "320x100_as");
    public static final AdSize LEADERBOARD = new AdSize(728, 90, "728x90_as");
    public static final AdSize MEDIUM_RECTANGLE = new AdSize(300, 250, "300x250_as");
    public static final AdSize WIDE_SKYSCRAPER = new AdSize(160, 600, "160x600_as");
    public static final AdSize SMART_BANNER = new AdSize(-1, -2, "smart_banner");

    public AdSize(int i, int i2) {
        this(i, i2, (i == -1 ? "FULL" : String.valueOf(i)) + "x" + (i2 == -2 ? "AUTO" : String.valueOf(i2)) + "_as");
    }

    AdSize(int i, int i2, String str) {
        if (i < 0 && i != -1) {
            throw new IllegalArgumentException("Invalid width for AdSize: " + i);
        }
        if (i2 < 0 && i2 != -2) {
            throw new IllegalArgumentException("Invalid height for AdSize: " + i2);
        }
        this.f137a = i;
        this.b = i2;
        this.c = str;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AdSize)) {
            return false;
        }
        AdSize adSize = (AdSize) obj;
        return this.f137a == adSize.f137a && this.b == adSize.b && this.c.equals(adSize.c);
    }

    public int getHeight() {
        return this.b;
    }

    public int getHeightInPixels(Context context) {
        return this.b == -2 ? al.b(context.getResources().getDisplayMetrics()) : Cif.a(context, this.b);
    }

    public int getWidth() {
        return this.f137a;
    }

    public int getWidthInPixels(Context context) {
        return this.f137a == -1 ? al.a(context.getResources().getDisplayMetrics()) : Cif.a(context, this.f137a);
    }

    public int hashCode() {
        return this.c.hashCode();
    }

    public boolean isAutoHeight() {
        return this.b == -2;
    }

    public boolean isFullWidth() {
        return this.f137a == -1;
    }

    public String toString() {
        return this.c;
    }
}
