package net.adways.appdriver.sdk.a;

import android.content.Context;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class au extends ag {
    private final String e;
    private final String f;

    public au() {
        super(aj.APPDRIVER_MULTIACHIEVE_A, "a");
        this.f = null;
        this.e = null;
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
    protected final Map c(Context context) {
        HashMap map = new HashMap();
        map.put("advertisement", this.f);
        map.put("click_id", this.e);
        return map;
    }
}
