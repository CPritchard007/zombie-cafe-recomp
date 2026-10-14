package a.a.a.a.a;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.http.util.ByteArrayBuffer;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class c {

    /* renamed from: a, reason: collision with root package name */
    private static final ByteArrayBuffer f4a = a(f.f7a, ": ");
    private static final ByteArrayBuffer b = a(f.f7a, "\r\n");
    private static final ByteArrayBuffer c = a(f.f7a, "--");
    private final String d;
    private final Charset e;
    private final String f;
    private final List g;
    private final e h;

    public c(String str, Charset charset, String str2, e eVar) {
        if (str == null) {
            throw new IllegalArgumentException("Multipart subtype may not be null");
        }
        if (str2 == null) {
            throw new IllegalArgumentException("Multipart boundary may not be null");
        }
        this.d = str;
        this.e = charset == null ? f.f7a : charset;
        this.f = str2;
        this.g = new ArrayList();
        this.h = eVar;
    }

    private static ByteArrayBuffer a(Charset charset, String str) {
        ByteBuffer byteBufferEncode = charset.encode(CharBuffer.wrap(str));
        ByteArrayBuffer byteArrayBuffer = new ByteArrayBuffer(byteBufferEncode.remaining());
        byteArrayBuffer.append(byteBufferEncode.array(), byteBufferEncode.position(), byteBufferEncode.remaining());
        return byteArrayBuffer;
    }

    private void a(e eVar, OutputStream outputStream, boolean z) throws IOException {
        ByteArrayBuffer byteArrayBufferA = a(this.e, b());
        for (a aVar : this.g) {
            a(c, outputStream);
            a(byteArrayBufferA, outputStream);
            a(b, outputStream);
            b bVarC = aVar.c();
            switch (eVar) {
                case STRICT:
                    Iterator it = bVarC.iterator();
                    while (it.hasNext()) {
                        a((g) it.next(), outputStream);
                    }
                    break;
                case BROWSER_COMPATIBLE:
                    a(aVar.c().a("Content-Disposition"), this.e, outputStream);
                    if (aVar.b().b() != null) {
                        a(aVar.c().a("Content-Type"), this.e, outputStream);
                        break;
                    }
                    break;
            }
            a(b, outputStream);
            if (z) {
                aVar.b().a(outputStream);
            }
            a(b, outputStream);
        }
        a(c, outputStream);
        a(byteArrayBufferA, outputStream);
        a(c, outputStream);
        a(b, outputStream);
    }

    private static void a(g gVar, OutputStream outputStream) throws IOException {
        a(gVar.a(), outputStream);
        a(f4a, outputStream);
        a(gVar.b(), outputStream);
        a(b, outputStream);
    }

    private static void a(g gVar, Charset charset, OutputStream outputStream) throws IOException {
        a(gVar.a(), charset, outputStream);
        a(f4a, outputStream);
        a(gVar.b(), charset, outputStream);
        a(b, outputStream);
    }

    private static void a(String str, OutputStream outputStream) throws IOException {
        a(a(f.f7a, str), outputStream);
    }

    private static void a(String str, Charset charset, OutputStream outputStream) throws IOException {
        a(a(charset, str), outputStream);
    }

    private static void a(ByteArrayBuffer byteArrayBuffer, OutputStream outputStream) throws IOException {
        outputStream.write(byteArrayBuffer.buffer(), 0, byteArrayBuffer.length());
    }

    public List a() {
        return this.g;
    }

    public void a(a aVar) {
        if (aVar == null) {
            return;
        }
        this.g.add(aVar);
    }

    public void a(OutputStream outputStream) throws IOException {
        a(this.h, outputStream, true);
    }

    public String b() {
        return this.f;
    }

    public long c() {
        Iterator it = this.g.iterator();
        long j = 0;
        while (it.hasNext()) {
            long jE = ((a) it.next()).b().e();
            if (jE < 0) {
                return -1L;
            }
            j = jE + j;
        }
        try {
            a(this.h, (OutputStream) new ByteArrayOutputStream(), false);
            return r0.toByteArray().length + j;
        } catch (IOException e) {
            return -1L;
        }
    }
}
