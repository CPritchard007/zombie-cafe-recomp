package com.google.android.gms.internal;

import android.content.ActivityNotFoundException;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class cz {
    public static boolean a(Context context, ce ceVar, dm dmVar) {
        if (ceVar == null) {
            ig.e("No intent data for launcher overlay.");
            return false;
        }
        Intent intent = new Intent();
        if (TextUtils.isEmpty(ceVar.c)) {
            ig.e("Open GMSG did not contain a URL.");
            return false;
        }
        if (TextUtils.isEmpty(ceVar.d)) {
            intent.setData(Uri.parse(ceVar.c));
        } else {
            intent.setDataAndType(Uri.parse(ceVar.c), ceVar.d);
        }
        intent.setAction("android.intent.action.VIEW");
        if (!TextUtils.isEmpty(ceVar.e)) {
            intent.setPackage(ceVar.e);
        }
        if (!TextUtils.isEmpty(ceVar.f)) {
            String[] strArrSplit = ceVar.f.split("/", 2);
            if (strArrSplit.length < 2) {
                ig.e("Could not parse component name from open GMSG: " + ceVar.f);
                return false;
            }
            intent.setClassName(strArrSplit[0], strArrSplit[1]);
        }
        try {
            ig.d("Launching an intent: " + intent);
            context.startActivity(intent);
            dmVar.q();
            return true;
        } catch (ActivityNotFoundException e) {
            ig.e(e.getMessage());
            return false;
        }
    }
}
