package com.google.android.gms.internal;

import android.os.Parcel;
import com.google.android.gms.ads.search.SearchAdRequest;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class aw implements SafeParcelable {
    public static final an CREATOR = new an();

    /* renamed from: a, reason: collision with root package name */
    public final int f288a;
    public final int b;
    public final int c;
    public final int d;
    public final int e;
    public final int f;
    public final int g;
    public final int h;
    public final int i;
    public final String j;
    public final int k;
    public final String l;
    public final int m;
    public final int n;
    public final String o;

    aw(int i, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, String str, int i10, String str2, int i11, int i12, String str3) {
        this.f288a = i;
        this.b = i2;
        this.c = i3;
        this.d = i4;
        this.e = i5;
        this.f = i6;
        this.g = i7;
        this.h = i8;
        this.i = i9;
        this.j = str;
        this.k = i10;
        this.l = str2;
        this.m = i11;
        this.n = i12;
        this.o = str3;
    }

    public aw(SearchAdRequest searchAdRequest) {
        this.f288a = 1;
        this.b = searchAdRequest.getAnchorTextColor();
        this.c = searchAdRequest.getBackgroundColor();
        this.d = searchAdRequest.getBackgroundGradientBottom();
        this.e = searchAdRequest.getBackgroundGradientTop();
        this.f = searchAdRequest.getBorderColor();
        this.g = searchAdRequest.getBorderThickness();
        this.h = searchAdRequest.getBorderType();
        this.i = searchAdRequest.getCallButtonColor();
        this.j = searchAdRequest.getCustomChannels();
        this.k = searchAdRequest.getDescriptionTextColor();
        this.l = searchAdRequest.getFontFace();
        this.m = searchAdRequest.getHeaderTextColor();
        this.n = searchAdRequest.getHeaderTextSize();
        this.o = searchAdRequest.getQuery();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        an.a(this, parcel, i);
    }
}
