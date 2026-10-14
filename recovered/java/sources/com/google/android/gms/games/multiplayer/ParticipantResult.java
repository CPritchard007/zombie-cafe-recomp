package com.google.android.gms.games.multiplayer;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ParticipantResult implements SafeParcelable {
    public static final e CREATOR = new e();

    /* renamed from: a, reason: collision with root package name */
    private final int f264a;
    private final String b;
    private final int c;
    private final int d;

    public ParticipantResult(int i, String str, int i2, int i3) {
        this.f264a = i;
        this.b = (String) ls.a((Object) str);
        ls.a(com.google.android.gms.games.internal.a.a.a(i2));
        this.c = i2;
        this.d = i3;
    }

    public ParticipantResult(String str, int i, int i2) {
        this(1, str, i, i2);
    }

    public int a() {
        return this.f264a;
    }

    public String b() {
        return this.b;
    }

    public int c() {
        return this.c;
    }

    public int d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        e.a(this, parcel, i);
    }
}
