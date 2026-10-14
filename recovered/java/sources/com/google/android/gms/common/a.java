package com.google.android.gms.common;

import android.app.PendingIntent;
import android.support.v4.widget.ViewDragHelper;
import com.google.android.gms.internal.lo;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class a {

    /* renamed from: a, reason: collision with root package name */
    public static final a f159a = new a(0, null);
    private final PendingIntent b;
    private final int c;

    public a(int i, PendingIntent pendingIntent) {
        this.c = i;
        this.b = pendingIntent;
    }

    private String a() {
        switch (this.c) {
            case 0:
                return "SUCCESS";
            case 1:
                return "SERVICE_MISSING";
            case 2:
                return "SERVICE_VERSION_UPDATE_REQUIRED";
            case 3:
                return "SERVICE_DISABLED";
            case 4:
                return "SIGN_IN_REQUIRED";
            case 5:
                return "INVALID_ACCOUNT";
            case 6:
                return "RESOLUTION_REQUIRED";
            case 7:
                return "NETWORK_ERROR";
            case 8:
                return "INTERNAL_ERROR";
            case 9:
                return "SERVICE_INVALID";
            case 10:
                return "DEVELOPER_ERROR";
            case com.google.android.gms.c.MapAttrs_uiZoomGestures /* 11 */:
                return "LICENSE_CHECK_FAILED";
            case com.google.android.gms.c.MapAttrs_useViewLifecycle /* 12 */:
            default:
                return "unknown status code " + this.c;
            case com.google.android.gms.c.MapAttrs_zOrderOnTop /* 13 */:
                return "CANCELED";
            case 14:
                return "TIMEOUT";
            case ViewDragHelper.EDGE_ALL /* 15 */:
                return "INTERRUPTED";
        }
    }

    public String toString() {
        return lo.a(this).a("statusCode", a()).a("resolution", this.b).toString();
    }
}
