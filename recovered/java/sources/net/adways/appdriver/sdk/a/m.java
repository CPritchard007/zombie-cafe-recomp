package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.app.Dialog;
import android.content.DialogInterface;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.support.v4.app.DialogFragment;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class m extends DialogFragment implements DialogInterface.OnKeyListener {

    /* renamed from: a, reason: collision with root package name */
    private int f623a;
    private Activity b = null;
    private FrameLayout c = null;

    public final void a(FrameLayout frameLayout) {
        this.c = frameLayout;
    }

    @Override // android.support.v4.app.DialogFragment, android.support.v4.app.Fragment
    public final void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
        this.b = getActivity();
    }

    @Override // android.support.v4.app.DialogFragment, android.support.v4.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (bundle == null) {
            this.f623a = getArguments().getInt("style");
            setStyle(this.f623a, 0);
        }
    }

    @Override // android.support.v4.app.DialogFragment
    public final Dialog onCreateDialog(Bundle bundle) {
        Dialog dialogOnCreateDialog = super.onCreateDialog(bundle);
        dialogOnCreateDialog.getWindow().setGravity(1);
        dialogOnCreateDialog.requestWindowFeature(1);
        dialogOnCreateDialog.getWindow().setBackgroundDrawable(new ColorDrawable(0));
        dialogOnCreateDialog.setOnKeyListener(this);
        dialogOnCreateDialog.setCancelable(true);
        dialogOnCreateDialog.setCanceledOnTouchOutside(false);
        return dialogOnCreateDialog;
    }

    @Override // android.support.v4.app.Fragment
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        if (bundle == null) {
            return this.c;
        }
        return null;
    }

    @Override // android.content.DialogInterface.OnKeyListener
    public final boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
        if (i != 4 || keyEvent.getAction() != 1 || keyEvent.isCanceled()) {
            return false;
        }
        if (getActivity().isFinishing()) {
            return true;
        }
        this.b.finish();
        return true;
    }
}
