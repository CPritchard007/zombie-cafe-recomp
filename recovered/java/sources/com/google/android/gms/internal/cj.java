package com.google.android.gms.internal;

import android.app.Activity;
import android.os.RemoteException;
import com.google.ads.mediation.MediationAdapter;
import com.google.ads.mediation.MediationBannerAdapter;
import com.google.ads.mediation.MediationInterstitialAdapter;
import com.google.ads.mediation.MediationServerParameters;
import com.google.ads.mediation.NetworkExtras;
import java.util.HashMap;
import java.util.Iterator;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class cj extends bz {

    /* renamed from: a, reason: collision with root package name */
    private final MediationAdapter f310a;
    private final NetworkExtras b;

    public cj(MediationAdapter mediationAdapter, NetworkExtras networkExtras) {
        this.f310a = mediationAdapter;
        this.b = networkExtras;
    }

    private MediationServerParameters a(String str, int i, String str2) throws RemoteException {
        HashMap map;
        try {
            if (str != null) {
                JSONObject jSONObject = new JSONObject(str);
                map = new HashMap(jSONObject.length());
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    map.put(next, jSONObject.getString(next));
                }
            } else {
                map = new HashMap(0);
            }
            Class serverParametersType = this.f310a.getServerParametersType();
            if (serverParametersType == null) {
                return null;
            }
            MediationServerParameters mediationServerParameters = (MediationServerParameters) serverParametersType.newInstance();
            mediationServerParameters.load(map);
            return mediationServerParameters;
        } catch (Throwable th) {
            ig.c("Could not get MediationServerParameters.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public com.google.android.gms.a.a a() throws RemoteException {
        if (!(this.f310a instanceof MediationBannerAdapter)) {
            ig.e("MediationAdapter is not a MediationBannerAdapter: " + this.f310a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        try {
            return com.google.android.gms.a.d.a(((MediationBannerAdapter) this.f310a).getBannerView());
        } catch (Throwable th) {
            ig.c("Could not get banner view from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, ai aiVar, String str, cb cbVar) throws RemoteException {
        a(aVar, aiVar, str, (String) null, cbVar);
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, ai aiVar, String str, String str2, cb cbVar) throws RemoteException {
        if (!(this.f310a instanceof MediationInterstitialAdapter)) {
            ig.e("MediationAdapter is not a MediationInterstitialAdapter: " + this.f310a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Requesting interstitial ad from adapter.");
        try {
            ((MediationInterstitialAdapter) this.f310a).requestInterstitialAd(new ck(cbVar), (Activity) com.google.android.gms.a.d.a(aVar), a(str, aiVar.g, str2), cx.a(aiVar), this.b);
        } catch (Throwable th) {
            ig.c("Could not request interstitial ad from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, al alVar, ai aiVar, String str, cb cbVar) throws RemoteException {
        a(aVar, alVar, aiVar, str, null, cbVar);
    }

    @Override // com.google.android.gms.internal.by
    public void a(com.google.android.gms.a.a aVar, al alVar, ai aiVar, String str, String str2, cb cbVar) throws RemoteException {
        if (!(this.f310a instanceof MediationBannerAdapter)) {
            ig.e("MediationAdapter is not a MediationBannerAdapter: " + this.f310a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Requesting banner ad from adapter.");
        try {
            ((MediationBannerAdapter) this.f310a).requestBannerAd(new ck(cbVar), (Activity) com.google.android.gms.a.d.a(aVar), a(str, aiVar.g, str2), cx.a(alVar), cx.a(aiVar), this.b);
        } catch (Throwable th) {
            ig.c("Could not request banner ad from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void b() throws RemoteException {
        if (!(this.f310a instanceof MediationInterstitialAdapter)) {
            ig.e("MediationAdapter is not a MediationInterstitialAdapter: " + this.f310a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Showing interstitial from adapter.");
        try {
            ((MediationInterstitialAdapter) this.f310a).showInterstitial();
        } catch (Throwable th) {
            ig.c("Could not show interstitial from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void c() throws RemoteException {
        try {
            this.f310a.destroy();
        } catch (Throwable th) {
            ig.c("Could not destroy adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void d() throws RemoteException {
        throw new RemoteException();
    }

    @Override // com.google.android.gms.internal.by
    public void e() throws RemoteException {
        throw new RemoteException();
    }
}
