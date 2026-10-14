package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.hy;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ib implements SafeParcelable {
    public static final md CREATOR = new md();

    /* renamed from: a, reason: collision with root package name */
    private final int f422a;
    private final HashMap b;
    private final ArrayList c = null;
    private final String d;

    public class a implements SafeParcelable {
        public static final me CREATOR = new me();

        /* renamed from: a, reason: collision with root package name */
        final int f423a;
        final String b;
        final ArrayList c;

        a(int i, String str, ArrayList arrayList) {
            this.f423a = i;
            this.b = str;
            this.c = arrayList;
        }

        a(String str, HashMap map) {
            this.f423a = 1;
            this.b = str;
            this.c = a(map);
        }

        private static ArrayList a(HashMap map) {
            if (map == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            for (String str : map.keySet()) {
                arrayList.add(new b(str, (hy.a) map.get(str)));
            }
            return arrayList;
        }

        HashMap a() {
            HashMap map = new HashMap();
            int size = this.c.size();
            for (int i = 0; i < size; i++) {
                b bVar = (b) this.c.get(i);
                map.put(bVar.b, bVar.c);
            }
            return map;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            me meVar = CREATOR;
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            me meVar = CREATOR;
            me.a(this, parcel, i);
        }
    }

    public class b implements SafeParcelable {
        public static final mc CREATOR = new mc();

        /* renamed from: a, reason: collision with root package name */
        final int f424a;
        final String b;
        final hy.a c;

        b(int i, String str, hy.a aVar) {
            this.f424a = i;
            this.b = str;
            this.c = aVar;
        }

        b(String str, hy.a aVar) {
            this.f424a = 1;
            this.b = str;
            this.c = aVar;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            mc mcVar = CREATOR;
            return 0;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            mc mcVar = CREATOR;
            mc.a(this, parcel, i);
        }
    }

    ib(int i, ArrayList arrayList, String str) {
        this.f422a = i;
        this.b = a(arrayList);
        this.d = (String) ls.a((Object) str);
        a();
    }

    private static HashMap a(ArrayList arrayList) {
        HashMap map = new HashMap();
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            a aVar = (a) arrayList.get(i);
            map.put(aVar.b, aVar.a());
        }
        return map;
    }

    public HashMap a(String str) {
        return (HashMap) this.b.get(str);
    }

    public void a() {
        Iterator it = this.b.keySet().iterator();
        while (it.hasNext()) {
            HashMap map = (HashMap) this.b.get((String) it.next());
            Iterator it2 = map.keySet().iterator();
            while (it2.hasNext()) {
                ((hy.a) map.get((String) it2.next())).a(this);
            }
        }
    }

    int b() {
        return this.f422a;
    }

    ArrayList c() {
        ArrayList arrayList = new ArrayList();
        for (String str : this.b.keySet()) {
            arrayList.add(new a(str, (HashMap) this.b.get(str)));
        }
        return arrayList;
    }

    public String d() {
        return this.d;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        md mdVar = CREATOR;
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (String str : this.b.keySet()) {
            sb.append(str).append(":\n");
            HashMap map = (HashMap) this.b.get(str);
            for (String str2 : map.keySet()) {
                sb.append("  ").append(str2).append(": ");
                sb.append(map.get(str2));
            }
        }
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        md mdVar = CREATOR;
        md.a(this, parcel, i);
    }
}
