package com.capcom.billing;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.text.Html;
import android.text.SpannableStringBuilder;
import android.text.Spanned;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.SimpleCursorAdapter;
import android.widget.TextView;
import com.capcom.zombiecafeandroidJP.ZombieCafeAndroid;
import java.util.HashSet;
import java.util.Locale;
import java.util.Set;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class SmurfsBilling extends Activity implements View.OnClickListener, AdapterView.OnItemSelectedListener {
    private ao d;
    private Handler e;
    private BillingService f;
    private Button g;
    private Button h;
    private TextView i;
    private ListView j;
    private SimpleCursorAdapter k;
    private aa l;
    private Cursor m;
    private Set n = new HashSet();
    private String o = null;
    private String q;
    private String r;
    private al s;

    /* renamed from: a, reason: collision with root package name */
    public static String f30a = "EVoaS4IPpC9Q6Xhv5RsgmoX/0p9JWas2ifBzCaz5eHifVoNTVdh/7Iqk3x/Rnr7GHSLVmNTpdhdy+/E5aj2AjHuIOL6v";
    private static am[] p = new am[32];
    static String[] b = new String[32];
    static int c = 0;

    private Dialog a(int i, int i2) {
        String strA = a(getString(2131230763));
        Log.i("SmurfsBilling", strA);
        Uri uri = Uri.parse(strA);
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle(i).setIcon(R.drawable.stat_sys_warning).setMessage(i2).setCancelable(false).setPositiveButton(R.string.ok, new ag(this)).setNegativeButton(2131230762, new ah(this, uri));
        return builder.create();
    }

    private String a(String str) {
        if (!str.contains("%lang%") && !str.contains("%region%")) {
            return str;
        }
        Locale locale = Locale.getDefault();
        return str.replace("%lang%", locale.getLanguage().toLowerCase()).replace("%region%", locale.getCountry().toLowerCase());
    }

    private void a(CharSequence charSequence) {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder(charSequence);
        spannableStringBuilder.append('\n');
        spannableStringBuilder.append(this.i.getText());
        this.i.setText(spannableStringBuilder);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2) {
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        spannableStringBuilder.append((CharSequence) Html.fromHtml("<b>" + str + "</b>: "));
        spannableStringBuilder.append((CharSequence) str2);
        a(spannableStringBuilder);
    }

    private void b() {
        this.i = (TextView) findViewById(2131427350);
        this.s = new al(this, p);
        this.m = this.l.b();
        startManagingCursor(this.m);
        this.k = new SimpleCursorAdapter(this, 2130903045, this.m, new String[]{"_id", "quantity"}, new int[]{2131427367, 2131427368});
        this.j = (ListView) findViewById(2131427349);
        this.j.setAdapter((ListAdapter) this.k);
    }

    private void c() {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        View viewInflate = View.inflate(this, 2130903043, null);
        TextView textView = (TextView) viewInflate.findViewById(2131427356);
        if (this.o != null) {
            textView.setText(this.o);
        }
        builder.setView(viewInflate);
        builder.setPositiveButton(2131230768, new ai(this, textView));
        builder.setNegativeButton(2131230769, new aj(this));
        builder.setOnCancelListener(new ak(this));
        builder.show();
    }

    protected void a() {
        this.l.a();
        this.f.b();
        finish();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view != this.g) {
            if (view == this.h) {
                c();
            }
        } else {
            Log.d("SmurfsBilling", "buying: " + this.q + " sku: " + this.r);
            if (this.f.a(this.r, this.o)) {
                return;
            }
            showDialog(2);
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Bundle extras = getIntent().getExtras();
        Log.d("InApp Billing", "Extra data from smurfs");
        Log.d("=============", "======================");
        if (extras != null) {
            c = extras.getInt("NumberOfItems");
            for (int i = 0; i < c; i++) {
                String string = extras.getString("ItemName" + i);
                b[i] = string;
                p[i] = new am(string, b[i], an.UNMANAGED);
                this.r = string;
                Log.d("In-App Billing PURCHASE Item", "SKU=" + string);
            }
        }
        setContentView(2130903040);
        this.e = new Handler();
        this.d = new ao(this, this.e);
        Log.v("IAP", "added smurfs purchase observer");
        this.f = new BillingService();
        this.f.a(this);
        Log.v("IAP", "created billing service");
        this.l = new aa(this);
        b();
        Log.v("IAP", "setup purchase data base and widgets");
        ad.a(this.d);
        if (!this.f.a()) {
            showDialog(1);
            return;
        }
        Log.v("IAP - End of OnCreate", "register response handler");
        if (this.f.a(this.r, this.o)) {
            return;
        }
        showDialog(2);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        switch (i) {
            case 1:
                return a(2131230759, 2131230760);
            case 2:
                return a(2131230757, 2131230758);
            default:
                return null;
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.l.a();
        this.f.b();
        Log.v("SmurfsBilling onDestroy()", "BillingService Unbind()");
        ZombieCafeAndroid.setOpenPurchaceScreenFlag(false);
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onItemSelected(AdapterView adapterView, View view, int i, long j) {
        this.q = b[i];
        this.r = p[i].f43a;
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public void onNothingSelected(AdapterView adapterView) {
    }

    @Override // android.app.Activity
    protected void onRestoreInstanceState(Bundle bundle) {
        super.onRestoreInstanceState(bundle);
        if (bundle != null) {
            this.i.setText(Html.fromHtml(bundle.getString("SmurfsBilling_LOG_TEXT")));
        }
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putString("SmurfsBilling_LOG_TEXT", Html.toHtml((Spanned) this.i.getText()));
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        Log.v("BillingService onStart", "SmurfsBilling");
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
        ad.b(this.d);
        Log.v("SmurfsBilling OnStop", "call onDestroy()?");
        a();
    }
}
