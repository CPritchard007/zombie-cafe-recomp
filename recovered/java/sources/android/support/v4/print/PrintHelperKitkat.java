package android.support.v4.print;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.graphics.pdf.PdfDocument;
import android.net.Uri;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.ParcelFileDescriptor;
import android.print.PageRange;
import android.print.PrintAttributes;
import android.print.PrintDocumentAdapter;
import android.print.PrintDocumentInfo;
import android.print.PrintManager;
import android.print.pdf.PrintedPdfDocument;
import android.util.Log;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class PrintHelperKitkat {
    public static final int COLOR_MODE_COLOR = 2;
    public static final int COLOR_MODE_MONOCHROME = 1;
    private static final String LOG_TAG = "PrintHelperKitkat";
    private static final int MAX_PRINT_SIZE = 3500;
    public static final int SCALE_MODE_FILL = 2;
    public static final int SCALE_MODE_FIT = 1;
    final Context mContext;
    int mScaleMode = 2;
    int mColorMode = 2;

    PrintHelperKitkat(Context context) {
        this.mContext = context;
    }

    private Bitmap loadBitmap(Uri uri, BitmapFactory.Options options) throws IOException {
        InputStream inputStreamOpenInputStream = null;
        if (uri == null || this.mContext == null) {
            throw new IllegalArgumentException("bad argument to loadBitmap");
        }
        try {
            inputStreamOpenInputStream = this.mContext.getContentResolver().openInputStream(uri);
            return BitmapFactory.decodeStream(inputStreamOpenInputStream, null, options);
        } finally {
            if (inputStreamOpenInputStream != null) {
                try {
                    inputStreamOpenInputStream.close();
                } catch (IOException e) {
                    Log.w(LOG_TAG, "close fail ", e);
                }
            }
        }
    }

    private Bitmap loadConstrainedBitmap(Uri uri, int i) throws IOException {
        if (i <= 0 || uri == null || this.mContext == null) {
            throw new IllegalArgumentException("bad argument to getScaledBitmap");
        }
        BitmapFactory.Options options = new BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        loadBitmap(uri, options);
        int i2 = options.outWidth;
        int i3 = options.outHeight;
        if (i2 <= 0 || i3 <= 0) {
            return null;
        }
        int iMax = Math.max(i2, i3);
        int i4 = 1;
        while (iMax > i) {
            iMax >>>= 1;
            i4 <<= 1;
        }
        if (i4 <= 0 || Math.min(i2, i3) / i4 <= 0) {
            return null;
        }
        BitmapFactory.Options options2 = new BitmapFactory.Options();
        options2.inMutable = true;
        options2.inSampleSize = i4;
        return loadBitmap(uri, options2);
    }

    public int getColorMode() {
        return this.mColorMode;
    }

    public int getScaleMode() {
        return this.mScaleMode;
    }

    public void printBitmap(final String str, final Bitmap bitmap) {
        if (bitmap == null) {
            return;
        }
        final int i = this.mScaleMode;
        PrintManager printManager = (PrintManager) this.mContext.getSystemService("print");
        PrintAttributes.MediaSize mediaSize = PrintAttributes.MediaSize.UNKNOWN_PORTRAIT;
        if (bitmap.getWidth() > bitmap.getHeight()) {
            mediaSize = PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE;
        }
        printManager.print(str, new PrintDocumentAdapter() { // from class: android.support.v4.print.PrintHelperKitkat.1
            private PrintAttributes mAttributes;

            @Override // android.print.PrintDocumentAdapter
            public void onLayout(PrintAttributes printAttributes, PrintAttributes printAttributes2, CancellationSignal cancellationSignal, PrintDocumentAdapter.LayoutResultCallback layoutResultCallback, Bundle bundle) {
                this.mAttributes = printAttributes2;
                layoutResultCallback.onLayoutFinished(new PrintDocumentInfo.Builder(str).setContentType(1).setPageCount(1).build(), printAttributes2.equals(printAttributes) ? false : true);
            }

            @Override // android.print.PrintDocumentAdapter
            public void onWrite(PageRange[] pageRangeArr, ParcelFileDescriptor parcelFileDescriptor, CancellationSignal cancellationSignal, PrintDocumentAdapter.WriteResultCallback writeResultCallback) throws IOException {
                PrintedPdfDocument printedPdfDocument = new PrintedPdfDocument(PrintHelperKitkat.this.mContext, this.mAttributes);
                try {
                    PdfDocument.Page pageStartPage = printedPdfDocument.startPage(1);
                    RectF rectF = new RectF(pageStartPage.getInfo().getContentRect());
                    Matrix matrix = new Matrix();
                    float fWidth = rectF.width() / bitmap.getWidth();
                    float fMax = i == 2 ? Math.max(fWidth, rectF.height() / bitmap.getHeight()) : Math.min(fWidth, rectF.height() / bitmap.getHeight());
                    matrix.postScale(fMax, fMax);
                    matrix.postTranslate((rectF.width() - (bitmap.getWidth() * fMax)) / 2.0f, (rectF.height() - (fMax * bitmap.getHeight())) / 2.0f);
                    pageStartPage.getCanvas().drawBitmap(bitmap, matrix, null);
                    printedPdfDocument.finishPage(pageStartPage);
                    try {
                        printedPdfDocument.writeTo(new FileOutputStream(parcelFileDescriptor.getFileDescriptor()));
                        writeResultCallback.onWriteFinished(new PageRange[]{PageRange.ALL_PAGES});
                    } catch (IOException e) {
                        Log.e(PrintHelperKitkat.LOG_TAG, "Error writing printed content", e);
                        writeResultCallback.onWriteFailed(null);
                    }
                    if (printedPdfDocument != null) {
                        printedPdfDocument.close();
                    }
                    if (parcelFileDescriptor != null) {
                        try {
                            parcelFileDescriptor.close();
                        } catch (IOException e2) {
                        }
                    }
                } catch (Throwable th) {
                    if (printedPdfDocument != null) {
                        printedPdfDocument.close();
                    }
                    if (parcelFileDescriptor != null) {
                        try {
                            parcelFileDescriptor.close();
                        } catch (IOException e3) {
                        }
                    }
                    throw th;
                }
            }
        }, new PrintAttributes.Builder().setMediaSize(mediaSize).setColorMode(this.mColorMode).build());
    }

    public void printBitmap(String str, Uri uri) {
        printBitmap(str, loadConstrainedBitmap(uri, MAX_PRINT_SIZE));
    }

    public void setColorMode(int i) {
        this.mColorMode = i;
    }

    public void setScaleMode(int i) {
        this.mScaleMode = i;
    }
}
