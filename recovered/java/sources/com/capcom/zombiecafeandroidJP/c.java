package com.capcom.zombiecafeandroidJP;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class c implements SensorEventListener {

    /* renamed from: a, reason: collision with root package name */
    private long f102a = 0;
    private long b = 0;
    private long c = 0;
    private long d = 0;
    private float e = 0.0f;
    private float f = 0.0f;
    private float g = 0.0f;
    private float h = 0.0f;
    private float i = 0.0f;
    private float j = 0.0f;
    private float k = 0.0f;

    c() {
    }

    @Override // android.hardware.SensorEventListener
    public void onAccuracyChanged(Sensor sensor, int i) {
    }

    @Override // android.hardware.SensorEventListener
    public void onSensorChanged(SensorEvent sensorEvent) {
        this.f102a = sensorEvent.timestamp;
        this.e = sensorEvent.values[0];
        this.f = sensorEvent.values[1];
        this.g = sensorEvent.values[2];
        if (this.c == 0) {
            this.c = this.f102a;
            this.d = this.f102a;
            this.h = this.e;
            this.i = this.f;
            this.j = this.g;
        } else {
            this.b = this.f102a - this.c;
            if (this.b > 0) {
                this.k = Math.abs(((((this.e + this.f) + this.g) - this.h) - this.i) - this.j) / this.b;
                this.k *= 1000000.0f;
                if (this.k > b.f101a) {
                    if (((int) ((this.f102a - this.d) / 100000)) >= b.b) {
                        System.out.println("shake event");
                        b.e.onShake(this.k);
                    }
                    this.d = this.f102a;
                }
                this.h = this.e;
                this.i = this.f;
                this.j = this.g;
                this.c = this.f102a;
            }
        }
        b.e.onAccelerationChanged(this.e, this.f, this.g);
    }
}
