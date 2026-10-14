package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.RemoteException;
import com.google.ads.mediation.admob.AdMobAdapter;
import com.google.android.gms.ads.mediation.MediationAdapter;
import com.google.android.gms.ads.mediation.MediationBannerAdapter;
import com.google.android.gms.ads.mediation.MediationInterstitialAdapter;
import java.util.Date;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class cg extends bz {

    /* renamed from: a, reason: collision with root package name */
    private final MediationAdapter f307a;

    public cg(MediationAdapter mediationAdapter) {
        this.f307a = mediationAdapter;
    }

    private Bundle a(String str, int i, String str2) throws RemoteException {
        ig.e("Server parameters: " + str);
        try {
            Bundle bundle = new Bundle();
            if (str != null) {
                JSONObject jSONObject = new JSONObject(str);
                Bundle bundle2 = new Bundle();
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    bundle2.putString(next, jSONObject.getString(next));
                }
                bundle = bundle2;
            }
            if (this.f307a instanceof AdMobAdapter) {
                bundle.putString("adJson", str2);
                bundle.putInt("tagForChildDirectedTreatment", i);
            }
            return bundle;
        } catch (Throwable th) {
            ig.c("Could not get Server Parameters Bundle.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public com.google.android.gms.a.a a() throws RemoteException {
        if (!(this.f307a instanceof MediationBannerAdapter)) {
            ig.e("MediationAdapter is not a MediationBannerAdapter: " + this.f307a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        try {
            return com.google.android.gms.a.d.a(((MediationBannerAdapter) this.f307a).getBannerView());
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
        if (!(this.f307a instanceof MediationInterstitialAdapter)) {
            ig.e("MediationAdapter is not a MediationInterstitialAdapter: " + this.f307a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Requesting interstitial ad from adapter.");
        try {
            MediationInterstitialAdapter mediationInterstitialAdapter = (MediationInterstitialAdapter) this.f307a;
            mediationInterstitialAdapter.requestInterstitialAd((Context) com.google.android.gms.a.d.a(aVar), new ci(cbVar), a(str, aiVar.g, str2), new cf(new Date(aiVar.b), aiVar.d, aiVar.e != null ? new HashSet(aiVar.e) : null, aiVar.f, aiVar.g), aiVar.m != null ? aiVar.m.getBundle(mediationInterstitialAdapter.getClass().getName()) : null);
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
        if (!(this.f307a instanceof MediationBannerAdapter)) {
            ig.e("MediationAdapter is not a MediationBannerAdapter: " + this.f307a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Requesting banner ad from adapter.");
        try {
            MediationBannerAdapter mediationBannerAdapter = (MediationBannerAdapter) this.f307a;
            mediationBannerAdapter.requestBannerAd((Context) com.google.android.gms.a.d.a(aVar), new ci(cbVar), a(str, aiVar.g, str2), com.google.android.gms.ads.a.a(alVar.f, alVar.c, alVar.b), new cf(new Date(aiVar.b), aiVar.d, aiVar.e != null ? new HashSet(aiVar.e) : null, aiVar.f, aiVar.g), aiVar.m != null ? aiVar.m.getBundle(mediationBannerAdapter.getClass().getName()) : null);
        } catch (Throwable th) {
            ig.c("Could not request banner ad from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void b() throws RemoteException {
        if (!(this.f307a instanceof MediationInterstitialAdapter)) {
            ig.e("MediationAdapter is not a MediationInterstitialAdapter: " + this.f307a.getClass().getCanonicalName());
            throw new RemoteException();
        }
        ig.a("Showing interstitial from adapter.");
        try {
            ((MediationInterstitialAdapter) this.f307a).showInterstitial();
        } catch (Throwable th) {
            ig.c("Could not show interstitial from adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void c() throws RemoteException {
        try {
            this.f307a.onDestroy();
        } catch (Throwable th) {
            ig.c("Could not destroy adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void d() throws RemoteException {
        try {
            this.f307a.onPause();
        } catch (Throwable th) {
            ig.c("Could not pause adapter.", th);
            throw new RemoteException();
        }
    }

    @Override // com.google.android.gms.internal.by
    public void e() throws RemoteException {
        try {
            this.f307a.onResume();
        } catch (Throwable th) {
            ig.c("Could not resume adapter.", th);
            throw new RemoteException();
        }
    }
}
