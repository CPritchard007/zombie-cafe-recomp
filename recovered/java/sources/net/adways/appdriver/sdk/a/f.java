package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Context;
import android.graphics.Color;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentTransaction;
import android.util.Log;
import android.widget.FrameLayout;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.TreeMap;
import java.util.concurrent.Executors;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class f extends ag implements p {
    private Bundle e;

    public f(Bundle bundle) {
        super(aj.REWARD_INTERSTATIAL_SI, "si");
        this.e = null;
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
        frameLayout.setBackgroundColor(Color.alpha(0));
        q qVar = new q(activity);
        qVar.setBackgroundColor(Color.alpha(0));
        qVar.setHorizontalScrollBarEnabled(false);
        qVar.setVerticalScrollBarEnabled(false);
        String str = Build.VERSION.RELEASE;
        qVar.setInitialScale(100);
        if (str.startsWith("3.")) {
            qVar.setInitialScale(1);
        }
        if (str.equals("4.0.3") || str.equals("4.0.4")) {
            qVar.setBackgroundColor(-12303292);
        }
        qVar.setWebViewClient(new i(this, activity));
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        String strB = v.b(this.e.getString("orientation"));
        if (str.startsWith("3.") || (str.startsWith("4.4") && "landscape".equals(strB))) {
            layoutParams = new FrameLayout.LayoutParams(-2, -2, 1);
        }
        frameLayout.addView(qVar, layoutParams);
        n nVar = (n) activity;
        FragmentTransaction fragmentTransactionBeginTransaction = nVar.getSupportFragmentManager().beginTransaction();
        Fragment fragmentFindFragmentByTag = nVar.getSupportFragmentManager().findFragmentByTag("dialog");
        if (fragmentFindFragmentByTag != null) {
            fragmentTransactionBeginTransaction.remove(fragmentFindFragmentByTag);
        }
        fragmentTransactionBeginTransaction.addToBackStack(null);
        m mVar = new m();
        Bundle bundle = new Bundle();
        bundle.putInt("style", 1);
        mVar.a(frameLayout);
        mVar.setArguments(bundle);
        mVar.show(fragmentTransactionBeginTransaction, "dialog");
        Executors.newSingleThreadExecutor().execute(new g(this, activity, qVar));
    }

    @Override // net.adways.appdriver.sdk.a.p
    public final boolean b() {
        boolean z = true;
        if (this.e == null) {
            Log.e("appdriver-log", "no enough parameters");
            return false;
        }
        if (this.e.getInt("cross_media_id") <= 0) {
            Log.e("appdriver-log", "media ID is need");
            z = false;
        }
        String string = this.e.getString("orientation");
        if (string != null && (string.equals("landscape") || string.equals("portrait"))) {
            return z;
        }
        Log.e("appdriver-log", "orientation can not be : " + string);
        return false;
    }

    @Override // net.adways.appdriver.sdk.a.ag
    protected final /* synthetic */ Map c(Context context) {
        int i;
        TreeMap treeMap = new TreeMap();
        treeMap.put("cross_media_id", String.valueOf(this.e.getInt("cross_media_id")));
        treeMap.put("dialog", "1");
        List listA = new aa(context).a();
        String str = listA.size() > 0 ? (String) listA.get(new Random().nextInt(listA.size())) : "";
        if (str != null && !"".equals(str)) {
            treeMap.put("campaign_id", str);
        }
        String strB = v.b(this.e.getString("orientation"));
        treeMap.put("orientation", strB);
        int i2 = this.e.getInt("width");
        int i3 = this.e.getInt("height");
        String str2 = Build.VERSION.RELEASE;
        if ("landscape".equals(strB)) {
            int i4 = (int) (i3 * 0.55d);
            if (i4 != 0) {
                treeMap.put("height", str2.startsWith("4.4") ? String.valueOf(i3 * 0.8d) : String.valueOf(i4));
            }
        } else if ("portrait".equals(strB) && (i = (int) (i2 * 0.55d)) != 0) {
            treeMap.put("width", String.valueOf(i));
        }
        return treeMap;
    }
}
