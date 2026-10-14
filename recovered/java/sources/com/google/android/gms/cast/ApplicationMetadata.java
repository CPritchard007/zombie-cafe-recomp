package com.google.android.gms.cast;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.kg;
import com.google.android.gms.internal.lo;
import java.util.ArrayList;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ApplicationMetadata implements SafeParcelable {
    public static final Parcelable.Creator CREATOR = new a();

    /* renamed from: a, reason: collision with root package name */
    String f156a;
    String b;
    List c;
    List d;
    String e;
    Uri f;
    private final int g;

    private ApplicationMetadata() {
        this.g = 1;
        this.c = new ArrayList();
        this.d = new ArrayList();
    }

    ApplicationMetadata(int i, String str, String str2, List list, List list2, String str3, Uri uri) {
        this.g = i;
        this.f156a = str;
        this.b = str2;
        this.c = list;
        this.d = list2;
        this.e = str3;
        this.f = uri;
    }

    int a() {
        return this.g;
    }

    public String b() {
        return this.f156a;
    }

    public String c() {
        return this.b;
    }

    public String d() {
        return this.e;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public Uri e() {
        return this.f;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ApplicationMetadata)) {
            return false;
        }
        ApplicationMetadata applicationMetadata = (ApplicationMetadata) obj;
        return kg.a(this.f156a, applicationMetadata.f156a) && kg.a(this.c, applicationMetadata.c) && kg.a(this.b, applicationMetadata.b) && kg.a(this.d, applicationMetadata.d) && kg.a(this.e, applicationMetadata.e) && kg.a(this.f, applicationMetadata.f);
    }

    public List f() {
        return this.c;
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.g), this.f156a, this.b, this.c, this.d, this.e, this.f);
    }

    public String toString() {
        return this.b;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        a.a(this, parcel, i);
    }
}
