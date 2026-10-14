package com.google.android.gms.drive.metadata;

import com.google.android.gms.internal.ls;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class f implements a {

    /* renamed from: a, reason: collision with root package name */
    private final String f218a;
    private final Set b;
    private final Set c;
    private final int d;

    protected f(String str, int i) {
        this.f218a = (String) ls.a((Object) str, (Object) "fieldName");
        this.b = Collections.singleton(str);
        this.c = Collections.emptySet();
        this.d = i;
    }

    protected f(String str, Collection collection, Collection collection2, int i) {
        this.f218a = (String) ls.a((Object) str, (Object) "fieldName");
        this.b = Collections.unmodifiableSet(new HashSet(collection));
        this.c = Collections.unmodifiableSet(new HashSet(collection2));
        this.d = i;
    }

    @Override // com.google.android.gms.drive.metadata.a
    public final String a() {
        return this.f218a;
    }

    public String toString() {
        return this.f218a;
    }
}
