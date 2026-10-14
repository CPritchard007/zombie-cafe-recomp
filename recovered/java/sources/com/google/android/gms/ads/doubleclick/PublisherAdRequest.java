package com.google.android.gms.ads.doubleclick;

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
public final class PublisherAdRequest {
    public static final String DEVICE_ID_EMULATOR = ah.f279a;
    public static final int ERROR_CODE_INTERNAL_ERROR = 0;
    public static final int ERROR_CODE_INVALID_REQUEST = 1;
    public static final int ERROR_CODE_NETWORK_ERROR = 2;
    public static final int ERROR_CODE_NO_FILL = 3;
    public static final int GENDER_FEMALE = 2;
    public static final int GENDER_MALE = 1;
    public static final int GENDER_UNKNOWN = 0;

    /* renamed from: a, reason: collision with root package name */
    private final ah f140a;

    public final class Builder {

        /* renamed from: a, reason: collision with root package name */
        private final aj f141a = new aj();

        public Builder addCustomEventExtrasBundle(Class cls, Bundle bundle) {
            this.f141a.b(cls, bundle);
            return this;
        }

        public Builder addKeyword(String str) {
            this.f141a.a(str);
            return this;
        }

        public Builder addNetworkExtras(NetworkExtras networkExtras) {
            this.f141a.a(networkExtras);
            return this;
        }

        public Builder addNetworkExtrasBundle(Class cls, Bundle bundle) {
            this.f141a.a(cls, bundle);
            return this;
        }

        public Builder addTestDevice(String str) {
            this.f141a.b(str);
            return this;
        }

        public PublisherAdRequest build() {
            return new PublisherAdRequest(this);
        }

        public Builder setBirthday(Date date) {
            this.f141a.a(date);
            return this;
        }

        public Builder setContentUrl(String str) {
            ls.a((Object) str, (Object) "Content URL must be non-null.");
            ls.a(str, (Object) "Content URL must be non-empty.");
            ls.b(str.length() <= 512, "Content URL must not exceed %d in length.  Provided length was %d.", 512, Integer.valueOf(str.length()));
            this.f141a.c(str);
            return this;
        }

        public Builder setGender(int i) {
            this.f141a.a(i);
            return this;
        }

        public Builder setLocation(Location location) {
            this.f141a.a(location);
            return this;
        }

        public Builder setManualImpressionsEnabled(boolean z) {
            this.f141a.a(z);
            return this;
        }

        public Builder setPublisherProvidedId(String str) {
            this.f141a.d(str);
            return this;
        }

        public Builder tagForChildDirectedTreatment(boolean z) {
            this.f141a.b(z);
            return this;
        }
    }

    private PublisherAdRequest(Builder builder) {
        this.f140a = new ah(builder.f141a);
    }

    ah a() {
        return this.f140a;
    }

    public Date getBirthday() {
        return this.f140a.a();
    }

    public String getContentUrl() {
        return this.f140a.b();
    }

    public Bundle getCustomEventExtrasBundle(Class cls) {
        return this.f140a.c(cls);
    }

    public int getGender() {
        return this.f140a.c();
    }

    public Set getKeywords() {
        return this.f140a.d();
    }

    public Location getLocation() {
        return this.f140a.e();
    }

    public boolean getManualImpressionsEnabled() {
        return this.f140a.f();
    }

    @Deprecated
    public NetworkExtras getNetworkExtras(Class cls) {
        return this.f140a.a(cls);
    }

    public Bundle getNetworkExtrasBundle(Class cls) {
        return this.f140a.b(cls);
    }

    public String getPublisherProvidedId() {
        return this.f140a.g();
    }

    public boolean isTestDevice(Context context) {
        return this.f140a.a(context);
    }
}
