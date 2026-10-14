package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.hy;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kp extends hy implements SafeParcelable, com.google.android.gms.plus.a.a.b {
    public static final nt CREATOR = new nt();

    /* renamed from: a, reason: collision with root package name */
    private static final HashMap f468a = new HashMap();
    private final Set b;
    private final int c;
    private String d;
    private kn e;
    private String f;
    private kn g;
    private String h;

    static {
        f468a.put("id", hy.a.d("id", 2));
        f468a.put("result", hy.a.a("result", 4, kn.class));
        f468a.put("startDate", hy.a.d("startDate", 5));
        f468a.put("target", hy.a.a("target", 6, kn.class));
        f468a.put("type", hy.a.d("type", 7));
    }

    public kp() {
        this.c = 1;
        this.b = new HashSet();
    }

    kp(Set set, int i, String str, kn knVar, String str2, kn knVar2, String str3) {
        this.b = set;
        this.c = i;
        this.d = str;
        this.e = knVar;
        this.f = str2;
        this.g = knVar2;
        this.h = str3;
    }

    @Override // com.google.android.gms.internal.hy
    protected Object a(String str) {
        return null;
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean a(hy.a aVar) {
        return this.b.contains(Integer.valueOf(aVar.g()));
    }

    @Override // com.google.android.gms.internal.hy
    protected Object b(hy.a aVar) {
        switch (aVar.g()) {
            case 2:
                return this.d;
            case 3:
            default:
                throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            case 4:
                return this.e;
            case 5:
                return this.f;
            case 6:
                return this.g;
            case 7:
                return this.h;
        }
    }

    @Override // com.google.android.gms.internal.hy
    public HashMap b() {
        return f468a;
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean b(String str) {
        return false;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nt ntVar = CREATOR;
        return 0;
    }

    Set e() {
        return this.b;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof kp)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        kp kpVar = (kp) obj;
        for (hy.a aVar : f468a.values()) {
            if (a(aVar)) {
                if (kpVar.a(aVar) && b(aVar).equals(kpVar.b(aVar))) {
                }
                return false;
            }
            if (kpVar.a(aVar)) {
                return false;
            }
        }
        return true;
    }

    int f() {
        return this.c;
    }

    public String g() {
        return this.d;
    }

    kn h() {
        return this.e;
    }

    public int hashCode() {
        int iHashCode = 0;
        Iterator it = f468a.values().iterator();
        while (true) {
            int i = iHashCode;
            if (!it.hasNext()) {
                return i;
            }
            hy.a aVar = (hy.a) it.next();
            if (a(aVar)) {
                iHashCode = b(aVar).hashCode() + i + aVar.g();
            } else {
                iHashCode = i;
            }
        }
    }

    public String i() {
        return this.f;
    }

    kn j() {
        return this.g;
    }

    public String k() {
        return this.h;
    }

    @Override // com.google.android.gms.common.data.d
    /* renamed from: l, reason: merged with bridge method [inline-methods] */
    public kp a() {
        return this;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nt ntVar = CREATOR;
        nt.a(this, parcel, i);
    }
}
