package com.google.android.gms.internal;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bm {

    /* renamed from: a, reason: collision with root package name */
    public final List f295a;
    public final long b;
    public final List c;
    public final List d;
    public final List e;
    public final String f;
    public final long g;
    public int h;
    public int i;

    public bm(String str) throws JSONException {
        JSONObject jSONObject = new JSONObject(str);
        if (ig.a(2)) {
            ig.d("Mediation Response JSON: " + jSONObject.toString(2));
        }
        JSONArray jSONArray = jSONObject.getJSONArray("ad_networks");
        ArrayList arrayList = new ArrayList(jSONArray.length());
        int i = -1;
        for (int i2 = 0; i2 < jSONArray.length(); i2++) {
            bl blVar = new bl(jSONArray.getJSONObject(i2));
            arrayList.add(blVar);
            if (i < 0 && a(blVar)) {
                i = i2;
            }
        }
        this.h = i;
        this.i = jSONArray.length();
        this.f295a = Collections.unmodifiableList(arrayList);
        this.f = jSONObject.getString("qdata");
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("settings");
        if (jSONObjectOptJSONObject == null) {
            this.b = -1L;
            this.c = null;
            this.d = null;
            this.e = null;
            this.g = -1L;
            return;
        }
        this.b = jSONObjectOptJSONObject.optLong("ad_network_timeout_millis", -1L);
        this.c = bt.a(jSONObjectOptJSONObject, "click_urls");
        this.d = bt.a(jSONObjectOptJSONObject, "imp_urls");
        this.e = bt.a(jSONObjectOptJSONObject, "nofill_urls");
        long jOptLong = jSONObjectOptJSONObject.optLong("refresh", -1L);
        this.g = jOptLong > 0 ? jOptLong * 1000 : -1L;
    }

    private boolean a(bl blVar) {
        Iterator it = blVar.c.iterator();
        while (it.hasNext()) {
            if (((String) it.next()).equals("com.google.ads.mediation.admob.AdMobAdapter")) {
                return true;
            }
        }
        return false;
    }
}
