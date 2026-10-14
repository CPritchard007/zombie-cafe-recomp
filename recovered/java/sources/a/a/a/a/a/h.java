package a.a.a.a.a;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.Charset;
import java.util.Iterator;
import java.util.Random;
import org.apache.http.Header;
import org.apache.http.HttpEntity;
import org.apache.http.message.BasicHeader;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class h implements HttpEntity {

    /* renamed from: a, reason: collision with root package name */
    private static final char[] f9a = "-_1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
    private final c b;
    private final Header c;
    private long d;
    private volatile boolean e;

    public h() {
        this(e.STRICT, null, null);
    }

    public h(e eVar) {
        this(eVar, null, null);
    }

    public h(e eVar, String str, Charset charset) {
        str = str == null ? a() : str;
        this.b = new c("form-data", charset, str, eVar == null ? e.STRICT : eVar);
        this.c = new BasicHeader("Content-Type", a(str, charset));
        this.e = true;
    }

    protected String a() {
        StringBuilder sb = new StringBuilder();
        Random random = new Random();
        int iNextInt = random.nextInt(11) + 30;
        for (int i = 0; i < iNextInt; i++) {
            sb.append(f9a[random.nextInt(f9a.length)]);
        }
        return sb.toString();
    }

    protected String a(String str, Charset charset) {
        StringBuilder sb = new StringBuilder();
        sb.append("multipart/form-data; boundary=");
        sb.append(str);
        if (charset != null) {
            sb.append("; charset=");
            sb.append(charset.name());
        }
        return sb.toString();
    }

    public void a(a aVar) {
        this.b.a(aVar);
        this.e = true;
    }

    public void a(String str, a.a.a.a.a.a.b bVar) {
        a(new a(str, bVar));
    }

    @Override // org.apache.http.HttpEntity
    public void consumeContent() {
        if (isStreaming()) {
            throw new UnsupportedOperationException("Streaming entity does not implement #consumeContent()");
        }
    }

    @Override // org.apache.http.HttpEntity
    public InputStream getContent() {
        throw new UnsupportedOperationException("Multipart form entity does not implement #getContent()");
    }

    @Override // org.apache.http.HttpEntity
    public Header getContentEncoding() {
        return null;
    }

    @Override // org.apache.http.HttpEntity
    public long getContentLength() {
        if (this.e) {
            this.d = this.b.c();
            this.e = false;
        }
        return this.d;
    }

    @Override // org.apache.http.HttpEntity
    public Header getContentType() {
        return this.c;
    }

    @Override // org.apache.http.HttpEntity
    public boolean isChunked() {
        return !isRepeatable();
    }

    @Override // org.apache.http.HttpEntity
    public boolean isRepeatable() {
        Iterator it = this.b.a().iterator();
        while (it.hasNext()) {
            if (((a) it.next()).b().e() < 0) {
                return false;
            }
        }
        return true;
    }

    @Override // org.apache.http.HttpEntity
    public boolean isStreaming() {
        return !isRepeatable();
    }

    @Override // org.apache.http.HttpEntity
    public void writeTo(OutputStream outputStream) throws IOException {
        this.b.a(outputStream);
    }
}
