package com.google.android.gms.internal;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import dalvik.system.DexClassLoader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.nio.ByteBuffer;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import javax.crypto.NoSuchPaddingException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ma extends ko {
    private static Method e;
    private static Method f;
    private static Method g;
    private static Method h;
    private static Method i;
    private static Method j;
    private static Method k;
    private static Method l;
    private static String m;
    private static or o;
    private static long n = 0;
    static boolean d = false;

    protected ma(Context context, ok okVar, oq oqVar) {
        super(context, okVar, oqVar);
    }

    static String a() throws mb {
        if (m == null) {
            throw new mb();
        }
        return m;
    }

    static String a(Context context, ok okVar) throws mb {
        if (h == null) {
            throw new mb();
        }
        try {
            ByteBuffer byteBuffer = (ByteBuffer) h.invoke(null, context);
            if (byteBuffer == null) {
                throw new mb();
            }
            return okVar.a(byteBuffer.array(), true);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    static ArrayList a(MotionEvent motionEvent, DisplayMetrics displayMetrics) throws mb {
        if (i == null || motionEvent == null) {
            throw new mb();
        }
        try {
            return (ArrayList) i.invoke(null, motionEvent, displayMetrics);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    protected static synchronized void a(String str, Context context, ok okVar) {
        if (!d) {
            try {
                o = new or(okVar, null);
                m = str;
                h(context);
                n = b().longValue();
                d = true;
            } catch (mb e2) {
            } catch (UnsupportedOperationException e3) {
            }
        }
    }

    static Long b() throws mb {
        if (e == null) {
            throw new mb();
        }
        try {
            return (Long) e.invoke(null, new Object[0]);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    static String b(Context context, ok okVar) throws mb {
        if (k == null) {
            throw new mb();
        }
        try {
            ByteBuffer byteBuffer = (ByteBuffer) k.invoke(null, context);
            if (byteBuffer == null) {
                throw new mb();
            }
            return okVar.a(byteBuffer.array(), true);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    private static String b(byte[] bArr, String str) throws mb {
        try {
            return new String(o.a(bArr, str), "UTF-8");
        } catch (os e2) {
            throw new mb(e2);
        } catch (UnsupportedEncodingException e3) {
            throw new mb(e3);
        }
    }

    static String c() throws mb {
        if (g == null) {
            throw new mb();
        }
        try {
            return (String) g.invoke(null, new Object[0]);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    static Long d() throws mb {
        if (f == null) {
            throw new mb();
        }
        try {
            return (Long) f.invoke(null, new Object[0]);
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    static String f(Context context) throws mb {
        if (j == null) {
            throw new mb();
        }
        try {
            String str = (String) j.invoke(null, context);
            if (str == null) {
                throw new mb();
            }
            return str;
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    static ArrayList g(Context context) throws mb {
        if (l == null) {
            throw new mb();
        }
        try {
            ArrayList arrayList = (ArrayList) l.invoke(null, context);
            if (arrayList == null || arrayList.size() != 2) {
                throw new mb();
            }
            return arrayList;
        } catch (IllegalAccessException e2) {
            throw new mb(e2);
        } catch (InvocationTargetException e3) {
            throw new mb(e3);
        }
    }

    private static void h(Context context) throws NoSuchPaddingException, NoSuchAlgorithmException, InvalidKeyException, IOException, mb, InvalidAlgorithmParameterException {
        try {
            byte[] bArrA = o.a(ou.a());
            byte[] bArrA2 = o.a(bArrA, ou.b());
            File cacheDir = context.getCacheDir();
            if (cacheDir == null && (cacheDir = context.getDir("dex", 0)) == null) {
                throw new mb();
            }
            File file = cacheDir;
            File fileCreateTempFile = File.createTempFile("ads", ".jar", file);
            FileOutputStream fileOutputStream = new FileOutputStream(fileCreateTempFile);
            fileOutputStream.write(bArrA2, 0, bArrA2.length);
            fileOutputStream.close();
            try {
                DexClassLoader dexClassLoader = new DexClassLoader(fileCreateTempFile.getAbsolutePath(), file.getAbsolutePath(), null, context.getClassLoader());
                Class clsLoadClass = dexClassLoader.loadClass(b(bArrA, ou.c()));
                Class clsLoadClass2 = dexClassLoader.loadClass(b(bArrA, ou.o()));
                Class clsLoadClass3 = dexClassLoader.loadClass(b(bArrA, ou.i()));
                Class clsLoadClass4 = dexClassLoader.loadClass(b(bArrA, ou.g()));
                Class clsLoadClass5 = dexClassLoader.loadClass(b(bArrA, ou.q()));
                Class clsLoadClass6 = dexClassLoader.loadClass(b(bArrA, ou.e()));
                Class clsLoadClass7 = dexClassLoader.loadClass(b(bArrA, ou.m()));
                Class clsLoadClass8 = dexClassLoader.loadClass(b(bArrA, ou.k()));
                e = clsLoadClass.getMethod(b(bArrA, ou.d()), new Class[0]);
                f = clsLoadClass2.getMethod(b(bArrA, ou.p()), new Class[0]);
                g = clsLoadClass3.getMethod(b(bArrA, ou.j()), new Class[0]);
                h = clsLoadClass4.getMethod(b(bArrA, ou.h()), Context.class);
                i = clsLoadClass5.getMethod(b(bArrA, ou.r()), MotionEvent.class, DisplayMetrics.class);
                j = clsLoadClass6.getMethod(b(bArrA, ou.f()), Context.class);
                k = clsLoadClass7.getMethod(b(bArrA, ou.n()), Context.class);
                l = clsLoadClass8.getMethod(b(bArrA, ou.l()), Context.class);
            } finally {
                String name = fileCreateTempFile.getName();
                fileCreateTempFile.delete();
                new File(file, name.replace(".jar", ".dex")).delete();
            }
        } catch (os e2) {
            throw new mb(e2);
        } catch (FileNotFoundException e3) {
            throw new mb(e3);
        } catch (IOException e4) {
            throw new mb(e4);
        } catch (ClassNotFoundException e5) {
            throw new mb(e5);
        } catch (NoSuchMethodException e6) {
            throw new mb(e6);
        } catch (NullPointerException e7) {
            throw new mb(e7);
        }
    }

    @Override // com.google.android.gms.internal.ko
    protected void c(Context context) {
        try {
            try {
                a(1, c());
            } catch (mb e2) {
            }
            try {
                a(2, a());
            } catch (mb e3) {
            }
            try {
                a(25, b().longValue());
            } catch (mb e4) {
            }
            try {
                ArrayList arrayListG = g(context);
                a(31, ((Long) arrayListG.get(0)).longValue());
                a(32, ((Long) arrayListG.get(1)).longValue());
            } catch (mb e5) {
            }
            try {
                a(33, d().longValue());
            } catch (mb e6) {
            }
        } catch (IOException e7) {
        }
    }

    @Override // com.google.android.gms.internal.ko
    protected void e(Context context) {
        try {
            try {
                a(2, a());
            } catch (IOException e2) {
                return;
            }
        } catch (mb e3) {
        }
        try {
            a(1, c());
        } catch (mb e4) {
        }
        try {
            long jLongValue = b().longValue();
            a(25, jLongValue);
            if (n != 0) {
                a(17, jLongValue - n);
                a(23, n);
            }
        } catch (mb e5) {
        }
        try {
            ArrayList arrayListA = a(this.f467a, this.b);
            a(14, ((Long) arrayListA.get(0)).longValue());
            a(15, ((Long) arrayListA.get(1)).longValue());
            if (arrayListA.size() >= 3) {
                a(16, ((Long) arrayListA.get(2)).longValue());
            }
        } catch (mb e6) {
        }
        try {
            a(27, a(context, this.c));
        } catch (mb e7) {
        }
        try {
            a(29, b(context, this.c));
        } catch (mb e8) {
        }
    }
}
