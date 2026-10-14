package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class hv implements SafeParcelable, ly {
    public static final lw CREATOR = new lw();

    /* renamed from: a, reason: collision with root package name */
    private final int f416a;
    private final HashMap b;
    private final HashMap c;
    private final ArrayList d;

    public final class a implements SafeParcelable {
        public static final lx CREATOR = new lx();

        /* renamed from: a, reason: collision with root package name */
        final int f417a;
        final String b;
        final int c;

        a(int i, String str, int i2) {
            this.f417a = i;
            this.b = str;
            this.c = i2;
        }

        a(String str, int i) {
            this.f417a = 1;
            this.b = str;
            this.c = i;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            lx lxVar = CREATOR;
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            lx lxVar = CREATOR;
            lx.a(this, parcel, i);
        }
    }

    public hv() {
        this.f416a = 1;
        this.b = new HashMap();
        this.c = new HashMap();
        this.d = null;
    }

    hv(int i, ArrayList arrayList) {
        this.f416a = i;
        this.b = new HashMap();
        this.c = new HashMap();
        this.d = null;
        a(arrayList);
    }

    private void a(ArrayList arrayList) {
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            a aVar = (a) it.next();
            a(aVar.b, aVar.c);
        }
    }

    int a() {
        return this.f416a;
    }

    public hv a(String str, int i) {
        this.b.put(str, Integer.valueOf(i));
        this.c.put(Integer.valueOf(i), str);
        return this;
    }

    @Override // com.google.android.gms.internal.ly
    public String a(Integer num) {
        String str = (String) this.c.get(num);
        return (str == null && this.b.containsKey("gms_unknown")) ? "gms_unknown" : str;
    }

    ArrayList b() {
        ArrayList arrayList = new ArrayList();
        for (String str : this.b.keySet()) {
            arrayList.add(new a(str, ((Integer) this.b.get(str)).intValue()));
        }
        return arrayList;
    }

    @Override // com.google.android.gms.internal.ly
    public int c() {
        return 7;
    }

    @Override // com.google.android.gms.internal.ly
    public int d() {
        return 0;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        lw lwVar = CREATOR;
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        lw lwVar = CREATOR;
        lw.a(this, parcel, i);
    }
}
