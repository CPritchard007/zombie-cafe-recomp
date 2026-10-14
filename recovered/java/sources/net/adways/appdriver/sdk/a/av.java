package net.adways.appdriver.sdk.a;

import android.content.Context;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class av extends ag {
    private final String e;
    private final String f;
    private final float g;
    private final int h;
    private final String i;

    public av() {
        super(aj.APPDRIVER_PAY_T, "t");
        this.e = null;
        this.f = null;
        this.g = 0.0f;
        this.h = 0;
        this.i = null;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_PAYMENT_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_PAYMENT_VER");
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
        map.put("transaction", this.e);
        map.put("product", this.f + ":" + this.h);
        map.put("price", String.valueOf(this.g * this.h));
        map.put("price_locale", "JP");
        map.put("quantity", String.valueOf(this.h));
        map.put("price_currency", this.i);
        map.put("date", new SimpleDateFormat("yyyy-MM-dd HH:mm:ss Z", Locale.US).format(new Date()));
        map.put("user", af.a(context).f());
        return map;
    }
}
