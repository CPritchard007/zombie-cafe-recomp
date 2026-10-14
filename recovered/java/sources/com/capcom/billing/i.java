package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public enum i {
    PURCHASED,
    CANCELED,
    REFUNDED,
    COMPLETED;

    public static i a(int i) {
        i[] iVarArrValuesCustom = valuesCustom();
        return (i < 0 || i >= iVarArrValuesCustom.length) ? CANCELED : iVarArrValuesCustom[i];
    }

    /* renamed from: values, reason: to resolve conflict with enum method */
    public static i[] valuesCustom() {
        i[] iVarArrValuesCustom = values();
        int length = iVarArrValuesCustom.length;
        i[] iVarArr = new i[length];
        System.arraycopy(iVarArrValuesCustom, 0, iVarArr, 0, length);
        return iVarArr;
    }
}
