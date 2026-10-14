/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5d10 Java_com_capcom_zombiecafeandroidJP_CapcomFacebook_sendFriendInfo */

void Java_com_capcom_zombiecafeandroidJP_CapcomFacebook_sendFriendInfo
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_4;
  int *piVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_000b5f34;
  piVar9 = (int *)(&stack0xffffffec + DAT_000b5f34);
  piVar10 = (int *)(&stack0xffffffec + DAT_000b5f34);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_000b5f34);
  *(undefined4 *)(&stack0x00000020 + DAT_000b5f34) = param_3;
  *(undefined4 *)(&stack0x00000024 + DAT_000b5f34) = param_4;
  uVar8 = *(undefined4 *)(&stack0x000006dc + DAT_000b5f34);
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_000b5f3c + DAT_000b5f34);
  *(undefined4 *)(&stack0x00000000 + DAT_000b5f34) =
       *(undefined4 *)(&stack0x000006e4 + DAT_000b5f34);
  *(undefined4 *)((int)&uStack_4 + DAT_000b5f34) = uVar3;
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_000b5f40 + DAT_000b5f34);
  piVar6 = *(int **)(DAT_000b5f38 + 0xb5d38);
  *(undefined4 *)(&stack0x00000008 + DAT_000b5f34) =
       *(undefined4 *)(&stack0x000006ec + DAT_000b5f34);
  *(undefined4 *)(&stack0x00000004 + DAT_000b5f34) = uVar3;
  *(int *)(&stack0xffffffec + DAT_000b5f44 + DAT_000b5f34) = *piVar6;
  memset(&stack0x00000040 + DAT_000b5f34,0,0x80);
  memset(&stack0x000000c0 + iVar1,0,0x80);
  memset(&stack0x00000140 + iVar1,0,0x80);
  memset(&stack0x000001c0 + iVar1,0,0x80);
  memset(&stack0x00000240 + iVar1,0,0x80);
  memset(&stack0x00000040 + iVar1,0,0x80);
  memset(&stack0x000000c0 + iVar1,0,0x80);
  memset(&stack0x00000140 + iVar1,0,0x80);
  memset(&stack0x000001c0 + iVar1,0,0x80);
  memset(&stack0x00000240 + iVar1,0,0x80);
  uVar3 = FUN_000b5440(param_1,uVar8);
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar3;
  uVar3 = FUN_000b5440(param_1,*(undefined4 *)((int)&uStack_4 + iVar1));
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar3;
  uVar3 = FUN_000b5440(param_1,*(undefined4 *)(&stack0x00000000 + iVar1));
  *(undefined4 *)(&stack0x00000014 + iVar1) = uVar3;
  uVar3 = FUN_000b5440(param_1,*(undefined4 *)(&stack0x00000004 + iVar1));
  *(undefined4 *)(&stack0x00000018 + iVar1) = uVar3;
  uVar3 = FUN_000b5440(param_1,*(undefined4 *)(&stack0x00000008 + iVar1));
  pcVar4 = *(code **)(*param_1 + 0x2a0);
  *(undefined4 *)(&stack0x0000001c + iVar1) = uVar3;
  uVar3 = (*pcVar4)(param_1,uVar8);
  iVar5 = *param_1;
  *(undefined4 *)(&stack0x00000028 + iVar1) = uVar3;
  uVar3 = (**(code **)(iVar5 + 0x2a0))(param_1,*(undefined4 *)((int)&uStack_4 + iVar1));
  iVar5 = *param_1;
  *(undefined4 *)(&stack0x0000002c + iVar1) = uVar3;
  uVar3 = (**(code **)(iVar5 + 0x2a0))(param_1,*(undefined4 *)(&stack0x00000000 + iVar1));
  iVar5 = *param_1;
  *(undefined4 *)(&stack0x00000030 + iVar1) = uVar3;
  uVar3 = (**(code **)(iVar5 + 0x2a0))(param_1,*(undefined4 *)(&stack0x00000004 + iVar1));
  iVar5 = *param_1;
  *(undefined4 *)(&stack0x00000034 + iVar1) = uVar3;
  uVar3 = (**(code **)(iVar5 + 0x2a0))(param_1,*(undefined4 *)(&stack0x00000008 + iVar1));
  sVar2 = *(size_t *)(&stack0x00000028 + iVar1);
  *(undefined4 *)(&stack0x00000038 + iVar1) = uVar3;
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  memcpy(&stack0x00000040 + iVar1,*(void **)(&stack0x0000000c + iVar1),sVar2);
  sVar2 = *(size_t *)(&stack0x0000002c + iVar1);
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  memcpy(&stack0x000000c0 + iVar1,*(void **)(&stack0x00000010 + iVar1),sVar2);
  sVar2 = *(size_t *)(&stack0x00000030 + iVar1);
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  memcpy(&stack0x00000140 + iVar1,*(void **)(&stack0x00000014 + iVar1),sVar2);
  sVar2 = *(size_t *)(&stack0x00000034 + iVar1);
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  memcpy(&stack0x000001c0 + iVar1,*(void **)(&stack0x00000018 + iVar1),sVar2);
  sVar2 = *(size_t *)(&stack0x00000038 + iVar1);
  if (0x80 < sVar2) {
    sVar2 = 0x80;
  }
  memcpy(&stack0x00000240 + iVar1,*(void **)(&stack0x0000001c + iVar1),sVar2);
  *piVar9 = (int)(&stack0x000000c0 + iVar1);
  *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000140 + iVar1;
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x000001c0 + iVar1;
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x00000240 + iVar1;
  snprintf(&stack0x000002c0 + iVar1,0x400,(char *)(DAT_000b5f48 + 0xb5e94),&stack0x00000040 + iVar1)
  ;
  L_PrintLog((char *)(DAT_000b5f4c + 0xb5ea6),&stack0x000002c0 + iVar1);
  iVar5 = *(int *)(&stack0x00000024 + iVar1);
  pvVar7 = *(void **)(*(int *)(DAT_000b5f50 + 0xb5eba) + 4);
  *piVar10 = (int)(&stack0x000000c0 + iVar1);
  *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000140 + iVar1;
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x000001c0 + iVar1;
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x00000240 + iVar1;
  CCServer::Android_FacebookFriendCallback
            (pvVar7,iVar5,*(int *)(&stack0x00000020 + iVar1),&stack0x00000040 + iVar1,
             (char *)*puVar11,*(char **)(&stack0xfffffff0 + iVar1),
             *(char **)(&stack0xfffffff4 + iVar1),*(char **)(&stack0xfffffff8 + iVar1));
  if (*(int *)(&stack0x00000020 + iVar1) == *(int *)(&stack0x00000024 + iVar1) + -1) {
    ZombieCafe::FriendsUpdatedCallback(pvVar7);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,uVar8,*(undefined4 *)(&stack0x0000000c + iVar1));
  (**(code **)(*param_1 + 0x2a8))
            (param_1,*(undefined4 *)((int)&uStack_4 + iVar1),
             *(undefined4 *)(&stack0x00000010 + iVar1));
  (**(code **)(*param_1 + 0x2a8))
            (param_1,*(undefined4 *)(&stack0x00000000 + iVar1),
             *(undefined4 *)(&stack0x00000014 + iVar1));
  (**(code **)(*param_1 + 0x2a8))
            (param_1,*(undefined4 *)(&stack0x00000004 + iVar1),
             *(undefined4 *)(&stack0x00000018 + iVar1));
  (**(code **)(*param_1 + 0x2a8))
            (param_1,*(undefined4 *)(&stack0x00000008 + iVar1),
             *(undefined4 *)(&stack0x0000001c + iVar1));
  if (*(int *)(&stack0xffffffec + DAT_000b5f44 + iVar1) != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


