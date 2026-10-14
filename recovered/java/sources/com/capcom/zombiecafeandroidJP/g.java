package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class g implements com.capcom.a.d {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f104a;

    public g(CapcomFacebook capcomFacebook) {
        this.f104a = capcomFacebook;
    }

    @Override // com.capcom.a.d
    public void a(com.capcom.a.i iVar, Object obj) {
        Log.d("GeneralInfo", "FacebookError");
    }

    @Override // com.capcom.a.d
    public void a(FileNotFoundException fileNotFoundException, Object obj) {
        Log.d("GeneralInfo", "FileNotFound");
    }

    @Override // com.capcom.a.d
    public void a(IOException iOException, Object obj) {
        Log.d("GeneralInfo", "IOException");
    }

    @Override // com.capcom.a.d
    public void a(String str, Object obj) {
        try {
            Log.d("CapcomFacebook Logon Info lenth=" + str.length(), "Response: " + str);
            JSONObject jSONObject = new JSONObject(str);
            this.f104a.f67a = jSONObject.getString("name");
            this.f104a.c = jSONObject.getString("first_name");
            this.f104a.b = jSONObject.getString("last_name");
            this.f104a.d = jSONObject.getString("id");
            Log.d("Name =" + this.f104a.f67a, "Grrr?");
            Log.d("Facebook ID", "FaceBookInfomation mName=" + this.f104a.f67a);
            Log.d("Facebook ID", "FaceBookInfomation mFirstName=" + this.f104a.c);
            Log.d("Facebook ID", "FaceBookInfomation mLastName=" + this.f104a.b);
            Log.d("Facebook ID", "FaceBookInfomation mId=" + this.f104a.d);
            CapcomFacebook.setFBInfo(this.f104a.f67a, this.f104a.c, this.f104a.b, this.f104a.d);
        } catch (JSONException e) {
            Log.w("Facebook-Example", "JSON Error in response");
            this.f104a.a();
        }
    }

    @Override // com.capcom.a.d
    public void a(MalformedURLException malformedURLException, Object obj) {
        Log.d("GeneralInfo", "Malformed URL");
    }
}
