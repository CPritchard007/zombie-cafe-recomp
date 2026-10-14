/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240980 ZombieCafe::getGameInfo */

/* ZombieCafe::getGameInfo() */

void __thiscall ZombieCafe::getGameInfo(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  _func_void_void_ptr_uchar_ptr_uint *p_Var5;
  _func_void_void_ptr *p_Var6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_4;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  iVar1 = DAT_002409f8;
  puVar9 = (undefined4 *)(&stack0xfffffff0 + DAT_002409f8);
  puVar10 = (undefined4 *)(&stack0xfffffff0 + DAT_002409f8);
  puVar11 = (undefined4 *)(&stack0xfffffff0 + DAT_002409f8);
  iVar7 = DAT_00240a00 + 0x240990;
  piVar8 = *(int **)(iVar7 + DAT_002409fc);
  *(int *)(&stack0x00000204 + DAT_002409f8) = *piVar8;
  uVar2 = CCGetDeviceID();
  *puVar9 = uVar2;
  *(int *)(&stack0xfffffff4 + iVar1) = DAT_00240a04 + 0x2409a2;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0x4e;
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(iVar7 + DAT_00240a0c);
  snprintf(&stack0x00000004 + iVar1,0x200,(char *)(DAT_00240a08 + 0x2409ae),DAT_00240a10 + 0x2409b2)
  ;
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    getGameInfoFailed(this);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar7 + DAT_00240a14);
    p_Var5 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar7 + DAT_00240a18);
    p_Var6 = *(_func_void_void_ptr **)(iVar7 + DAT_00240a1c);
    *puVar10 = this;
    CCServer::GetGameInfo(pvVar4,&stack0x00000004 + iVar1,p_Var5,p_Var6,(void *)*puVar11);
  }
  if (*(int *)(&stack0x00000204 + iVar1) != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


