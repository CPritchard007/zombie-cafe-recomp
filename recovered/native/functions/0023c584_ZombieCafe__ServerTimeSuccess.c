/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c584 ZombieCafe::ServerTimeSuccess */

/* ZombieCafe::ServerTimeSuccess(unsigned char*, int) */

void __thiscall ZombieCafe::ServerTimeSuccess(ZombieCafe *this,uchar *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = DAT_0023c648;
  *(uchar **)(&stack0xfffffff0 + DAT_0023c648) = param_1;
  piVar5 = *(int **)(DAT_0023c650 + 0x23c598);
  *(int *)(&stack0xffffffec + DAT_0023c64c + DAT_0023c648) = *piVar5;
  L_PrintLog((char *)(DAT_0023c654 + 0x23c5a4),(char *)(DAT_0023c658 + 0x23c5a8));
  L_PrintLog((char *)(DAT_0023c65c + 0x23c5b4),(char *)(DAT_0023c660 + 0x23c5b6));
  strncpy(&stack0xfffffff8 + iVar1,*(char **)(&stack0xfffffff0 + iVar1),param_2);
  (&stack0xfffffff8 + iVar1)[param_2] = '\0';
  if (((*(int *)(this + 8) != 0) &&
      (uVar4 = *(int *)(this + 0x8b0) >> 0x1f,
      (int)(*(int *)(this + 0x8b0) + uVar4 ^ uVar4) <= DAT_0023c664)) &&
     (iVar2 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + DAT_0023c668),'\x16'),
     iVar2 != 0)) {
    pcVar3 = *(code **)(**(int **)(this + 8) + 0x2c);
    (*pcVar3)(*(int **)(this + 8),pcVar3,*(undefined4 *)(this + 0x4a8),*(undefined4 *)(this + 0x4ac)
             );
    L_PrintLog((char *)(DAT_0023c66c + 0x23c606),(char *)(DAT_0023c670 + 0x23c608));
  }
  *(undefined4 *)(this + 0x4a8) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  uVar4 = atoi(&stack0xfffffff8 + iVar1);
  L_GotServerTime(this,uVar4);
  L_PrintLog((char *)(DAT_0023c674 + 0x23c62e),(char *)(DAT_0023c678 + 0x23c630));
  if (*(int *)(&stack0xffffffec + DAT_0023c64c + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


