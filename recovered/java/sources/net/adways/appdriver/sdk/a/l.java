package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.os.Bundle;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class l extends ag {
    private final Bundle e;

    public l(Bundle bundle) {
        super(aj.REWARD_SCHEME_TRACKING_N, "n");
        this.e = bundle;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_SCHEME_TRACK_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_SCHEME_TRACK_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return g(context);
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("media_id", String.valueOf(this.e.getInt("media_id")));
        treeMap.put("identifier", v.b(this.e.getString("identifier")));
        treeMap.put("campaign_id", String.valueOf(this.e.getInt("campaign_id")));
        treeMap.put("advertisement", "track");
        return treeMap;
    }
}
