package com.google.android.gms.common.data;

import com.google.android.gms.internal.ls;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class c {

    /* renamed from: a, reason: collision with root package name */
    private final String[] f163a;
    private final ArrayList b;
    private final String c;
    private final HashMap d;
    private boolean e;
    private String f;

    private c(String[] strArr, String str) {
        this.f163a = (String[]) ls.a(strArr);
        this.b = new ArrayList();
        this.c = str;
        this.d = new HashMap();
        this.e = false;
        this.f = null;
    }

    /* synthetic */ c(String[] strArr, String str, b bVar) {
        this(strArr, str);
    }
}
