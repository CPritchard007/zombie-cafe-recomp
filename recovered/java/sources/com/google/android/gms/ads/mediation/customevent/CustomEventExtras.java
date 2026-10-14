package com.google.android.gms.ads.mediation.customevent;

import com.google.ads.mediation.NetworkExtras;
import java.util.HashMap;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class CustomEventExtras implements NetworkExtras {

    /* renamed from: a, reason: collision with root package name */
    private final HashMap f147a = new HashMap();

    public Object getExtra(String str) {
        return this.f147a.get(str);
    }

    public void setExtra(String str, Object obj) {
        this.f147a.put(str, obj);
    }
}
