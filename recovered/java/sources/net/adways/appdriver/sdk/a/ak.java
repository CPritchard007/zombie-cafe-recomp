package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ak {
    public final ag a(Context context, JSONObject jSONObject) throws JSONException, an {
        ag asVar;
        an e;
        aj ajVarValueOf;
        try {
            ajVarValueOf = aj.valueOf(jSONObject.getString("type"));
        } catch (an e2) {
            asVar = null;
            e = e2;
        }
        switch (al.f617a[ajVarValueOf.ordinal()]) {
            case 1:
                asVar = new ap();
                try {
                    asVar.a(jSONObject);
                    asVar.d(context);
                } catch (an e3) {
                    e = e3;
                    v.a("parse request from json failed:" + jSONObject, e);
                    Log.w("appdriver-log", "parse request from json failed");
                    return asVar;
                }
                return asVar;
            case 2:
                new au();
            case 3:
                asVar = new av();
                asVar.a(jSONObject);
                asVar.d(context);
                return asVar;
            case 4:
                asVar = new aq();
                asVar.a(jSONObject);
                asVar.d(context);
                return asVar;
            case 5:
                asVar = new at();
                asVar.a(jSONObject);
                asVar.d(context);
                return asVar;
            case 6:
                asVar = new ar();
                asVar.a(jSONObject);
                asVar.d(context);
                return asVar;
            case 7:
                asVar = new as();
                asVar.a(jSONObject);
                asVar.d(context);
                return asVar;
            default:
                throw new an("unsupport json parse for request " + ajVarValueOf.name());
        }
    }
}
