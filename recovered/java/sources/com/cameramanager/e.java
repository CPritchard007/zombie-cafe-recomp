package com.cameramanager;

import android.content.Context;
import android.hardware.Camera;
import android.util.Log;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.View;
import android.view.ViewGroup;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class e extends ViewGroup implements SurfaceHolder.Callback {

    /* renamed from: a, reason: collision with root package name */
    SurfaceView f16a;
    SurfaceHolder b;
    Camera.Size c;
    List d;
    Camera e;
    private final String f;

    e(Context context) {
        super(context);
        this.f = "Preview";
        this.f16a = new SurfaceView(context);
        addView(this.f16a);
        this.b = this.f16a.getHolder();
        this.b.addCallback(this);
        this.b.setType(3);
    }

    private Camera.Size a(List list, int i, int i2) {
        double d = i / i2;
        if (list == null) {
            return null;
        }
        Iterator it = list.iterator();
        Camera.Size size = null;
        double dAbs = Double.MAX_VALUE;
        while (it.hasNext()) {
            Camera.Size size2 = (Camera.Size) it.next();
            if (Math.abs((size2.width / size2.height) - d) <= 0.1d && Math.abs(size2.height - i2) < dAbs) {
                dAbs = Math.abs(size2.height - i2);
                size = size2;
            }
        }
        if (size != null) {
            return size;
        }
        double dAbs2 = Double.MAX_VALUE;
        Iterator it2 = list.iterator();
        while (it2.hasNext()) {
            Camera.Size size3 = (Camera.Size) it2.next();
            if (Math.abs(size3.height - i2) < dAbs2) {
                dAbs2 = Math.abs(size3.height - i2);
                size = size3;
            }
        }
        return size;
    }

    /* JADX WARN: Code restructure failed: missing block: B:7:0x004a, code lost:
    
        r0 = r1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(android.hardware.Camera r9) {
        /*
            r8 = this;
            r1 = 0
            r7 = 400(0x190, float:5.6E-43)
            r8.e = r9
            android.hardware.Camera r0 = r8.e
            if (r0 == 0) goto L8e
            android.hardware.Camera r0 = r8.e
            android.hardware.Camera$Parameters r0 = r0.getParameters()
            java.util.List r0 = r0.getSupportedPreviewSizes()
            r8.d = r0
            r8.requestLayout()
            android.hardware.Camera r0 = r8.e
            android.hardware.Camera$Parameters r2 = r0.getParameters()
            r0 = 99
            r2.setJpegQuality(r0)
            r0 = 1
            r2.setJpegThumbnailQuality(r0)
            r2.setJpegThumbnailSize(r1, r1)
            java.lang.String r0 = "night"
            r2.setSceneMode(r0)
            java.util.List r0 = r2.getSupportedPictureSizes()
            r0.size()
            android.hardware.Camera$Size r1 = new android.hardware.Camera$Size
            android.hardware.Camera r3 = r8.e
            r3.getClass()
            r1.<init>(r3, r7, r7)
            java.util.Iterator r3 = r0.iterator()
        L44:
            boolean r0 = r3.hasNext()
            if (r0 != 0) goto L8f
        L4a:
            r0 = r1
        L4b:
            java.lang.String r1 = "==============Set picture size"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "width:"
            r3.<init>(r4)
            int r4 = r0.width
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.v(r1, r3)
            java.lang.String r1 = "==============Set picture size"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "height:"
            r3.<init>(r4)
            int r4 = r0.height
            java.lang.StringBuilder r3 = r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.v(r1, r3)
            int r1 = r0.width
            int r0 = r0.height
            r2.setPictureSize(r1, r0)
            android.hardware.Camera r0 = r8.e
            r0.setParameters(r2)
            android.hardware.Camera r0 = r8.e
            android.hardware.Camera r1 = r8.e
            android.hardware.Camera$Parameters r1 = r1.getParameters()
            r0.setParameters(r1)
        L8e:
            return
        L8f:
            java.lang.Object r0 = r3.next()
            android.hardware.Camera$Size r0 = (android.hardware.Camera.Size) r0
            java.lang.String r4 = "==============Available picture size"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "width:"
            r5.<init>(r6)
            int r6 = r0.width
            java.lang.StringBuilder r5 = r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.v(r4, r5)
            java.lang.String r4 = "==============Available picture size"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "height:"
            r5.<init>(r6)
            int r6 = r0.height
            java.lang.StringBuilder r5 = r5.append(r6)
            java.lang.String r5 = r5.toString()
            android.util.Log.v(r4, r5)
            int r4 = r0.width
            r5 = 500(0x1f4, float:7.0E-43)
            if (r4 >= r5) goto L44
            int r3 = r0.width
            if (r3 <= r7) goto L4a
            goto L4b
        */
        throw new UnsupportedOperationException("Method not decompiled: com.cameramanager.e.a(android.hardware.Camera):void");
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        int i5;
        int i6;
        if (!z || getChildCount() <= 0) {
            return;
        }
        View childAt = getChildAt(0);
        int i7 = i3 - i;
        int i8 = i4 - i2;
        if (this.c != null) {
            i6 = this.c.width;
            i5 = this.c.height;
        } else {
            i5 = i8;
            i6 = i7;
        }
        if (i7 * i5 > i8 * i6) {
            int i9 = (i6 * i8) / i5;
            childAt.layout((i7 - i9) / 2, 0, (i9 + i7) / 2, i8);
        } else {
            int i10 = (i5 * i7) / i6;
            childAt.layout(0, (i8 - i10) / 2, i7, (i10 + i8) / 2);
        }
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        int iResolveSize = resolveSize(getSuggestedMinimumWidth(), i);
        int iResolveSize2 = resolveSize(getSuggestedMinimumHeight(), i2);
        setMeasuredDimension(iResolveSize, iResolveSize2);
        if (this.d != null) {
            this.c = a(this.d, iResolveSize, iResolveSize2);
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceChanged(SurfaceHolder surfaceHolder, int i, int i2, int i3) {
        Camera.Parameters parameters = this.e.getParameters();
        parameters.setPreviewSize(this.c.width, this.c.height);
        requestLayout();
        this.e.setParameters(parameters);
        try {
            this.e.startPreview();
        } catch (Exception e) {
            e.printStackTrace();
            this.e.startPreview();
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceCreated(SurfaceHolder surfaceHolder) throws IOException {
        try {
            if (this.e != null) {
                this.e.setPreviewDisplay(surfaceHolder);
            }
        } catch (IOException e) {
            Log.e("Preview", "IOException caused by setPreviewDisplay()", e);
        }
    }

    @Override // android.view.SurfaceHolder.Callback
    public void surfaceDestroyed(SurfaceHolder surfaceHolder) {
        if (this.e != null) {
            this.e.stopPreview();
        }
    }
}
