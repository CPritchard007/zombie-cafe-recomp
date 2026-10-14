package com.capcom.gcm;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Bundle;
import android.support.v4.app.DialogFragment;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class a extends DialogFragment {

    /* renamed from: a, reason: collision with root package name */
    private final d f62a;

    protected a(d dVar) {
        this.f62a = dVar;
    }

    public static a a(Intent intent) {
        return new a(d.a(intent));
    }

    @Override // android.support.v4.app.DialogFragment
    public Dialog onCreateDialog(Bundle bundle) throws Resources.NotFoundException {
        Log.w("AlertDialogFragment", "AlertDialogFragment onCreateDialog 0");
        if (this.f62a == null) {
            throw new NullPointerException("AlertDialogFragment has no message.");
        }
        Log.w("AlertDialogFragment", "AlertDialogFragment onCreateDialog 1");
        String strB = this.f62a.b();
        if (strB == null || "".equals(strB)) {
            strB = getResources().getString(2131230746);
        }
        String strC = this.f62a.c();
        if (strC == null || "".equals(strC)) {
            strC = getResources().getString(2131230803);
        }
        String strD = this.f62a.d();
        if (strD == null || "".equals(strD)) {
            strD = getResources().getString(2131230804);
        }
        AlertDialog.Builder cancelable = new AlertDialog.Builder(getActivity()).setTitle(strB).setIcon(2130837531).setMessage(this.f62a.a()).setCancelable(false);
        if (strC != null && !"".equals(strC)) {
            cancelable.setPositiveButton(strC, new b(this));
        }
        if (strD != null && !"".equals(strD)) {
            cancelable.setNegativeButton(strD, new c(this));
        }
        AlertDialog alertDialogCreate = cancelable.create();
        Log.w("AlertDialogFragment", "AlertDialogFragment onCreateDialog 2");
        return alertDialogCreate;
    }

    @Override // android.support.v4.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        Log.d("AlertDialogFragment", "AlertDialogFragment onStop");
        getActivity().finish();
    }
}
