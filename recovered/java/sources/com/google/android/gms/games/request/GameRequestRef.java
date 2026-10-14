package com.google.android.gms.games.request;

import android.os.Parcel;
import com.google.android.gms.common.data.f;
import com.google.android.gms.games.Game;
import com.google.android.gms.games.GameRef;
import com.google.android.gms.games.Player;
import com.google.android.gms.games.PlayerRef;
import java.util.ArrayList;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class GameRequestRef extends f implements GameRequest {
    private final int c;

    @Override // com.google.android.gms.games.request.GameRequest
    public int a_(String str) {
        for (int i = this.b; i < this.b + this.c; i++) {
            int iA = this.f164a.a(i);
            if (this.f164a.c("recipient_external_player_id", i, iA).equals(str)) {
                return this.f164a.b("recipient_status", i, iA);
            }
        }
        return -1;
    }

    @Override // com.google.android.gms.common.data.d
    /* renamed from: c, reason: merged with bridge method [inline-methods] */
    public GameRequest a() {
        return new GameRequestEntity(this);
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public String d() {
        return e("external_request_id");
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public Game e() {
        return new GameRef(this.f164a, this.b);
    }

    @Override // com.google.android.gms.common.data.f
    public boolean equals(Object obj) {
        return GameRequestEntity.a(this, obj);
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public Player f() {
        return new PlayerRef(this.f164a, b(), "sender_");
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public byte[] h() {
        return g("data");
    }

    @Override // com.google.android.gms.common.data.f
    public int hashCode() {
        return GameRequestEntity.a(this);
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public int i() {
        return c("type");
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public long j() {
        return b("creation_timestamp");
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public long k() {
        return b("expiration_timestamp");
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public int l() {
        return c("status");
    }

    @Override // com.google.android.gms.games.request.GameRequest
    public List n() {
        ArrayList arrayList = new ArrayList(this.c);
        for (int i = 0; i < this.c; i++) {
            arrayList.add(new PlayerRef(this.f164a, this.b + i, "recipient_"));
        }
        return arrayList;
    }

    public String toString() {
        return GameRequestEntity.b(this);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ((GameRequestEntity) a()).writeToParcel(parcel, i);
    }
}
