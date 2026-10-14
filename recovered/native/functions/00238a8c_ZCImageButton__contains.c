/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238a8c ZCImageButton::contains */

/* ZCImageButton::contains(int, int, float, float) */

ZCImageButton __thiscall
ZCImageButton::contains(ZCImageButton *this,int param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_r3;
  ZCImageButton ZVar7;
  int iVar8;
  int iVar9;
  undefined4 in_stack_00000000;
  
  ZVar7 = this[0x14];
  if (ZVar7 != (ZCImageButton)0x0) {
    iVar1 = ScreenElement::globalToLocalCoords
                      ((ScreenElement *)this,param_1 << 0x10 | param_2 & 0xffffU);
    iVar6 = *(int *)(this + 0xc);
    uVar2 = __floatsisf(iVar6);
    iVar8 = *(int *)(this + 0x10);
    uVar3 = __mulsf3(uVar2,in_r3);
    uVar2 = __subsf3(uVar3,uVar2);
    __mulsf3(uVar2,0x3f000000);
    iVar4 = __fixsfsi();
    ZVar7 = (ZCImageButton)0x0;
    iVar9 = iVar1 >> 0x10;
    if (iVar9 + iVar4 < 0 == SBORROW4(iVar9,-iVar4)) {
      uVar2 = __floatsisf(iVar8);
      uVar3 = __mulsf3(uVar2,in_stack_00000000);
      uVar2 = __subsf3(uVar3,uVar2);
      __mulsf3(uVar2,0x3f000000);
      iVar5 = __fixsfsi();
      iVar1 = (int)(short)iVar1;
      if ((iVar1 + iVar5 < 0 == SBORROW4(iVar1,-iVar5)) && (iVar9 < iVar6 + iVar4)) {
        ZVar7 = (ZCImageButton)(iVar1 < iVar8 + iVar5);
      }
    }
  }
  return ZVar7;
}


