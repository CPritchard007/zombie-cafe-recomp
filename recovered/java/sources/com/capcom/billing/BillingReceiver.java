package com.capcom.billing;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class BillingReceiver extends BroadcastReceiver {
    private void a(Context context, long j, int i) {
        Log.v("BillingReceiver checkResponseCode", "ID=" + j + "CodeIndex=" + i);
        Intent intent = new Intent("com.android.vending.billing.RESPONSE_CODE");
        intent.setPackage("com.android.vending");
        intent.setClass(context, BillingService.class);
        intent.putExtra("request_id", j);
        intent.putExtra("response_code", i);
        context.startService(intent);
    }

    private void a(Context context, String str) {
        Log.v("BillingReceiver notify -", str);
        Intent intent = new Intent("com.example.dungeons.GET_PURCHASE_INFORMATION");
        intent.setClass(context, BillingService.class);
        intent.putExtra("notification_id", str);
        context.startService(intent);
    }

    private void a(Context context, String str, String str2) {
        Log.v("BillingReceiver purchaseStateChanged - signed data is", str);
        Intent intent = new Intent("com.android.vending.billing.PURCHASE_STATE_CHANGED");
        intent.setPackage("com.android.vending");
        intent.setClass(context, BillingService.class);
        intent.putExtra("inapp_signed_data", str);
        intent.putExtra("inapp_signature", str2);
        context.startService(intent);
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        Log.v("BillingReciever OnReceive", "Market Sending A Message..How do i handle->" + action);
        if ("com.android.vending.billing.PURCHASE_STATE_CHANGED".equals(action)) {
            a(context, intent.getStringExtra("inapp_signed_data"), intent.getStringExtra("inapp_signature"));
            return;
        }
        if ("com.android.vending.billing.IN_APP_NOTIFY".equals(action)) {
            String stringExtra = intent.getStringExtra("notification_id");
            Log.i("BillingReceiver", "notifyId: " + stringExtra);
            a(context, stringExtra);
        } else {
            if (!"com.android.vending.billing.RESPONSE_CODE".equals(action)) {
                Log.w("BillingReceiver", "unexpected action: " + action);
                return;
            }
            long longExtra = intent.getLongExtra("request_id", -1L);
            int intExtra = intent.getIntExtra("response_code", j.RESULT_ERROR.ordinal());
            a(context, longExtra, intExtra);
            Log.d("OK, what should i do to this?", "CodeIndex=" + intExtra);
            if (intExtra == 0) {
                Log.d("We Have A Purchase incoming", "Order=" + longExtra);
            }
            if (intExtra == 5) {
                Log.d("Developer Error - give berries message anyway", "Order=" + longExtra);
            }
        }
    }
}
