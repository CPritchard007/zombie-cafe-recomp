package com.google.android.gms.ads;

import android.content.Context;
import android.location.Location;
import android.os.Bundle;
import com.google.android.gms.ads.mediation.NetworkExtras;
import com.google.android.gms.internal.ah;
import com.google.android.gms.internal.aj;
import com.google.android.gms.internal.ls;
import java.util.Date;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdRequest {
    public static final String DEVICE_ID_EMULATOR = ah.f279a;
    public static final int ERROR_CODE_INTERNAL_ERROR = 0;
    public static final int ERROR_CODE_INVALID_REQUEST = 1;
    public static final int ERROR_CODE_NETWORK_ERROR = 2;
    public static final int ERROR_CODE_NO_FILL = 3;
    public static final int GENDER_FEMALE = 2;
    public static final int GENDER_MALE = 1;
    public static final int GENDER_UNKNOWN = 0;
    public static final int MAX_CONTENT_URL_LENGTH = 512;

    /* renamed from: a, reason: collision with root package name */
    private final ah f135a;

    public final class Builder {

        /* renamed from: a, reason: collision with root package name */
        private final aj f136a = new aj();

        public Builder addCustomEventExtrasBundle(Class cls, Bundle bundle) {
            this.f136a.b(cls, bundle);
            return this;
        }

        public Builder addKeyword(String str) {
            this.f136a.a(str);
            return this;
        }

        public Builder addNetworkExtras(NetworkExtras networkExtras) {
            this.f136a.a(networkExtras);
            return this;
        }

        public Builder addNetworkExtrasBundle(Class cls, Bundle bundle) {
            this.f136a.a(cls, bundle);
            return this;
        }

        public Builder addTestDevice(String str) {
            this.f136a.b(str);
            return this;
        }

        public AdRequest build() {
            return new AdRequest(this);
        }

        public Builder setBirthday(Date date) {
            this.f136a.a(date);
            return this;
        }

        public Builder setContentUrl(String str) {
            ls.a((Object) str, (Object) "Content URL must be non-null.");
            ls.a(str, (Object) "Content URL must be non-empty.");
            ls.b(str.length() <= 512, "Content URL must not exceed %d in length.  Provided length was %d.", 512, Integer.valueOf(str.length()));
            this.f136a.c(str);
            return this;
        }

        public Builder setGender(int i) {
            this.f136a.a(i);
            return this;
        }

        public Builder setLocation(Location location) {
            this.f136a.a(location);
            return this;
        }

        public Builder tagForChildDirectedTreatment(boolean z) {
            this.f136a.b(z);
            return this;
        }
    }

    private AdRequest(Builder builder) {
        this.f135a = new ah(builder.f136a);
    }

    ah a() {
        return this.f135a;
    }

    public Date getBirthday() {
        return this.f135a.a();
    }

    public String getContentUrl() {
        return this.f135a.b();
    }

    public Bundle getCustomEventExtrasBundle(Class cls) {
        return this.f135a.c(cls);
    }

    public int getGender() {
        return this.f135a.c();
    }

    public Set getKeywords() {
        return this.f135a.d();
    }

    public Location getLocation() {
        return this.f135a.e();
    }

    @Deprecated
    public NetworkExtras getNetworkExtras(Class cls) {
        return this.f135a.a(cls);
    }

    public Bundle getNetworkExtrasBundle(Class cls) {
        return this.f135a.b(cls);
    }

    public boolean isTestDevice(Context context) {
        return this.f135a.a(context);
    }
}
