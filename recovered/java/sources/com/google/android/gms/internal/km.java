package com.google.android.gms.internal;

import android.app.Activity;
import android.content.ActivityNotFoundException;
import android.content.DialogInterface;
import android.content.Intent;
import android.support.v4.app.Fragment;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class km implements DialogInterface.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    private final Activity f465a;
    private final Fragment b;
    private final Intent c;
    private final int d;

    public km(Activity activity, Intent intent, int i) {
        this.f465a = activity;
        this.b = null;
        this.c = intent;
        this.d = i;
    }

    public km(Fragment fragment, Intent intent, int i) {
        this.f465a = null;
        this.b = fragment;
        this.c = intent;
        this.d = i;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        try {
            if (this.c != null && this.b != null) {
                this.b.startActivityForResult(this.c, this.d);
            } else if (this.c != null) {
                this.f465a.startActivityForResult(this.c, this.d);
            }
            dialogInterface.dismiss();
        } catch (ActivityNotFoundException e) {
            Log.e("SettingsRedirect", "Can't redirect to app settings for Google Play services");
        }
    }
}
