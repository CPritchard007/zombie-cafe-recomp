/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013e208 GameStateFriendCafe::onFridgeExit */

/* WARNING: Control flow encountered bad instruction data */
/* GameStateFriendCafe::onFridgeExit(long) */

void GameStateFriendCafe::onFridgeExit(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  NoticeDialog *pNVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  
  iVar1 = DAT_0013e59c;
  iVar7 = iRam0013e598 + 0x13e214;
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar15 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar16 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar17 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0013e59c);
  puVar2 = *(undefined4 **)(iVar7 + DAT_0013e5a0);
  uVar6 = *puVar2;
  *(undefined4 **)(&stack0x00000028 + DAT_0013e59c) = puVar2;
  *(undefined4 *)(&stack0xffffffec + DAT_0013e5a4 + DAT_0013e59c) = uVar6;
  iVar4 = *(int *)(param_1 + 0x1bc);
  cVar5 = *(char *)(iVar4 + 0x14);
  if (cVar5 != '\0') {
    FUN_0013f90e();
  }
  iVar4 = (int)*(short *)(iVar4 + 0xce);
  *(char *)(param_1 + 0x38) = cVar5;
  *(int *)(&stack0x0000000c + iVar1) = iVar4;
  if (iVar4 == DAT_0013e5a8) {
    FUN_0013f90e();
  }
  if (0x7b < **(int **)(iVar7 + DAT_0013e5ac)) {
    FUN_0013f8da();
  }
  if (**(ushort **)(iVar4 * 4 + *(int *)(*(int *)(param_1 + 0x1b8) + 8)) < 0xe8) {
    FUN_0013f724();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000030 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000038 + iVar1));
  *puVar9 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000030 + iVar1,&stack0x00000038 + iVar1);
  String::~String((String *)(&stack0x00000038 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000030 + iVar1);
  if (uVar3 < 0xe4) {
    FUN_0013f72e();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000040 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000048 + iVar1));
  *puVar10 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000040 + iVar1,&stack0x00000048 + iVar1);
  String::~String((String *)(&stack0x00000048 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000040 + iVar1);
  if (uVar3 < 0xe0) {
    FUN_0013f738();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000050 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000058 + iVar1));
  *puVar11 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000050 + iVar1,&stack0x00000058 + iVar1);
  String::~String((String *)(&stack0x00000058 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000050 + iVar1);
  if (uVar3 < 0xde) {
    FUN_0013f742();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000060 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000068 + iVar1));
  *puVar12 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000060 + iVar1,&stack0x00000068 + iVar1);
  String::~String((String *)(&stack0x00000068 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000060 + iVar1);
  if (uVar3 < 0xdc) {
    FUN_0013f74c();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000070 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000078 + iVar1));
  *puVar13 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000070 + iVar1,&stack0x00000078 + iVar1);
  String::~String((String *)(&stack0x00000078 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000070 + iVar1);
  if (uVar3 < 0xd9) {
    FUN_0013f756();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000080 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000088 + iVar1));
  *puVar14 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000080 + iVar1,&stack0x00000088 + iVar1);
  String::~String((String *)(&stack0x00000088 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000080 + iVar1);
  if (uVar3 < 0xd5) {
    FUN_0013f760();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x00000090 + iVar1));
  Vector<String>::elementAt((int)(&stack0x00000098 + iVar1));
  *puVar15 = 0;
  NoticeDialog::show(pNVar8,&stack0x00000090 + iVar1,&stack0x00000098 + iVar1);
  String::~String((String *)(&stack0x00000098 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x00000090 + iVar1);
  if (uVar3 < 0xd2) {
    FUN_0013f76a();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x000000a0 + iVar1));
  Vector<String>::elementAt((int)(&stack0x000000a8 + iVar1));
  *puVar16 = 0;
  NoticeDialog::show(pNVar8,&stack0x000000a0 + iVar1,&stack0x000000a8 + iVar1);
  String::~String((String *)(&stack0x000000a8 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x000000a0 + iVar1);
  if (uVar3 < 0xcf) {
    FUN_0013f774();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x000000b0 + iVar1));
  Vector<String>::elementAt((int)(&stack0x000000b8 + iVar1));
  *puVar17 = 0;
  NoticeDialog::show(pNVar8,&stack0x000000b0 + iVar1,&stack0x000000b8 + iVar1);
  String::~String((String *)(&stack0x000000b8 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x000000b0 + iVar1);
  if (uVar3 < 0xcc) {
    FUN_0013f77e();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x000000c0 + iVar1));
  Vector<String>::elementAt((int)(&stack0x000000c8 + iVar1));
  *puVar18 = 0;
  NoticeDialog::show(pNVar8,&stack0x000000c0 + iVar1,&stack0x000000c8 + iVar1);
  String::~String((String *)(&stack0x000000c8 + iVar1));
  uVar3 = FUN_0013efb0(&stack0x000000c0 + iVar1);
  if (uVar3 < 199) {
    FUN_0013f788();
  }
  pNVar8 = *(NoticeDialog **)(param_1 + 0x1b0);
  Vector<String>::elementAt((int)(&stack0x000000d0 + iVar1));
  Vector<String>::elementAt((int)(&stack0x000000d8 + iVar1));
  *puVar19 = 0;
  NoticeDialog::show(pNVar8,&stack0x000000d0 + iVar1,&stack0x000000d8 + iVar1);
  String::~String((String *)(&stack0x000000d8 + iVar1));
  FUN_0013efb0(&stack0x000000d0 + iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


