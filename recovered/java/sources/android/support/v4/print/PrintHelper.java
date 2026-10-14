package android.support.v4.print;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class PrintHelper {
    public static final int COLOR_MODE_COLOR = 2;
    public static final int COLOR_MODE_MONOCHROME = 1;
    public static final int SCALE_MODE_FILL = 2;
    public static final int SCALE_MODE_FIT = 1;
    PrintHelperVersionImpl mImpl;

    final class PrintHelperKitkatImpl implements PrintHelperVersionImpl {
        private final PrintHelperKitkat printHelper;

        PrintHelperKitkatImpl(Context context) {
            this.printHelper = new PrintHelperKitkat(context);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getColorMode() {
            return this.printHelper.getColorMode();
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getScaleMode() {
            return this.printHelper.getScaleMode();
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(String str, Bitmap bitmap) {
            this.printHelper.printBitmap(str, bitmap);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(String str, Uri uri) {
            this.printHelper.printBitmap(str, uri);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setColorMode(int i) {
            this.printHelper.setColorMode(i);
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setScaleMode(int i) {
            this.printHelper.setScaleMode(i);
        }
    }

    final class PrintHelperStubImpl implements PrintHelperVersionImpl {
        int mColorMode;
        int mScaleMode;

        private PrintHelperStubImpl() {
            this.mScaleMode = 2;
            this.mColorMode = 2;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getColorMode() {
            return this.mColorMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public int getScaleMode() {
            return this.mScaleMode;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(String str, Bitmap bitmap) {
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void printBitmap(String str, Uri uri) {
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setColorMode(int i) {
            this.mColorMode = i;
        }

        @Override // android.support.v4.print.PrintHelper.PrintHelperVersionImpl
        public void setScaleMode(int i) {
            this.mScaleMode = i;
        }
    }

    interface PrintHelperVersionImpl {
        int getColorMode();

        int getScaleMode();

        void printBitmap(String str, Bitmap bitmap);

        void printBitmap(String str, Uri uri);

        void setColorMode(int i);

        void setScaleMode(int i);
    }

    public PrintHelper(Context context) {
        if (systemSupportsPrint()) {
            this.mImpl = new PrintHelperKitkatImpl(context);
        } else {
            this.mImpl = new PrintHelperStubImpl();
        }
    }

    public static boolean systemSupportsPrint() {
        return Build.VERSION.SDK_INT >= 19;
    }

    public int getColorMode() {
        return this.mImpl.getColorMode();
    }

    public int getScaleMode() {
        return this.mImpl.getScaleMode();
    }

    public void printBitmap(String str, Bitmap bitmap) {
        this.mImpl.printBitmap(str, bitmap);
    }

    public void printBitmap(String str, Uri uri) {
        this.mImpl.printBitmap(str, uri);
    }

    public void setColorMode(int i) {
        this.mImpl.setColorMode(i);
    }

    public void setScaleMode(int i) {
        this.mImpl.setScaleMode(i);
    }
}
