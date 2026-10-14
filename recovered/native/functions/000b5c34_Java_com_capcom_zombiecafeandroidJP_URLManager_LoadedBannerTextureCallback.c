/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5c34 Java_com_capcom_zombiecafeandroidJP_URLManager_LoadedBannerTextureCallback */

undefined8
Java_com_capcom_zombiecafeandroidJP_URLManager_LoadedBannerTextureCallback
          (int *param_1,undefined4 param_2,undefined4 param_3,size_t param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  
  uVar2 = param_3;
  pvVar1 = malloc(param_4);
  (**(code **)(*param_1 + 800))(param_1,param_3,0,param_4,pvVar1,param_2,uVar2);
  L_PrintLog((char *)(DAT_000b5c64 + 0xb5c5e),(char *)(DAT_000b5c68 + 0xb5c60));
  return CONCAT44(param_2,pvVar1);
}


