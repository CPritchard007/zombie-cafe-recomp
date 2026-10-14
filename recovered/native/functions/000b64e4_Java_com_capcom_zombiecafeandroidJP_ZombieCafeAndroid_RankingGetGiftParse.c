/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b64e4 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_RankingGetGiftParse */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_RankingGetGiftParse
               (_jarray *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uchar *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  char *__dest;
  int iVar11;
  undefined4 *puVar12;
  undefined4 uStack_4;
  
  iVar1 = DAT_000b6724;
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_000b6724);
  uVar4 = *(undefined4 *)(&stack0xffffffec + DAT_000b6728 + DAT_000b6724);
  *(undefined4 *)(&stack0x00000008 + DAT_000b6724) = param_4;
  uVar7 = *(undefined4 *)(&stack0xffffffec + DAT_000b672c + DAT_000b6724);
  *(undefined4 *)(&stack0x00000010 + DAT_000b6724) = uVar4;
  puVar10 = *(undefined4 **)(DAT_000b6730 + 0xb650a);
  *(undefined4 *)(&stack0x00000014 + DAT_000b6724) = uVar7;
  uVar4 = *(undefined4 *)(&stack0xffffffec + DAT_000b6734 + DAT_000b6724);
  *(undefined4 *)(&stack0x00000018 + DAT_000b6724) =
       *(undefined4 *)(&stack0x00000c5c + DAT_000b6724);
  uVar7 = *puVar10;
  *(undefined4 *)(&stack0x0000001c + DAT_000b6724) = uVar4;
  *(undefined4 *)(&stack0xffffffec + DAT_000b6738 + DAT_000b6724) = uVar7;
  uVar4 = _JNIEnv::GetArrayLength(param_1);
  *(undefined4 **)(&stack0x00000024 + iVar1) = puVar10;
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar4;
  for (iVar11 = 0; iVar11 < *(int *)(&stack0x0000000c + iVar1); iVar11 = iVar11 + 1) {
    uVar4 = (**(code **)(*(int *)param_1 + 0x2b4))(param_1,param_3,iVar11);
    uVar4 = FUN_000b5440(param_1,uVar4);
    *(undefined4 *)(&stack0x00000038 + iVar11 * 4 + iVar1) = uVar4;
  }
  iVar11 = _JNIEnv::GetArrayLength(param_1);
  pvVar2 = malloc(iVar11 << 2);
  *(void **)(&stack0x0000000c + iVar1) = pvVar2;
  FUN_000b542a(param_1,*(undefined4 *)(&stack0x00000008 + iVar1),iVar11,
               *(undefined4 *)(&stack0x0000000c + iVar1));
  iVar11 = _JNIEnv::GetArrayLength(param_1);
  pvVar2 = malloc(iVar11 << 2);
  *(void **)(&stack0x00000020 + iVar1) = pvVar2;
  FUN_000b542a(param_1,*(undefined4 *)(&stack0x00000010 + iVar1),iVar11,
               *(undefined4 *)(&stack0x00000020 + iVar1));
  iVar11 = _JNIEnv::GetArrayLength(param_1);
  pvVar2 = malloc(iVar11 << 2);
  FUN_000b542a(param_1,*(undefined4 *)(&stack0x00000014 + iVar1),iVar11,pvVar2);
  iVar11 = _JNIEnv::GetArrayLength(param_1);
  pvVar3 = malloc(iVar11 << 2);
  FUN_000b542a(param_1,*(undefined4 *)(&stack0x00000018 + iVar1),iVar11,pvVar3);
  uVar4 = _JNIEnv::GetArrayLength(param_1);
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar4;
  for (iVar11 = 0; iVar11 < *(int *)(&stack0x00000008 + iVar1); iVar11 = iVar11 + 1) {
    uVar4 = (**(code **)(*(int *)param_1 + 0x2b4))
                      (param_1,*(undefined4 *)(&stack0x0000001c + iVar1),iVar11);
    uVar4 = FUN_000b5440(param_1,uVar4);
    *(undefined4 *)(&stack0x00000438 + iVar11 * 4 + iVar1) = uVar4;
  }
  iVar11 = 0;
  L_PrintLog((char *)(DAT_000b673c + 0xb660c),(char *)(DAT_000b6740 + 0xb660e));
  *(undefined4 *)(&stack0x00000008 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000028 + iVar1) = DAT_000b6744;
  while (*(int *)(&stack0x00000008 + iVar1) < *(int *)(&stack0xffffffec + DAT_000b675c + iVar1)) {
    L_PrintLog((char *)(*(int *)(&stack0x00000028 + iVar1) + 0xb6622),
               (char *)(DAT_000b6748 + 0xb6624));
    iVar9 = 0;
    iVar5 = -1;
    piVar8 = (int *)(*(int *)(DAT_000b674c + 0xb6630) + 0x84);
    *(int *)(&stack0x0000001c + iVar1) = *(int *)(DAT_000b674c + 0xb6630);
    do {
      if (*piVar8 == 0) {
        iVar5 = iVar9;
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 0x28;
    } while (iVar9 != 0xe);
    if (iVar5 == -1) goto LAB_000b670a;
    *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(&stack0x00000038 + iVar11 + iVar1);
    *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(&stack0x00000438 + iVar11 + iVar1);
    iVar9 = *(int *)(&stack0x00000020 + iVar1);
    *puVar12 = *(undefined4 *)(*(int *)(&stack0x0000000c + iVar1) + iVar11);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar9 + iVar11);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)((int)pvVar2 + iVar11);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)((int)pvVar3 + iVar11);
    *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
    snprintf(&stack0xffffffec + DAT_000b6754 + iVar1,0x400,(char *)(DAT_000b6750 + 0xb6660),
             *(undefined4 *)(&stack0x00000010 + iVar1));
    L_PrintLog((char *)(DAT_000b6758 + 0xb668a),&stack0xffffffec + DAT_000b6754 + iVar1);
    *(int *)(&stack0x00000018 + iVar1) = iVar5 * 0xa0;
    __dest = (char *)(*(int *)(&stack0x0000001c + iVar1) + iVar5 * 0xa0);
    strncpy(__dest,*(char **)(&stack0x00000010 + iVar1),0x80);
    iVar5 = *(int *)(&stack0x00000020 + iVar1);
    *(undefined4 *)(__dest + 0x84) = *(undefined4 *)(*(int *)(&stack0x0000000c + iVar1) + iVar11);
    *(undefined4 *)(__dest + 0x94) = *(undefined4 *)(iVar5 + iVar11);
    puVar6 = *(uchar **)(&stack0x00000014 + iVar1);
    *(undefined4 *)(__dest + 0x88) = *(undefined4 *)((int)pvVar2 + iVar11);
    *(undefined4 *)(__dest + 0x8c) = *(undefined4 *)((int)pvVar3 + iVar11);
    StringUtil::stringFromUtf8((StringUtil *)(&stack0x00000030 + iVar1),puVar6);
    String::operator=((String *)
                      (*(int *)(&stack0x0000001c + iVar1) +
                      *(int *)(&stack0x00000018 + iVar1) + 0x98),&stack0x00000030 + iVar1);
    String::~String((String *)(&stack0x00000030 + iVar1));
    iVar11 = iVar11 + 4;
    *(int *)(&stack0x00000008 + iVar1) = *(int *)(&stack0x00000008 + iVar1) + 1;
  }
  L_PrintLog((char *)(DAT_000b6760 + 0xb66fa),(char *)(DAT_000b6764 + 0xb66fc));
LAB_000b670a:
  if (*(int *)(&stack0xffffffec + DAT_000b6738 + iVar1) != **(int **)(&stack0x00000024 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


