package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.MalformedURLException;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class f implements com.capcom.a.d {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CapcomFacebook f103a;

    public f(CapcomFacebook capcomFacebook) {
        this.f103a = capcomFacebook;
    }

    @Override // com.capcom.a.d
    public void a(com.capcom.a.i iVar, Object obj) {
        Log.d("FriendRequest", "FacebookError");
    }

    @Override // com.capcom.a.d
    public void a(FileNotFoundException fileNotFoundException, Object obj) {
        Log.d("FriendRequest", "FileNotFound");
    }

    @Override // com.capcom.a.d
    public void a(IOException iOException, Object obj) {
        Log.d("FriendRequest", "IOException");
    }

    @Override // com.capcom.a.d
    public void a(String str, Object obj) throws JSONException {
        try {
            Log.d("FriendsListenerRequest len=" + str.length(), str);
            JSONArray jSONArray = new JSONObject("{\"data\":" + str + "}").getJSONArray("data");
            int length = jSONArray != null ? jSONArray.length() : 0;
            Log.d("Facebook-Example-Friends Request length=" + jSONArray.length(), "Entries=" + length);
            this.f103a.o = length;
            for (int i = 0; i < length; i++) {
                JSONObject jSONObject = jSONArray.getJSONObject(i);
                String string = jSONObject.getString("name");
                String string2 = jSONObject.getString("uid");
                Log.d(string, string2);
                String string3 = jSONObject.getString("first_name");
                String string4 = jSONObject.getString("last_name");
                Log.d(string3, string4);
                String string5 = jSONObject.getString("pic_square");
                Log.d("And the picture", string5);
                CapcomFacebook.sendFriendInfo(i, length, string, string2, string3, string4, string5);
            }
        } catch (JSONException e) {
            Log.w("JSON Error in response", e.getLocalizedMessage());
        }
    }

    @Override // com.capcom.a.d
    public void a(MalformedURLException malformedURLException, Object obj) {
        Log.d("FriendRequest", "Malformed URL");
    }
}
