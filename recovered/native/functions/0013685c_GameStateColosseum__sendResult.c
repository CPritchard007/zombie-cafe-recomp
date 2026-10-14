/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013685c GameStateColosseum::sendResult */

/* GameStateColosseum::sendResult() */

void __thiscall GameStateColosseum::sendResult(GameStateColosseum *this)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this_00;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  _func_void_void_ptr_uchar_ptr_uint *p_Var6;
  undefined4 uVar7;
  _func_void_void_ptr *p_Var8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_4;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  iVar1 = DAT_00136950;
  iVar9 = DAT_00136948 + 0x136868;
  piVar10 = *(int **)(iVar9 + DAT_0013694c);
  puVar12 = (undefined4 *)(&stack0xffffffec + DAT_00136950);
  puVar13 = (undefined4 *)(&stack0xffffffec + DAT_00136950);
  puVar14 = (undefined4 *)(&stack0xffffffec + DAT_00136950);
  *(int *)(&stack0x00000438 + DAT_00136950) = *piVar10;
  *(undefined4 *)(this + 0x148) = 0;
  uVar11 = *(undefined4 *)(*(int *)(iVar9 + DAT_00136954) + 0x80);
  *(int *)(&stack0x00000020 + iVar1) =
       *(int *)(this + 0x58) + *(int *)(*(int *)(iVar9 + DAT_00136954) + 0x9c);
  uVar2 = CCGetDeviceID();
  uVar5 = *(undefined4 *)(this + 0x4c);
  uVar7 = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(&stack0x00000024 + iVar1) = uVar2;
  this_00 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000028 + iVar1) = uVar5;
  *(undefined4 *)(&stack0x0000002c + iVar1) = uVar7;
  uVar2 = ZombieCafe::getToxin(this_00);
  *(undefined4 *)(&stack0x00000030 + iVar1) = uVar2;
  uVar2 = ZombieCafe::getCash(*(ZombieCafe **)(this + 0xc));
  *puVar12 = uVar11;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(iVar9 + DAT_00136958);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(&stack0x00000024 + iVar1);
  *(int *)(&stack0xfffffff8 + iVar1) = DAT_00136968 + 0x1368c8;
  *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(iVar9 + DAT_0013696c);
  *(undefined4 *)(&stack0x00000000 + iVar1) = *(undefined4 *)(&stack0x00000028 + iVar1);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x0000002c + iVar1);
  iVar3 = *(int *)(&stack0x00000020 + iVar1);
  if (DAT_00136964 < *(int *)(&stack0x00000020 + iVar1)) {
    iVar3 = DAT_00136964;
  }
  *(int *)(&stack0x00000008 + iVar1) = iVar3;
  *(undefined4 *)(&stack0x00000010 + iVar1) = uVar2;
  iVar3 = *(int *)(this + 0xc);
  *(undefined4 *)(&stack0x0000000c + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
  *(undefined4 *)(&stack0x00000014 + iVar1) = *(undefined4 *)(iVar3 + 0x680);
  *(undefined4 *)(&stack0x00000018 + iVar1) = *(undefined4 *)(this + 0x60);
  snprintf(&stack0x00000038 + iVar1,0x400,(char *)(DAT_0013695c + 0x1368c0),DAT_00136960 + 0x1368c2)
  ;
  printf((char *)(DAT_00136970 + 0x136904));
  puts(&stack0x00000038 + iVar1);
  iVar3 = javaIsConnected();
  if (iVar3 == 0) {
    sendResultFailed(this);
  }
  else {
    pvVar4 = (void *)**(undefined4 **)(iVar9 + DAT_00136974);
    p_Var6 = *(_func_void_void_ptr_uchar_ptr_uint **)(iVar9 + DAT_00136978);
    p_Var8 = *(_func_void_void_ptr **)(iVar9 + DAT_0013697c);
    *puVar13 = this;
    CCServer::ColosseumSendResult(pvVar4,&stack0x00000038 + iVar1,p_Var6,p_Var8,(void *)*puVar14);
  }
  if (*(int *)(&stack0x00000438 + iVar1) != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


