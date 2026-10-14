/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8a18 CCServer::Android_ServerCallback */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002b8a6c) */
/* WARNING: Removing unreachable block (ram,0x002b8a6c) */
/* CCServer::Android_ServerCallback(void*, void*, bool, unsigned char*, int, int) */

void CCServer::Android_ServerCallback
               (void *param_1,void *param_2,bool param_3,uchar *param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  undefined4 *puVar3;
  
  iVar1 = DAT_002b8cf4;
  *(void **)(&stack0xfffffff4 + DAT_002b8cf4) = param_1;
  puVar3 = *(undefined4 **)(DAT_002b8cfc + 0x2b8a2c);
  *(undefined4 *)(&stack0x00000400 + DAT_002b8cf4) = *puVar3;
  sprintf((char *)((int)&param_5 + DAT_002b8cf4),(char *)(DAT_002b8cf8 + 0x2b8a38),
          *(undefined4 *)(&stack0x00000420 + DAT_002b8cf4),
          *(undefined4 *)(&stack0x0000041c + DAT_002b8cf4));
  L_PrintLog((char *)(DAT_002b8d00 + 0x2b8a50),(char *)((int)&param_5 + iVar1));
  uVar2 = *(uint *)(&stack0x00000420 + iVar1);
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = puVar3;
  if (0x53 < uVar2) {
    FUN_002ba046();
    uVar2 = extraout_r1;
  }
                    /* WARNING: Could not recover jumptable at 0x002b8a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_002b8a71 + (uint)*(ushort *)(&UNK_002b8a70 + uVar2 * 2) * 2))();
  return;
}


