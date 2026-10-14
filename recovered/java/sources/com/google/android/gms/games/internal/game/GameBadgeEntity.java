package com.google.android.gms.games.internal.game;

import android.net.Uri;
import android.os.Parcel;
import com.google.android.gms.games.internal.GamesDowngradeableSafeParcel;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class GameBadgeEntity extends GamesDowngradeableSafeParcel implements GameBadge {
    public static final d CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    private final int f257a;
    private int b;
    private String c;
    private String d;
    private Uri e;

    GameBadgeEntity(int i, int i2, String str, String str2, Uri uri) {
        this.f257a = i;
        this.b = i2;
        this.c = str;
        this.d = str2;
        this.e = uri;
    }

    public GameBadgeEntity(GameBadge gameBadge) {
        this.f257a = 1;
        this.b = gameBadge.e_();
        this.c = gameBadge.c();
        this.d = gameBadge.d();
        this.e = gameBadge.e();
    }

    static int a(GameBadge gameBadge) {
        return lo.a(Integer.valueOf(gameBadge.e_()), gameBadge.c(), gameBadge.d(), gameBadge.e());
    }

    static boolean a(GameBadge gameBadge, Object obj) {
        if (!(obj instanceof GameBadge)) {
            return false;
        }
        if (gameBadge == obj) {
            return true;
        }
        GameBadge gameBadge2 = (GameBadge) obj;
        return lo.a(Integer.valueOf(gameBadge2.e_()), gameBadge.c()) && lo.a(gameBadge2.d(), gameBadge.e());
    }

    static String b(GameBadge gameBadge) {
        return lo.a(gameBadge).a("Type", Integer.valueOf(gameBadge.e_())).a("Title", gameBadge.c()).a("Description", gameBadge.d()).a("IconImageUri", gameBadge.e()).toString();
    }

    @Override // com.google.android.gms.games.internal.game.GameBadge
    public String c() {
        return this.c;
    }

    @Override // com.google.android.gms.games.internal.game.GameBadge
    public String d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // com.google.android.gms.games.internal.game.GameBadge
    public Uri e() {
        return this.e;
    }

    @Override // com.google.android.gms.games.internal.game.GameBadge
    public int e_() {
        return this.b;
    }

    public boolean equals(Object obj) {
        return a(this, obj);
    }

    public int f() {
        return this.f257a;
    }

    @Override // com.google.android.gms.common.data.d
    /* renamed from: g, reason: merged with bridge method [inline-methods] */
    public GameBadge a() {
        return this;
    }

    public int hashCode() {
        return a(this);
    }

    public String toString() {
        return b(this);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        if (!D()) {
            d.a(this, parcel, i);
            return;
        }
        parcel.writeInt(this.b);
        parcel.writeString(this.c);
        parcel.writeString(this.d);
        parcel.writeString(this.e == null ? null : this.e.toString());
    }
}
