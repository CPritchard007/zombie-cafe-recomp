package net.adways.appdriver.sdk.a;

import android.support.v4.app.FragmentActivity;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class n extends FragmentActivity {
    private void a(String str) {
        if (str != null) {
            if ("landscape".equals(str)) {
                setRequestedOrientation(0);
            } else {
                setRequestedOrientation(1);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0081 A[Catch: an -> 0x0085, Throwable -> 0x0091, TRY_ENTER, TRY_LEAVE, TryCatch #2 {an -> 0x0085, Throwable -> 0x0091, blocks: (B:6:0x0031, B:8:0x0037, B:15:0x0081), top: B:22:0x0031 }] */
    @Override // android.support.v4.app.FragmentActivity, android.app.Activity
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void onCreate(android.os.Bundle r5) {
        /*
            r4 = this;
            r0 = 1
            super.onCreate(r5)
            r4.requestWindowFeature(r0)
            r0 = 0
            r4.setResult(r0)
            android.content.Intent r0 = r4.getIntent()
            android.os.Bundle r1 = r0.getExtras()
            java.lang.String r0 = "requestType"
            java.lang.String r0 = r1.getString(r0)
            net.adways.appdriver.sdk.a.aj r0 = net.adways.appdriver.sdk.a.aj.valueOf(r0)
            java.lang.String r2 = "orientation"
            java.lang.String r2 = r1.getString(r2)
            int[] r3 = net.adways.appdriver.sdk.a.o.f624a
            int r0 = r0.ordinal()
            r0 = r3[r0]
            switch(r0) {
                case 1: goto L3f;
                case 2: goto L45;
                case 3: goto L4b;
                case 4: goto L51;
                case 5: goto L78;
                default: goto L2e;
            }
        L2e:
            r0 = 0
        L2f:
            if (r0 == 0) goto L81
            boolean r1 = r0.b()     // Catch: net.adways.appdriver.sdk.a.an -> L85 java.lang.Throwable -> L91
            if (r1 == 0) goto L81
            r0.a(r4)     // Catch: net.adways.appdriver.sdk.a.an -> L85 java.lang.Throwable -> L91
            r0 = 1
            r4.setResult(r0)     // Catch: net.adways.appdriver.sdk.a.an -> L85 java.lang.Throwable -> L91
        L3e:
            return
        L3f:
            net.adways.appdriver.sdk.a.k r0 = new net.adways.appdriver.sdk.a.k
            r0.<init>(r1)
            goto L2f
        L45:
            net.adways.appdriver.sdk.a.e r0 = new net.adways.appdriver.sdk.a.e
            r0.<init>(r1)
            goto L2f
        L4b:
            net.adways.appdriver.sdk.a.j r0 = new net.adways.appdriver.sdk.a.j
            r0.<init>(r1)
            goto L2f
        L51:
            java.lang.String r0 = "width"
            android.content.res.Resources r3 = r4.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.widthPixels
            r1.putInt(r0, r3)
            java.lang.String r0 = "height"
            android.content.res.Resources r3 = r4.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.heightPixels
            r1.putInt(r0, r3)
            net.adways.appdriver.sdk.a.f r0 = new net.adways.appdriver.sdk.a.f
            r0.<init>(r1)
            r4.a(r2)
            goto L2f
        L78:
            net.adways.appdriver.sdk.a.b r0 = new net.adways.appdriver.sdk.a.b
            r0.<init>(r1)
            r4.a(r2)
            goto L2f
        L81:
            r4.finish()     // Catch: net.adways.appdriver.sdk.a.an -> L85 java.lang.Throwable -> L91
            goto L3e
        L85:
            r0 = move-exception
            java.lang.String r1 = "appdriver-log"
            java.lang.String r2 = "reward show failed"
            android.util.Log.e(r1, r2, r0)
            r4.finish()
            goto L3e
        L91:
            r0 = move-exception
            java.lang.String r1 = "appdriver-log"
            java.lang.String r2 = "AppDriver SDK internal error"
            android.util.Log.e(r1, r2, r0)
            r4.finish()
            goto L3e
        */
        throw new UnsupportedOperationException("Method not decompiled: net.adways.appdriver.sdk.a.n.onCreate(android.os.Bundle):void");
    }
}
