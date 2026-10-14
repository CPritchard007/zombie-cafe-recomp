/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b70ec MALTAHoover::sendRanking */

/* MALTAHoover::sendRanking(char*, unsigned int, unsigned int, unsigned int, unsigned int, int,
   char*) */

void __thiscall
MALTAHoover::sendRanking
          (MALTAHoover *this,char *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          int param_6,char *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_4;
  
  iVar2 = DAT_000b71d8;
  iVar1 = DAT_000b71c0;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_000b71c0);
  *(char **)(&stack0x0000001c + DAT_000b71c0) = param_1;
  *(uint *)(&stack0x00000020 + DAT_000b71c0) = param_2;
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_000b71cc + DAT_000b71c0);
  piVar4 = *(int **)(DAT_000b71c8 + 0xb7102);
  *(uint *)(&stack0x00000024 + DAT_000b71c0) = param_3;
  *(undefined4 *)(&stack0x00000028 + DAT_000b71c0) = uVar3;
  pcVar5 = (char *)(DAT_000b71c4 + 0xb7116);
  *(int *)(&stack0xffffffec + DAT_000b71d0 + DAT_000b71c0) = *piVar4;
  L_PrintLog(pcVar5,(char *)(DAT_000b71d4 + 0xb711a));
  snprintf(&stack0x00000030 + iVar1,0x80,(char *)(iVar2 + 0xb7126),DAT_000b71dc + 0xb712a);
  uVar3 = javaGetCountryCode();
  snprintf(&stack0x000000b0 + iVar1,0x80,(char *)(iVar2 + 0xb7126),uVar3);
  uVar3 = CCGetDeviceID();
  *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x00000030 + iVar1;
  *puVar6 = *(undefined4 *)(&stack0x0000001c + iVar1);
  *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x000000b0 + iVar1;
  *(MALTAHoover **)((int)&uStack_4 + iVar1) = this + 0x100;
  *(undefined4 *)((int)&param_4 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
  *(undefined4 *)((int)&param_5 + iVar1) = *(undefined4 *)(&stack0x00000024 + iVar1);
  *(undefined4 *)((int)&param_6 + iVar1) = *(undefined4 *)(&stack0x0000054c + iVar1);
  *(undefined4 *)((int)&param_7 + iVar1) = *(undefined4 *)(&stack0xffffffec + DAT_000b71e0 + iVar1);
  *(undefined4 *)(&stack0x00000010 + iVar1) = *(undefined4 *)(&stack0x00000554 + iVar1);
  *(int *)(&stack0x00000014 + iVar1) = DAT_000b71e8 + 0xb718c;
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
  snprintf(&stack0x00000130 + iVar1,0x400,(char *)(DAT_000b71e4 + 0xb7182),this);
  sendRankingGET(this,&stack0x00000130 + iVar1);
  L_PrintLog(pcVar5,(char *)(DAT_000b71ec + 0xb71a6));
  if (*(int *)(&stack0xffffffec + DAT_000b71d0 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


