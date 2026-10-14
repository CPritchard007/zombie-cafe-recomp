package net.adways.appdriver.sdk.a;

import android.content.Context;
import java.util.SortedMap;
import java.util.TreeMap;
import org.apache.http.HttpResponse;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class t {
    protected final String b;
    protected int c = 5;

    /* renamed from: a, reason: collision with root package name */
    protected final SortedMap f627a = new TreeMap();

    public t(String str) {
        this.b = str;
    }

    protected abstract ai a(Context context, HttpResponse httpResponse);

    public final void a(String str, String str2) {
        this.f627a.put(str, str2);
    }

    protected abstract boolean b(Context context);

    public final int c() {
        int i = this.c;
        this.c = i - 1;
        return i;
    }

    protected abstract String d(Context context);
}
