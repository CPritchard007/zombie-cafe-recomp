package net.adways.appdriver.sdk.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ae {

    /* renamed from: a, reason: collision with root package name */
    private final SharedPreferences f612a;
    private final WeakReference b;

    public ae(Context context) {
        this.b = new WeakReference(context);
        this.f612a = ((Context) this.b.get()).getSharedPreferences("appdriver_shared_prefs", 0);
    }

    public final List a() throws JSONException {
        String string = this.f612a.getString("QUEUE_REQ", null);
        if (string == null) {
            return null;
        }
        v.a("found stored request queue:\n" + string);
        ArrayList arrayList = new ArrayList();
        try {
            ak akVar = new ak();
            JSONArray jSONArray = new JSONArray(string);
            for (int i = 0; i < jSONArray.length(); i++) {
                arrayList.add(akVar.a((Context) this.b.get(), jSONArray.getJSONObject(i)));
            }
            v.a("found stored request size:" + arrayList.size());
            SharedPreferences.Editor editorEdit = this.f612a.edit();
            editorEdit.remove("QUEUE_REQ");
            editorEdit.commit();
            return arrayList;
        } catch (JSONException e) {
            Log.w("appdriver-log", "restore json to request format error", e);
            v.a("request queue format error");
            return arrayList;
        }
    }

    public final JSONObject a(String str) {
        String string = this.f612a.getString(str, null);
        if (string != null) {
            try {
                return new JSONObject(string);
            } catch (JSONException e) {
                v.a(string);
                Log.w("appdriver-log", "saved json format error", e);
            }
        }
        return null;
    }

    public final void a(String str, int i) {
        SharedPreferences.Editor editorEdit = this.f612a.edit();
        editorEdit.putInt(str, i);
        editorEdit.commit();
    }

    public final void a(String str, String str2) {
        if (str2 != null) {
            SharedPreferences.Editor editorEdit = this.f612a.edit();
            editorEdit.putString(str, str2);
            editorEdit.commit();
        }
    }

    public final void a(String str, JSONObject jSONObject) {
        if (jSONObject != null) {
            SharedPreferences.Editor editorEdit = this.f612a.edit();
            editorEdit.putString(str, jSONObject.toString());
            editorEdit.commit();
        }
    }

    public final void a(Collection collection) {
        if (collection == null || collection.isEmpty()) {
            return;
        }
        SharedPreferences.Editor editorEdit = this.f612a.edit();
        JSONArray jSONArray = new JSONArray();
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            ag agVar = (ag) it.next();
            try {
                jSONArray.put(agVar.e());
            } catch (JSONException e) {
                v.a(agVar.toString());
                Log.w("appdriver-log", "save request to json format error", e);
            }
        }
        editorEdit.putString("QUEUE_REQ", jSONArray.toString());
        editorEdit.commit();
    }

    public final int b(String str, int i) {
        return this.f612a.getInt(str, i);
    }

    public final String b(String str, String str2) {
        return this.f612a.getString(str, str2);
    }
}
