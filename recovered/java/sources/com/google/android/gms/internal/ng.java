package com.google.android.gms.internal;

import android.content.Context;
import com.google.android.gms.ads.identifier.AdvertisingIdClient;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ng extends ma {
    protected ng(Context context, ok okVar, oq oqVar) {
        super(context, okVar, oqVar);
    }

    public static ng a(String str, Context context) {
        gv gvVar = new gv();
        a(str, context, gvVar);
        return new ng(context, gvVar, new ot(239));
    }

    @Override // com.google.android.gms.internal.ma, com.google.android.gms.internal.ko
    protected void c(Context context) {
        super.c(context);
        try {
            try {
                nh nhVarH = h(context);
                a(28, nhVarH.b() ? 1L : 0L);
                String strA = nhVarH.a();
                if (strA != null) {
                    a(26, 5L);
                    a(24, strA);
                }
            } catch (com.google.android.gms.common.e e) {
                a(24, f(context));
            }
        } catch (mb e2) {
        } catch (IOException e3) {
        }
    }

    @Override // com.google.android.gms.internal.ko
    protected void d(Context context) {
        super.c(context);
        try {
            try {
                a(24, f(context));
            } catch (IOException e) {
                return;
            }
        } catch (mb e2) {
        }
        try {
            nh nhVarH = h(context);
            a(28, nhVarH.b() ? 1L : 0L);
            String strA = nhVarH.a();
            if (strA != null) {
                a(30, strA);
            }
        } catch (com.google.android.gms.common.e e3) {
        } catch (IOException e4) {
            a(28, 1L);
        }
    }

    nh h(Context context) throws IOException {
        String strA;
        int i = 0;
        try {
            AdvertisingIdClient.Info advertisingIdInfo = AdvertisingIdClient.getAdvertisingIdInfo(context);
            String id = advertisingIdInfo.getId();
            if (id == null || !id.matches("^[a-fA-F0-9]{8}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{4}-[a-fA-F0-9]{12}$")) {
                strA = id;
            } else {
                byte[] bArr = new byte[16];
                int i2 = 0;
                while (i < id.length()) {
                    if (i == 8 || i == 13 || i == 18 || i == 23) {
                        i++;
                    }
                    bArr[i2] = (byte) ((Character.digit(id.charAt(i), 16) << 4) + Character.digit(id.charAt(i + 1), 16));
                    i2++;
                    i += 2;
                }
                strA = this.c.a(bArr, true);
            }
            return new nh(this, strA, advertisingIdInfo.isLimitAdTrackingEnabled());
        } catch (com.google.android.gms.common.f e) {
            throw new IOException(e);
        }
    }
}
