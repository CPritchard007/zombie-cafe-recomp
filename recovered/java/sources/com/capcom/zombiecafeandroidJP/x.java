package com.capcom.zombiecafeandroidJP;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class x implements Comparable {

    /* renamed from: a, reason: collision with root package name */
    public String f118a;
    public int b;

    private x() {
    }

    /* synthetic */ x(x xVar) {
        this();
    }

    @Override // java.lang.Comparable
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public int compareTo(x xVar) {
        if (xVar == null) {
            return -1;
        }
        return toString().compareTo(xVar.toString());
    }

    public boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        return toString().equals(obj.toString());
    }

    public int hashCode() {
        return toString().hashCode();
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(this.f118a).append(":").append(this.b);
        return sb.toString();
    }
}
