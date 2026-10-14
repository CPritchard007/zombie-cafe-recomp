package com.google.android.gms.games.multiplayer.realtime;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class RealTimeMessage implements Parcelable {
    public static final Parcelable.Creator CREATOR = new a();

    /* renamed from: a, reason: collision with root package name */
    private final String f265a;
    private final byte[] b;
    private final int c;

    private RealTimeMessage(Parcel parcel) {
        this(parcel.readString(), parcel.createByteArray(), parcel.readInt());
    }

    /* synthetic */ RealTimeMessage(Parcel parcel, a aVar) {
        this(parcel);
    }

    public RealTimeMessage(String str, byte[] bArr, int i) {
        this.f265a = (String) ls.a((Object) str);
        this.b = (byte[]) ((byte[]) ls.a(bArr)).clone();
        this.c = i;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.f265a);
        parcel.writeByteArray(this.b);
        parcel.writeInt(this.c);
    }
}
