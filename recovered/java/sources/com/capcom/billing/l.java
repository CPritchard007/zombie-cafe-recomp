package com.capcom.billing;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.Handler;
import android.os.RemoteException;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class l {

    /* renamed from: a, reason: collision with root package name */
    boolean f51a = false;
    String b = "IabHelper";
    boolean c = false;
    boolean d = false;
    String e = "";
    Context f;
    com.a.a.a.a g;
    ServiceConnection h;
    int i;
    String j;
    u k;

    public l(Context context, String str) {
        this.j = null;
        this.f = context.getApplicationContext();
        this.j = str;
        c("IAB helper created.");
    }

    public static String a(int i) {
        String[] strArrSplit = "0:OK/1:User Canceled/2:Unknown/3:Billing Unavailable/4:Item unavailable/5:Developer Error/6:Error/7:Item Already Owned/8:Item not owned".split("/");
        String[] strArrSplit2 = "0:OK/-1001:Remote exception during initialization/-1002:Bad response received/-1003:Purchase signature verification failed/-1004:Send intent failed/-1005:User cancelled/-1006:Unknown purchase response/-1007:Missing token/-1008:Unknown error".split("/");
        if (i > -1000) {
            return (i < 0 || i >= strArrSplit.length) ? String.valueOf(String.valueOf(i)) + ":Unknown" : strArrSplit[i];
        }
        int i2 = (-1000) - i;
        return (i2 < 0 || i2 >= strArrSplit2.length) ? String.valueOf(String.valueOf(i)) + ":Unknown IAB Helper Error" : strArrSplit2[i2];
    }

    int a(Intent intent) {
        Object obj = intent.getExtras().get("RESPONSE_CODE");
        if (obj == null) {
            d("Intent with no response code, assuming OK (known issue)");
            return 0;
        }
        if (obj instanceof Integer) {
            return ((Integer) obj).intValue();
        }
        if (obj instanceof Long) {
            return (int) ((Long) obj).longValue();
        }
        d("Unexpected type for intent response code.");
        d(obj.getClass().getName());
        throw new RuntimeException("Unexpected type for intent response code: " + obj.getClass().getName());
    }

    int a(Bundle bundle) {
        Object obj = bundle.get("RESPONSE_CODE");
        if (obj == null) {
            c("Bundle with null response code, assuming OK (known issue)");
            return 0;
        }
        if (obj instanceof Integer) {
            return ((Integer) obj).intValue();
        }
        if (obj instanceof Long) {
            return (int) ((Long) obj).longValue();
        }
        d("Unexpected type for bundle response code.");
        d(obj.getClass().getName());
        throw new RuntimeException("Unexpected type for bundle response code: " + obj.getClass().getName());
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x008d, code lost:
    
        d("Bundle returned from getPurchases() doesn't contain required fields.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:?, code lost:
    
        return -1002;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    int a(com.capcom.billing.y r13) {
        /*
            Method dump skipped, instructions count: 346
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.capcom.billing.l.a(com.capcom.billing.y):int");
    }

    int a(y yVar, List list) {
        c("Querying SKU details.");
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.addAll(yVar.a());
        if (list != null) {
            arrayList.addAll(list);
        }
        if (arrayList.size() == 0) {
            c("queryPrices: nothing to do because there are no SKUs.");
            return 0;
        }
        Bundle bundle = new Bundle();
        bundle.putStringArrayList("ITEM_ID_LIST", arrayList);
        Bundle bundleA = this.g.a(3, this.f.getPackageName(), "inapp", bundle);
        if (bundleA.containsKey("DETAILS_LIST")) {
            Iterator<String> it = bundleA.getStringArrayList("DETAILS_LIST").iterator();
            while (it.hasNext()) {
                af afVar = new af(it.next());
                c("Got sku details: " + afVar);
                yVar.a(afVar);
            }
            return 0;
        }
        int iA = a(bundleA);
        if (iA != 0) {
            c("getSkuDetails() failed: " + a(iA));
            return iA;
        }
        d("getSkuDetails() returned a bundle with neither an error nor a detail list.");
        return -1002;
    }

    public y a(boolean z, List list) throws k {
        int iA;
        a("queryInventory");
        try {
            y yVar = new y();
            int iA2 = a(yVar);
            if (iA2 != 0) {
                throw new k(iA2, "Error refreshing inventory (querying owned items).");
            }
            if (!z || (iA = a(yVar, list)) == 0) {
                return yVar;
            }
            throw new k(iA, "Error refreshing inventory (querying prices of items).");
        } catch (RemoteException e) {
            throw new k(-1001, "Remote exception while refreshing inventory.", e);
        } catch (JSONException e2) {
            throw new k(-1002, "Error parsing JSON response while refreshing inventory.", e2);
        }
    }

    public void a(Activity activity, String str, int i, u uVar) throws IntentSender.SendIntentException {
        a(activity, str, i, uVar, "");
    }

    public void a(Activity activity, String str, int i, u uVar, String str2) throws IntentSender.SendIntentException {
        a("launchPurchaseFlow");
        b("launchPurchaseFlow");
        try {
            c("Constructing buy intent for " + str);
            Bundle bundleA = this.g.a(3, this.f.getPackageName(), str, "inapp", str2);
            int iA = a(bundleA);
            if (iA != 0) {
                d("Unable to buy item, Error response: " + a(iA));
                x xVar = new x(iA, "Unable to buy item");
                if (uVar != null) {
                    uVar.a(xVar, null);
                }
            }
            if (bundleA == null) {
                c("buyIntentBundle is null");
                return;
            }
            PendingIntent pendingIntent = (PendingIntent) bundleA.getParcelable("BUY_INTENT");
            if (pendingIntent == null) {
                c("pendingIntent is null");
                return;
            }
            c("Launching buy intent for " + str + ". Request code: " + i);
            this.i = i;
            this.k = uVar;
            IntentSender intentSender = pendingIntent.getIntentSender();
            Intent intent = new Intent();
            Integer num = 0;
            int iIntValue = num.intValue();
            Integer num2 = 0;
            int iIntValue2 = num2.intValue();
            Integer num3 = 0;
            activity.startIntentSenderForResult(intentSender, i, intent, iIntValue, iIntValue2, num3.intValue());
        } catch (IntentSender.SendIntentException e) {
            d("SendIntentException while launching purchase flow for sku " + str);
            e.printStackTrace();
            x xVar2 = new x(-1004, "Failed to send intent.");
            if (uVar != null) {
                uVar.a(xVar2, null);
            }
        } catch (RemoteException e2) {
            d("RemoteException while launching purchase flow for sku " + str);
            e2.printStackTrace();
            x xVar3 = new x(-1001, "Remote exception while starting purchase flow");
            if (uVar != null) {
                uVar.a(xVar3, null);
            }
        }
    }

    public void a(v vVar) {
        if (this.c) {
            throw new IllegalStateException("IAB helper is already set up.");
        }
        c("Starting in-app billing setup.");
        this.h = new m(this, vVar);
        Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
        intent.setPackage("com.android.vending");
        this.f.bindService(intent, this.h, 1);
    }

    public void a(w wVar) {
        a(true, (List) null, wVar);
    }

    void a(z zVar) throws k {
        a("consume");
        Log.e("IabHelper", "consume start");
        if (zVar == null) {
            Log.e("IabHelper", "itemInfo is null");
            return;
        }
        if (this.g == null) {
            Log.e("IabHelper", "mService is null");
            return;
        }
        try {
            String strE = zVar.e();
            String strB = zVar.b();
            if (strE == null || strE.equals("")) {
                d("Can't consume " + strB + ". No token.");
                throw new k(-1007, "PurchaseInfo is missing token for sku: " + strB + " " + zVar);
            }
            c("Consuming sku: " + strB + ", token: " + strE);
            int iB = this.g.b(3, this.f.getPackageName(), strE);
            if (iB == 0) {
                c("Successfully consumed sku: " + strB);
            } else {
                c("Error consuming consuming sku " + strB + ". " + a(iB));
                throw new k(iB, "Error consuming sku " + strB);
            }
        } catch (RemoteException e) {
            throw new k(-1001, "Remote exception while consuming. PurchaseInfo: " + zVar, e);
        }
    }

    public void a(z zVar, s sVar) {
        a("consume");
        ArrayList arrayList = new ArrayList();
        arrayList.add(zVar);
        a(arrayList, sVar, (t) null);
    }

    void a(String str) {
        if (this.c) {
            return;
        }
        d("Illegal state for operation (" + str + "): IAB helper is not set up.");
        throw new IllegalStateException("IAB helper is not set up. Can't perform operation: " + str);
    }

    void a(List list, s sVar, t tVar) {
        Handler handler = new Handler();
        b("consume");
        new Thread(new p(this, list, sVar, handler, tVar)).start();
    }

    public void a(boolean z) {
        this.f51a = z;
    }

    public void a(boolean z, List list, w wVar) {
        Handler handler = new Handler();
        Log.e("IabHelper", "queryInventoryAsync start");
        a("queryInventory");
        b("refresh inventory");
        new Thread(new n(this, z, list, handler, wVar)).start();
    }

    public boolean a() {
        return this.c;
    }

    public boolean a(int i, int i2, Intent intent) {
        if (i != this.i) {
            return false;
        }
        a("handleActivityResult");
        d();
        if (intent == null) {
            d("Null data in IAB activity result.");
            x xVar = new x(-1002, "Null data in IAB result");
            if (this.k != null) {
                this.k.a(xVar, null);
            }
            return true;
        }
        int iA = a(intent);
        String stringExtra = intent.getStringExtra("INAPP_PURCHASE_DATA");
        String stringExtra2 = intent.getStringExtra("INAPP_DATA_SIGNATURE");
        if (i2 == -1 && iA == 0) {
            c("Successful resultcode from purchase activity.");
            c("Purchase data: " + stringExtra);
            c("Data signature: " + stringExtra2);
            c("Extras: " + intent.getExtras());
            if (stringExtra == null || stringExtra2 == null) {
                d("BUG: either purchaseData or dataSignature is null.");
                c("Extras: " + intent.getExtras().toString());
                x xVar2 = new x(-1008, "IAB returned null purchaseData or dataSignature");
                if (this.k != null) {
                    this.k.a(xVar2, null);
                }
                return true;
            }
            try {
                z zVar = new z(stringExtra, stringExtra2);
                String strB = zVar.b();
                if (!ae.a(this.j, stringExtra, stringExtra2)) {
                    d("Purchase signature verification FAILED for sku " + strB);
                    x xVar3 = new x(-1003, "Signature verification failed for sku " + strB);
                    if (this.k != null) {
                        this.k.a(xVar3, zVar);
                    }
                    return true;
                }
                c("Purchase signature successfully verified.");
                if (this.k != null) {
                    this.k.a(new x(0, "Success"), zVar);
                }
            } catch (JSONException e) {
                d("Failed to parse purchase data.");
                e.printStackTrace();
                x xVar4 = new x(-1002, "Failed to parse purchase data.");
                if (this.k != null) {
                    this.k.a(xVar4, null);
                }
                return true;
            }
        } else if (i2 == -1) {
            c("Result code was OK but in-app billing response was not OK: " + a(iA));
            if (this.k != null) {
                this.k.a(new x(iA, "Problem purchashing item."), null);
            }
        } else if (i2 == 0) {
            c("Purchase canceled - Response: " + a(iA));
            x xVar5 = new x(-1005, "User canceled.");
            if (this.k != null) {
                this.k.a(xVar5, null);
            }
        } else {
            d("Purchase failed. Result code: " + Integer.toString(i2) + ". Response: " + a(iA));
            x xVar6 = new x(-1006, "Unknown purchase response.");
            if (this.k != null) {
                this.k.a(xVar6, null);
            }
        }
        return true;
    }

    void b(String str) {
        if (this.d) {
            throw new IllegalStateException("Can't start async operation (" + str + ") because another async operation(" + this.e + ") is in progress.");
        }
        this.e = str;
        this.d = true;
        c("Starting async operation: " + str);
    }

    public boolean b() {
        return this.d;
    }

    public void c() {
        c("Disposing.");
        this.c = false;
        if (this.h != null) {
            c("Unbinding from service.");
            if (this.f != null) {
                this.f.unbindService(this.h);
            }
            this.h = null;
            this.g = null;
            this.k = null;
        }
    }

    void c(String str) {
        if (this.f51a) {
            Log.e(this.b, str);
        }
    }

    void d() {
        c("Ending async operation: " + this.e);
        this.e = "";
        this.d = false;
    }

    void d(String str) {
        Log.e(this.b, "In-app billing error: " + str);
    }

    void e(String str) {
        Log.w(this.b, "In-app billing warning: " + str);
    }
}
