package a.a.a.a.a.a;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.OutputStream;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class d extends a {

    /* renamed from: a, reason: collision with root package name */
    private final File f2a;
    private final String b;
    private final String c;

    public d(File file, String str, String str2, String str3) {
        super(str2);
        if (file == null) {
            throw new IllegalArgumentException("File may not be null");
        }
        this.f2a = file;
        if (str != null) {
            this.b = str;
        } else {
            this.b = file.getName();
        }
        this.c = str3;
    }

    @Override // a.a.a.a.a.a.b
    public void a(OutputStream outputStream) throws IOException {
        if (outputStream == null) {
            throw new IllegalArgumentException("Output stream may not be null");
        }
        FileInputStream fileInputStream = new FileInputStream(this.f2a);
        try {
            byte[] bArr = new byte[4096];
            while (true) {
                int i = fileInputStream.read(bArr);
                if (i == -1) {
                    outputStream.flush();
                    return;
                }
                outputStream.write(bArr, 0, i);
            }
        } finally {
            fileInputStream.close();
        }
    }

    @Override // a.a.a.a.a.a.b
    public String b() {
        return this.b;
    }

    @Override // a.a.a.a.a.a.c
    public String c() {
        return this.c;
    }

    @Override // a.a.a.a.a.a.c
    public String d() {
        return "binary";
    }

    @Override // a.a.a.a.a.a.c
    public long e() {
        return this.f2a.length();
    }
}
