package com.google.android.gms.common.images;

import android.content.Context;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.ParcelFileDescriptor;
import android.os.ResultReceiver;
import com.google.android.gms.internal.kj;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Map;
import java.util.concurrent.ExecutorService;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ImageManager {

    /* renamed from: a, reason: collision with root package name */
    private static final Object f170a = new Object();
    private static HashSet b = new HashSet();
    private final Context c;
    private final Handler d;
    private final ExecutorService e;
    private final b f;
    private final kj g;
    private final Map h;
    private final Map i;
    private final Map j;

    final class ImageReceiver extends ResultReceiver {

        /* renamed from: a, reason: collision with root package name */
        final /* synthetic */ ImageManager f171a;
        private final Uri b;
        private final ArrayList c;

        @Override // android.os.ResultReceiver
        public void onReceiveResult(int i, Bundle bundle) {
            this.f171a.e.execute(new c(this.f171a, this.b, (ParcelFileDescriptor) bundle.getParcelable("com.google.android.gms.extra.fileDescriptor")));
        }
    }
}
