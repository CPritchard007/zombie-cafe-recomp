package com.cameramanager;

import android.app.Activity;
import android.hardware.Camera;
import android.os.Bundle;
import android.widget.Button;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class Cameramanager extends Activity {

    /* renamed from: a, reason: collision with root package name */
    Camera f11a;
    int b;
    int c;
    int d;
    String e;
    Button f;
    Camera.ShutterCallback g = new a(this);
    Camera.PictureCallback h = new b(this);
    Camera.PictureCallback i = new c(this);
    private e j;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestWindowFeature(1);
        getWindow().addFlags(1024);
        this.j = new e(this);
        setContentView(this.j);
        this.f11a = this.j.e;
        this.f.setOnClickListener(new d(this));
        this.b = 1;
        this.d = 0;
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        if (this.f11a != null) {
            this.j.a(null);
            this.f11a.release();
            this.f11a = null;
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.f11a = Camera.open();
        this.c = this.d;
        this.j.a(this.f11a);
    }
}
