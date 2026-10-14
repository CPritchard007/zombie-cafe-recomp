package com.google.android.gms.internal;

import android.content.Context;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class id extends hl {

    /* renamed from: a, reason: collision with root package name */
    private final String f425a;
    private final Context b;
    private final String c;

    public id(Context context, String str, String str2) {
        this.b = context;
        this.f425a = str;
        this.c = str2;
    }

    @Override // com.google.android.gms.internal.hl
    public void a() {
        try {
            ig.d("Pinging URL: " + this.c);
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(this.c).openConnection();
            try {
                hq.a(this.b, this.f425a, true, httpURLConnection);
                int responseCode = httpURLConnection.getResponseCode();
                if (responseCode < 200 || responseCode >= 300) {
                    ig.e("Received non-success response code " + responseCode + " from pinging URL: " + this.c);
                }
            } finally {
                httpURLConnection.disconnect();
            }
        } catch (IOException e) {
            ig.e("Error while pinging URL: " + this.c + ". " + e.getMessage());
        } catch (IndexOutOfBoundsException e2) {
            ig.e("Error while parsing ping URL: " + this.c + ". " + e2.getMessage());
        }
    }

    @Override // com.google.android.gms.internal.hl
    public void b() {
    }
}
