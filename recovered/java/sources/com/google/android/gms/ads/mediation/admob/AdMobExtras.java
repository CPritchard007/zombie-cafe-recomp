package com.google.android.gms.ads.mediation.admob;

import android.os.Bundle;
import com.google.ads.mediation.NetworkExtras;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdMobExtras implements NetworkExtras {

    /* renamed from: a, reason: collision with root package name */
    private final Bundle f145a;

    public AdMobExtras(Bundle bundle) {
        this.f145a = bundle != null ? new Bundle(bundle) : null;
    }

    public Bundle getExtras() {
        return this.f145a;
    }
}
