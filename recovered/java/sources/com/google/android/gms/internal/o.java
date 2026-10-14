package com.google.android.gms.internal;

import android.content.Context;
import android.os.IBinder;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class o extends com.google.android.gms.a.e {

    /* renamed from: a, reason: collision with root package name */
    private static final o f509a = new o();

    private o() {
        super("com.google.android.gms.ads.AdManagerCreatorImpl");
    }

    public static y a(Context context, al alVar, String str, bu buVar) {
        y yVarB;
        if (com.google.android.gms.common.g.a(context) == 0 && (yVarB = f509a.b(context, alVar, str, buVar)) != null) {
            return yVarB;
        }
        ig.a("Using AdManager from the client jar.");
        return new oz(context, alVar, str, buVar, new ev(5089000, 5089000, true));
    }

    private y b(Context context, al alVar, String str, bu buVar) {
        try {
            return z.a(((ab) a(context)).a(com.google.android.gms.a.d.a(context), alVar, str, buVar, 5089000));
        } catch (RemoteException e) {
            ig.c("Could not create remote AdManager.", e);
            return null;
        } catch (com.google.android.gms.a.f e2) {
            ig.c("Could not create remote AdManager.", e2);
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.a.e
    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public ab a(IBinder iBinder) {
        return ac.a(iBinder);
    }
}
