package com.google.android.gms.internal;

import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class kb {

    /* renamed from: a, reason: collision with root package name */
    private static final String[] f463a = {"text1", "text2", "icon", "intent_action", "intent_data", "intent_data_id", "intent_extra_data", "suggest_large_icon", "intent_activity"};
    private static final Map b = new HashMap(f463a.length);

    static {
        for (int i = 0; i < f463a.length; i++) {
            b.put(f463a[i], Integer.valueOf(i));
        }
    }

    public static String a(int i) {
        if (i < 0 || i >= f463a.length) {
            return null;
        }
        return f463a[i];
    }
}
