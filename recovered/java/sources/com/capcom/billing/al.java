package com.capcom.billing;

import android.R;
import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import java.util.HashSet;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class al extends ArrayAdapter {

    /* renamed from: a, reason: collision with root package name */
    private am[] f42a;
    private Set b;

    public al(Context context, am[] amVarArr) {
        super(context, R.layout.simple_spinner_item);
        this.b = new HashSet();
        this.f42a = amVarArr;
        for (int i = 0; i < SmurfsBilling.c; i++) {
            add(SmurfsBilling.b[i]);
        }
        setDropDownViewResource(R.layout.simple_spinner_dropdown_item);
    }

    @Override // android.widget.BaseAdapter, android.widget.ListAdapter
    public boolean areAllItemsEnabled() {
        return false;
    }

    @Override // android.widget.ArrayAdapter, android.widget.BaseAdapter, android.widget.SpinnerAdapter
    public View getDropDownView(int i, View view, ViewGroup viewGroup) {
        View dropDownView = super.getDropDownView(i, view, viewGroup);
        dropDownView.setEnabled(isEnabled(i));
        return dropDownView;
    }

    @Override // android.widget.BaseAdapter, android.widget.ListAdapter
    public boolean isEnabled(int i) {
        am amVar = this.f42a[i];
        return (amVar.c == an.MANAGED && this.b.contains(amVar.f43a)) ? false : true;
    }
}
