package com.google.android.gms.drive;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import android.util.Log;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.drive.internal.d;
import com.google.android.gms.internal.ls;
import com.google.android.gms.internal.om;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class DriveId implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new b();

    /* renamed from: a, reason: collision with root package name */
    final int f178a;
    final String b;
    final long c;
    final long d;
    private volatile String e = null;

    DriveId(int i, String str, long j, long j2) {
        this.f178a = i;
        this.b = str;
        ls.b(!"".equals(str));
        ls.b((str == null && j == -1) ? false : true);
        this.c = j;
        this.d = j2;
    }

    public final String a() {
        if (this.e == null) {
            this.e = "DriveId:" + Base64.encodeToString(b(), 10);
        }
        return this.e;
    }

    final byte[] b() {
        d dVar = new d();
        dVar.f216a = this.f178a;
        dVar.b = this.b == null ? "" : this.b;
        dVar.c = this.c;
        dVar.d = this.d;
        return om.a(dVar);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof DriveId)) {
            return false;
        }
        DriveId driveId = (DriveId) obj;
        if (driveId.d == this.d) {
            return (driveId.c == -1 && this.c == -1) ? driveId.b.equals(this.b) : driveId.c == this.c;
        }
        Log.w("DriveId", "Attempt to compare invalid DriveId detected. Has local storage been cleared?");
        return false;
    }

    public int hashCode() {
        return this.c == -1 ? this.b.hashCode() : (String.valueOf(this.d) + String.valueOf(this.c)).hashCode();
    }

    public String toString() {
        return a();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        b.a(this, parcel, i);
    }
}
