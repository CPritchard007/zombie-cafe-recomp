package com.google.android.gms.internal;

import android.os.Parcel;
import android.support.v4.util.TimeUtils;
import android.support.v4.widget.ViewDragHelper;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.hy;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ks extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.a {
    public static final nu CREATOR = new nu();

    /* renamed from: a, reason: collision with root package name */
    private static final HashMap f471a = new HashMap();
    private boolean A;
    private final Set b;
    private final int c;
    private String d;
    private a e;
    private String f;
    private String g;
    private int h;
    private b i;
    private String j;
    private String k;
    private int l;
    private String m;
    private c n;
    private boolean o;
    private String p;
    private d q;
    private String r;
    private int s;
    private List t;
    private List u;
    private int v;
    private int w;
    private String x;
    private String y;
    private List z;

    public final class a extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.b {
        public static final nv CREATOR = new nv();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f472a = new HashMap();
        private final Set b;
        private final int c;
        private int d;
        private int e;

        static {
            f472a.put("max", hy.a.a("max", 2));
            f472a.put("min", hy.a.a("min", 3));
        }

        public a() {
            this.c = 1;
            this.b = new HashSet();
        }

        a(Set set, int i, int i2, int i3) {
            this.b = set;
            this.c = i;
            this.d = i2;
            this.e = i3;
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
                    return Integer.valueOf(this.d);
                case 3:
                    return Integer.valueOf(this.e);
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f472a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            nv nvVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof a)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            a aVar = (a) obj;
            for (hy.a aVar2 : f472a.values()) {
                if (a(aVar2)) {
                    if (aVar.a(aVar2) && b(aVar2).equals(aVar.b(aVar2))) {
                    }
                    return false;
                }
                if (aVar.a(aVar2)) {
                    return false;
                }
            }
            return true;
        }

        int f() {
            return this.c;
        }

        public int g() {
            return this.d;
        }

        public int h() {
            return this.e;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f472a.values().iterator();
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

        @Override // com.google.android.gms.common.data.d
        /* renamed from: i, reason: merged with bridge method [inline-methods] */
        public a a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            nv nvVar = CREATOR;
            nv.a(this, parcel, i);
        }
    }

    public final class b extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.c {
        public static final nw CREATOR = new nw();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f473a = new HashMap();
        private final Set b;
        private final int c;
        private a d;
        private C0000b e;
        private int f;

        public final class a extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.d {
            public static final nx CREATOR = new nx();

            /* renamed from: a, reason: collision with root package name */
            private static final HashMap f474a = new HashMap();
            private final Set b;
            private final int c;
            private int d;
            private int e;

            static {
                f474a.put("leftImageOffset", hy.a.a("leftImageOffset", 2));
                f474a.put("topImageOffset", hy.a.a("topImageOffset", 3));
            }

            public a() {
                this.c = 1;
                this.b = new HashSet();
            }

            a(Set set, int i, int i2, int i3) {
                this.b = set;
                this.c = i;
                this.d = i2;
                this.e = i3;
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
                        return Integer.valueOf(this.d);
                    case 3:
                        return Integer.valueOf(this.e);
                    default:
                        throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
                }
            }

            @Override // com.google.android.gms.internal.hy
            public HashMap b() {
                return f474a;
            }

            @Override // com.google.android.gms.internal.hy
            protected boolean b(String str) {
                return false;
            }

            @Override // android.os.Parcelable
            public int describeContents() {
                nx nxVar = CREATOR;
                return 0;
            }

            Set e() {
                return this.b;
            }

            public boolean equals(Object obj) {
                if (!(obj instanceof a)) {
                    return false;
                }
                if (this == obj) {
                    return true;
                }
                a aVar = (a) obj;
                for (hy.a aVar2 : f474a.values()) {
                    if (a(aVar2)) {
                        if (aVar.a(aVar2) && b(aVar2).equals(aVar.b(aVar2))) {
                        }
                        return false;
                    }
                    if (aVar.a(aVar2)) {
                        return false;
                    }
                }
                return true;
            }

            int f() {
                return this.c;
            }

            public int g() {
                return this.d;
            }

            public int h() {
                return this.e;
            }

            public int hashCode() {
                int iHashCode = 0;
                Iterator it = f474a.values().iterator();
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

            @Override // com.google.android.gms.common.data.d
            /* renamed from: i, reason: merged with bridge method [inline-methods] */
            public a a() {
                return this;
            }

            @Override // android.os.Parcelable
            public void writeToParcel(Parcel parcel, int i) {
                nx nxVar = CREATOR;
                nx.a(this, parcel, i);
            }
        }

        /* renamed from: com.google.android.gms.internal.ks$b$b, reason: collision with other inner class name */
        public final class C0000b extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.e {
            public static final ny CREATOR = new ny();

            /* renamed from: a, reason: collision with root package name */
            private static final HashMap f475a = new HashMap();
            private final Set b;
            private final int c;
            private int d;
            private String e;
            private int f;

            static {
                f475a.put("height", hy.a.a("height", 2));
                f475a.put("url", hy.a.d("url", 3));
                f475a.put("width", hy.a.a("width", 4));
            }

            public C0000b() {
                this.c = 1;
                this.b = new HashSet();
            }

            C0000b(Set set, int i, int i2, String str, int i3) {
                this.b = set;
                this.c = i;
                this.d = i2;
                this.e = str;
                this.f = i3;
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
                        return Integer.valueOf(this.d);
                    case 3:
                        return this.e;
                    case 4:
                        return Integer.valueOf(this.f);
                    default:
                        throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
                }
            }

            @Override // com.google.android.gms.internal.hy
            public HashMap b() {
                return f475a;
            }

            @Override // com.google.android.gms.internal.hy
            protected boolean b(String str) {
                return false;
            }

            @Override // android.os.Parcelable
            public int describeContents() {
                ny nyVar = CREATOR;
                return 0;
            }

            Set e() {
                return this.b;
            }

            public boolean equals(Object obj) {
                if (!(obj instanceof C0000b)) {
                    return false;
                }
                if (this == obj) {
                    return true;
                }
                C0000b c0000b = (C0000b) obj;
                for (hy.a aVar : f475a.values()) {
                    if (a(aVar)) {
                        if (c0000b.a(aVar) && b(aVar).equals(c0000b.b(aVar))) {
                        }
                        return false;
                    }
                    if (c0000b.a(aVar)) {
                        return false;
                    }
                }
                return true;
            }

            int f() {
                return this.c;
            }

            public int g() {
                return this.d;
            }

            public String h() {
                return this.e;
            }

            public int hashCode() {
                int iHashCode = 0;
                Iterator it = f475a.values().iterator();
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

            public int i() {
                return this.f;
            }

            @Override // com.google.android.gms.common.data.d
            /* renamed from: j, reason: merged with bridge method [inline-methods] */
            public C0000b a() {
                return this;
            }

            @Override // android.os.Parcelable
            public void writeToParcel(Parcel parcel, int i) {
                ny nyVar = CREATOR;
                ny.a(this, parcel, i);
            }
        }

        static {
            f473a.put("coverInfo", hy.a.a("coverInfo", 2, a.class));
            f473a.put("coverPhoto", hy.a.a("coverPhoto", 3, C0000b.class));
            f473a.put("layout", hy.a.a("layout", 4, new hv().a("banner", 0), false));
        }

        public b() {
            this.c = 1;
            this.b = new HashSet();
        }

        b(Set set, int i, a aVar, C0000b c0000b, int i2) {
            this.b = set;
            this.c = i;
            this.d = aVar;
            this.e = c0000b;
            this.f = i2;
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
                    return this.e;
                case 4:
                    return Integer.valueOf(this.f);
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f473a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            nw nwVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof b)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            b bVar = (b) obj;
            for (hy.a aVar : f473a.values()) {
                if (a(aVar)) {
                    if (bVar.a(aVar) && b(aVar).equals(bVar.b(aVar))) {
                    }
                    return false;
                }
                if (bVar.a(aVar)) {
                    return false;
                }
            }
            return true;
        }

        int f() {
            return this.c;
        }

        a g() {
            return this.d;
        }

        C0000b h() {
            return this.e;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f473a.values().iterator();
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

        public int i() {
            return this.f;
        }

        @Override // com.google.android.gms.common.data.d
        /* renamed from: j, reason: merged with bridge method [inline-methods] */
        public b a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            nw nwVar = CREATOR;
            nw.a(this, parcel, i);
        }
    }

    public final class c extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.f {
        public static final nz CREATOR = new nz();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f476a = new HashMap();
        private final Set b;
        private final int c;
        private String d;

        static {
            f476a.put("url", hy.a.d("url", 2));
        }

        public c() {
            this.c = 1;
            this.b = new HashSet();
        }

        c(Set set, int i, String str) {
            this.b = set;
            this.c = i;
            this.d = str;
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
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f476a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            nz nzVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof c)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            c cVar = (c) obj;
            for (hy.a aVar : f476a.values()) {
                if (a(aVar)) {
                    if (cVar.a(aVar) && b(aVar).equals(cVar.b(aVar))) {
                    }
                    return false;
                }
                if (cVar.a(aVar)) {
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

        @Override // com.google.android.gms.common.data.d
        /* renamed from: h, reason: merged with bridge method [inline-methods] */
        public c a() {
            return this;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f476a.values().iterator();
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

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            nz nzVar = CREATOR;
            nz.a(this, parcel, i);
        }
    }

    public final class d extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.g {
        public static final oa CREATOR = new oa();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f477a = new HashMap();
        private final Set b;
        private final int c;
        private String d;
        private String e;
        private String f;
        private String g;
        private String h;
        private String i;

        static {
            f477a.put("familyName", hy.a.d("familyName", 2));
            f477a.put("formatted", hy.a.d("formatted", 3));
            f477a.put("givenName", hy.a.d("givenName", 4));
            f477a.put("honorificPrefix", hy.a.d("honorificPrefix", 5));
            f477a.put("honorificSuffix", hy.a.d("honorificSuffix", 6));
            f477a.put("middleName", hy.a.d("middleName", 7));
        }

        public d() {
            this.c = 1;
            this.b = new HashSet();
        }

        d(Set set, int i, String str, String str2, String str3, String str4, String str5, String str6) {
            this.b = set;
            this.c = i;
            this.d = str;
            this.e = str2;
            this.f = str3;
            this.g = str4;
            this.h = str5;
            this.i = str6;
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
                    return this.e;
                case 4:
                    return this.f;
                case 5:
                    return this.g;
                case 6:
                    return this.h;
                case 7:
                    return this.i;
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f477a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            oa oaVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof d)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            d dVar = (d) obj;
            for (hy.a aVar : f477a.values()) {
                if (a(aVar)) {
                    if (dVar.a(aVar) && b(aVar).equals(dVar.b(aVar))) {
                    }
                    return false;
                }
                if (dVar.a(aVar)) {
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

        public String h() {
            return this.e;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f477a.values().iterator();
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

        public String j() {
            return this.g;
        }

        public String k() {
            return this.h;
        }

        public String l() {
            return this.i;
        }

        @Override // com.google.android.gms.common.data.d
        /* renamed from: m, reason: merged with bridge method [inline-methods] */
        public d a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            oa oaVar = CREATOR;
            oa.a(this, parcel, i);
        }
    }

    public final class f extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.h {
        public static final oc CREATOR = new oc();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f478a = new HashMap();
        private final Set b;
        private final int c;
        private String d;
        private String e;
        private String f;
        private String g;
        private String h;
        private boolean i;
        private String j;
        private String k;
        private int l;

        static {
            f478a.put("department", hy.a.d("department", 2));
            f478a.put("description", hy.a.d("description", 3));
            f478a.put("endDate", hy.a.d("endDate", 4));
            f478a.put("location", hy.a.d("location", 5));
            f478a.put("name", hy.a.d("name", 6));
            f478a.put("primary", hy.a.c("primary", 7));
            f478a.put("startDate", hy.a.d("startDate", 8));
            f478a.put("title", hy.a.d("title", 9));
            f478a.put("type", hy.a.a("type", 10, new hv().a("work", 0).a("school", 1), false));
        }

        public f() {
            this.c = 1;
            this.b = new HashSet();
        }

        f(Set set, int i, String str, String str2, String str3, String str4, String str5, boolean z, String str6, String str7, int i2) {
            this.b = set;
            this.c = i;
            this.d = str;
            this.e = str2;
            this.f = str3;
            this.g = str4;
            this.h = str5;
            this.i = z;
            this.j = str6;
            this.k = str7;
            this.l = i2;
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
                    return this.e;
                case 4:
                    return this.f;
                case 5:
                    return this.g;
                case 6:
                    return this.h;
                case 7:
                    return Boolean.valueOf(this.i);
                case 8:
                    return this.j;
                case 9:
                    return this.k;
                case 10:
                    return Integer.valueOf(this.l);
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f478a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            oc ocVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof f)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            f fVar = (f) obj;
            for (hy.a aVar : f478a.values()) {
                if (a(aVar)) {
                    if (fVar.a(aVar) && b(aVar).equals(fVar.b(aVar))) {
                    }
                    return false;
                }
                if (fVar.a(aVar)) {
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

        public String h() {
            return this.e;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f478a.values().iterator();
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

        public String j() {
            return this.g;
        }

        public String k() {
            return this.h;
        }

        public boolean l() {
            return this.i;
        }

        public String m() {
            return this.j;
        }

        public String n() {
            return this.k;
        }

        public int o() {
            return this.l;
        }

        @Override // com.google.android.gms.common.data.d
        /* renamed from: p, reason: merged with bridge method [inline-methods] */
        public f a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            oc ocVar = CREATOR;
            oc.a(this, parcel, i);
        }
    }

    public final class g extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.i {
        public static final od CREATOR = new od();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f479a = new HashMap();
        private final Set b;
        private final int c;
        private boolean d;
        private String e;

        static {
            f479a.put("primary", hy.a.c("primary", 2));
            f479a.put("value", hy.a.d("value", 3));
        }

        public g() {
            this.c = 1;
            this.b = new HashSet();
        }

        g(Set set, int i, boolean z, String str) {
            this.b = set;
            this.c = i;
            this.d = z;
            this.e = str;
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
                    return Boolean.valueOf(this.d);
                case 3:
                    return this.e;
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f479a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            od odVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof g)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            g gVar = (g) obj;
            for (hy.a aVar : f479a.values()) {
                if (a(aVar)) {
                    if (gVar.a(aVar) && b(aVar).equals(gVar.b(aVar))) {
                    }
                    return false;
                }
                if (gVar.a(aVar)) {
                    return false;
                }
            }
            return true;
        }

        int f() {
            return this.c;
        }

        public boolean g() {
            return this.d;
        }

        public String h() {
            return this.e;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f479a.values().iterator();
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

        @Override // com.google.android.gms.common.data.d
        /* renamed from: i, reason: merged with bridge method [inline-methods] */
        public g a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            od odVar = CREATOR;
            od.a(this, parcel, i);
        }
    }

    public final class h extends hy implements SafeParcelable, com.google.android.gms.plus.a.b.j {
        public static final oe CREATOR = new oe();

        /* renamed from: a, reason: collision with root package name */
        private static final HashMap f480a = new HashMap();
        private final Set b;
        private final int c;
        private String d;
        private final int e;
        private int f;
        private String g;

        static {
            f480a.put("label", hy.a.d("label", 5));
            f480a.put("type", hy.a.a("type", 6, new hv().a("home", 0).a("work", 1).a("blog", 2).a("profile", 3).a("other", 4).a("otherProfile", 5).a("contributor", 6).a("website", 7), false));
            f480a.put("value", hy.a.d("value", 4));
        }

        public h() {
            this.e = 4;
            this.c = 2;
            this.b = new HashSet();
        }

        h(Set set, int i, String str, int i2, String str2, int i3) {
            this.e = 4;
            this.b = set;
            this.c = i;
            this.d = str;
            this.f = i2;
            this.g = str2;
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
                case 4:
                    return this.g;
                case 5:
                    return this.d;
                case 6:
                    return Integer.valueOf(this.f);
                default:
                    throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            }
        }

        @Override // com.google.android.gms.internal.hy
        public HashMap b() {
            return f480a;
        }

        @Override // com.google.android.gms.internal.hy
        protected boolean b(String str) {
            return false;
        }

        @Override // android.os.Parcelable
        public int describeContents() {
            oe oeVar = CREATOR;
            return 0;
        }

        Set e() {
            return this.b;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof h)) {
                return false;
            }
            if (this == obj) {
                return true;
            }
            h hVar = (h) obj;
            for (hy.a aVar : f480a.values()) {
                if (a(aVar)) {
                    if (hVar.a(aVar) && b(aVar).equals(hVar.b(aVar))) {
                    }
                    return false;
                }
                if (hVar.a(aVar)) {
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

        @Deprecated
        public int h() {
            return 4;
        }

        public int hashCode() {
            int iHashCode = 0;
            Iterator it = f480a.values().iterator();
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

        public int i() {
            return this.f;
        }

        public String j() {
            return this.g;
        }

        @Override // com.google.android.gms.common.data.d
        /* renamed from: k, reason: merged with bridge method [inline-methods] */
        public h a() {
            return this;
        }

        @Override // android.os.Parcelable
        public void writeToParcel(Parcel parcel, int i) {
            oe oeVar = CREATOR;
            oe.a(this, parcel, i);
        }
    }

    static {
        f471a.put("aboutMe", hy.a.d("aboutMe", 2));
        f471a.put("ageRange", hy.a.a("ageRange", 3, a.class));
        f471a.put("birthday", hy.a.d("birthday", 4));
        f471a.put("braggingRights", hy.a.d("braggingRights", 5));
        f471a.put("circledByCount", hy.a.a("circledByCount", 6));
        f471a.put("cover", hy.a.a("cover", 7, b.class));
        f471a.put("currentLocation", hy.a.d("currentLocation", 8));
        f471a.put("displayName", hy.a.d("displayName", 9));
        f471a.put("gender", hy.a.a("gender", 12, new hv().a("male", 0).a("female", 1).a("other", 2), false));
        f471a.put("id", hy.a.d("id", 14));
        f471a.put("image", hy.a.a("image", 15, c.class));
        f471a.put("isPlusUser", hy.a.c("isPlusUser", 16));
        f471a.put("language", hy.a.d("language", 18));
        f471a.put("name", hy.a.a("name", 19, d.class));
        f471a.put("nickname", hy.a.d("nickname", 20));
        f471a.put("objectType", hy.a.a("objectType", 21, new hv().a("person", 0).a("page", 1), false));
        f471a.put("organizations", hy.a.b("organizations", 22, f.class));
        f471a.put("placesLived", hy.a.b("placesLived", 23, g.class));
        f471a.put("plusOneCount", hy.a.a("plusOneCount", 24));
        f471a.put("relationshipStatus", hy.a.a("relationshipStatus", 25, new hv().a("single", 0).a("in_a_relationship", 1).a("engaged", 2).a("married", 3).a("its_complicated", 4).a("open_relationship", 5).a("widowed", 6).a("in_domestic_partnership", 7).a("in_civil_union", 8), false));
        f471a.put("tagline", hy.a.d("tagline", 26));
        f471a.put("url", hy.a.d("url", 27));
        f471a.put("urls", hy.a.b("urls", 28, h.class));
        f471a.put("verified", hy.a.c("verified", 29));
    }

    public ks() {
        this.c = 2;
        this.b = new HashSet();
    }

    ks(Set set, int i, String str, a aVar, String str2, String str3, int i2, b bVar, String str4, String str5, int i3, String str6, c cVar, boolean z, String str7, d dVar, String str8, int i4, List list, List list2, int i5, int i6, String str9, String str10, List list3, boolean z2) {
        this.b = set;
        this.c = i;
        this.d = str;
        this.e = aVar;
        this.f = str2;
        this.g = str3;
        this.h = i2;
        this.i = bVar;
        this.j = str4;
        this.k = str5;
        this.l = i3;
        this.m = str6;
        this.n = cVar;
        this.o = z;
        this.p = str7;
        this.q = dVar;
        this.r = str8;
        this.s = i4;
        this.t = list;
        this.u = list2;
        this.v = i5;
        this.w = i6;
        this.x = str9;
        this.y = str10;
        this.z = list3;
        this.A = z2;
    }

    public String A() {
        return this.x;
    }

    public String B() {
        return this.y;
    }

    List C() {
        return this.z;
    }

    public boolean D() {
        return this.A;
    }

    @Override // com.google.android.gms.common.data.d
    /* renamed from: E, reason: merged with bridge method [inline-methods] */
    public ks a() {
        return this;
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
                return this.e;
            case 4:
                return this.f;
            case 5:
                return this.g;
            case 6:
                return Integer.valueOf(this.h);
            case 7:
                return this.i;
            case 8:
                return this.j;
            case 9:
                return this.k;
            case 10:
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
            case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
            case 17:
            default:
                throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                return Integer.valueOf(this.l);
            case 14:
                return this.m;
            case ViewDragHelper.EDGE_ALL /* 15 */:
                return this.n;
            case 16:
                return Boolean.valueOf(this.o);
            case 18:
                return this.p;
            case TimeUtils.HUNDRED_DAY_FIELD_LEN /* 19 */:
                return this.q;
            case 20:
                return this.r;
            case 21:
                return Integer.valueOf(this.s);
            case 22:
                return this.t;
            case 23:
                return this.u;
            case 24:
                return Integer.valueOf(this.v);
            case 25:
                return Integer.valueOf(this.w);
            case 26:
                return this.x;
            case 27:
                return this.y;
            case 28:
                return this.z;
            case 29:
                return Boolean.valueOf(this.A);
        }
    }

    @Override // com.google.android.gms.internal.hy
    public HashMap b() {
        return f471a;
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean b(String str) {
        return false;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        nu nuVar = CREATOR;
        return 0;
    }

    Set e() {
        return this.b;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof ks)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        ks ksVar = (ks) obj;
        for (hy.a aVar : f471a.values()) {
            if (a(aVar)) {
                if (ksVar.a(aVar) && b(aVar).equals(ksVar.b(aVar))) {
                }
                return false;
            }
            if (ksVar.a(aVar)) {
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

    a h() {
        return this.e;
    }

    public int hashCode() {
        int iHashCode = 0;
        Iterator it = f471a.values().iterator();
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

    public String j() {
        return this.g;
    }

    public int k() {
        return this.h;
    }

    b l() {
        return this.i;
    }

    public String m() {
        return this.j;
    }

    public String n() {
        return this.k;
    }

    public int o() {
        return this.l;
    }

    public String p() {
        return this.m;
    }

    c q() {
        return this.n;
    }

    public boolean r() {
        return this.o;
    }

    public String s() {
        return this.p;
    }

    d t() {
        return this.q;
    }

    public String u() {
        return this.r;
    }

    public int v() {
        return this.s;
    }

    List w() {
        return this.t;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        nu nuVar = CREATOR;
        nu.a(this, parcel, i);
    }

    List x() {
        return this.u;
    }

    public int y() {
        return this.v;
    }

    public int z() {
        return this.w;
    }
}
