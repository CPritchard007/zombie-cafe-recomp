package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.os.Build;
import android.util.Log;
import java.io.UnsupportedEncodingException;
import java.security.NoSuchAlgorithmException;
import java.util.Date;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.SortedMap;
import java.util.TreeMap;
import org.apache.http.Header;
import org.apache.http.HttpResponse;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ag extends t implements Comparable {
    public String d;
    private aj e;
    private String f;

    public ag(aj ajVar, String str) {
        super(str);
        this.d = null;
        this.e = ajVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // java.lang.Comparable
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(ag agVar) {
        return (agVar.e == this.e && agVar.b.equals(this.b) && a(agVar.f627a).equals(a(this.f627a))) ? 0 : -1;
    }

    private static SortedMap a(Map map) {
        TreeMap treeMap = new TreeMap(map);
        for (String str : new String[]{"click_id"}) {
            if (treeMap.containsKey(str)) {
                treeMap.remove(str);
            }
        }
        return treeMap;
    }

    private static void a(Context context, int i) {
        long time = new Date().getTime() + (i * 1000);
        new ae(context).a("REFUND_LIMIT", String.valueOf(time));
        v.a("save refund period:" + new Date(time).toString());
    }

    protected static String d() throws an {
        String strA = new ad().a("DOMAIN_GYRO");
        if (strA == null) {
            throw new an("not find api domain");
        }
        return strA;
    }

    protected static boolean f(Context context) {
        boolean z = false;
        try {
            if (new Date(Long.parseLong(new ae(context).b("REFUND_LIMIT", "0"))).compareTo(new Date()) >= 0) {
                z = true;
            }
        } catch (NumberFormatException e) {
            Log.w("appdriver-log", "ignore refund limite date format warning", e);
        }
        v.a("couldAppRefund = " + z);
        return z;
    }

    protected static String g(Context context) throws an {
        ad adVar = new ad();
        String strA = af.a(context).n() ? adVar.a("DOMAIN_APPDRIVER_SANDBOX") : adVar.a("DOMAIN_APPDRIVER");
        if (strA == null) {
            throw new an("not find api domain");
        }
        return strA;
    }

    protected abstract String a();

    protected abstract String a(Context context);

    @Override // net.adways.appdriver.sdk.a.t
    protected ai a(Context context, HttpResponse httpResponse) {
        int statusCode = httpResponse.getStatusLine().getStatusCode();
        v.a(this.e.name() + " get response status : " + statusCode);
        if (statusCode >= 400) {
            Log.i("appdriver-log", "failed to send, retry later");
            return ai.Retry;
        }
        if (statusCode != 307) {
            if (statusCode != 200) {
                return null;
            }
            Header firstHeader = httpResponse.getFirstHeader("Retry-After");
            if (firstHeader != null) {
                a(context, Integer.parseInt(firstHeader.getValue()));
                return ai.Retry;
            }
            Log.i("appdriver-log", "request complete");
            return ai.Success;
        }
        Header firstHeader2 = httpResponse.getFirstHeader("Retry-After");
        Header firstHeader3 = httpResponse.getFirstHeader("Location");
        if (firstHeader3 == null || firstHeader3.getValue().equals("")) {
            Log.e("appdriver-log", "cannot redirect without redirect url");
            return ai.Failure;
        }
        if (firstHeader2 != null) {
            a(context, Integer.parseInt(firstHeader2.getValue()));
        }
        this.d = firstHeader3.getValue();
        v.a("redirect location >> " + firstHeader3);
        return ai.Redirect;
    }

    public void a(Context context, ai aiVar, ab abVar) throws an {
        Log.i("appdriver-log", "request result:" + aiVar.name());
        switch (ah.f614a[aiVar.ordinal()]) {
            case 1:
                return;
            case 2:
                if (c() <= 0) {
                    Log.w("appdriver-log", "abandon for retrial");
                    return;
                } else {
                    Log.i("appdriver-log", "retrial count down = " + this.c);
                    abVar.a(this);
                    return;
                }
            case 3:
                new ae(context).a(abVar.b());
                abVar.a();
                return;
            case 4:
                abVar.b = this.d;
                return;
            case 5:
                Log.i("appdriver-log", this.e.name() + " is already completed.");
                return;
            default:
                throw new an("unknown http response status:" + aiVar.name());
        }
    }

    public final void a(JSONObject jSONObject) throws JSONException {
        JSONObject jSONObject2 = jSONObject.getJSONObject("params");
        Iterator<String> itKeys = jSONObject2.keys();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            a(next, jSONObject2.getString(next));
        }
    }

    @Override // net.adways.appdriver.sdk.a.t
    protected boolean b(Context context) {
        return false;
    }

    protected abstract Map c(Context context);

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // net.adways.appdriver.sdk.a.t
    public final String d(Context context) throws an {
        String strA;
        if (this.f == null) {
            af afVarA = af.a(context);
            String strA2 = a(context);
            String strA3 = a();
            int iA = afVarA.a();
            String strB = afVarA.b();
            StringBuilder sb = new StringBuilder();
            sb.append(strA2).append(strA3).append(".").append(iA).append(this.b);
            if (this.f627a.size() == 0) {
                Map mapH = h(context);
                if (mapH != null) {
                    this.f627a.putAll(mapH);
                }
                Map mapC = c(context);
                if (mapC != null) {
                    this.f627a.putAll(mapC);
                }
            }
            try {
                strA = aa.a(this.f627a, strB);
            } catch (UnsupportedEncodingException e) {
                Log.e("appdriver-log", "make request url failed", e);
                strA = null;
            } catch (NoSuchAlgorithmException e2) {
                Log.e("appdriver-log", "make request url failed", e2);
                strA = null;
            }
            if (strA != null) {
                sb.append("?");
                sb.append(strA);
            }
            this.f = sb.toString();
        }
        return this.f;
    }

    public final JSONObject e() throws JSONException {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("type", this.e.name());
        JSONObject jSONObject2 = new JSONObject();
        for (String str : this.f627a.keySet()) {
            jSONObject2.put(str, this.f627a.get(str));
        }
        jSONObject.put("params", jSONObject2);
        return jSONObject;
    }

    protected final boolean e(Context context) {
        boolean z;
        JSONException e;
        JSONObject jSONObjectA = new ae(context).a("ACHIEVE_COMPLETED");
        if (jSONObjectA != null) {
            try {
                v.a("current reqs:" + toString());
                v.a("completed reqs:" + jSONObjectA.toString(2));
                ak akVar = new ak();
                JSONArray jSONArrayOptJSONArray = jSONObjectA.optJSONArray("list_req_completed");
                z = false;
                for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                    try {
                        z = compareTo(akVar.a(context, jSONArrayOptJSONArray.getJSONObject(i))) == 0;
                        if (z) {
                            break;
                        }
                    } catch (JSONException e2) {
                        e = e2;
                        Log.w("appdriver-log", "ignore completed reqs JSON format warning", e);
                        v.a("isCompletedRequest = " + z);
                        return z;
                    }
                }
            } catch (JSONException e3) {
                z = false;
                e = e3;
            }
        } else {
            z = false;
        }
        v.a("isCompletedRequest = " + z);
        return z;
    }

    protected Map h(Context context) throws an {
        ad adVar = new ad();
        af afVarA = af.a(context);
        HashMap map = new HashMap();
        map.put("sdk", adVar.a("APPDRIVER_SDK_VERSION"));
        map.put("app", afVarA.e());
        map.put("carrier", afVarA.d());
        map.put("spn", afVarA.l());
        map.put("system", Build.VERSION.RELEASE);
        map.put("model", Build.MODEL);
        map.put("privileged", afVarA.i());
        if (this.d != null) {
            map.put("refresh", afVarA.h() + ";URL=" + this.d);
        } else if (afVarA.c() != 0) {
            if (afVarA.g() == null) {
                throw new an("meta-data scheme/host is required");
            }
            map.put("refresh", afVarA.h() + ";URL=" + afVarA.g());
        }
        map.put("identifier", afVarA.f());
        String strP = afVarA.p();
        if (strP != null) {
            map.put("idfa", strP);
        }
        if (afVarA.m() != null) {
            map.put("verbose", String.valueOf(afVarA.m()));
        }
        return map;
    }

    public String toString() {
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append("[").append(this.e.name()).append("]:").append(this.f);
        return stringBuffer.toString();
    }
}
