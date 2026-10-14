/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238bec ZCImageButton::containsBig */

/* ZCImageButton::containsBig(long, long, float, float) */

ZCImageButton __thiscall
ZCImageButton::containsBig
          (ZCImageButton *this,long param_1,long param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_r3;
  ZCImageButton ZVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 in_stack_00000000;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  ZVar8 = this[0x14];
  if (ZVar8 != (ZCImageButton)0x0) {
    uVar10 = ScreenElement::globalToLocalCoordsBig(CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8));
    iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    iVar1 = (int)uVar10;
    iVar7 = *(int *)(this + 0xc);
    uVar2 = __floatsisf(iVar7);
    uVar3 = __mulsf3(uVar2,in_r3);
    uVar2 = __subsf3(uVar3,uVar2);
    __mulsf3(uVar2,0x3f000000);
    iVar4 = __fixsfsi();
    iVar9 = *(int *)(this + 0x10);
    ZVar8 = (ZCImageButton)0x0;
    if (iVar6 + iVar4 < 0 == SBORROW4(iVar6,-iVar4)) {
      uVar2 = __floatsisf(iVar9);
      uVar3 = __mulsf3(uVar2,in_stack_00000000);
      uVar2 = __subsf3(uVar3,uVar2);
      __mulsf3(uVar2,0x3f000000);
      iVar5 = __fixsfsi();
      if ((iVar1 + iVar5 < 0 == SBORROW4(iVar1,-iVar5)) && (iVar6 < iVar7 + iVar4)) {
        ZVar8 = (ZCImageButton)(iVar1 < iVar9 + iVar5);
      }
    }
  }
  return ZVar8;
}


