package com.capcom.zombiecafeandroidJP;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.os.Build;
import android.util.Log;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class CapcomRenderer implements GLSurfaceView.Renderer {

    /* renamed from: a, reason: collision with root package name */
    public static GL10 f68a;
    private static ZombieCafeAndroid d;
    private static boolean e;
    private static CapcomRenderer f;
    private static int g;
    private static int h;
    private static long j;
    int c = 0;
    public static boolean b = false;
    private static boolean i = false;
    private static int k = 0;

    public CapcomRenderer(ZombieCafeAndroid zombieCafeAndroid, int i2, int i3) {
        if (Build.MODEL.equals("GT-P7100") && Build.VERSION.RELEASE.equals("3.0.1")) {
            i3 -= 48;
        }
        e = false;
        float f2 = i2 / i3;
        g = i2;
        h = i3;
        d = zombieCafeAndroid;
        f = this;
    }

    private native void CreateGame(Class cls, int i2, int i3, Context context);

    private static native void render(int i2);

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onDrawFrame(GL10 gl10) throws InterruptedException {
        if (b) {
            try {
                if (e) {
                    e = false;
                    b = false;
                    d.finish();
                } else {
                    this.c++;
                    long jCurrentTimeMillis = (int) System.currentTimeMillis();
                    k = (int) (jCurrentTimeMillis - j);
                    j = jCurrentTimeMillis;
                    d.Tick(k);
                    render(k);
                    Thread.sleep(5L);
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onSurfaceChanged(GL10 gl10, int i2, int i3) {
        float f2 = i2 / i3;
        g = i2;
        h = i3;
        gl10.glViewport(0, 0, g, h);
        gl10.glTexEnvx(8960, 8704, 7681);
        gl10.glEnable(3553);
        gl10.glEnableClientState(32884);
        gl10.glEnableClientState(32888);
        gl10.glDisableClientState(32886);
        gl10.glBlendFunc(770, 771);
        gl10.glEnable(3042);
        gl10.glMatrixMode(5889);
        gl10.glLoadIdentity();
        gl10.glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
        gl10.glOrthof(0.0f, g, 0.0f, h, 1.0f, -1.0f);
        gl10.glMatrixMode(5888);
    }

    @Override // android.opengl.GLSurfaceView.Renderer
    public void onSurfaceCreated(GL10 gl10, EGLConfig eGLConfig) {
        f68a = gl10;
        try {
            int[] iArr = {0};
            gl10.glGetIntegerv(3379, iArr, 0);
            Log.i("FIXMEMORYLEAK", "MAX TEXTURE SIZE:  " + iArr[0]);
            iArr[0] = 0;
            gl10.glGetIntegerv(34018, iArr, 0);
            Log.i("FIXMEMORYLEAK", "MAX TEXTURE UNITS: " + iArr[0]);
        } catch (Exception e2) {
        }
        try {
            gl10.glViewport(0, 0, g, h);
            if (!b) {
                b = true;
            }
            gl10.glTexEnvx(8960, 8704, 7681);
            gl10.glEnable(3553);
            gl10.glEnableClientState(32884);
            gl10.glEnableClientState(32888);
            gl10.glDisableClientState(32886);
            gl10.glBlendFunc(770, 771);
            gl10.glEnable(3042);
            gl10.glMatrixMode(5889);
            gl10.glLoadIdentity();
            gl10.glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
            gl10.glOrthof(0.0f, g, 0.0f, h, 1.0f, -1.0f);
            gl10.glMatrixMode(5888);
        } catch (Exception e3) {
            e3.printStackTrace();
        }
        Log.d("CREATE GAME FROM RENDERER!", CC_Android.class.getName());
        CreateGame(CC_Android.class, g, h, d);
        Log.d("RETURNED FROM CREATE GAME", "I hope");
    }

    public void onSurfaceDestroyed(GL10 gl10, EGLConfig eGLConfig) {
        Log.v("ONSURFACE DESTROYED", "WAS CALLED");
    }
}
