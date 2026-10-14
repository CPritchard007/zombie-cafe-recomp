package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.ads.mediation.MediationAdapter;
import com.google.ads.mediation.NetworkExtras;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bu extends bw {

    /* renamed from: a, reason: collision with root package name */
    private Map f300a;

    private by b(String str) throws RemoteException {
        try {
            Class<?> cls = Class.forName(str, false, bu.class.getClassLoader());
            if (MediationAdapter.class.isAssignableFrom(cls)) {
                MediationAdapter mediationAdapter = (MediationAdapter) cls.newInstance();
                return new cj(mediationAdapter, (NetworkExtras) this.f300a.get(mediationAdapter.getAdditionalParametersType()));
            }
            if (com.google.android.gms.ads.mediation.MediationAdapter.class.isAssignableFrom(cls)) {
                return new cg((com.google.android.gms.ads.mediation.MediationAdapter) cls.newInstance());
            }
            ig.e("Could not instantiate mediation adapter: " + str + " (not a valid adapter).");
            throw new RemoteException();
        } catch (Throwable th) {
            ig.e("Could not instantiate mediation adapter: " + str + ". " + th.getMessage());
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.bv
    public by a(String str) {
        return b(str);
    }

    public void a(Map map) {
        this.f300a = map;
    }
}
