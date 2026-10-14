package com.google.android.gms.ads;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.gms.ads.purchase.InAppPurchaseListener;
import com.google.android.gms.ads.purchase.PlayStorePurchaseListener;
import com.google.android.gms.internal.ak;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdView extends ViewGroup {

    /* renamed from: a, reason: collision with root package name */
    private final ak f138a;

    public AdView(Context context) {
        super(context);
        this.f138a = new ak(this);
    }

    public AdView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f138a = new ak(this, attributeSet, false);
    }

    public AdView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f138a = new ak(this, attributeSet, false);
    }

    public void destroy() {
        this.f138a.a();
    }

    public AdListener getAdListener() {
        return this.f138a.b();
    }

    public AdSize getAdSize() {
        return this.f138a.c();
    }

    public String getAdUnitId() {
        return this.f138a.e();
    }

    public InAppPurchaseListener getInAppPurchaseListener() {
        return this.f138a.g();
    }

    public void loadAd(AdRequest adRequest) {
        this.f138a.a(adRequest.a());
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
        this.f138a.h();
    }

    public void resume() {
        this.f138a.j();
    }

    public void setAdListener(AdListener adListener) {
        this.f138a.a(adListener);
    }

    public void setAdSize(AdSize adSize) {
        this.f138a.a(adSize);
    }

    public void setAdUnitId(String str) {
        this.f138a.a(str);
    }

    public void setInAppPurchaseListener(InAppPurchaseListener inAppPurchaseListener) {
        this.f138a.a(inAppPurchaseListener);
    }

    public void setPlayStorePurchaseParams(PlayStorePurchaseListener playStorePurchaseListener, String str) {
        this.f138a.a(playStorePurchaseListener, str);
    }
}
