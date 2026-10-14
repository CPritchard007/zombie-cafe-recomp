package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ap extends ag {
    private String e;
    private final String f;

    public ap() {
        super(aj.APPDRIVER_ACHIEVE_A, "a");
        this.e = null;
        this.f = null;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_PROMOTION_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_PROMOTION_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return g(context);
    }

    @Override // net.adways.appdriver.sdk.a.ag
    public final void a(Context context, ai aiVar, ab abVar) throws JSONException, an {
        super.a(context, aiVar, abVar);
        if (aiVar == ai.Success) {
            ae aeVar = new ae(context);
            JSONObject jSONObjectA = aeVar.a("ACHIEVE_COMPLETED");
            JSONObject jSONObject = jSONObjectA == null ? new JSONObject() : jSONObjectA;
            try {
                JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("list_req_completed");
                if (jSONArrayOptJSONArray == null) {
                    jSONArrayOptJSONArray = new JSONArray();
                }
                jSONArrayOptJSONArray.put(e());
                jSONObject.put("list_req_completed", jSONArrayOptJSONArray);
                aeVar.a("ACHIEVE_COMPLETED", jSONObject);
                v.a("saved completed req:" + jSONObject.toString());
            } catch (JSONException e) {
                Log.w("appdriver-log", "completed achieve JSON format error", e);
            }
        }
    }

    @Override // net.adways.appdriver.sdk.a.ag, net.adways.appdriver.sdk.a.t
    protected final boolean b(Context context) {
        boolean zE = e(context);
        return !zE ? f(context) : zE;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final Map c(Context context) {
        HashMap map = new HashMap();
        map.put("advertisement", new ad().a("DEFAULT_THANKS"));
        if (this.e != null) {
            map.put("advertisement", this.e);
        }
        if (this.f != null) {
            map.put("requirement", this.f);
        }
        ae aeVar = new ae(context);
        String strB = aeVar.b("REFERRER", (String) null);
        if (strB != null) {
            map.put("referrer", strB);
        }
        String strB2 = aeVar.b("click_id", (String) null);
        if (strB2 != null) {
            map.put("click_id", strB2);
        }
        String strB3 = aeVar.b("identifier", (String) null);
        if (strB3 != null) {
            map.put("cookie_identifier", strB3);
        }
        String strB4 = aeVar.b("user", (String) null);
        if (strB4 != null) {
            map.put("user", strB4);
        }
        return map;
    }
}
