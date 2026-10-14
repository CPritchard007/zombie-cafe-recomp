package com.google.ads.mediation;

import android.location.Location;
import com.google.ads.AdRequest;
import java.util.Date;
import java.util.Set;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class MediationAdRequest {

    /* renamed from: a, reason: collision with root package name */
    private final Date f124a;
    private final AdRequest.Gender b;
    private final Set c;
    private final boolean d;
    private final Location e;

    public MediationAdRequest(Date date, AdRequest.Gender gender, Set set, boolean z, Location location) {
        this.f124a = date;
        this.b = gender;
        this.c = set;
        this.d = z;
        this.e = location;
    }

    public Integer getAgeInYears() {
        return null;
    }

    public Date getBirthday() {
        return this.f124a;
    }

    public AdRequest.Gender getGender() {
        return this.b;
    }

    public Set getKeywords() {
        return this.c;
    }

    public Location getLocation() {
        return this.e;
    }

    public boolean isTesting() {
        return this.d;
    }
}
