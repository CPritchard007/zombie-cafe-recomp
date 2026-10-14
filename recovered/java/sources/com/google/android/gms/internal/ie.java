package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.Parcel;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.hy;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ie extends hy implements SafeParcelable {
    public static final mf CREATOR = new mf();

    /* renamed from: a, reason: collision with root package name */
    private final int f426a;
    private final Parcel b;
    private final int c = 2;
    private final ib d;
    private final String e;
    private int f;
    private int g;

    ie(int i, Parcel parcel, ib ibVar) {
        this.f426a = i;
        this.b = (Parcel) ls.a(parcel);
        this.d = ibVar;
        if (this.d == null) {
            this.e = null;
        } else {
            this.e = this.d.d();
        }
        this.f = 2;
    }

    public static HashMap a(Bundle bundle) {
        HashMap map = new HashMap();
        for (String str : bundle.keySet()) {
            map.put(str, bundle.getString(str));
        }
        return map;
    }

    private static HashMap a(HashMap map) {
        HashMap map2 = new HashMap();
        for (Map.Entry entry : map.entrySet()) {
            map2.put(Integer.valueOf(((hy.a) entry.getValue()).g()), entry);
        }
        return map2;
    }

    private void a(StringBuilder sb, int i, Object obj) {
        switch (i) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                sb.append(obj);
                return;
            case 7:
                sb.append("\"").append(mk.a(obj.toString())).append("\"");
                return;
            case 8:
                sb.append("\"").append(mh.a((byte[]) obj)).append("\"");
                return;
            case 9:
                sb.append("\"").append(mh.b((byte[]) obj));
                sb.append("\"");
                return;
            case 10:
                ml.a(sb, (HashMap) obj);
                return;
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                throw new IllegalArgumentException("Method does not accept concrete type.");
            default:
                throw new IllegalArgumentException("Unknown type = " + i);
        }
    }

    private void a(StringBuilder sb, hy.a aVar, Parcel parcel, int i) {
        switch (aVar.d()) {
            case 0:
                a(sb, aVar, a(aVar, Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.g(parcel, i))));
                return;
            case 1:
                a(sb, aVar, a(aVar, com.google.android.gms.common.internal.safeparcel.a.k(parcel, i)));
                return;
            case 2:
                a(sb, aVar, a(aVar, Long.valueOf(com.google.android.gms.common.internal.safeparcel.a.i(parcel, i))));
                return;
            case 3:
                a(sb, aVar, a(aVar, Float.valueOf(com.google.android.gms.common.internal.safeparcel.a.l(parcel, i))));
                return;
            case 4:
                a(sb, aVar, a(aVar, Double.valueOf(com.google.android.gms.common.internal.safeparcel.a.m(parcel, i))));
                return;
            case 5:
                a(sb, aVar, a(aVar, com.google.android.gms.common.internal.safeparcel.a.n(parcel, i)));
                return;
            case 6:
                a(sb, aVar, a(aVar, Boolean.valueOf(com.google.android.gms.common.internal.safeparcel.a.c(parcel, i))));
                return;
            case 7:
                a(sb, aVar, a(aVar, com.google.android.gms.common.internal.safeparcel.a.o(parcel, i)));
                return;
            case 8:
            case 9:
                a(sb, aVar, a(aVar, com.google.android.gms.common.internal.safeparcel.a.r(parcel, i)));
                return;
            case 10:
                a(sb, aVar, a(aVar, a(com.google.android.gms.common.internal.safeparcel.a.q(parcel, i))));
                return;
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                throw new IllegalArgumentException("Method does not accept concrete type.");
            default:
                throw new IllegalArgumentException("Unknown field out type = " + aVar.d());
        }
    }

    private void a(StringBuilder sb, hy.a aVar, Object obj) {
        if (aVar.c()) {
            a(sb, aVar, (ArrayList) obj);
        } else {
            a(sb, aVar.b(), obj);
        }
    }

    private void a(StringBuilder sb, hy.a aVar, ArrayList arrayList) {
        sb.append("[");
        int size = arrayList.size();
        for (int i = 0; i < size; i++) {
            if (i != 0) {
                sb.append(",");
            }
            a(sb, aVar.b(), arrayList.get(i));
        }
        sb.append("]");
    }

    private void a(StringBuilder sb, String str, hy.a aVar, Parcel parcel, int i) {
        sb.append("\"").append(str).append("\":");
        if (aVar.j()) {
            a(sb, aVar, parcel, i);
        } else {
            b(sb, aVar, parcel, i);
        }
    }

    private void a(StringBuilder sb, HashMap map, Parcel parcel) {
        HashMap mapA = a(map);
        sb.append('{');
        int iB = com.google.android.gms.common.internal.safeparcel.a.b(parcel);
        boolean z = false;
        while (parcel.dataPosition() < iB) {
            int iA = com.google.android.gms.common.internal.safeparcel.a.a(parcel);
            Map.Entry entry = (Map.Entry) mapA.get(Integer.valueOf(com.google.android.gms.common.internal.safeparcel.a.a(iA)));
            if (entry != null) {
                if (z) {
                    sb.append(",");
                }
                a(sb, (String) entry.getKey(), (hy.a) entry.getValue(), parcel, iA);
                z = true;
            }
        }
        if (parcel.dataPosition() != iB) {
            throw new com.google.android.gms.common.internal.safeparcel.b("Overread allowed size end=" + iB, parcel);
        }
        sb.append('}');
    }

    private void b(StringBuilder sb, hy.a aVar, Parcel parcel, int i) {
        if (aVar.e()) {
            sb.append("[");
            switch (aVar.d()) {
                case 0:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.u(parcel, i));
                    break;
                case 1:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.w(parcel, i));
                    break;
                case 2:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.v(parcel, i));
                    break;
                case 3:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.x(parcel, i));
                    break;
                case 4:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.y(parcel, i));
                    break;
                case 5:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.z(parcel, i));
                    break;
                case 6:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.t(parcel, i));
                    break;
                case 7:
                    mg.a(sb, com.google.android.gms.common.internal.safeparcel.a.A(parcel, i));
                    break;
                case 8:
                case 9:
                case 10:
                    throw new UnsupportedOperationException("List of type BASE64, BASE64_URL_SAFE, or STRING_MAP is not supported");
                case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                    Parcel[] parcelArrD = com.google.android.gms.common.internal.safeparcel.a.D(parcel, i);
                    int length = parcelArrD.length;
                    for (int i2 = 0; i2 < length; i2++) {
                        if (i2 > 0) {
                            sb.append(",");
                        }
                        parcelArrD[i2].setDataPosition(0);
                        a(sb, aVar.l(), parcelArrD[i2]);
                    }
                    break;
                default:
                    throw new IllegalStateException("Unknown field type out.");
            }
            sb.append("]");
            return;
        }
        switch (aVar.d()) {
            case 0:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.g(parcel, i));
                return;
            case 1:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.k(parcel, i));
                return;
            case 2:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.i(parcel, i));
                return;
            case 3:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.l(parcel, i));
                return;
            case 4:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.m(parcel, i));
                return;
            case 5:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.n(parcel, i));
                return;
            case 6:
                sb.append(com.google.android.gms.common.internal.safeparcel.a.c(parcel, i));
                return;
            case 7:
                sb.append("\"").append(mk.a(com.google.android.gms.common.internal.safeparcel.a.o(parcel, i))).append("\"");
                return;
            case 8:
                sb.append("\"").append(mh.a(com.google.android.gms.common.internal.safeparcel.a.r(parcel, i))).append("\"");
                return;
            case 9:
                sb.append("\"").append(mh.b(com.google.android.gms.common.internal.safeparcel.a.r(parcel, i)));
                sb.append("\"");
                return;
            case 10:
                Bundle bundleQ = com.google.android.gms.common.internal.safeparcel.a.q(parcel, i);
                Set<String> setKeySet = bundleQ.keySet();
                setKeySet.size();
                sb.append("{");
                boolean z = true;
                for (String str : setKeySet) {
                    if (!z) {
                        sb.append(",");
                    }
                    sb.append("\"").append(str).append("\"");
                    sb.append(":");
                    sb.append("\"").append(mk.a(bundleQ.getString(str))).append("\"");
                    z = false;
                }
                sb.append("}");
                return;
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                Parcel parcelC = com.google.android.gms.common.internal.safeparcel.a.C(parcel, i);
                parcelC.setDataPosition(0);
                a(sb, aVar.l(), parcelC);
                return;
            default:
                throw new IllegalStateException("Unknown field type out");
        }
    }

    public int a() {
        return this.f426a;
    }

    @Override // com.google.android.gms.internal.hy
    protected Object a(String str) {
        throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    @Override // com.google.android.gms.internal.hy
    public HashMap b() {
        if (this.d == null) {
            return null;
        }
        return this.d.a(this.e);
    }

    @Override // com.google.android.gms.internal.hy
    protected boolean b(String str) {
        throw new UnsupportedOperationException("Converting to JSON does not require this method.");
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        mf mfVar = CREATOR;
        return 0;
    }

    public Parcel e() {
        switch (this.f) {
            case 0:
                this.g = com.google.android.gms.common.internal.safeparcel.c.a(this.b);
                com.google.android.gms.common.internal.safeparcel.c.a(this.b, this.g);
                this.f = 2;
                break;
            case 1:
                com.google.android.gms.common.internal.safeparcel.c.a(this.b, this.g);
                this.f = 2;
                break;
        }
        return this.b;
    }

    ib f() {
        switch (this.c) {
            case 0:
                return null;
            case 1:
                return this.d;
            case 2:
                return this.d;
            default:
                throw new IllegalStateException("Invalid creation type: " + this.c);
        }
    }

    @Override // com.google.android.gms.internal.hy
    public String toString() {
        ls.a(this.d, "Cannot convert to JSON on client side.");
        Parcel parcelE = e();
        parcelE.setDataPosition(0);
        StringBuilder sb = new StringBuilder(100);
        a(sb, this.d.a(this.e), parcelE);
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        mf mfVar = CREATOR;
        mf.a(this, parcel, i);
    }
}
