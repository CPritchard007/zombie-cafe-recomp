package a.a.a.a.a.a;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class a implements b {

    /* renamed from: a, reason: collision with root package name */
    private final String f1a;
    private final String b;
    private final String c;

    public a(String str) {
        if (str == null) {
            throw new IllegalArgumentException("MIME type may not be null");
        }
        this.f1a = str;
        int iIndexOf = str.indexOf(47);
        if (iIndexOf != -1) {
            this.b = str.substring(0, iIndexOf);
            this.c = str.substring(iIndexOf + 1);
        } else {
            this.b = str;
            this.c = null;
        }
    }

    @Override // a.a.a.a.a.a.c
    public String a() {
        return this.f1a;
    }
}
