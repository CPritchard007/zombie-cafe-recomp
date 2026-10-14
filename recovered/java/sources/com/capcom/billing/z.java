package com.capcom.billing;

import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class z {

    /* renamed from: a, reason: collision with root package name */
    String f60a;
    String b;
    String c;
    long d;
    int e;
    String f;
    String g;
    String h;
    String i;

    public z(String str, String str2) {
        this.h = str;
        JSONObject jSONObject = new JSONObject(this.h);
        if (jSONObject.has("orderId")) {
            this.f60a = jSONObject.optString("orderId");
        } else {
            this.f60a = "sdx_" + String.valueOf(System.currentTimeMillis() / 1000);
        }
        this.b = jSONObject.optString("packageName");
        this.c = jSONObject.optString("productId");
        this.d = jSONObject.optLong("purchaseTime");
        this.e = jSONObject.optInt("purchaseState");
        this.f = jSONObject.optString("developerPayload");
        this.g = jSONObject.optString("token", jSONObject.optString("purchaseToken"));
        this.i = str2;
    }

    public String a() {
        return this.f60a;
    }

    public String b() {
        return this.c;
    }

    public long c() {
        return this.d;
    }

    public String d() {
        return this.f;
    }

    public String e() {
        return this.g;
    }

    public String toString() {
        return "PurchaseInfo:" + this.h;
    }
}
