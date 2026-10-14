package com.capcom.zombiecafeandroidJP;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class an implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f89a;
    private final /* synthetic */ float b;

    an(ZombieCafeAndroid zombieCafeAndroid, float f) {
        this.f89a = zombieCafeAndroid;
        this.b = f;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f89a.at != null) {
            if (this.f89a.at.getScrollX() > (this.f89a.aq.b.length() - this.f89a.aq.m) * this.f89a.au.getTextSize()) {
                this.f89a.at.scrollTo(0, 0);
                return;
            }
            this.f89a.at.smoothScrollBy(Math.round((this.b / 16.0f) * 3.0f * (ZombieCafeAndroid.o / 960.0f)), 0);
        }
    }
}
