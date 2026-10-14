package com.google.android.gms.internal;

import android.content.Context;
import android.location.Location;
import android.os.Bundle;
import com.google.ads.mediation.admob.AdMobAdapter;
import com.google.android.gms.ads.search.SearchAdRequest;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.List;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class q {

    /* renamed from: a, reason: collision with root package name */
    public static final q f527a = new q();

    private q() {
    }

    public static q a() {
        return f527a;
    }

    public ai a(Context context, ah ahVar) {
        Date dateA = ahVar.a();
        long time = dateA != null ? dateA.getTime() : -1L;
        String strB = ahVar.b();
        int iC = ahVar.c();
        Set setD = ahVar.d();
        List listUnmodifiableList = !setD.isEmpty() ? Collections.unmodifiableList(new ArrayList(setD)) : null;
        boolean zA = ahVar.a(context);
        int iK = ahVar.k();
        Location locationE = ahVar.e();
        Bundle bundleB = ahVar.b(AdMobAdapter.class);
        boolean zF = ahVar.f();
        String strG = ahVar.g();
        SearchAdRequest searchAdRequestH = ahVar.h();
        return new ai(4, time, bundleB, iC, listUnmodifiableList, zA, iK, zF, strG, searchAdRequestH != null ? new aw(searchAdRequestH) : null, locationE, strB, ahVar.j());
    }
}
