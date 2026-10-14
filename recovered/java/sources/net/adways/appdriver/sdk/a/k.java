package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class k extends ag implements p {
    private final Bundle e;
    private FrameLayout f;

    public k(Bundle bundle) {
        super(aj.REWARD_INDEX_I, "i");
        this.e = bundle;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a() throws an {
        String strA = new ad().a("APPDRIVER_REWARD_VER");
        if (strA == null) {
            throw new an("not find api version:APPDRIVER_REWARD_VER");
        }
        return strA;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final String a(Context context) {
        return g(context);
    }

    @Override // net.adways.appdriver.sdk.a.p
    public final void a(Activity activity) {
        activity.setContentView(b(activity));
    }

    public final FrameLayout b(Activity activity) {
        if (this.f == null) {
            this.f = new FrameLayout(activity);
            q qVar = new q(activity);
            qVar.setWebViewClient(new r(activity, this.e));
            this.f.addView(qVar, new ViewGroup.LayoutParams(-1, -1));
            String strD = d(activity);
            v.a(strD);
            qVar.loadUrl(strD);
        }
        return this.f;
    }

    @Override // net.adways.appdriver.sdk.a.p
    public final boolean b() {
        boolean z = true;
        if (this.e == null) {
            Log.e("appdriver-log", "no enough parameters");
            return false;
        }
        if (this.e.getInt("media_id") <= 0) {
            Log.e("appdriver-log", "media ID is need");
            z = false;
        }
        if (this.e.getString("item_identifier") == null || this.e.getString("item_identifier").equals("") || this.e.getInt("item_price") >= 0) {
            return z;
        }
        Log.e("appdriver-log", "item price can not less than 0");
        return false;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("media_id", String.valueOf(this.e.getInt("media_id")));
        treeMap.put("identifier", v.b(this.e.getString("identifier")));
        String string = this.e.getString("item_identifier");
        if (string != null && !"".equals(string)) {
            treeMap.put("item_identifier", string);
            treeMap.put("item_price", v.b(String.valueOf(this.e.getInt("item_price"))));
            treeMap.put("item_name", v.b(this.e.getString("item_name")));
            treeMap.put("item_image", v.b(this.e.getString("item_image")));
        }
        return treeMap;
    }
}
