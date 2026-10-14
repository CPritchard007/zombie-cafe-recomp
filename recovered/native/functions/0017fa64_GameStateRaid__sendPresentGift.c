/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017fa64 GameStateRaid::sendPresentGift */

/* GameStateRaid::sendPresentGift() */

void __thiscall GameStateRaid::sendPresentGift(GameStateRaid *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ZombieCafe *this_00;
  int iVar4;
  void *pvVar5;
  _func_void_void_ptr_uchar_ptr_uint *p_Var6;
  undefined4 uVar7;
  _func_void_void_ptr *p_Var8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_4;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar1 = DAT_0017fb28;
  iVar9 = DAT_0017fb20 + 0x17fa70;
  piVar10 = *(int **)(iVar9 + DAT_0017fb24);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0017fb28);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_0017fb28);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_0017fb28);
  *(int *)(&stack0x00000420 + DAT_0017fb28) = *piVar10;
  *(undefined4 *)(this + 0x174) = 0;
  uVar2 = CCGetDeviceID();
  uVar3 = CCGetDeviceID();
  *(undefined4 *)(&stack0x0000000c + iVar1) = uVar3;
  uVar3 = CCGetDeviceID();
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar3;
  this_00 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(this_00 + 0x680);
  uVar3 = ZombieCafe::getToxin(this_00);
  *(undefined4 *)(&stack0x00000018 + iVar1) = uVar3;
  uVar3 = ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
  uVar7 = *(undefined4 *)(iVar9 + DAT_0017fb2c);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar3;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  *puVar11 = uVar2;
  *(int *)(&stack0xfffffff8 + iVar1) = DAT_0017fb34 + 0x17fac8;
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000018 + iVar1);
  snprintf(&stack0x00000020 + iVar1,0x400,(char *)(DAT_0017fb30 + 0x17fabc),uVar7);
  printf((char *)(DAT_0017fb38 + 0x17fae0),&stack0x00000020 + iVar1);
  iVar4 = javaIsConnected();
  if (iVar4 == 0) {
    sendPresentFailed(this);
  }
  else {
    pvVar5 = (void *)**(undefined4 **)(iVar9 + DAT_0017fb3c);
    p_Var6 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar9 + DAT_0017fb40);
    p_Var8 = *(_func_void_void_ptr **)(iVar9 + DAT_0017fb44);
    *puVar12 = this;
    CCServer::HeroSendPresent(pvVar5,&stack0x00000020 + iVar1,p_Var6,p_Var8,(void *)*puVar13);
  }
  if (*(int *)(&stack0x00000420 + iVar1) != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


