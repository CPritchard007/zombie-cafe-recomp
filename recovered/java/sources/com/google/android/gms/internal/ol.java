package com.google.android.gms.internal;

import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ol extends om {
    protected List e;

    @Override // com.google.android.gms.internal.om
    public void a(oi oiVar) throws oj {
        int size = this.e == null ? 0 : this.e.size();
        for (int i = 0; i < size; i++) {
            oo ooVar = (oo) this.e.get(i);
            oiVar.e(ooVar.f512a);
            oiVar.b(ooVar.b);
        }
    }

    @Override // com.google.android.gms.internal.om
    protected int b() {
        int size = this.e == null ? 0 : this.e.size();
        int iF = 0;
        for (int i = 0; i < size; i++) {
            oo ooVar = (oo) this.e.get(i);
            iF = iF + oi.f(ooVar.f512a) + ooVar.b.length;
        }
        return iF;
    }
}
