package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.ads.AdRequest;
import com.google.ads.mediation.MediationBannerAdapter;
import com.google.ads.mediation.MediationBannerListener;
import com.google.ads.mediation.MediationInterstitialAdapter;
import com.google.ads.mediation.MediationInterstitialListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ck implements MediationBannerListener, MediationInterstitialListener {

    /* renamed from: a, reason: collision with root package name */
    private final cb f311a;

    public ck(cb cbVar) {
        this.f311a = cbVar;
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onClick(MediationBannerAdapter mediationBannerAdapter) {
        ig.a("Adapter called onClick.");
        if (!Cif.b()) {
            ig.e("onClick must be called on the main UI thread.");
            Cif.f427a.post(new cl(this));
        } else {
            try {
                this.f311a.a();
            } catch (RemoteException e) {
                ig.c("Could not call onAdClicked.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onDismissScreen(MediationBannerAdapter mediationBannerAdapter) {
        ig.a("Adapter called onDismissScreen.");
        if (!Cif.b()) {
            ig.e("onDismissScreen must be called on the main UI thread.");
            Cif.f427a.post(new cr(this));
        } else {
            try {
                this.f311a.b();
            } catch (RemoteException e) {
                ig.c("Could not call onAdClosed.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationInterstitialListener
    public void onDismissScreen(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ig.a("Adapter called onDismissScreen.");
        if (!Cif.b()) {
            ig.e("onDismissScreen must be called on the main UI thread.");
            Cif.f427a.post(new cw(this));
        } else {
            try {
                this.f311a.b();
            } catch (RemoteException e) {
                ig.c("Could not call onAdClosed.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onFailedToReceiveAd(MediationBannerAdapter mediationBannerAdapter, AdRequest.ErrorCode errorCode) {
        ig.a("Adapter called onFailedToReceiveAd with error. " + errorCode);
        if (!Cif.b()) {
            ig.e("onFailedToReceiveAd must be called on the main UI thread.");
            Cif.f427a.post(new cs(this, errorCode));
        } else {
            try {
                this.f311a.a(cx.a(errorCode));
            } catch (RemoteException e) {
                ig.c("Could not call onAdFailedToLoad.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationInterstitialListener
    public void onFailedToReceiveAd(MediationInterstitialAdapter mediationInterstitialAdapter, AdRequest.ErrorCode errorCode) {
        ig.a("Adapter called onFailedToReceiveAd with error " + errorCode + ".");
        if (!Cif.b()) {
            ig.e("onFailedToReceiveAd must be called on the main UI thread.");
            Cif.f427a.post(new cm(this, errorCode));
        } else {
            try {
                this.f311a.a(cx.a(errorCode));
            } catch (RemoteException e) {
                ig.c("Could not call onAdFailedToLoad.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onLeaveApplication(MediationBannerAdapter mediationBannerAdapter) {
        ig.a("Adapter called onLeaveApplication.");
        if (!Cif.b()) {
            ig.e("onLeaveApplication must be called on the main UI thread.");
            Cif.f427a.post(new ct(this));
        } else {
            try {
                this.f311a.c();
            } catch (RemoteException e) {
                ig.c("Could not call onAdLeftApplication.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationInterstitialListener
    public void onLeaveApplication(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ig.a("Adapter called onLeaveApplication.");
        if (!Cif.b()) {
            ig.e("onLeaveApplication must be called on the main UI thread.");
            Cif.f427a.post(new cn(this));
        } else {
            try {
                this.f311a.c();
            } catch (RemoteException e) {
                ig.c("Could not call onAdLeftApplication.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onPresentScreen(MediationBannerAdapter mediationBannerAdapter) {
        ig.a("Adapter called onPresentScreen.");
        if (!Cif.b()) {
            ig.e("onPresentScreen must be called on the main UI thread.");
            Cif.f427a.post(new cu(this));
        } else {
            try {
                this.f311a.d();
            } catch (RemoteException e) {
                ig.c("Could not call onAdOpened.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationInterstitialListener
    public void onPresentScreen(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ig.a("Adapter called onPresentScreen.");
        if (!Cif.b()) {
            ig.e("onPresentScreen must be called on the main UI thread.");
            Cif.f427a.post(new co(this));
        } else {
            try {
                this.f311a.d();
            } catch (RemoteException e) {
                ig.c("Could not call onAdOpened.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationBannerListener
    public void onReceivedAd(MediationBannerAdapter mediationBannerAdapter) {
        ig.a("Adapter called onReceivedAd.");
        if (!Cif.b()) {
            ig.e("onReceivedAd must be called on the main UI thread.");
            Cif.f427a.post(new cv(this));
        } else {
            try {
                this.f311a.e();
            } catch (RemoteException e) {
                ig.c("Could not call onAdLoaded.", e);
            }
        }
    }

    @Override // com.google.ads.mediation.MediationInterstitialListener
    public void onReceivedAd(MediationInterstitialAdapter mediationInterstitialAdapter) {
        ig.a("Adapter called onReceivedAd.");
        if (!Cif.b()) {
            ig.e("onReceivedAd must be called on the main UI thread.");
            Cif.f427a.post(new cp(this));
        } else {
            try {
                this.f311a.e();
            } catch (RemoteException e) {
                ig.c("Could not call onAdLoaded.", e);
            }
        }
    }
}
