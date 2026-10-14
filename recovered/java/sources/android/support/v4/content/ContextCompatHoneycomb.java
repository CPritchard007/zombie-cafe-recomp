package android.support.v4.content;

import android.content.Context;
import android.content.Intent;
import java.io.File;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ContextCompatHoneycomb {
    ContextCompatHoneycomb() {
    }

    public static File getObbDir(Context context) {
        return context.getObbDir();
    }

    static void startActivities(Context context, Intent[] intentArr) {
        context.startActivities(intentArr);
    }
}
