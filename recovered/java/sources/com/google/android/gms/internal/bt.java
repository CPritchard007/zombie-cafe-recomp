package com.google.android.gms.internal;

import android.content.Context;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bt {
    public static List a(JSONObject jSONObject, String str) {
        JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray(str);
        if (jSONArrayOptJSONArray == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(jSONArrayOptJSONArray.length());
        for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
            arrayList.add(jSONArrayOptJSONArray.getString(i));
        }
        return Collections.unmodifiableList(arrayList);
    }

    public static void a(Context context, String str, hd hdVar, String str2, boolean z, List list) {
        String str3 = z ? "1" : "0";
        Iterator it = list.iterator();
        while (it.hasNext()) {
            String strReplaceAll = ((String) it.next()).replaceAll("@gw_adlocid@", str2).replaceAll("@gw_adnetrefresh@", str3).replaceAll("@gw_qdata@", hdVar.o.f).replaceAll("@gw_sdkver@", str).replaceAll("@gw_sessid@", hg.f403a).replaceAll("@gw_seqnum@", hdVar.i);
            if (hdVar.l != null) {
                strReplaceAll = strReplaceAll.replaceAll("@gw_adnetid@", hdVar.l.b).replaceAll("@gw_allocid@", hdVar.l.d);
            }
            new id(context, str, strReplaceAll).e();
        }
    }
}
