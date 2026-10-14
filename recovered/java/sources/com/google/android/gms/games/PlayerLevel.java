package com.google.android.gms.games;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class PlayerLevel implements SafeParcelable {
    public static final e CREATOR = new e();

    /* renamed from: a, reason: collision with root package name */
    private final int f252a;
    private final int b;
    private final long c;
    private final long d;

    PlayerLevel(int i, int i2, long j, long j2) {
        ls.a(j >= 0, "Min XP must be positive!");
        ls.a(j2 > j, "Max XP must be more than min XP!");
        this.f252a = i;
        this.b = i2;
        this.c = j;
        this.d = j2;
    }

    public PlayerLevel(int i, long j, long j2) {
        this(1, i, j, j2);
    }

    public int a() {
        return this.f252a;
    }

    public int b() {
        return this.b;
    }

    public long c() {
        return this.c;
    }

    public long d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof PlayerLevel)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        PlayerLevel playerLevel = (PlayerLevel) obj;
        return lo.a(Integer.valueOf(playerLevel.b()), Integer.valueOf(b())) && lo.a(Long.valueOf(playerLevel.c()), Long.valueOf(c())) && lo.a(Long.valueOf(playerLevel.d()), Long.valueOf(d()));
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.b), Long.valueOf(this.c), Long.valueOf(this.d));
    }

    public String toString() {
        return lo.a(this).a("LevelNumber", Integer.valueOf(b())).a("MinXp", Long.valueOf(c())).a("MaxXp", Long.valueOf(d())).toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        e.a(this, parcel, i);
    }
}
