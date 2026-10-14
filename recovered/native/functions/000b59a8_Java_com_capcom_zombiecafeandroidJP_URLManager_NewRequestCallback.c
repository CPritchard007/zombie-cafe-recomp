/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b59a8 Java_com_capcom_zombiecafeandroidJP_URLManager_NewRequestCallback */

undefined8
Java_com_capcom_zombiecafeandroidJP_URLManager_NewRequestCallback
          (int *param_1,undefined4 param_2,undefined4 param_3,size_t param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = param_3;
  pvVar1 = malloc(param_4);
  (**(code **)(*param_1 + 800))(param_1,param_3,0,param_4,pvVar1,param_2,uVar2);
  L_PrintLog((char *)(DAT_000b59d8 + 0xb59d2),(char *)(DAT_000b59dc + 0xb59d4));
  return CONCAT44(param_2,pvVar1);
}


