/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b58fc Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseUp */

undefined8
Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseUp
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  uint local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uVar2 = __fixsfsi(param_4);
  iVar3 = __fixsfsi(param_3);
  iVar1 = DAT_000b5958;
  local_18 = uVar2 & 0xffff | iVar3 << 0x10;
  uVar4 = L_distanceTwoPts(extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  iVar3 = __aeabi_fcmplt(uVar4,DAT_000b595c);
  if (iVar3 == 0) {
    piVar5 = *(int **)(*(int *)(iVar1 + 0xb592a) + 4);
    pcVar6 = *(code **)(*piVar5 + 0x28);
  }
  else {
    piVar5 = *(int **)(*(int *)(iVar1 + 0xb592a) + 4);
    pcVar6 = *(code **)(*piVar5 + 0x28);
  }
  (*pcVar6)(piVar5,&local_18,iVar3 == 0);
  *(undefined1 *)((int)&DAT_000b5960 + DAT_000b5960) = 0;
  return CONCAT44(uStack_14,local_18);
}


