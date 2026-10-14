package com.google.android.gms.internal;

import android.content.Context;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class l implements j {

    /* renamed from: a, reason: collision with root package name */
    private final ii f487a;

    public l(Context context, ev evVar) {
        this.f487a = ii.a(context, new al(), false, false, null, evVar);
    }

    @Override // com.google.android.gms.internal.j
    public void a() {
        hq.a(this.f487a);
    }

    @Override // com.google.android.gms.internal.j
    public void a(k kVar) {
        this.f487a.f().a(new m(this, kVar));
    }

    @Override // com.google.android.gms.internal.j
    public void a(String str) {
        this.f487a.loadUrl(str);
    }

    @Override // com.google.android.gms.internal.j
    public void a(String str, bb bbVar) {
        this.f487a.f().a(str, bbVar);
    }

    @Override // com.google.android.gms.internal.j
    public void a(String str, JSONObject jSONObject) {
        this.f487a.a(str, jSONObject);
    }

    @Override // com.google.android.gms.internal.j
    public void b() {
        hq.b(this.f487a);
    }

    @Override // com.google.android.gms.internal.j
    public void b(String str) {
        this.f487a.f().a(str, (bb) null);
    }
}
