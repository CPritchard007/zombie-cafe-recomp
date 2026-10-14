package com.google.android.gms.internal;

import android.os.Parcel;
import android.support.v4.util.TimeUtils;
import android.support.v4.widget.ViewDragHelper;
import com.google.ads.AdSize;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.hy;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kn extends hy implements SafeParcelable, com.google.android.gms.plus.a.a.a {
    public static final ns CREATOR = new ns();

    /* renamed from: a, reason: collision with root package name */
    private static final HashMap f466a = new HashMap();
    private String A;
    private String B;
    private String C;
    private String D;
    private kn E;
    private String F;
    private String G;
    private String H;
    private String I;
    private kn J;
    private double K;
    private kn L;
    private double M;
    private String N;
    private kn O;
    private List P;
    private String Q;
    private String R;
    private String S;
    private String T;
    private kn U;
    private String V;
    private String W;
    private String X;
    private kn Y;
    private String Z;
    private String aa;
    private String ab;
    private String ac;
    private String ad;
    private String ae;
    private final Set b;
    private final int c;
    private kn d;
    private List e;
    private kn f;
    private String g;
    private String h;
    private String i;
    private List j;
    private int k;
    private List l;
    private kn m;
    private List n;
    private String o;
    private String p;
    private kn q;
    private String r;
    private String s;
    private String t;
    private List u;
    private String v;
    private String w;
    private String x;
    private String y;
    private String z;

    static {
        f466a.put("about", hy.a.a("about", 2, kn.class));
        f466a.put("additionalName", hy.a.e("additionalName", 3));
        f466a.put("address", hy.a.a("address", 4, kn.class));
        f466a.put("addressCountry", hy.a.d("addressCountry", 5));
        f466a.put("addressLocality", hy.a.d("addressLocality", 6));
        f466a.put("addressRegion", hy.a.d("addressRegion", 7));
        f466a.put("associated_media", hy.a.b("associated_media", 8, kn.class));
        f466a.put("attendeeCount", hy.a.a("attendeeCount", 9));
        f466a.put("attendees", hy.a.b("attendees", 10, kn.class));
        f466a.put("audio", hy.a.a("audio", 11, kn.class));
        f466a.put("author", hy.a.b("author", 12, kn.class));
        f466a.put("bestRating", hy.a.d("bestRating", 13));
        f466a.put("birthDate", hy.a.d("birthDate", 14));
        f466a.put("byArtist", hy.a.a("byArtist", 15, kn.class));
        f466a.put("caption", hy.a.d("caption", 16));
        f466a.put("contentSize", hy.a.d("contentSize", 17));
        f466a.put("contentUrl", hy.a.d("contentUrl", 18));
        f466a.put("contributor", hy.a.b("contributor", 19, kn.class));
        f466a.put("dateCreated", hy.a.d("dateCreated", 20));
        f466a.put("dateModified", hy.a.d("dateModified", 21));
        f466a.put("datePublished", hy.a.d("datePublished", 22));
        f466a.put("description", hy.a.d("description", 23));
        f466a.put("duration", hy.a.d("duration", 24));
        f466a.put("embedUrl", hy.a.d("embedUrl", 25));
        f466a.put("endDate", hy.a.d("endDate", 26));
        f466a.put("familyName", hy.a.d("familyName", 27));
        f466a.put("gender", hy.a.d("gender", 28));
        f466a.put("geo", hy.a.a("geo", 29, kn.class));
        f466a.put("givenName", hy.a.d("givenName", 30));
        f466a.put("height", hy.a.d("height", 31));
        f466a.put("id", hy.a.d("id", 32));
        f466a.put("image", hy.a.d("image", 33));
        f466a.put("inAlbum", hy.a.a("inAlbum", 34, kn.class));
        f466a.put("latitude", hy.a.b("latitude", 36));
        f466a.put("location", hy.a.a("location", 37, kn.class));
        f466a.put("longitude", hy.a.b("longitude", 38));
        f466a.put("name", hy.a.d("name", 39));
        f466a.put("partOfTVSeries", hy.a.a("partOfTVSeries", 40, kn.class));
        f466a.put("performers", hy.a.b("performers", 41, kn.class));
        f466a.put("playerType", hy.a.d("playerType", 42));
        f466a.put("postOfficeBoxNumber", hy.a.d("postOfficeBoxNumber", 43));
        f466a.put("postalCode", hy.a.d("postalCode", 44));
        f466a.put("ratingValue", hy.a.d("ratingValue", 45));
        f466a.put("reviewRating", hy.a.a("reviewRating", 46, kn.class));
        f466a.put("startDate", hy.a.d("startDate", 47));
        f466a.put("streetAddress", hy.a.d("streetAddress", 48));
        f466a.put("text", hy.a.d("text", 49));
        f466a.put("thumbnail", hy.a.a("thumbnail", 50, kn.class));
        f466a.put("thumbnailUrl", hy.a.d("thumbnailUrl", 51));
        f466a.put("tickerSymbol", hy.a.d("tickerSymbol", 52));
        f466a.put("type", hy.a.d("type", 53));
        f466a.put("url", hy.a.d("url", 54));
        f466a.put("width", hy.a.d("width", 55));
        f466a.put("worstRating", hy.a.d("worstRating", 56));
    }

    public kn() {
        this.c = 1;
        this.b = new HashSet();
    }

    kn(Set set, int i, kn knVar, List list, kn knVar2, String str, String str2, String str3, List list2, int i2, List list3, kn knVar3, List list4, String str4, String str5, kn knVar4, String str6, String str7, String str8, List list5, String str9, String str10, String str11, String str12, String str13, String str14, String str15, String str16, String str17, kn knVar5, String str18, String str19, String str20, String str21, kn knVar6, double d, kn knVar7, double d2, String str22, kn knVar8, List list6, String str23, String str24, String str25, String str26, kn knVar9, String str27, String str28, String str29, kn knVar10, String str30, String str31, String str32, String str33, String str34, String str35) {
        this.b = set;
        this.c = i;
        this.d = knVar;
        this.e = list;
        this.f = knVar2;
        this.g = str;
        this.h = str2;
        this.i = str3;
        this.j = list2;
        this.k = i2;
        this.l = list3;
        this.m = knVar3;
        this.n = list4;
        this.o = str4;
        this.p = str5;
        this.q = knVar4;
        this.r = str6;
        this.s = str7;
        this.t = str8;
        this.u = list5;
        this.v = str9;
        this.w = str10;
        this.x = str11;
        this.y = str12;
        this.z = str13;
        this.A = str14;
        this.B = str15;
        this.C = str16;
        this.D = str17;
        this.E = knVar5;
        this.F = str18;
        this.G = str19;
        this.H = str20;
        this.I = str21;
        this.J = knVar6;
        this.K = d;
        this.L = knVar7;
        this.M = d2;
        this.N = str22;
        this.O = knVar8;
        this.P = list6;
        this.Q = str23;
        this.R = str24;
        this.S = str25;
        this.T = str26;
        this.U = knVar9;
        this.V = str27;
        this.W = str28;
        this.X = str29;
        this.Y = knVar10;
        this.Z = str30;
        this.aa = str31;
        this.ab = str32;
        this.ac = str33;
        this.ad = str34;
        this.ae = str35;
    }

    public String A() {
        return this.x;
    }

    public String B() {
        return this.y;
    }

    public String C() {
        return this.z;
    }

    public String D() {
        return this.A;
    }

    public String E() {
        return this.B;
    }

    public String F() {
        return this.C;
    }

    public String G() {
        return this.D;
    }

    kn H() {
        return this.E;
    }

    public String I() {
        return this.F;
    }

    public String J() {
        return this.G;
    }

    public String K() {
        return this.H;
    }

    public String L() {
        return this.I;
    }

    kn M() {
        return this.J;
    }

    public double N() {
        return this.K;
    }

    kn O() {
        return this.L;
    }

    public double P() {
        return this.M;
    }

    public String Q() {
        return this.N;
    }

    kn R() {
        return this.O;
    }

    List S() {
        return this.P;
    }

    public String T() {
        return this.Q;
    }

    public String U() {
        return this.R;
    }

    public String V() {
        return this.S;
    }

    public String W() {
        return this.T;
    }

    kn X() {
        return this.U;
    }

    public String Y() {
        return this.V;
    }

    public String Z() {
        return this.W;
    }

    @Override // com.google.android.gms.internal.hy
    protected Object a(String str) {
        return null;
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean a(hy.a aVar) {
        return this.b.contains(Integer.valueOf(aVar.g()));
    }

    public String aa() {
        return this.X;
    }

    kn ab() {
        return this.Y;
    }

    public String ac() {
        return this.Z;
    }

    public String ad() {
        return this.aa;
    }

    public String ae() {
        return this.ab;
    }

    public String af() {
        return this.ac;
    }

    public String ag() {
        return this.ad;
    }

    public String ah() {
        return this.ae;
    }

    @Override // com.google.android.gms.common.data.d
    /* renamed from: ai, reason: merged with bridge method [inline-methods] */
    public kn a() {
        return this;
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
            case 8:
                return this.j;
            case 9:
                return Integer.valueOf(this.k);
            case 10:
                return this.l;
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                return this.m;
            case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
                return this.n;
            case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                return this.o;
            case 14:
                return this.p;
            case ViewDragHelper.EDGE_ALL /* 15 */:
                return this.q;
            case 16:
                return this.r;
            case 17:
                return this.s;
            case 18:
                return this.t;
            case TimeUtils.HUNDRED_DAY_FIELD_LEN /* 19 */:
                return this.u;
            case 20:
                return this.v;
            case 21:
                return this.w;
            case 22:
                return this.x;
            case 23:
                return this.y;
            case 24:
                return this.z;
            case 25:
                return this.A;
            case 26:
                return this.B;
            case 27:
                return this.C;
            case 28:
                return this.D;
            case 29:
                return this.E;
            case 30:
                return this.F;
            case 31:
                return this.G;
            case 32:
                return this.H;
            case 33:
                return this.I;
            case 34:
                return this.J;
            case 35:
            default:
                throw new IllegalStateException("Unknown safe parcelable id=" + aVar.g());
            case 36:
                return Double.valueOf(this.K);
            case 37:
                return this.L;
            case 38:
                return Double.valueOf(this.M);
            case 39:
                return this.N;
            case 40:
                return this.O;
            case 41:
                return this.P;
            case 42:
                return this.Q;
            case 43:
                return this.R;
            case 44:
                return this.S;
            case 45:
                return this.T;
            case 46:
                return this.U;
            case 47:
                return this.V;
            case 48:
                return this.W;
            case 49:
                return this.X;
            case AdSize.PORTRAIT_AD_HEIGHT /* 50 */:
                return this.Y;
            case 51:
                return this.Z;
            case 52:
                return this.aa;
            case 53:
                return this.ab;
            case 54:
                return this.ac;
            case 55:
                return this.ad;
            case 56:
                return this.ae;
        }
    }

    @Override // com.google.android.gms.internal.hy
    public HashMap b() {
        return f466a;
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean b(String str) {
        return false;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        ns nsVar = CREATOR;
        return 0;
    }

    Set e() {
        return this.b;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof kn)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        kn knVar = (kn) obj;
        for (hy.a aVar : f466a.values()) {
            if (a(aVar)) {
                if (knVar.a(aVar) && b(aVar).equals(knVar.b(aVar))) {
                }
                return false;
            }
            if (knVar.a(aVar)) {
                return false;
            }
        }
        return true;
    }

    int f() {
        return this.c;
    }

    kn g() {
        return this.d;
    }

    public List h() {
        return this.e;
    }

    public int hashCode() {
        int iHashCode = 0;
        Iterator it = f466a.values().iterator();
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

    kn i() {
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

    List m() {
        return this.j;
    }

    public int n() {
        return this.k;
    }

    List o() {
        return this.l;
    }

    kn p() {
        return this.m;
    }

    List q() {
        return this.n;
    }

    public String r() {
        return this.o;
    }

    public String s() {
        return this.p;
    }

    kn t() {
        return this.q;
    }

    public String u() {
        return this.r;
    }

    public String v() {
        return this.s;
    }

    public String w() {
        return this.t;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        ns nsVar = CREATOR;
        ns.a(this, parcel, i);
    }

    List x() {
        return this.u;
    }

    public String y() {
        return this.v;
    }

    public String z() {
        return this.w;
    }
}
