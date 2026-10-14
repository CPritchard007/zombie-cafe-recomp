package net.adways.appdriver.sdk.a;

import android.util.Log;
import java.util.ResourceBundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ad {

    /* renamed from: a, reason: collision with root package name */
    private ResourceBundle f611a;

    public ad() {
        this.f611a = null;
        this.f611a = ResourceBundle.getBundle("net.adways.appdriver.sdk.appdriver");
    }

    public final String a(String str) {
        String string = this.f611a.getString(str);
        if (string == null) {
            Log.e("appdriver-log", "not find property:" + str);
        }
        return string;
    }
}
