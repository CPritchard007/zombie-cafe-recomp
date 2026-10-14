/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ff138 FriendCafeHudElement::layout */

/* FriendCafeHudElement::layout() */

void __thiscall FriendCafeHudElement::layout(FriendCafeHudElement *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  ImageButton *this_00;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48;
  
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 0x70) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x70) + 0x10));
  piVar1 = *(int **)(this + 0x98);
  (**(code **)(*piVar1 + 0x14))(piVar1,*(undefined4 *)(this + 0xc),0);
  if (-1 < *(int *)(this + 0x80)) {
    CapcomApp::getInstance();
    iVar2 = CapcomApp::getInstance();
    uVar3 = *(undefined4 *)(iVar2 + 0x44);
    iVar4 = ScreenElement::localToParentCoords(*(ScreenElement **)(this + 0x98),0,0);
    iVar2 = SmDev();
    uVar5 = __floatsisf(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_000ff498 + 0xff190)));
    __mulsf3(uVar5,DAT_000ff49c);
    iVar6 = __fixsfsi();
    iVar7 = iVar6 >> 2;
    iVar8 = *(int *)(**(int **)(this + 0x84) + 0x10);
    iVar9 = iVar7 + (iVar6 >> 1);
    iVar2 = iVar9;
    local_48 = iVar9;
    for (iVar11 = 0; iVar11 < *(int *)(this + 0x80) + 1; iVar11 = iVar11 + 1) {
      this_00 = *(ImageButton **)(iVar11 * 4 + *(int *)(this + 0x84));
      piVar1 = *(int **)(*(int *)(this + 0x94) + iVar11 * 0xc + 8);
      if (this_00[0x14] != (ImageButton)0x0) {
        if ((iVar4 >> 0x10 < iVar2 + (iVar6 >> 1)) && (iVar2 = iVar9, 0 < iVar11)) {
          local_48 = local_48 + iVar7 + iVar8;
        }
        uVar12 = __extendsfdf2(uVar3);
        __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_000ff488,DAT_000ff48c);
        uVar12 = __truncdfsf2();
        ImageButton::setScale(this_00,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (**(code **)(*(int *)this_00 + 0x14))(this_00,iVar2,local_48);
        (**(code **)(*piVar1 + 0x14))(piVar1,iVar2,local_48);
        iVar2 = iVar2 + iVar6 + iVar7;
      }
    }
    piVar1 = *(int **)(this + 0xec);
    pcVar10 = *(code **)(*piVar1 + 0x14);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(this + 0x84) + 0xc) + 4);
    uVar3 = __floatsisf(*(undefined4 *)(*(int *)(*(int *)(this + 0x84) + 0xc) + 8));
    iVar2 = SmDev();
    __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_000ff4a0 + 0xff274)));
    uVar3 = __fixsfsi();
    (*pcVar10)(piVar1,uVar5,uVar3);
    piVar1 = *(int **)(this + 0xd0);
    iVar7 = *(int *)(this + 0xac);
    iVar4 = *piVar1;
    iVar6 = *(int *)(iVar7 + 0xc);
    iVar2 = *(int *)(*(int *)(this + 0xa8) + 4);
    uVar12 = __floatsidf(*(undefined4 *)(*(int *)(this + 0xa8) + 8));
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + 0x10));
    uVar13 = __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000ff490,DAT_000ff494);
    __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
             (int)((ulonglong)uVar13 >> 0x20));
    uVar3 = __fixdfsi();
    (**(code **)(iVar4 + 0x14))
              (piVar1,(iVar2 - iVar6 / 2) - ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2),
               uVar3);
    iVar7 = *(int *)(this + 0xac);
    piVar1 = *(int **)(this + 0xd4);
    iVar4 = *(int *)(iVar7 + 0xc);
    iVar8 = *piVar1;
    iVar2 = *(int *)(iVar7 + 4);
    iVar6 = piVar1[3];
    uVar12 = __floatsidf(*(undefined4 *)(iVar7 + 8));
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + 0x10));
    uVar13 = __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000ff490,DAT_000ff494);
    __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
             (int)((ulonglong)uVar13 >> 0x20));
    uVar3 = __fixdfsi();
    (**(code **)(iVar8 + 0x14))
              (piVar1,(iVar2 - iVar4 / 2) - ((int)(((uint)(iVar6 >> 0x1f) >> 0x1e) + iVar6) >> 2),
               uVar3);
    piVar1 = *(int **)(this + 0xd8);
    iVar6 = *(int *)(this + 0xb0);
    iVar7 = *piVar1;
    iVar4 = *(int *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 4);
    uVar12 = __floatsidf(*(undefined4 *)(iVar6 + 8));
    uVar13 = __floatsidf(*(undefined4 *)(iVar6 + 0x10));
    uVar13 = __divdf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000ff490,DAT_000ff494);
    __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
             (int)((ulonglong)uVar13 >> 0x20));
    uVar3 = __fixdfsi();
    (**(code **)(iVar7 + 0x14))
              (piVar1,(iVar2 - iVar4 / 2) - ((int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2),
               uVar3);
    iVar2 = *(int *)(this + 0x10) + -10;
    (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),10,iVar2);
    (**(code **)(**(int **)(this + 0xcc) + 0x14))
              (*(int **)(this + 0xcc),*(int *)(*(int *)(this + 0x6c) + 0xc) / 2,
               *(int *)(*(int *)(this + 0x6c) + 0x10) / 2);
    piVar1 = *(int **)(this + 0x60);
    iVar4 = 10;
    if ((char)piVar1[5] != '\0') {
      if (*(int *)(*(int *)(this + 0x68) + 4) - *(int *)(*(int *)(this + 0x68) + 0xc) <
          piVar1[3] + 10) {
        iVar2 = iVar2 - (piVar1[4] + 10);
      }
      (**(code **)(*piVar1 + 0x14))(piVar1,10,iVar2);
      iVar4 = *(int *)(*(int *)(this + 0x60) + 0xc) + 0x14;
    }
    (**(code **)(**(int **)(this + 0xc4) + 0x14))
              (*(int **)(this + 0xc4),*(int *)(*(int *)(this + 0x60) + 0xc) / 2,
               *(int *)(*(int *)(this + 0x60) + 0x10) / 2);
    piVar1 = *(int **)(this + 100);
    if ((char)piVar1[5] != '\0') {
      if (*(int *)(*(int *)(this + 0x68) + 4) - *(int *)(*(int *)(this + 0x68) + 0xc) <
          iVar4 + piVar1[3]) {
        iVar4 = 10;
        iVar2 = iVar2 - (piVar1[4] + 10);
      }
      (**(code **)(*piVar1 + 0x14))(piVar1,iVar4,iVar2);
    }
    (**(code **)(**(int **)(this + 200) + 0x14))
              (*(int **)(this + 200),*(int *)(*(int *)(this + 100) + 0xc) / 2,
               *(int *)(*(int *)(this + 100) + 0x10) / 2);
    iVar2 = *(int *)(this + 0xa4);
    (**(code **)(**(int **)(this + 0xc0) + 0x14))
              (*(int **)(this + 0xc0),*(int *)(iVar2 + 4) - *(int *)(iVar2 + 0xc) / 2,
               *(int *)(iVar2 + 0x10) / 2 + *(int *)(iVar2 + 8));
  }
  return;
}


