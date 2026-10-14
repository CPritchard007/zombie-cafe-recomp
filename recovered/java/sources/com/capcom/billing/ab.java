package com.capcom.billing;

import android.content.Context;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ab extends SQLiteOpenHelper {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ aa f33a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ab(aa aaVar, Context context) {
        super(context, "purchase2.db", (SQLiteDatabase.CursorFactory) null, 1);
        this.f33a = aaVar;
    }

    private void a(SQLiteDatabase sQLiteDatabase) throws SQLException {
        sQLiteDatabase.execSQL("CREATE TABLE history(_id TEXT PRIMARY KEY, state INTEGER, productId TEXT, developerPayload TEXT, purchaseTime INTEGER)");
        sQLiteDatabase.execSQL("CREATE TABLE purchased(_id TEXT PRIMARY KEY, quantity INTEGER)");
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) throws SQLException {
        a(sQLiteDatabase);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) throws SQLException {
        if (i2 != 1) {
            Log.w("PurchaseDatabase", "Database upgrade from old: " + i + " to: " + i2);
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS history");
            sQLiteDatabase.execSQL("DROP TABLE IF EXISTS purchased");
            a(sQLiteDatabase);
        }
    }
}
