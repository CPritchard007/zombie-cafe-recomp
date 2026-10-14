package com.google.android.gms.location;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ActivityRecognitionResult implements SafeParcelable {
    public static final a CREATOR = new a();

    /* renamed from: a, reason: collision with root package name */
    List f532a;
    long b;
    long c;
    private final int d = 1;

    public ActivityRecognitionResult(int i, List list, long j, long j2) {
        this.f532a = list;
        this.b = j;
        this.c = j2;
    }

    public int a() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "ActivityRecognitionResult [probableActivities=" + this.f532a + ", timeMillis=" + this.b + ", elapsedRealtimeMillis=" + this.c + "]";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        a.a(this, parcel, i);
    }
}
