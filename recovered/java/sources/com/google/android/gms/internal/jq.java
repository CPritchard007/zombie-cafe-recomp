package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.concurrent.TimeUnit;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class jq implements SafeParcelable {
    public static final nm CREATOR = new nm();

    /* renamed from: a, reason: collision with root package name */
    static final long f457a = TimeUnit.HOURS.toMillis(1);
    final int b;
    private final jm c;
    private final long d;
    private final int e;

    public jq(int i, jm jmVar, long j, int i2) {
        this.b = i;
        this.c = jmVar;
        this.d = j;
        this.e = i2;
    }

    public jm a() {
        return this.c;
    }

    public long b() {
        return this.d;
    }

    public int c() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nm nmVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof jq)) {
            return false;
        }
        jq jqVar = (jq) obj;
        return lo.a(this.c, jqVar.c) && this.d == jqVar.d && this.e == jqVar.e;
    }

    public int hashCode() {
        return lo.a(this.c, Long.valueOf(this.d), Integer.valueOf(this.e));
    }

    public String toString() {
        return lo.a(this).a("filter", this.c).a("interval", Long.valueOf(this.d)).a("priority", Integer.valueOf(this.e)).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nm nmVar = CREATOR;
        nm.a(this, parcel, i);
    }
}
