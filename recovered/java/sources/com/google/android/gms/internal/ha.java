package com.google.android.gms.internal;

import com.google.android.gms.common.internal.safeparcel.SafeParcelable;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ha implements SafeParcelable {

    /* renamed from: a, reason: collision with root package name */
    private static final Object f399a = new Object();
    private static ClassLoader b = null;
    private static Integer c = null;
    private boolean d = false;

    protected static ClassLoader B() {
        ClassLoader classLoader;
        synchronized (f399a) {
            classLoader = b;
        }
        return classLoader;
    }

    protected static Integer C() {
        Integer num;
        synchronized (f399a) {
            num = c;
        }
        return num;
    }

    private static boolean a(Class cls) {
        try {
            return SafeParcelable.NULL.equals(cls.getField("NULL").get(null));
        } catch (IllegalAccessException e) {
            return false;
        } catch (NoSuchFieldException e2) {
            return false;
        }
    }

    protected static boolean b(String str) {
        ClassLoader classLoaderB = B();
        if (classLoaderB == null) {
            return true;
        }
        try {
            return a(classLoaderB.loadClass(str));
        } catch (Exception e) {
            return false;
        }
    }

    protected boolean D() {
        return this.d;
    }
}
