package com.capcom.billing;

import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class af {

    /* renamed from: a, reason: collision with root package name */
    String f36a;
    String b;
    String c;
    String d;
    String e;
    String f;

    public af(String str) {
        this.f = str;
        JSONObject jSONObject = new JSONObject(this.f);
        this.f36a = jSONObject.optString("productId");
        this.b = jSONObject.optString("type");
        this.c = jSONObject.optString("price");
        this.d = jSONObject.optString("title");
        this.e = jSONObject.optString("description");
    }

    public String a() {
        return this.f36a;
    }

    public String toString() {
        return "SkuDetails:" + this.f;
    }
}
