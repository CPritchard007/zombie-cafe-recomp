package com.cameramanager;

import android.hardware.Camera;
import android.util.Log;
import com.capcom.zombiecafeandroidJP.CC_Android;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class c implements Camera.PictureCallback {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Cameramanager f14a;

    c(Cameramanager cameramanager) {
        this.f14a = cameramanager;
    }

    @Override // android.hardware.Camera.PictureCallback
    public void onPictureTaken(byte[] bArr, Camera camera) {
        try {
            this.f14a.e = this.f14a.getIntent().getExtras().getString("filename");
            Log.v("CameraManager", "filename:" + this.f14a.e);
            CC_Android.fromNative_fileWrite(this.f14a.e, 0, bArr.length, bArr);
            Log.v("CameraManager", "onPictureTaken - wrote bytes: " + bArr.length);
            this.f14a.finish();
        } catch (Exception e) {
            e.printStackTrace();
        }
        Log.v("CameraManager", "onPictureTaken - jpeg");
    }
}
