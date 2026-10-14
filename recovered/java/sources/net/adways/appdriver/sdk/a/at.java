package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class at extends ag {
    private final String e;
    private final String f;
    private final float g;
    private final int h;
    private final String i;

    public at() {
        super(aj.GYRO_PAY_T, "t");
        this.e = null;
        this.f = null;
        this.g = 0.0f;
        this.h = 0;
        this.i = null;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("GYRO_ACHIEVE_VER");
        if (strA == null) {
            throw new an("not find api version:GYRO_ACHIEVE_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return d();
    }

    @Override // net.adways.appdriver.sdk.a.ag, net.adways.appdriver.sdk.a.t
    protected final boolean b(Context context) {
        boolean zN = af.a(context).n();
        if (zN) {
            Log.i("appdriver-log", "skipped Gryo Request in Sandbox mode");
        }
        return zN;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final Map c(Context context) {
        HashMap map = new HashMap();
        map.put("transaction", this.e);
        map.put("product", this.f);
        map.put("price", String.valueOf(this.g));
        map.put("quantity", String.valueOf(this.h));
        map.put("price_currency", this.i);
        return map;
    }
}
