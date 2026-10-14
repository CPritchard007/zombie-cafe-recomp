package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.android.gms.ads.mediation.MediationBannerAdapter;
import com.google.android.gms.ads.mediation.MediationBannerListener;
import com.google.android.gms.ads.mediation.MediationInterstitialAdapter;
import com.google.android.gms.ads.mediation.MediationInterstitialListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ci implements MediationBannerListener, MediationInterstitialListener {

    /* renamed from: a, reason: collision with root package name */
    private final cb f309a;

    public ci(cb cbVar) {
        this.f309a = cbVar;
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdClicked(MediationBannerAdapter mediationBannerAdapter) {
        ls.b("onAdClicked must be called on the main UI thread.");
        ig.a("Adapter called onAdClicked.");
        try {
            this.f309a.a();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClicked.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdClicked(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ls.b("onAdClicked must be called on the main UI thread.");
        ig.a("Adapter called onAdClicked.");
        try {
            this.f309a.a();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClicked.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdClosed(MediationBannerAdapter mediationBannerAdapter) {
        ls.b("onAdClosed must be called on the main UI thread.");
        ig.a("Adapter called onAdClosed.");
        try {
            this.f309a.b();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClosed.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdClosed(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ls.b("onAdClosed must be called on the main UI thread.");
        ig.a("Adapter called onAdClosed.");
        try {
            this.f309a.b();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClosed.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdFailedToLoad(MediationBannerAdapter mediationBannerAdapter, int i) {
        ls.b("onAdFailedToLoad must be called on the main UI thread.");
        ig.a("Adapter called onAdFailedToLoad with error. " + i);
        try {
            this.f309a.a(i);
        } catch (RemoteException e) {
            ig.c("Could not call onAdFailedToLoad.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdFailedToLoad(MediationInterstitialAdapter mediationInterstitialAdapter, int i) {
        ls.b("onAdFailedToLoad must be called on the main UI thread.");
        ig.a("Adapter called onAdFailedToLoad with error " + i + ".");
        try {
            this.f309a.a(i);
        } catch (RemoteException e) {
            ig.c("Could not call onAdFailedToLoad.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdLeftApplication(MediationBannerAdapter mediationBannerAdapter) {
        ls.b("onAdLeftApplication must be called on the main UI thread.");
        ig.a("Adapter called onAdLeftApplication.");
        try {
            this.f309a.c();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLeftApplication.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdLeftApplication(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ls.b("onAdLeftApplication must be called on the main UI thread.");
        ig.a("Adapter called onAdLeftApplication.");
        try {
            this.f309a.c();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLeftApplication.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdLoaded(MediationBannerAdapter mediationBannerAdapter) {
        ls.b("onAdLoaded must be called on the main UI thread.");
        ig.a("Adapter called onAdLoaded.");
        try {
            this.f309a.e();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLoaded.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdLoaded(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ls.b("onAdLoaded must be called on the main UI thread.");
        ig.a("Adapter called onAdLoaded.");
        try {
            this.f309a.e();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLoaded.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerListener
    public void onAdOpened(MediationBannerAdapter mediationBannerAdapter) {
        ls.b("onAdOpened must be called on the main UI thread.");
        ig.a("Adapter called onAdOpened.");
        try {
            this.f309a.d();
        } catch (RemoteException e) {
            ig.c("Could not call onAdOpened.", e);
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialListener
    public void onAdOpened(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ls.b("onAdOpened must be called on the main UI thread.");
        ig.a("Adapter called onAdOpened.");
        try {
            this.f309a.d();
        } catch (RemoteException e) {
            ig.c("Could not call onAdOpened.", e);
        }
    }
}
