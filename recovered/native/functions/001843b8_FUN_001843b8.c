/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001843b8 FUN_001843b8 */

void FUN_001843b8(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  CafeObject *pCVar4;
  int unaff_r5;
  DataInputStream *in_stack_00000024;
  
  iVar1 = Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x78),'\x01',0);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
  FUN_00182f36();
  iVar1 = DataInputStream::readBoolean(in_stack_00000024);
  if (iVar1 != 0) {
    FUN_0018395c();
  }
  FUN_0018383a();
  pcVar3 = *(code **)(iRam00000000 + 0xc);
  uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)sRam0000002c);
  (*pcVar3)(0,uVar2);
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)0x0);
  uRam00000084 = 1;
  *(undefined1 *)(iRam0000008c + 0x44) = 1;
  pCVar4 = *(CafeObject **)(iRam0000008c + 0x40);
  iVar1 = __aeabi_fcmpgt(pCVar4,0);
  if (iVar1 == 0) {
    FUN_00183820();
  }
  FUN_00183818();
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),pCVar4);
  pCVar4[0x84] = (CafeObject)0x1;
  *(undefined1 *)(*(int *)(pCVar4 + 0x8c) + 0x44) = 1;
  iVar1 = __aeabi_fcmpgt(uRam000000cc,0);
  if (iVar1 == 0) {
    FUN_00183ae6();
  }
  FUN_00183ade();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


