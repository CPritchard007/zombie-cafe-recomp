package com.capcom.billing;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class aa {

    /* renamed from: a, reason: collision with root package name */
    private static final String[] f32a = {"_id", "productId", "state", "purchaseTime", "developerPayload"};
    private static final String[] b = {"_id", "quantity"};
    private SQLiteDatabase c;
    private ab d;

    public aa(Context context) {
        this.c = null;
        this.d = new ab(this, context);
        this.c = this.d.getWritableDatabase();
    }

    private void a(String str, int i) {
        if (i == 0) {
            this.c.delete("purchased", "_id=?", new String[]{str});
            return;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("_id", str);
        contentValues.put("quantity", Integer.valueOf(i));
        this.c.replace("purchased", null, contentValues);
    }

    private void b(String str, String str2, i iVar, long j, String str3) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("_id", str);
        contentValues.put("productId", str2);
        contentValues.put("state", Integer.valueOf(iVar.ordinal()));
        contentValues.put("purchaseTime", Long.valueOf(j));
        contentValues.put("developerPayload", str3);
        this.c.replace("history", null, contentValues);
    }

    public synchronized int a(String str, String str2, i iVar, long j, String str3) {
        int i;
        b(str, str2, iVar, j, str3);
        Cursor cursorQuery = this.c.query("history", f32a, "productId=?", new String[]{str2}, null, null, null, null);
        if (cursorQuery == null) {
            i = 0;
        } else {
            i = 0;
            while (cursorQuery.moveToNext()) {
                try {
                    i iVarA = i.a(cursorQuery.getInt(2));
                    if (iVarA == i.PURCHASED || iVarA == i.REFUNDED) {
                        i++;
                    }
                } catch (Throwable th) {
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                    throw th;
                }
            }
            a(str2, i);
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
        return i;
    }

    public void a() {
        this.d.close();
    }

    public Cursor b() {
        if (this.c.isOpen()) {
            return this.c.query("purchased", b, null, null, null, null, null);
        }
        return null;
    }
}
