package android.support.v4.os;

import android.os.Parcel;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface ParcelableCompatCreatorCallbacks {
    Object createFromParcel(Parcel parcel, ClassLoader classLoader);

    Object[] newArray(int i);
}
