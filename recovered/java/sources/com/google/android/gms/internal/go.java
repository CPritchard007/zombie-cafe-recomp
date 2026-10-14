package com.google.android.gms.internal;

import android.content.Context;
import android.location.Location;
import android.text.TextUtils;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class go extends gm {

    /* renamed from: a, reason: collision with root package name */
    private static final Object f387a = new Object();
    private static go b;
    private final Context c;
    private final hb d;
    private final bh e;
    private final ao f;

    go(Context context, ao aoVar, bh bhVar, hb hbVar) {
        this.c = context;
        this.d = hbVar;
        this.e = bhVar;
        this.f = aoVar;
    }

    private static du a(Context context, ao aoVar, bh bhVar, hb hbVar, ds dsVar) {
        String string;
        ig.a("Starting ad request from service.");
        bhVar.a();
        gz gzVar = new gz(context);
        if (gzVar.l == -1) {
            ig.a("Device is offline.");
            return new du(2);
        }
        gs gsVar = new gs(dsVar.f.packageName);
        if (dsVar.c.c != null && (string = dsVar.c.c.getString("_ad")) != null) {
            return gr.a(context, dsVar, string);
        }
        Location locationA = bhVar.a(250L);
        String strA = aoVar.a();
        String strA2 = gr.a(dsVar, gzVar, locationA, aoVar.b());
        if (strA2 == null) {
            return new du(0);
        }
        Cif.f427a.post(new gp(context, dsVar, gsVar, a(strA2), strA));
        gx gxVarB = gsVar.b();
        if (gxVarB == null || TextUtils.isEmpty(gxVarB.c())) {
            return new du(gsVar.a());
        }
        return a(context, dsVar.k.b, gxVarB.c(), gxVarB.e() ? hbVar.a(dsVar.g.packageName) : null, gxVarB);
    }

    /* JADX WARN: Code restructure failed: missing block: B:34:0x00c5, code lost:
    
        com.google.android.gms.internal.ig.e("Received error HTTP response code: " + r6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:?, code lost:
    
        return new com.google.android.gms.internal.du(0);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static com.google.android.gms.internal.du a(android.content.Context r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, com.google.android.gms.internal.gx r14) {
        /*
            Method dump skipped, instructions count: 278
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.google.android.gms.internal.go.a(android.content.Context, java.lang.String, java.lang.String, java.lang.String, com.google.android.gms.internal.gx):com.google.android.gms.internal.du");
    }

    public static go a(Context context, ao aoVar, bh bhVar, hb hbVar) {
        go goVar;
        synchronized (f387a) {
            if (b == null) {
                b = new go(context.getApplicationContext(), aoVar, bhVar, hbVar);
            }
            goVar = b;
        }
        return goVar;
    }

    private static im a(String str) {
        return new gq(str);
    }

    private static void a(String str, Map map, String str2, int i) {
        if (ig.a(2)) {
            ig.d("Http Response: {\n  URL:\n    " + str + "\n  Headers:");
            if (map != null) {
                for (String str3 : map.keySet()) {
                    ig.d("    " + str3 + ":");
                    Iterator it = ((List) map.get(str3)).iterator();
                    while (it.hasNext()) {
                        ig.d("      " + ((String) it.next()));
                    }
                }
            }
            ig.d("  Body:");
            if (str2 != null) {
                for (int i2 = 0; i2 < Math.min(str2.length(), 100000); i2 += 1000) {
                    ig.d(str2.substring(i2, Math.min(str2.length(), i2 + 1000)));
                }
            } else {
                ig.d("    null");
            }
            ig.d("  Response Code:\n    " + i + "\n}");
        }
    }

    @Override // com.google.android.gms.internal.gl
    public du a(ds dsVar) {
        return a(this.c, this.f, this.e, this.d, dsVar);
    }
}
