package com.google.android.gms.internal;

import android.os.SystemClock;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bg implements bb {
    private static int a(DisplayMetrics displayMetrics, Map map, String str, int i) {
        String str2 = (String) map.get(str);
        if (str2 == null) {
            return i;
        }
        try {
            return Cif.a(displayMetrics, Integer.parseInt(str2));
        } catch (NumberFormatException e) {
            ig.e("Could not parse " + str + " in a video GMSG: " + str2);
            return i;
        }
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        String str = (String) map.get("action");
        if (str == null) {
            ig.e("Action missing from video GMSG.");
            return;
        }
        db dbVarD = iiVar.d();
        if (dbVarD == null) {
            ig.e("Could not get ad overlay for a video GMSG.");
            return;
        }
        boolean zEqualsIgnoreCase = "new".equalsIgnoreCase(str);
        boolean zEqualsIgnoreCase2 = "position".equalsIgnoreCase(str);
        if (zEqualsIgnoreCase || zEqualsIgnoreCase2) {
            DisplayMetrics displayMetrics = iiVar.getContext().getResources().getDisplayMetrics();
            int iA = a(displayMetrics, map, "x", 0);
            int iA2 = a(displayMetrics, map, "y", 0);
            int iA3 = a(displayMetrics, map, "w", -1);
            int iA4 = a(displayMetrics, map, "h", -1);
            if (zEqualsIgnoreCase && dbVarD.b() == null) {
                dbVarD.b(iA, iA2, iA3, iA4);
                return;
            } else {
                dbVarD.a(iA, iA2, iA3, iA4);
                return;
            }
        }
        di diVarB = dbVarD.b();
        if (diVarB == null) {
            di.a(iiVar, "no_video_view", (String) null);
            return;
        }
        if ("click".equalsIgnoreCase(str)) {
            DisplayMetrics displayMetrics2 = iiVar.getContext().getResources().getDisplayMetrics();
            int iA5 = a(displayMetrics2, map, "x", 0);
            int iA6 = a(displayMetrics2, map, "y", 0);
            long jUptimeMillis = SystemClock.uptimeMillis();
            MotionEvent motionEventObtain = MotionEvent.obtain(jUptimeMillis, jUptimeMillis, 0, iA5, iA6, 0);
            diVarB.a(motionEventObtain);
            motionEventObtain.recycle();
            return;
        }
        if ("controls".equalsIgnoreCase(str)) {
            String str2 = (String) map.get("enabled");
            if (str2 == null) {
                ig.e("Enabled parameter missing from controls video GMSG.");
                return;
            } else {
                diVarB.a(Boolean.parseBoolean(str2));
                return;
            }
        }
        if ("currentTime".equalsIgnoreCase(str)) {
            String str3 = (String) map.get("time");
            if (str3 == null) {
                ig.e("Time parameter missing from currentTime video GMSG.");
                return;
            }
            try {
                diVarB.a((int) (Float.parseFloat(str3) * 1000.0f));
                return;
            } catch (NumberFormatException e) {
                ig.e("Could not parse time parameter from currentTime video GMSG: " + str3);
                return;
            }
        }
        if ("hide".equalsIgnoreCase(str)) {
            diVarB.setVisibility(4);
            return;
        }
        if ("load".equalsIgnoreCase(str)) {
            diVarB.b();
            return;
        }
        if ("pause".equalsIgnoreCase(str)) {
            diVarB.c();
            return;
        }
        if ("play".equalsIgnoreCase(str)) {
            diVarB.d();
            return;
        }
        if ("show".equalsIgnoreCase(str)) {
            diVarB.setVisibility(0);
        } else if ("src".equalsIgnoreCase(str)) {
            diVarB.a((String) map.get("src"));
        } else {
            ig.e("Unknown video action: " + str);
        }
    }
}
