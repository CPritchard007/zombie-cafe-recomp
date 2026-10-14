package com.google.android.gms.drive.metadata.internal;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.internal.safeparcel.SafeParcelable;
import com.google.android.gms.internal.ls;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class AppVisibleCustomProperties implements SafeParcelable, Iterable {
    public static final Parcelable.Creator CREATOR = new c();

    /* renamed from: a, reason: collision with root package name */
    public static final AppVisibleCustomProperties f219a = new b().a();
    final int b;
    final List c;

    AppVisibleCustomProperties(int i, Collection collection) {
        this.b = i;
        ls.a(collection);
        this.c = new ArrayList(collection);
    }

    private AppVisibleCustomProperties(Collection collection) {
        this(1, collection);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    @Override // java.lang.Iterable
    public Iterator iterator() {
        return this.c.iterator();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        c.a(this, parcel, i);
    }
}
