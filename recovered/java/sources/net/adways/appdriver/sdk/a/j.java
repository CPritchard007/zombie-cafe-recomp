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
public final class j extends ag implements p {
    private final Bundle e;

    public j(Bundle bundle) {
        super(aj.REWARD_RETRIEVE_R, "r");
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
        FrameLayout frameLayout = new FrameLayout(activity);
        q qVar = new q(activity);
        qVar.setWebViewClient(new r(activity, this.e));
        frameLayout.addView(qVar, new ViewGroup.LayoutParams(-1, -1));
        activity.setContentView(frameLayout);
        String strD = d(activity);
        v.a(strD);
        qVar.loadUrl(strD);
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
        if (this.e.getInt("campaign_id") > 0) {
            return z;
        }
        Log.e("appdriver-log", "campain ID is need");
        return false;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("media_id", String.valueOf(this.e.getInt("media_id")));
        String string = this.e.getString("identifier");
        if (string != null) {
            treeMap.put("identifier", string);
        }
        treeMap.put("campaign_id", String.valueOf(this.e.getInt("campaign_id")));
        return treeMap;
    }
}
