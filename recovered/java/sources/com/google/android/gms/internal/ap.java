package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ap implements bb {

    /* renamed from: a, reason: collision with root package name */
    private final aq f286a;

    public ap(aq aqVar) {
        this.f286a = aqVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        String str = (String) map.get("name");
        if (str == null) {
            ig.e("App event with no name parameter.");
        } else {
            this.f286a.a(str, (String) map.get("info"));
        }
    }
}
