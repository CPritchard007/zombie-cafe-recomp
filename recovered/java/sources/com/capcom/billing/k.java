package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class k extends Exception {

    /* renamed from: a, reason: collision with root package name */
    x f50a;

    public k(int i, String str) {
        this(new x(i, str));
    }

    public k(int i, String str, Exception exc) {
        this(new x(i, str), exc);
    }

    public k(x xVar) {
        this(xVar, (Exception) null);
    }

    public k(x xVar, Exception exc) {
        super(xVar.a(), exc);
        this.f50a = xVar;
    }

    public x a() {
        return this.f50a;
    }
}
