package com.google.android.gms.internal;

import com.google.ads.AdRequest;
import com.google.ads.AdSize;
import com.google.ads.mediation.MediationAdRequest;
import java.util.Date;
import java.util.HashSet;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class cx {
    public static int a(AdRequest.ErrorCode errorCode) {
        switch (cy.b[errorCode.ordinal()]) {
            case 2:
                return 1;
            case 3:
                return 2;
            case 4:
                return 3;
            default:
                return 0;
        }
    }

    public static AdRequest.Gender a(int i) {
        switch (i) {
            case 1:
                return AdRequest.Gender.MALE;
            case 2:
                return AdRequest.Gender.FEMALE;
            default:
                return AdRequest.Gender.UNKNOWN;
        }
    }

    public static AdSize a(al alVar) {
        AdSize[] adSizeArr = {AdSize.SMART_BANNER, AdSize.BANNER, AdSize.IAB_MRECT, AdSize.IAB_BANNER, AdSize.IAB_LEADERBOARD, AdSize.IAB_WIDE_SKYSCRAPER};
        for (int i = 0; i < adSizeArr.length; i++) {
            if (adSizeArr[i].getWidth() == alVar.f && adSizeArr[i].getHeight() == alVar.c) {
                return adSizeArr[i];
            }
        }
        return new AdSize(com.google.android.gms.ads.a.a(alVar.f, alVar.c, alVar.b));
    }

    public static MediationAdRequest a(ai aiVar) {
        return new MediationAdRequest(new Date(aiVar.b), a(aiVar.d), aiVar.e != null ? new HashSet(aiVar.e) : null, aiVar.f, aiVar.k);
    }
}
