/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a4d8 GameStateEarlyBird::buyEarlyBird */

/* GameStateEarlyBird::buyEarlyBird() */

void __thiscall GameStateEarlyBird::buyEarlyBird(GameStateEarlyBird *this)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this_00;
  int iVar3;
  int iVar4;
  void *pvVar5;
  _func_void_void_ptr_uchar_ptr_uint *p_Var6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_4;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  iVar1 = DAT_0019a5e0;
  piVar7 = *(int **)(DAT_0019a5dc + 0x19a4e4);
  puVar10 = (undefined4 *)(&stack0xffffffec + DAT_0019a5e0);
  puVar11 = (undefined4 *)(&stack0xffffffec + DAT_0019a5e0);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_0019a5e0);
  *(int *)(&stack0xffffffec + DAT_0019a5e4 + DAT_0019a5e0) = *piVar7;
  uVar8 = *(undefined4 *)(this + (*(int *)(this + 0x20) + 0x54) * 4 + 4);
  uVar9 = *(undefined4 *)(this + (*(int *)(this + 0x20) + 0xa4) * 4 + 4);
  uVar2 = CCGetDeviceID();
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
  this_00 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(this_00 + 0x680);
  uVar2 = ZombieCafe::getToxin(this_00);
  *(undefined4 *)((int)&uStack_4 + iVar1) = uVar2;
  iVar3 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000004 + iVar1);
  uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
  *puVar10 = uVar8;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar9;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(iVar3 + DAT_0019a5e8);
  snprintf(&stack0x00000110 + iVar1,0x400,(char *)(DAT_0019a5ec + 0x19a532),DAT_0019a5f0 + 0x19a534)
  ;
  iVar3 = DAT_0019a5f4;
  iVar4 = CCGameCenter::IsConnected(*(void **)(*(int *)(this + 0xc) + DAT_0019a5f4));
  if (iVar4 != 0) {
    uVar2 = CCGameCenter::GetMyUniqueId(*(void **)(*(int *)(this + 0xc) + iVar3));
    snprintf(&stack0x00000090 + iVar1,0x80,(char *)(DAT_0019a5f8 + 0x19a560),uVar2);
    strcat(&stack0x00000110 + iVar1,&stack0x00000090 + iVar1);
  }
  iVar3 = DAT_0019a5fc;
  iVar4 = CCFacebook::IsLoggedIn(*(void **)(*(int *)(this + 0xc) + DAT_0019a5fc));
  if (iVar4 != 0) {
    uVar2 = CCFacebook::GetUserIdAsString(*(void **)(*(int *)(this + 0xc) + iVar3));
    snprintf(&stack0x00000010 + iVar1,0x80,(char *)(DAT_0019a600 + 0x19a58c),uVar2);
    strcat(&stack0x00000110 + iVar1,&stack0x00000010 + iVar1);
  }
  printf((char *)(DAT_0019a604 + 0x19a59e));
  printf((char *)(DAT_0019a608 + 0x19a5a8),&stack0x00000110 + iVar1);
  p_Var6 = *(_func_void_void_ptr_uchar_ptr_uint **)(DAT_0019a610 + 0x19a5b8);
  pvVar5 = (void *)**(undefined4 **)(DAT_0019a60c + 0x19a5b4);
  *puVar11 = this;
  CCServer::EarlyBirdBuy
            (pvVar5,&stack0x00000110 + iVar1,p_Var6,
             *(_func_void_void_ptr **)(DAT_0019a614 + 0x19a5c2),(void *)*puVar12);
  if (*(int *)(&stack0xffffffec + DAT_0019a5e4 + iVar1) != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


