package com.google.android.gms.internal;

import android.content.Context;
import java.util.HashSet;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class pd {

    /* renamed from: a, reason: collision with root package name */
    public final pb f522a;
    public final String b;
    public final Context c;
    public final nq d;
    public final ev e;
    public u f;
    public hl g;
    public al h;
    public hd i;
    public he j;
    public ae k;
    public fa l;
    public en m;
    public ei n;
    public hj o = null;
    public boolean p = false;
    private HashSet q = null;

    public pd(Context context, al alVar, String str, ev evVar) {
        if (alVar.e) {
            this.f522a = null;
        } else {
            this.f522a = new pb(context);
            this.f522a.setMinimumWidth(alVar.g);
            this.f522a.setMinimumHeight(alVar.d);
            this.f522a.setVisibility(4);
        }
        this.h = alVar;
        this.b = str;
        this.c = context;
        this.e = evVar;
        this.d = new nq(new pc(this));
    }

    public HashSet a() {
        return this.q;
    }

    public void a(HashSet hashSet) {
        this.q = hashSet;
    }
}
