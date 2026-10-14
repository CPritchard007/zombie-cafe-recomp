package com.google.android.gms.internal;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bf implements bb {

    /* renamed from: a, reason: collision with root package name */
    private final bc f291a;

    public bf(bc bcVar) {
        this.f291a = bcVar;
    }

    private static boolean a(Map map) {
        return "1".equals(map.get("custom_close"));
    }

    private static int b(Map map) {
        String str = (String) map.get("o");
        if (str != null) {
            if ("p".equalsIgnoreCase(str)) {
                return hq.c();
            }
            if ("l".equalsIgnoreCase(str)) {
                return hq.b();
            }
        }
        return -1;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        String str = (String) map.get("a");
        if (str == null) {
            ig.e("Action missing from an open GMSG.");
            return;
        }
        ik ikVarF = iiVar.f();
        if ("expand".equalsIgnoreCase(str)) {
            if (iiVar.i()) {
                ig.e("Cannot expand WebView that is already expanded.");
                return;
            } else {
                ikVarF.a(a(map), b(map));
                return;
            }
        }
        if ("webapp".equalsIgnoreCase(str)) {
            String str2 = (String) map.get("u");
            if (str2 != null) {
                ikVarF.a(a(map), b(map), str2);
                return;
            } else {
                ikVarF.a(a(map), b(map), (String) map.get("html"), (String) map.get("baseurl"));
                return;
            }
        }
        if (!"in_app_purchase".equalsIgnoreCase(str)) {
            ikVarF.a(new ce((String) map.get("i"), (String) map.get("u"), (String) map.get("m"), (String) map.get("p"), (String) map.get("c"), (String) map.get("f"), (String) map.get("e")));
            return;
        }
        String str3 = (String) map.get("product_id");
        String str4 = (String) map.get("report_urls");
        if (this.f291a != null) {
            if (str4 == null || str4.isEmpty()) {
                this.f291a.a(str3, new ArrayList());
            } else {
                this.f291a.a(str3, new ArrayList(Arrays.asList(str4.split(" "))));
            }
        }
    }
}
