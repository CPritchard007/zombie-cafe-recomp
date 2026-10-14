package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class jw implements SafeParcelable {
    final int d;
    final String e;
    final int f;

    /* renamed from: a, reason: collision with root package name */
    public static final jw f461a = a("test_type", 1);
    public static final jw b = a("saved_offers", 4);
    public static final Set c = Collections.unmodifiableSet(new HashSet(Arrays.asList(f461a, b)));
    public static final np CREATOR = new np();

    jw(int i, String str, int i2) {
        ls.a(str);
        this.d = i;
        this.e = str;
        this.f = i2;
    }

    private static jw a(String str, int i) {
        return new jw(0, str, i);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        np npVar = CREATOR;
        return 0;
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof jw)) {
            return false;
        }
        jw jwVar = (jw) obj;
        return this.e.equals(jwVar.e) && this.f == jwVar.f;
    }

    public int hashCode() {
        return this.e.hashCode();
    }

    public String toString() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        np npVar = CREATOR;
        np.a(this, parcel, i);
    }
}
