package com.capcom.zombiecafeandroidJP;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.Log;
import android.view.MotionEvent;
import javax.microedition.khronos.opengles.GL10;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class SmurfsGLSurfaceView extends GLSurfaceView {
    public static GL10 b = null;

    /* renamed from: a, reason: collision with root package name */
    public CapcomRenderer f71a;
    private Context c;

    public SmurfsGLSurfaceView(ZombieCafeAndroid zombieCafeAndroid) {
        super(zombieCafeAndroid);
        ZombieCafeAndroid.o = ZombieCafeAndroid.s.getWidth();
        ZombieCafeAndroid.p = ZombieCafeAndroid.s.getHeight();
        this.c = zombieCafeAndroid;
        this.f71a = new CapcomRenderer(zombieCafeAndroid, ZombieCafeAndroid.o, ZombieCafeAndroid.p);
        setEGLContextClientVersion(1);
        setRenderer(this.f71a);
        b = CapcomRenderer.f68a;
    }

    public static native void DebugGame();

    public boolean a(MotionEvent motionEvent) {
        ZombieCafeAndroid.X = 0;
        if (motionEvent == null) {
            Log.e("BAD EVENT PASSED", "TO MOTION EVENT!! causing ANR???");
            return true;
        }
        int pointerCount = motionEvent.getPointerCount();
        if (pointerCount > 2) {
            pointerCount = 2;
        }
        boolean z = false;
        for (int i = 0; i < pointerCount; i++) {
            float x = motionEvent.getX(i);
            float y = motionEvent.getY(i);
            if (ZombieCafeAndroid.p < ((int) y) || ZombieCafeAndroid.o < ((int) x)) {
                return false;
            }
            switch (motionEvent.getAction()) {
                case 0:
                    Log.d("ZombieCafeAndroid", "/====== myTouchEvent MotionEvent.ACTION_DOWN =====/");
                    ZombieCafeAndroid.mouseDown(x, y, 0);
                    break;
                case 1:
                    Log.d("ZombieCafeAndroid", "/====== myTouchEvent MotionEvent.ACTION_UP =====/");
                    ZombieCafeAndroid.Z = (int) System.currentTimeMillis();
                    ZombieCafeAndroid.mouseUp(x, y, 0);
                    return true;
                case 2:
                    Log.d("ZombieCafeAndroid", "/====== myTouchEvent MotionEvent.ACTION_MOVE =====/");
                    ZombieCafeAndroid.mouseMoves(x, y, 0.0f, 0.0f, i);
                    z = true;
                    break;
            }
        }
        if (z && pointerCount > 1) {
            float f = ZombieCafeAndroid.W[0] - ZombieCafeAndroid.W[2];
            float f2 = ZombieCafeAndroid.W[1] - ZombieCafeAndroid.W[3];
        }
        return false;
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (!ZombieCafeAndroid.g) {
            if (motionEvent != null) {
                a(motionEvent);
            }
            super.onTouchEvent(motionEvent);
        }
        return true;
    }
}
