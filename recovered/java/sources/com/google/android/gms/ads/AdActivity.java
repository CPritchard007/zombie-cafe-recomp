package com.google.android.gms.ads;

import android.app.Activity;
import android.os.Bundle;
import android.os.RemoteException;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.gms.internal.dn;
import com.google.android.gms.internal.dp;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AdActivity extends Activity {
    public static final String CLASS_NAME = "com.google.android.gms.ads.AdActivity";
    public static final String SIMPLE_CLASS_NAME = "AdActivity";

    /* renamed from: a, reason: collision with root package name */
    private dp f134a;

    private void a() {
        if (this.f134a != null) {
            try {
                this.f134a.j();
            } catch (RemoteException e) {
                ig.c("Could not forward setContentViewSet to ad overlay:", e);
            }
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f134a = dn.a((Activity) this);
        if (this.f134a == null) {
            ig.e("Could not create ad overlay.");
            finish();
            return;
        }
        try {
            this.f134a.a(bundle);
        } catch (RemoteException e) {
            ig.c("Could not forward onCreate to ad overlay:", e);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        try {
            if (this.f134a != null) {
                this.f134a.i();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onDestroy to ad overlay:", e);
        }
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onPause() {
        try {
            if (this.f134a != null) {
                this.f134a.g();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onPause to ad overlay:", e);
            finish();
        }
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        try {
            if (this.f134a != null) {
                this.f134a.d();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onRestart to ad overlay:", e);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        try {
            if (this.f134a != null) {
                this.f134a.f();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onResume to ad overlay:", e);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        try {
            if (this.f134a != null) {
                this.f134a.b(bundle);
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onSaveInstanceState to ad overlay:", e);
            finish();
        }
        super.onSaveInstanceState(bundle);
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        try {
            if (this.f134a != null) {
                this.f134a.e();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onStart to ad overlay:", e);
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onStop() {
        try {
            if (this.f134a != null) {
                this.f134a.h();
            }
        } catch (RemoteException e) {
            ig.c("Could not forward onStop to ad overlay:", e);
            finish();
        }
        super.onStop();
    }

    @Override // android.app.Activity
    public void setContentView(int i) {
        super.setContentView(i);
        a();
    }

    @Override // android.app.Activity
    public void setContentView(View view) {
        super.setContentView(view);
        a();
    }

    @Override // android.app.Activity
    public void setContentView(View view, ViewGroup.LayoutParams layoutParams) {
        super.setContentView(view, layoutParams);
        a();
    }
}
