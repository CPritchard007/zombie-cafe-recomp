package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.Parcelable;
import android.os.SystemClock;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class he {

    /* renamed from: a, reason: collision with root package name */
    private final hg f401a;
    private final LinkedList b;
    private final Object c;
    private final String d;
    private final String e;
    private long f;
    private long g;
    private boolean h;
    private long i;
    private long j;
    private long k;
    private long l;

    public he(hg hgVar, String str, String str2) {
        this.c = new Object();
        this.f = -1L;
        this.g = -1L;
        this.h = false;
        this.i = -1L;
        this.j = 0L;
        this.k = -1L;
        this.l = -1L;
        this.f401a = hgVar;
        this.d = str;
        this.e = str2;
        this.b = new LinkedList();
    }

    public he(String str, String str2) {
        this(hg.a(), str, str2);
    }

    public void a() {
        synchronized (this.c) {
            if (this.l != -1 && this.g == -1) {
                this.g = SystemClock.elapsedRealtime();
                this.f401a.a(this);
            }
            hg hgVar = this.f401a;
            hg.d().c();
        }
    }

    public void a(long j) {
        synchronized (this.c) {
            this.l = j;
            if (this.l != -1) {
                this.f401a.a(this);
            }
        }
    }

    public void a(ai aiVar) {
        synchronized (this.c) {
            this.k = SystemClock.elapsedRealtime();
            hg hgVar = this.f401a;
            hg.d().a(aiVar, this.k);
        }
    }

    public void a(boolean z) {
        synchronized (this.c) {
            if (this.l != -1) {
                this.i = SystemClock.elapsedRealtime();
                if (!z) {
                    this.g = this.i;
                    this.f401a.a(this);
                }
            }
        }
    }

    public void b() {
        synchronized (this.c) {
            if (this.l != -1) {
                hf hfVar = new hf();
                hfVar.c();
                this.b.add(hfVar);
                this.j++;
                hg hgVar = this.f401a;
                hg.d().b();
                this.f401a.a(this);
            }
        }
    }

    public void b(long j) {
        synchronized (this.c) {
            if (this.l != -1) {
                this.f = j;
                this.f401a.a(this);
            }
        }
    }

    public void b(boolean z) {
        synchronized (this.c) {
            if (this.l != -1) {
                this.h = z;
                this.f401a.a(this);
            }
        }
    }

    public void c() {
        synchronized (this.c) {
            if (this.l != -1 && !this.b.isEmpty()) {
                hf hfVar = (hf) this.b.getLast();
                if (hfVar.a() == -1) {
                    hfVar.b();
                    this.f401a.a(this);
                }
            }
        }
    }

    public Bundle d() {
        Bundle bundle;
        synchronized (this.c) {
            bundle = new Bundle();
            bundle.putString("seqnum", this.d);
            bundle.putString("slotid", this.e);
            bundle.putBoolean("ismediation", this.h);
            bundle.putLong("treq", this.k);
            bundle.putLong("tresponse", this.l);
            bundle.putLong("timp", this.g);
            bundle.putLong("tload", this.i);
            bundle.putLong("pcc", this.j);
            bundle.putLong("tfetch", this.f);
            ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
            Iterator it = this.b.iterator();
            while (it.hasNext()) {
                arrayList.add(((hf) it.next()).d());
            }
            bundle.putParcelableArrayList("tclick", arrayList);
        }
        return bundle;
    }
}
