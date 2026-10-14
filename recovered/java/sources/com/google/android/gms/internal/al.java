package com.google.android.gms.internal;

import android.content.Context;
import android.os.Parcel;
import android.util.DisplayMetrics;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class al implements SafeParcelable {
    public static final r CREATOR = new r();

    /* renamed from: a, reason: collision with root package name */
    public final int f283a;
    public final String b;
    public final int c;
    public final int d;
    public final boolean e;
    public final int f;
    public final int g;
    public final al[] h;

    public al() {
        this(2, "interstitial_mb", 0, 0, true, 0, 0, null);
    }

    al(int i, String str, int i2, int i3, boolean z, int i4, int i5, al[] alVarArr) {
        this.f283a = i;
        this.b = str;
        this.c = i2;
        this.d = i3;
        this.e = z;
        this.f = i4;
        this.g = i5;
        this.h = alVarArr;
    }

    public al(Context context, AdSize adSize) {
        this(context, new AdSize[]{adSize});
    }

    public al(Context context, AdSize[] adSizeArr) {
        int i;
        AdSize adSize = adSizeArr[0];
        this.f283a = 2;
        this.e = false;
        this.f = adSize.getWidth();
        this.c = adSize.getHeight();
        boolean z = this.f == -1;
        boolean z2 = this.c == -2;
        DisplayMetrics displayMetrics = context.getResources().getDisplayMetrics();
        if (z) {
            this.g = a(displayMetrics);
            i = (int) (this.g / displayMetrics.density);
        } else {
            int i2 = this.f;
            this.g = Cif.a(displayMetrics, this.f);
            i = i2;
        }
        int iC = z2 ? c(displayMetrics) : this.c;
        this.d = Cif.a(displayMetrics, iC);
        if (z || z2) {
            this.b = i + "x" + iC + "_as";
        } else {
            this.b = adSize.toString();
        }
        if (adSizeArr.length <= 1) {
            this.h = null;
            return;
        }
        this.h = new al[adSizeArr.length];
        for (int i3 = 0; i3 < adSizeArr.length; i3++) {
            this.h[i3] = new al(context, adSizeArr[i3]);
        }
    }

    public al(al alVar, al[] alVarArr) {
        this(2, alVar.b, alVar.c, alVar.d, alVar.e, alVar.f, alVar.g, alVarArr);
    }

    public static int a(DisplayMetrics displayMetrics) {
        return displayMetrics.widthPixels;
    }

    public static int b(DisplayMetrics displayMetrics) {
        return (int) (c(displayMetrics) * displayMetrics.density);
    }

    private static int c(DisplayMetrics displayMetrics) {
        int i = (int) (displayMetrics.heightPixels / displayMetrics.density);
        if (i <= 400) {
            return 32;
        }
        return i <= 720 ? 50 : 90;
    }

    public AdSize a() {
        return com.google.android.gms.ads.a.a(this.f, this.c, this.b);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        r.a(this, parcel, i);
    }
}
