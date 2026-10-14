package com.google.android.gms.games.request;

import android.os.Parcelable;
import com.google.android.gms.common.data.d;
import com.google.android.gms.games.Game;
import com.google.android.gms.games.Player;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface GameRequest extends Parcelable, d {
    int a_(String str);

    String d();

    Game e();

    Player f();

    byte[] h();

    int i();

    long j();

    long k();

    int l();

    List n();
}
