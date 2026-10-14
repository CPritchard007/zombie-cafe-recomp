package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class aq extends ag {
    public aq() {
        super(aj.GYRO_ACHIEVE_T, "t");
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() {
        return new ad().a("GYRO_ACHIEVE_VER");
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return d();
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
        boolean zN = af.a(context).n();
        if (zN) {
            Log.i("appdriver-log", "skipped Gryo Request in Sandbox mode");
        }
        if (!zN) {
            zN = e(context);
        }
        return !zN ? f(context) : zN;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final Map c(Context context) {
        HashMap map = new HashMap();
        map.put("advertisement", new ad().a("DEFAULT_THANKS"));
        return map;
    }
}
