package a.a.a.a.a;

import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class b implements Iterable {

    /* renamed from: a, reason: collision with root package name */
    private final List f3a = new LinkedList();
    private final Map b = new HashMap();

    public g a(String str) {
        if (str == null) {
            return null;
        }
        List list = (List) this.b.get(str.toLowerCase(Locale.US));
        if (list == null || list.isEmpty()) {
            return null;
        }
        return (g) list.get(0);
    }

    public void a(g gVar) {
        if (gVar == null) {
            return;
        }
        String lowerCase = gVar.a().toLowerCase(Locale.US);
        List linkedList = (List) this.b.get(lowerCase);
        if (linkedList == null) {
            linkedList = new LinkedList();
            this.b.put(lowerCase, linkedList);
        }
        linkedList.add(gVar);
        this.f3a.add(gVar);
    }

    @Override // java.lang.Iterable
    public Iterator iterator() {
        return Collections.unmodifiableList(this.f3a).iterator();
    }

    public String toString() {
        return this.f3a.toString();
    }
}
