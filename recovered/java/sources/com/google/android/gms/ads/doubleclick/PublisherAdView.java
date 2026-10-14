package com.google.android.gms.ads.doubleclick;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.internal.ak;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class PublisherAdView extends ViewGroup {

    /* renamed from: a, reason: collision with root package name */
    private final ak f142a;

    public PublisherAdView(Context context) {
        super(context);
        this.f142a = new ak(this);
    }

    public PublisherAdView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f142a = new ak(this, attributeSet, true);
    }

    public PublisherAdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f142a = new ak(this, attributeSet, true);
    }

    public void destroy() {
        this.f142a.a();
    }

    public AdListener getAdListener() {
        return this.f142a.b();
    }

    public AdSize getAdSize() {
        return this.f142a.c();
    }

    public AdSize[] getAdSizes() {
        return this.f142a.d();
    }

    public String getAdUnitId() {
        return this.f142a.e();
    }

    public AppEventListener getAppEventListener() {
        return this.f142a.f();
    }

    public void loadAd(PublisherAdRequest publisherAdRequest) {
        this.f142a.a(publisherAdRequest.a());
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        View childAt = getChildAt(0);
        if (childAt == null || childAt.getVisibility() == 8) {
            return;
        }
        int measuredWidth = childAt.getMeasuredWidth();
        int measuredHeight = childAt.getMeasuredHeight();
        int i5 = ((i3 - i) - measuredWidth) / 2;
        int i6 = ((i4 - i2) - measuredHeight) / 2;
        childAt.layout(i5, i6, measuredWidth + i5, measuredHeight + i6);
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        int widthInPixels;
        int heightInPixels = 0;
        View childAt = getChildAt(0);
        AdSize adSize = getAdSize();
        if (childAt != null && childAt.getVisibility() != 8) {
            measureChild(childAt, i, i2);
            widthInPixels = childAt.getMeasuredWidth();
            heightInPixels = childAt.getMeasuredHeight();
        } else if (adSize != null) {
            Context context = getContext();
            widthInPixels = adSize.getWidthInPixels(context);
            heightInPixels = adSize.getHeightInPixels(context);
        } else {
            widthInPixels = 0;
        }
        setMeasuredDimension(View.resolveSize(Math.max(widthInPixels, getSuggestedMinimumWidth()), i), View.resolveSize(Math.max(heightInPixels, getSuggestedMinimumHeight()), i2));
    }

    public void pause() {
        this.f142a.h();
    }

    public void recordManualImpression() {
        this.f142a.i();
    }

    public void resume() {
        this.f142a.j();
    }

    public void setAdListener(AdListener adListener) {
        this.f142a.a(adListener);
    }

    public void setAdSizes(AdSize... adSizeArr) {
        if (adSizeArr == null || adSizeArr.length < 1) {
            throw new IllegalArgumentException("The supported ad sizes must contain at least one valid ad size.");
        }
        this.f142a.b(adSizeArr);
    }

    public void setAdUnitId(String str) {
        this.f142a.a(str);
    }

    public void setAppEventListener(AppEventListener appEventListener) {
        this.f142a.a(appEventListener);
    }
}
