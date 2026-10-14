package com.google.android.gms.ads.search;

import android.content.Context;
import android.graphics.Color;
import android.location.Location;
import android.os.Bundle;
import com.google.android.gms.ads.mediation.NetworkExtras;
import com.google.android.gms.internal.ah;
import com.google.android.gms.internal.aj;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class SearchAdRequest {
    public static final int BORDER_TYPE_DASHED = 1;
    public static final int BORDER_TYPE_DOTTED = 2;
    public static final int BORDER_TYPE_NONE = 0;
    public static final int BORDER_TYPE_SOLID = 3;
    public static final int CALL_BUTTON_COLOR_DARK = 2;
    public static final int CALL_BUTTON_COLOR_LIGHT = 0;
    public static final int CALL_BUTTON_COLOR_MEDIUM = 1;
    public static final String DEVICE_ID_EMULATOR = ah.f279a;
    public static final int ERROR_CODE_INTERNAL_ERROR = 0;
    public static final int ERROR_CODE_INVALID_REQUEST = 1;
    public static final int ERROR_CODE_NETWORK_ERROR = 2;
    public static final int ERROR_CODE_NO_FILL = 3;

    /* renamed from: a, reason: collision with root package name */
    private final ah f151a;
    private final int b;
    private final int c;
    private final int d;
    private final int e;
    private final int f;
    private final int g;
    private final int h;
    private final int i;
    private final String j;
    private final int k;
    private final String l;
    private final int m;
    private final int n;
    private final String o;

    public final class Builder {
        private int b;
        private int c;
        private int d;
        private int e;
        private int f;
        private int g;
        private int i;
        private String j;
        private int k;
        private String l;
        private int m;
        private int n;
        private String o;

        /* renamed from: a, reason: collision with root package name */
        private final aj f152a = new aj();
        private int h = 0;

        public Builder addCustomEventExtrasBundle(Class cls, Bundle bundle) {
            this.f152a.b(cls, bundle);
            return this;
        }

        public Builder addNetworkExtras(NetworkExtras networkExtras) {
            this.f152a.a(networkExtras);
            return this;
        }

        public Builder addNetworkExtrasBundle(Class cls, Bundle bundle) {
            this.f152a.a(cls, bundle);
            return this;
        }

        public Builder addTestDevice(String str) {
            this.f152a.b(str);
            return this;
        }

        public SearchAdRequest build() {
            return new SearchAdRequest(this);
        }

        public Builder setAnchorTextColor(int i) {
            this.b = i;
            return this;
        }

        public Builder setBackgroundColor(int i) {
            this.c = i;
            this.d = Color.argb(0, 0, 0, 0);
            this.e = Color.argb(0, 0, 0, 0);
            return this;
        }

        public Builder setBackgroundGradient(int i, int i2) {
            this.c = Color.argb(0, 0, 0, 0);
            this.d = i2;
            this.e = i;
            return this;
        }

        public Builder setBorderColor(int i) {
            this.f = i;
            return this;
        }

        public Builder setBorderThickness(int i) {
            this.g = i;
            return this;
        }

        public Builder setBorderType(int i) {
            this.h = i;
            return this;
        }

        public Builder setCallButtonColor(int i) {
            this.i = i;
            return this;
        }

        public Builder setCustomChannels(String str) {
            this.j = str;
            return this;
        }

        public Builder setDescriptionTextColor(int i) {
            this.k = i;
            return this;
        }

        public Builder setFontFace(String str) {
            this.l = str;
            return this;
        }

        public Builder setHeaderTextColor(int i) {
            this.m = i;
            return this;
        }

        public Builder setHeaderTextSize(int i) {
            this.n = i;
            return this;
        }

        public Builder setLocation(Location location) {
            this.f152a.a(location);
            return this;
        }

        public Builder setQuery(String str) {
            this.o = str;
            return this;
        }

        public Builder tagForChildDirectedTreatment(boolean z) {
            this.f152a.b(z);
            return this;
        }
    }

    private SearchAdRequest(Builder builder) {
        this.b = builder.b;
        this.c = builder.c;
        this.d = builder.d;
        this.e = builder.e;
        this.f = builder.f;
        this.g = builder.g;
        this.h = builder.h;
        this.i = builder.i;
        this.j = builder.j;
        this.k = builder.k;
        this.l = builder.l;
        this.m = builder.m;
        this.n = builder.n;
        this.o = builder.o;
        this.f151a = new ah(builder.f152a, this);
    }

    ah a() {
        return this.f151a;
    }

    public int getAnchorTextColor() {
        return this.b;
    }

    public int getBackgroundColor() {
        return this.c;
    }

    public int getBackgroundGradientBottom() {
        return this.d;
    }

    public int getBackgroundGradientTop() {
        return this.e;
    }

    public int getBorderColor() {
        return this.f;
    }

    public int getBorderThickness() {
        return this.g;
    }

    public int getBorderType() {
        return this.h;
    }

    public int getCallButtonColor() {
        return this.i;
    }

    public String getCustomChannels() {
        return this.j;
    }

    public Bundle getCustomEventExtrasBundle(Class cls) {
        return this.f151a.c(cls);
    }

    public int getDescriptionTextColor() {
        return this.k;
    }

    public String getFontFace() {
        return this.l;
    }

    public int getHeaderTextColor() {
        return this.m;
    }

    public int getHeaderTextSize() {
        return this.n;
    }

    public Location getLocation() {
        return this.f151a.e();
    }

    @Deprecated
    public NetworkExtras getNetworkExtras(Class cls) {
        return this.f151a.a(cls);
    }

    public Bundle getNetworkExtrasBundle(Class cls) {
        return this.f151a.b(cls);
    }

    public String getQuery() {
        return this.o;
    }

    public boolean isTestDevice(Context context) {
        return this.f151a.a(context);
    }
}
