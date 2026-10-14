/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2a38 CCBoundingTest::SideofLine */

/* CCBoundingTest::SideofLine(ccVec2 const*, ccVec2 const*, ccVec2 const*) */

uint CCBoundingTest::SideofLine(ccVec2 *param_1,ccVec2 *param_2,ccVec2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar8 = *(undefined4 *)param_1;
  uVar1 = __subsf3(*(undefined4 *)param_2,uVar8);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar2 = __subsf3(*(undefined4 *)(param_2 + 4),uVar6);
  uVar8 = __subsf3(*(undefined4 *)param_3,uVar8);
  uVar6 = __subsf3(*(undefined4 *)(param_3 + 4),uVar6);
  uVar3 = __mulsf3(uVar1,uVar6);
  uVar4 = __mulsf3(uVar2,uVar8);
  iVar5 = __aeabi_fcmpgt(uVar3,uVar4);
  uVar7 = 1;
  if (iVar5 == 0) {
    iVar5 = __aeabi_fcmplt(uVar3,uVar4);
    if (iVar5 == 0) {
      uVar3 = __mulsf3(uVar1,uVar8);
      iVar5 = __aeabi_fcmplt(uVar3,0);
      if (iVar5 == 0) {
        uVar3 = __mulsf3(uVar2,uVar6);
        iVar5 = __aeabi_fcmplt(uVar3,0);
        if (iVar5 == 0) {
          uVar1 = __mulsf3(uVar1,uVar1);
          uVar2 = __mulsf3(uVar2,uVar2);
          uVar1 = __addsf3(uVar1,uVar2);
          uVar2 = __mulsf3(uVar8,uVar8);
          uVar8 = __mulsf3(uVar6,uVar6);
          uVar2 = __addsf3(uVar2,uVar8);
          iVar5 = __aeabi_fcmplt(uVar1,uVar2);
          return -(uint)(iVar5 != 0) & 1;
        }
      }
    }
    uVar7 = 0xffffffff;
  }
  return uVar7;
}


