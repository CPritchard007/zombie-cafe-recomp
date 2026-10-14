package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.util.Log;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.TreeMap;
import java.util.concurrent.Executors;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class b extends ag implements p {
    private final Bundle e;

    public b(Bundle bundle) {
        super(aj.REWARD_CROSSWALL_XI, "xi");
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

    @Override // net.adways.appdriver.sdk.a.p
    public final void a(Activity activity) {
        FrameLayout frameLayout = new FrameLayout(activity);
        q qVar = new q(activity);
        qVar.setWebViewClient(new r(activity));
        frameLayout.addView(qVar, new ViewGroup.LayoutParams(-1, -1));
        activity.setContentView(frameLayout);
        Executors.newSingleThreadExecutor().execute(new c(this, activity, qVar));
    }

    @Override // net.adways.appdriver.sdk.a.p
    public final boolean b() {
        if (this.e == null) {
            Log.e("appdriver-log", "no enough parameters");
            return false;
        }
        if (this.e.getInt("cross_media_id") > 0) {
            return true;
        }
        Log.e("appdriver-log", "media ID is need");
        return false;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        TreeMap treeMap = new TreeMap();
        treeMap.put("cross_media_id", String.valueOf(this.e.getInt("cross_media_id")));
        treeMap.put("dialog", "1");
        String str = "";
        List listA = new aa(context).a();
        if (listA.size() > 0) {
            Random random = new Random();
            str = (String) listA.remove(random.nextInt(listA.size()));
            if (listA.size() > 0) {
                str = str + "-" + ((String) listA.remove(random.nextInt(listA.size())));
            }
        }
        treeMap.put("campaign_id", str);
        return treeMap;
    }
}
