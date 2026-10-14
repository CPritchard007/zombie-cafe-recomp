package com.google.android.gms.cast;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.kg;
import com.google.android.gms.internal.lo;
import java.util.Locale;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class LaunchOptions implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    private final int f158a;
    private boolean b;
    private String c;

    public LaunchOptions() {
        this(1, false, kg.a(Locale.getDefault()));
    }

    LaunchOptions(int i, boolean z, String str) {
        this.f158a = i;
        this.b = z;
        this.c = str;
    }

    int a() {
        return this.f158a;
    }

    public boolean b() {
        return this.b;
    }

    public String c() {
        return this.c;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof LaunchOptions)) {
            return false;
        }
        LaunchOptions launchOptions = (LaunchOptions) obj;
        return this.b == launchOptions.b && kg.a(this.c, launchOptions.c);
    }

    public int hashCode() {
        return lo.a(Boolean.valueOf(this.b), this.c);
    }

    public String toString() {
        return String.format("LaunchOptions(relaunchIfRunning=%b, language=%s)", Boolean.valueOf(this.b), this.c);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
