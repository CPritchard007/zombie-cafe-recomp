package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public enum j {
    RESULT_OK,
    RESULT_USER_CANCELED,
    RESULT_SERVICE_UNAVAILABLE,
    RESULT_BILLING_UNAVAILABLE,
    RESULT_ITEM_UNAVAILABLE,
    RESULT_DEVELOPER_ERROR,
    RESULT_ERROR;

    public static j a(int i) {
        j[] jVarArrValuesCustom = valuesCustom();
        return (i < 0 || i >= jVarArrValuesCustom.length) ? RESULT_ERROR : jVarArrValuesCustom[i];
    }

    /* renamed from: values, reason: to resolve conflict with enum method */
    public static j[] valuesCustom() {
        j[] jVarArrValuesCustom = values();
        int length = jVarArrValuesCustom.length;
        j[] jVarArr = new j[length];
        System.arraycopy(jVarArrValuesCustom, 0, jVarArr, 0, length);
        return jVarArr;
    }
}
