package a.a.a.a.a;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class a {

    /* renamed from: a, reason: collision with root package name */
    private final String f0a;
    private final b b;
    private final a.a.a.a.a.a.b c;

    public a(String str, a.a.a.a.a.a.b bVar) {
        if (str == null) {
            throw new IllegalArgumentException("Name may not be null");
        }
        if (bVar == null) {
            throw new IllegalArgumentException("Body may not be null");
        }
        this.f0a = str;
        this.c = bVar;
        this.b = new b();
        a(bVar);
        b(bVar);
        c(bVar);
    }

    public String a() {
        return this.f0a;
    }

    protected void a(a.a.a.a.a.a.b bVar) {
        StringBuilder sb = new StringBuilder();
        sb.append("form-data; name=\"");
        sb.append(a());
        sb.append("\"");
        if (bVar.b() != null) {
            sb.append("; filename=\"");
            sb.append(bVar.b());
            sb.append("\"");
        }
        a("Content-Disposition", sb.toString());
    }

    public void a(String str, String str2) {
        if (str == null) {
            throw new IllegalArgumentException("Field name may not be null");
        }
        this.b.a(new g(str, str2));
    }

    public a.a.a.a.a.a.b b() {
        return this.c;
    }

    protected void b(a.a.a.a.a.a.b bVar) {
        StringBuilder sb = new StringBuilder();
        sb.append(bVar.a());
        if (bVar.c() != null) {
            sb.append("; charset=");
            sb.append(bVar.c());
        }
        a("Content-Type", sb.toString());
    }

    public b c() {
        return this.b;
    }

    protected void c(a.a.a.a.a.a.b bVar) {
        a("Content-Transfer-Encoding", bVar.d());
    }
}
