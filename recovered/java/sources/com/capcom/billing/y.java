package com.capcom.billing;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class y {

    /* renamed from: a, reason: collision with root package name */
    Map f59a = new HashMap();
    Map b = new HashMap();

    y() {
    }

    public z a(String str) {
        return (z) this.b.get(str);
    }

    List a() {
        return new ArrayList(this.b.keySet());
    }

    void a(af afVar) {
        this.f59a.put(afVar.a(), afVar);
    }

    void a(z zVar) {
        this.b.put(zVar.b(), zVar);
    }

    public boolean b(String str) {
        return this.b.containsKey(str);
    }
}
