/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029be14 Java_com_capcom_zombiecafeandroidJP_TrueTypeFont_initTrueTypeFont */

void Java_com_capcom_zombiecafeandroidJP_TrueTypeFont_initTrueTypeFont(_jclass *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar2 = (char *)(**(code **)(*(int *)param_1 + 0x54))();
  FUN_0029b7b0();
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(DAT_0029bf34 + 0x29be34));
  iVar5 = *(int *)(DAT_0029bf38 + 0x29be40);
  pcVar4 = (char *)(DAT_0029bf3c + 0x29be46);
  *(undefined4 *)(iVar5 + 4) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,pcVar4);
  iVar1 = DAT_0029bf40;
  *(undefined4 *)(iVar5 + 8) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29be58));
  iVar1 = DAT_0029bf44;
  *(undefined4 *)(iVar5 + 0xc) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29be68));
  iVar1 = DAT_0029bf48;
  *(undefined4 *)(iVar5 + 0x10) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29be78));
  iVar1 = DAT_0029bf50;
  *(undefined4 *)(iVar5 + 0x14) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29be8a));
  iVar1 = DAT_0029bf58;
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29be9c));
  iVar1 = DAT_0029bf60;
  *(undefined4 *)(iVar5 + 0x1c) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29beae));
  iVar1 = DAT_0029bf68;
  *(undefined4 *)(iVar5 + 0x20) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29bec0));
  iVar1 = DAT_0029bf70;
  *(undefined4 *)(iVar5 + 0x24) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29bed2));
  iVar1 = DAT_0029bf78;
  *(undefined4 *)(iVar5 + 0x28) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29bee4));
  iVar1 = DAT_0029bf80;
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29bef6));
  iVar1 = DAT_0029bf88;
  *(undefined4 *)(iVar5 + 0x30) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,(char *)(iVar1 + 0x29bf08));
  pcVar4 = (char *)(DAT_0029bf8c + 0x29bf16);
  *(undefined4 *)(iVar5 + 0x34) = uVar3;
  uVar3 = _JNIEnv::GetMethodID(param_1,pcVar2,pcVar4);
  *(undefined4 *)(iVar5 + 0x38) = uVar3;
  FUN_0029b7c4();
  (**(code **)(*(int *)param_1 + 0x58))(param_1,pcVar2);
  return;
}


