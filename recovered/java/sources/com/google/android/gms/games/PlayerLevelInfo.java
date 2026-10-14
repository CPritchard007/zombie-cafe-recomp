package com.google.android.gms.games;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class PlayerLevelInfo implements SafeParcelable {
    public static final f CREATOR = new f();

    /* renamed from: a, reason: collision with root package name */
    private final int f253a;
    private final long b;
    private final long c;
    private final PlayerLevel d;
    private final PlayerLevel e;

    PlayerLevelInfo(int i, long j, long j2, PlayerLevel playerLevel, PlayerLevel playerLevel2) {
        ls.a(j != -1);
        ls.a(playerLevel);
        ls.a(playerLevel2);
        this.f253a = i;
        this.b = j;
        this.c = j2;
        this.d = playerLevel;
        this.e = playerLevel2;
    }

    public PlayerLevelInfo(long j, long j2, PlayerLevel playerLevel, PlayerLevel playerLevel2) {
        this(1, j, j2, playerLevel, playerLevel2);
    }

    public int a() {
        return this.f253a;
    }

    public long b() {
        return this.b;
    }

    public long c() {
        return this.c;
    }

    public PlayerLevel d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public PlayerLevel e() {
        return this.e;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof PlayerLevelInfo)) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        PlayerLevelInfo playerLevelInfo = (PlayerLevelInfo) obj;
        return lo.a(Long.valueOf(this.b), Long.valueOf(playerLevelInfo.b)) && lo.a(Long.valueOf(this.c), Long.valueOf(playerLevelInfo.c)) && lo.a(this.d, playerLevelInfo.d) && lo.a(this.e, playerLevelInfo.e);
    }

    public int hashCode() {
        return lo.a(Long.valueOf(this.b), Long.valueOf(this.c), this.d, this.e);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        f.a(this, parcel, i);
    }
}
