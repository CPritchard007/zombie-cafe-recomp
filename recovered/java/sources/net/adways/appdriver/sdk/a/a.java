package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import java.io.IOException;
import java.util.Map;
import java.util.TreeMap;
import org.apache.http.HttpResponse;
import org.apache.http.util.EntityUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class a extends ag {
    private final Bundle e;

    public a(Bundle bundle) {
        super(aj.REWARD_CROSSPROMOLIST_LI, "li");
        this.e = bundle;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_SHOTAPP_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_SHOTAPP_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return g(context);
    }

    @Override // net.adways.appdriver.sdk.a.ag, net.adways.appdriver.sdk.a.t
    protected final ai a(Context context, HttpResponse httpResponse) {
        ae aeVar = new ae(context);
        int statusCode = httpResponse.getStatusLine().getStatusCode();
        Log.d("appdriver-log", "get response status : " + statusCode);
        if (statusCode >= 400) {
            Log.i("appdriver-log", "failed to send");
        } else if (statusCode == 200) {
            try {
                aeVar.a("SHOTAPP_CAMPAIGN_LIST", new JSONObject(EntityUtils.toString(httpResponse.getEntity())));
                Log.d("appdriver-log", "request complete");
            } catch (IOException e) {
                Log.e("appdriver-log", "faild to get response", e);
            } catch (JSONException e2) {
                Log.e("appdriver-log", "faild to get response", e2);
            }
        }
        return ai.Success;
    }

    @Override // net.adways.appdriver.sdk.a.ag, net.adways.appdriver.sdk.a.t
    protected final boolean b(Context context) {
        JSONObject jSONObjectA = new ae(context).a("SHOTAPP_CAMPAIGN_LIST");
        if (jSONObjectA == null) {
            return false;
        }
        try {
            return Long.valueOf(jSONObjectA.getLong("expired_time")).compareTo(Long.valueOf(System.currentTimeMillis() / 1000)) >= 0;
        } catch (JSONException e) {
            Log.e("appdriver-log", "cancel request", e);
            return false;
        }
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("cross_media_id", String.valueOf(this.e.getInt("cross_media_id")));
        return treeMap;
    }
}
