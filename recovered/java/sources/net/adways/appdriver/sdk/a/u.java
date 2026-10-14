package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.util.Log;
import java.lang.ref.WeakReference;
import org.apache.http.client.methods.HttpGet;
import org.apache.http.client.params.HttpClientParams;
import org.apache.http.impl.client.DefaultHttpClient;
import org.apache.http.params.HttpConnectionParams;
import org.apache.http.params.HttpParams;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class u {

    /* renamed from: a, reason: collision with root package name */
    private final t f628a;
    private final WeakReference b;

    public u(Context context, t tVar) {
        this.b = new WeakReference(context);
        this.f628a = tVar;
    }

    public final ai a() {
        ai aiVarA;
        ai aiVar = ai.Failure;
        DefaultHttpClient defaultHttpClient = new DefaultHttpClient();
        HttpParams params = defaultHttpClient.getParams();
        HttpClientParams.setRedirecting(params, false);
        HttpConnectionParams.setConnectionTimeout(params, 5000);
        HttpConnectionParams.setSoTimeout(params, 5000);
        try {
        } catch (Exception e) {
            Log.e("appdriver-log", "http request failed, retry after", e);
            aiVarA = ai.Retry;
        } finally {
            defaultHttpClient.getConnectionManager().shutdown();
        }
        if (this.f628a == null) {
            Log.e("appdriver-log", "http url cannot be null");
            throw new an("request cannot be null");
        }
        HttpGet httpGet = new HttpGet(this.f628a.d((Context) this.b.get()));
        v.a("send request: " + httpGet.getURI().toString());
        if (this.f628a.b((Context) this.b.get())) {
            aiVarA = ai.Canceled;
            Log.i("appdriver-log", "http request canceled");
        } else {
            aiVarA = this.f628a.a((Context) this.b.get(), defaultHttpClient.execute(httpGet));
        }
        return aiVarA;
    }
}
