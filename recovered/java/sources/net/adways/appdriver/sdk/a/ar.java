package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ar extends ag {
    private final String e;

    public ar() {
        super(aj.GYRO_MONTHLY_IN_T, "t");
        this.e = null;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() {
        return new ad().a("GYRO_ACHIEVE_VER");
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
        map.put("advertisement", this.e);
        return map;
    }
}
