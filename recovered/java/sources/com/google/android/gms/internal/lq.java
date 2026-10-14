package com.google.android.gms.internal;

import java.util.ArrayList;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class lq {

    /* renamed from: a, reason: collision with root package name */
    private final List f497a;
    private final Object b;

    private lq(Object obj) {
        this.b = ls.a(obj);
        this.f497a = new ArrayList();
    }

    public lq a(String str, Object obj) {
        this.f497a.add(((String) ls.a((Object) str)) + "=" + String.valueOf(obj));
        return this;
    }

    public String toString() {
        StringBuilder sbAppend = new StringBuilder(100).append(this.b.getClass().getSimpleName()).append('{');
        int size = this.f497a.size();
        for (int i = 0; i < size; i++) {
            sbAppend.append((String) this.f497a.get(i));
            if (i < size - 1) {
                sbAppend.append(", ");
            }
        }
        return sbAppend.append('}').toString();
    }
}
