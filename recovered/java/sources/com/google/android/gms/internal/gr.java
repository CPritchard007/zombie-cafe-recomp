package com.google.android.gms.internal;

import android.content.Context;
import android.graphics.Color;
import android.location.Location;
import android.os.Bundle;
import android.text.TextUtils;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class gr {

    /* renamed from: a, reason: collision with root package name */
    private static final SimpleDateFormat f390a = new SimpleDateFormat("yyyyMMdd");

    public static du a(Context context, ds dsVar, String str) {
        du duVar;
        List list;
        List list2;
        List list3;
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("ad_base_url", null);
            String strOptString2 = jSONObject.optString("ad_url", null);
            String strOptString3 = jSONObject.optString("ad_size", null);
            String strOptString4 = jSONObject.optString("ad_html", null);
            long j = -1;
            String strOptString5 = jSONObject.optString("debug_dialog", null);
            long j2 = jSONObject.has("interstitial_timeout") ? (long) (jSONObject.getDouble("interstitial_timeout") * 1000.0d) : -1L;
            String strOptString6 = jSONObject.optString("orientation", null);
            int iB = -1;
            if ("portrait".equals(strOptString6)) {
                iB = hq.c();
            } else if ("landscape".equals(strOptString6)) {
                iB = hq.b();
            }
            if (TextUtils.isEmpty(strOptString4)) {
                if (TextUtils.isEmpty(strOptString2)) {
                    ig.e("Could not parse the mediation config: Missing required ad_html or ad_url field.");
                    return new du(0);
                }
                du duVarA = go.a(context, dsVar.k.b, strOptString2, (String) null, (gx) null);
                strOptString = duVarA.b;
                strOptString4 = duVarA.c;
                j = duVarA.n;
                duVar = duVarA;
            } else {
                if (TextUtils.isEmpty(strOptString)) {
                    ig.e("Could not parse the mediation config: Missing required ad_base_url field");
                    return new du(0);
                }
                duVar = null;
            }
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("click_urls");
            List linkedList = duVar == null ? null : duVar.d;
            if (jSONArrayOptJSONArray != null) {
                if (linkedList == null) {
                    linkedList = new LinkedList();
                }
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    linkedList.add(jSONArrayOptJSONArray.getString(i));
                }
                list = linkedList;
            } else {
                list = linkedList;
            }
            JSONArray jSONArrayOptJSONArray2 = jSONObject.optJSONArray("impression_urls");
            List linkedList2 = duVar == null ? null : duVar.f;
            if (jSONArrayOptJSONArray2 != null) {
                if (linkedList2 == null) {
                    linkedList2 = new LinkedList();
                }
                for (int i2 = 0; i2 < jSONArrayOptJSONArray2.length(); i2++) {
                    linkedList2.add(jSONArrayOptJSONArray2.getString(i2));
                }
                list2 = linkedList2;
            } else {
                list2 = linkedList2;
            }
            JSONArray jSONArrayOptJSONArray3 = jSONObject.optJSONArray("manual_impression_urls");
            List linkedList3 = duVar == null ? null : duVar.j;
            if (jSONArrayOptJSONArray3 != null) {
                if (linkedList3 == null) {
                    linkedList3 = new LinkedList();
                }
                for (int i3 = 0; i3 < jSONArrayOptJSONArray3.length(); i3++) {
                    linkedList3.add(jSONArrayOptJSONArray3.getString(i3));
                }
                list3 = linkedList3;
            } else {
                list3 = linkedList3;
            }
            if (duVar != null) {
                if (duVar.l != -1) {
                    iB = duVar.l;
                }
                if (duVar.g > 0) {
                    j2 = duVar.g;
                }
            }
            String strOptString7 = jSONObject.optString("active_view");
            boolean zOptBoolean = jSONObject.optBoolean("ad_is_javascript", false);
            return new du(strOptString, strOptString4, list, list2, j2, false, -1L, list3, -1L, iB, strOptString3, j, strOptString5, zOptBoolean, zOptBoolean ? jSONObject.optString("ad_passback_url", null) : null, strOptString7);
        } catch (JSONException e) {
            ig.e("Could not parse the mediation config: " + e.getMessage());
            return new du(0);
        }
    }

    private static Integer a(boolean z) {
        return Integer.valueOf(z ? 1 : 0);
    }

    private static String a(int i) {
        return String.format(Locale.US, "#%06x", Integer.valueOf(16777215 & i));
    }

    public static String a(ds dsVar, gz gzVar, Location location, String str) {
        try {
            HashMap map = new HashMap();
            if (str != null && str.trim() != "") {
                map.put("eid", str);
            }
            if (dsVar.b != null) {
                map.put("ad_pos", dsVar.b);
            }
            a(map, dsVar.c);
            map.put("format", dsVar.d.b);
            if (dsVar.d.f == -1) {
                map.put("smart_w", "full");
            }
            if (dsVar.d.c == -2) {
                map.put("smart_h", "auto");
            }
            if (dsVar.d.h != null) {
                StringBuilder sb = new StringBuilder();
                for (al alVar : dsVar.d.h) {
                    if (sb.length() != 0) {
                        sb.append("|");
                    }
                    sb.append(alVar.f == -1 ? (int) (alVar.g / gzVar.q) : alVar.f);
                    sb.append("x");
                    sb.append(alVar.c == -2 ? (int) (alVar.d / gzVar.q) : alVar.c);
                }
                map.put("sz", sb);
            }
            map.put("slotname", dsVar.e);
            map.put("pn", dsVar.f.packageName);
            if (dsVar.g != null) {
                map.put("vc", Integer.valueOf(dsVar.g.versionCode));
            }
            map.put("ms", dsVar.h);
            map.put("ms2", dsVar.m);
            map.put("seq_num", dsVar.i);
            map.put("session_id", dsVar.j);
            map.put("js", dsVar.k.b);
            a(map, gzVar);
            if (dsVar.c.f280a >= 2 && dsVar.c.k != null) {
                a(map, dsVar.c.k);
            }
            if (dsVar.f336a >= 2) {
                map.put("quality_signals", dsVar.l);
            }
            if (ig.a(2)) {
                ig.d("Ad Request JSON: " + hq.a(map).toString(2));
            }
            return hq.a(map).toString();
        } catch (JSONException e) {
            ig.e("Problem serializing ad request to JSON: " + e.getMessage());
            return null;
        }
    }

    private static void a(HashMap map, Location location) {
        HashMap map2 = new HashMap();
        Float fValueOf = Float.valueOf(location.getAccuracy() * 1000.0f);
        Long lValueOf = Long.valueOf(location.getTime() * 1000);
        Long lValueOf2 = Long.valueOf((long) (location.getLatitude() * 1.0E7d));
        Long lValueOf3 = Long.valueOf((long) (location.getLongitude() * 1.0E7d));
        map2.put("radius", fValueOf);
        map2.put("lat", lValueOf2);
        map2.put("long", lValueOf3);
        map2.put("time", lValueOf);
        map.put("uule", map2);
    }

    private static void a(HashMap map, ai aiVar) {
        String strA = hk.a();
        if (strA != null) {
            map.put("abf", strA);
        }
        if (aiVar.b != -1) {
            map.put("cust_age", f390a.format(new Date(aiVar.b)));
        }
        if (aiVar.c != null) {
            map.put("extras", aiVar.c);
        }
        if (aiVar.d != -1) {
            map.put("cust_gender", Integer.valueOf(aiVar.d));
        }
        if (aiVar.e != null) {
            map.put("kw", aiVar.e);
        }
        if (aiVar.g != -1) {
            map.put("tag_for_child_directed_treatment", Integer.valueOf(aiVar.g));
        }
        if (aiVar.f) {
            map.put("adtest", "on");
        }
        if (aiVar.f280a >= 2) {
            if (aiVar.h) {
                map.put("d_imp_hdr", 1);
            }
            if (!TextUtils.isEmpty(aiVar.i)) {
                map.put("ppid", aiVar.i);
            }
            if (aiVar.j != null) {
                a(map, aiVar.j);
            }
        }
        if (aiVar.f280a < 3 || aiVar.l == null) {
            return;
        }
        map.put("url", aiVar.l);
    }

    private static void a(HashMap map, aw awVar) {
        String str;
        String str2 = null;
        if (Color.alpha(awVar.b) != 0) {
            map.put("acolor", a(awVar.b));
        }
        if (Color.alpha(awVar.c) != 0) {
            map.put("bgcolor", a(awVar.c));
        }
        if (Color.alpha(awVar.d) != 0 && Color.alpha(awVar.e) != 0) {
            map.put("gradientto", a(awVar.d));
            map.put("gradientfrom", a(awVar.e));
        }
        if (Color.alpha(awVar.f) != 0) {
            map.put("bcolor", a(awVar.f));
        }
        map.put("bthick", Integer.toString(awVar.g));
        switch (awVar.h) {
            case 0:
                str = "none";
                break;
            case 1:
                str = "dashed";
                break;
            case 2:
                str = "dotted";
                break;
            case 3:
                str = "solid";
                break;
            default:
                str = null;
                break;
        }
        if (str != null) {
            map.put("btype", str);
        }
        switch (awVar.i) {
            case 0:
                str2 = "light";
                break;
            case 1:
                str2 = "medium";
                break;
            case 2:
                str2 = "dark";
                break;
        }
        if (str2 != null) {
            map.put("callbuttoncolor", str2);
        }
        if (awVar.j != null) {
            map.put("channel", awVar.j);
        }
        if (Color.alpha(awVar.k) != 0) {
            map.put("dcolor", a(awVar.k));
        }
        if (awVar.l != null) {
            map.put("font", awVar.l);
        }
        if (Color.alpha(awVar.m) != 0) {
            map.put("hcolor", a(awVar.m));
        }
        map.put("headersize", Integer.toString(awVar.n));
        if (awVar.o != null) {
            map.put("q", awVar.o);
        }
    }

    private static void a(HashMap map, gz gzVar) {
        map.put("am", Integer.valueOf(gzVar.f397a));
        map.put("cog", a(gzVar.b));
        map.put("coh", a(gzVar.c));
        if (!TextUtils.isEmpty(gzVar.d)) {
            map.put("carrier", gzVar.d);
        }
        map.put("gl", gzVar.e);
        if (gzVar.f) {
            map.put("simulator", 1);
        }
        map.put("ma", a(gzVar.g));
        map.put("sp", a(gzVar.h));
        map.put("hl", gzVar.i);
        if (!TextUtils.isEmpty(gzVar.j)) {
            map.put("mv", gzVar.j);
        }
        map.put("muv", Integer.valueOf(gzVar.k));
        if (gzVar.l != -2) {
            map.put("cnt", Integer.valueOf(gzVar.l));
        }
        map.put("gnt", Integer.valueOf(gzVar.m));
        map.put("pt", Integer.valueOf(gzVar.n));
        map.put("rm", Integer.valueOf(gzVar.o));
        map.put("riv", Integer.valueOf(gzVar.p));
        map.put("u_sd", Float.valueOf(gzVar.q));
        map.put("sh", Integer.valueOf(gzVar.s));
        map.put("sw", Integer.valueOf(gzVar.r));
        Bundle bundle = new Bundle();
        bundle.putInt("active_network_state", gzVar.w);
        bundle.putBoolean("active_network_metered", gzVar.v);
        map.put("connectivity", bundle);
        Bundle bundle2 = new Bundle();
        bundle2.putBoolean("is_charging", gzVar.u);
        bundle2.putDouble("battery_level", gzVar.t);
        map.put("battery", bundle2);
    }
}
