/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5b2c GameStateEventRaid3::sendResult */

/* GameStateEventRaid3::sendResult(int, int) */

void __thiscall GameStateEventRaid3::sendResult(GameStateEventRaid3 *this,int param_1,int param_2)

{
  char *__s;
  int iVar1;
  ZombieCafe *this_00;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  _func_void_void_ptr_uchar_ptr_uint *p_Var6;
  _func_void_void_ptr *p_Var7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_4;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  iVar1 = DAT_001b5c38;
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_001b5c38);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_001b5c38);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_001b5c38);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_001b5c38);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_001b5c38);
  *(int *)(&stack0x0000001c + DAT_001b5c38) = param_1;
  *(int *)(&stack0x00000020 + DAT_001b5c38) = param_2;
  iVar8 = DAT_001b5c3c + 0x1b5b3e;
  piVar9 = *(int **)(iVar8 + DAT_001b5c40);
  __s = &stack0x00000078 + DAT_001b5c38;
  *(int *)(&stack0xffffffec + DAT_001b5c44 + DAT_001b5c38) = *piVar9;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(&stack0x00000024 + iVar1) = *(undefined4 *)(iVar8 + DAT_001b5c48);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
  *puVar10 = *(undefined4 *)(&stack0x0000001c + iVar1);
  snprintf(__s,0x80,(char *)(DAT_001b5c4c + 0x1b5b5e),*(undefined4 *)(&stack0x00000024 + iVar1));
  *puVar11 = __s;
  snprintf(&stack0xffffffec + DAT_001b5c58 + iVar1,0x400,(char *)(DAT_001b5c50 + 0x1b5b7c),
           DAT_001b5c54 + 0x1b5b7a);
  CCMd5(&stack0x00000038 + iVar1,0x40,&stack0xffffffec + DAT_001b5c58 + iVar1);
  this_00 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000028 + iVar1) = *(undefined4 *)(this_00 + 0x228);
  *(undefined4 *)(&stack0x0000002c + iVar1) = *(undefined4 *)(this_00 + 0x680);
  uVar2 = ZombieCafe::getToxin(this_00);
  *(undefined4 *)(&stack0x00000030 + iVar1) = uVar2;
  uVar2 = ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
  *puVar12 = *(undefined4 *)(&stack0x00000024 + iVar1);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x0000001c + iVar1);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000020 + iVar1);
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  uVar5 = *(undefined4 *)(iVar8 + DAT_001b5c64);
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar2;
  *(undefined4 *)(&stack0x00000000 + iVar1) = uVar5;
  *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000038 + iVar1;
  *(int *)(&stack0x00000004 + iVar1) = DAT_001b5c68 + 0x1b5bde;
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000002c + iVar1);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
  snprintf(&stack0x000000f8 + iVar1,0x400,(char *)(DAT_001b5c5c + 0x1b5bbe),DAT_001b5c60 + 0x1b5bc0)
  ;
  printf((char *)(DAT_001b5c6c + 0x1b5bf4));
  puts(&stack0x000000f8 + iVar1);
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    sendResultFailed(this);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar8 + DAT_001b5c70);
    p_Var6 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar8 + DAT_001b5c74);
    p_Var7 = *(_func_void_void_ptr **)(iVar8 + DAT_001b5c78);
    *puVar13 = this;
    CCServer::ER3SendResult(pvVar4,&stack0x000000f8 + iVar1,p_Var6,p_Var7,(void *)*puVar14);
  }
  if (*(int *)(&stack0xffffffec + DAT_001b5c44 + iVar1) != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


