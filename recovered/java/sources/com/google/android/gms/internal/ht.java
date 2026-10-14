package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ht implements SafeParcelable {
    public static final lv CREATOR = new lv();

    /* renamed from: a, reason: collision with root package name */
    private final int f415a;
    private final hv b;

    ht(int i, hv hvVar) {
        this.f415a = i;
        this.b = hvVar;
    }

    private ht(hv hvVar) {
        this.f415a = 1;
        this.b = hvVar;
    }

    public static ht a(ly lyVar) {
        if (lyVar instanceof hv) {
            return new ht((hv) lyVar);
        }
        throw new IllegalArgumentException("Unsupported safe parcelable field converter class.");
    }

    int a() {
        return this.f415a;
    }

    hv b() {
        return this.b;
    }

    public ly c() {
        if (this.b != null) {
            return this.b;
        }
        throw new IllegalStateException("There was no converter wrapped in this ConverterWrapper.");
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        lv lvVar = CREATOR;
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        lv lvVar = CREATOR;
        lv.a(this, parcel, i);
    }
}
