/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5ff8 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_PurchaseAndroidToxin */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_PurchaseAndroidToxin
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  L_PrintLog((char *)(DAT_000b6024 + 0xb6008),(char *)(param_3 + DAT_000b6020 + 0xb6004));
  ZombieCafe::GiveBoughtToxin
            (*(ZombieCafe **)(*(int *)(&UNK_000b601e + DAT_000b6028) + 4),param_3,param_4);
  return;
}


