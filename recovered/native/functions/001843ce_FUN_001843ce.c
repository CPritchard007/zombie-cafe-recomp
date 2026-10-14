/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001843ce FUN_001843ce */

void FUN_001843ce(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  CafeObject *pCVar4;
  int unaff_r5;
  CafeObject *unaff_r7;
  DataInputStream *in_stack_00000024;
  
  iVar1 = DataInputStream::readBoolean(in_stack_00000024);
  if (iVar1 != 0) {
    FUN_0018395c();
  }
  FUN_0018383a();
  pcVar3 = *(code **)(*(int *)unaff_r7 + 0xc);
  uVar2 = Cafe::indexToWorldCoordsCenter
                    (*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(unaff_r7 + 0x2c));
  (*pcVar3)(unaff_r7,uVar2);
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),unaff_r7);
  unaff_r7[0x84] = (CafeObject)0x1;
  *(undefined1 *)(*(int *)(unaff_r7 + 0x8c) + 0x44) = 1;
  pCVar4 = *(CafeObject **)(*(int *)(unaff_r7 + 0x8c) + 0x40);
  iVar1 = __aeabi_fcmpgt(pCVar4,0);
  if (iVar1 == 0) {
    FUN_00183820();
  }
  FUN_00183818();
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),pCVar4);
  pCVar4[0x84] = (CafeObject)0x1;
  *(undefined1 *)(*(int *)(pCVar4 + 0x8c) + 0x44) = 1;
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)(unaff_r7 + 0xcc),0);
  if (iVar1 == 0) {
    FUN_00183ae6();
  }
  FUN_00183ade();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


