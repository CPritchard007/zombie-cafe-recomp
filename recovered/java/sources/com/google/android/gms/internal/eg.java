package com.google.android.gms.internal;

import android.content.Context;
import android.database.SQLException;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class eg extends SQLiteOpenHelper {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ef f348a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public eg(ef efVar, Context context, String str) {
        super(context, str, (SQLiteDatabase.CursorFactory) null, 4);
        this.f348a = efVar;
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onCreate(SQLiteDatabase sQLiteDatabase) throws SQLException {
        sQLiteDatabase.execSQL(ef.f347a);
    }

    @Override // android.database.sqlite.SQLiteOpenHelper
    public void onUpgrade(SQLiteDatabase sQLiteDatabase, int i, int i2) throws SQLException {
        ig.c("Database updated from version " + i + " to version " + i2);
        sQLiteDatabase.execSQL("DROP TABLE IF EXISTS InAppPurchase");
        onCreate(sQLiteDatabase);
    }
}
