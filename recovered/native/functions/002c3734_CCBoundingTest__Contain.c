/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c3734 CCBoundingTest::Contain */

/* CCBoundingTest::Contain(ccBoundingBox const*, ccVec3 const*, unsigned int) */

undefined4 __thiscall
CCBoundingTest::Contain(CCBoundingTest *this,ccBoundingBox *param_1,ccVec3 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 == (ccVec3 *)0x0) {
    __subsf3(*(undefined4 *)param_1,*(undefined4 *)this,0,param_3,param_3);
    uVar1 = FUN_002c2928();
    uVar2 = __subsf3(*(undefined4 *)(this + 0xc),uVar1);
    __subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(this + 4));
    uVar1 = FUN_002c2928();
    uVar3 = __subsf3(*(undefined4 *)(this + 0x10),uVar1);
    __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8));
    uVar1 = FUN_002c2928();
    uVar1 = __subsf3(*(undefined4 *)(this + 0x14),uVar1);
    iVar4 = __aeabi_fcmplt(uVar3,uVar1);
    if (iVar4 != 0) {
      uVar1 = uVar3;
    }
    iVar4 = __aeabi_fcmplt(uVar2,uVar1);
  }
  else {
    __subsf3(*(undefined4 *)param_1,*(undefined4 *)this,param_2,param_3,param_3);
    uVar1 = FUN_002c2928();
    uVar2 = __subsf3(*(undefined4 *)(this + 0xc),uVar1);
    __subsf3(*(undefined4 *)(param_1 + 4),*(undefined4 *)(this + 4));
    uVar1 = FUN_002c2928();
    uVar3 = __subsf3(*(undefined4 *)(this + 0x10),uVar1);
    __subsf3(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8));
    uVar1 = FUN_002c2928();
    uVar1 = __subsf3(*(undefined4 *)(this + 0x14),uVar1);
    iVar4 = __aeabi_fcmpgt(uVar3,uVar1);
    if (iVar4 != 0) {
      uVar1 = uVar3;
    }
    iVar4 = __aeabi_fcmpgt(uVar2,uVar1);
  }
  if (iVar4 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}


