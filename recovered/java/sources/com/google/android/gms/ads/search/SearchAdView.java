package com.google.android.gms.ads.search;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.internal.ak;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class SearchAdView extends ViewGroup {

    /* renamed from: a, reason: collision with root package name */
    private final ak f153a;

    public SearchAdView(Context context) {
        super(context);
        this.f153a = new ak(this);
    }

    public SearchAdView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f153a = new ak(this, attributeSet, false);
    }

    public SearchAdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f153a = new ak(this, attributeSet, false);
    }

    public void destroy() {
        this.f153a.a();
    }

    public AdListener getAdListener() {
        return this.f153a.b();
    }

    public AdSize getAdSize() {
        return this.f153a.c();
    }

    public String getAdUnitId() {
        return this.f153a.e();
    }

    public void loadAd(SearchAdRequest searchAdRequest) {
        this.f153a.a(searchAdRequest.a());
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
        this.f153a.h();
    }

    public void resume() {
        this.f153a.j();
    }

    public void setAdListener(AdListener adListener) {
        this.f153a.a(adListener);
    }

    public void setAdSize(AdSize adSize) {
        this.f153a.a(adSize);
    }

    public void setAdUnitId(String str) {
        this.f153a.a(str);
    }
}
