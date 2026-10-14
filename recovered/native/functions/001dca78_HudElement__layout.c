/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001dca78 HudElement::layout */

/* HudElement::layout() */

void __thiscall HudElement::layout(HudElement *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_38;
  undefined1 auStack_30 [8];
  int *local_28;
  undefined1 auStack_24 [8];
  int *local_1c;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 0x60) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x60) + 0x10));
  piVar3 = *(int **)(this + 0xb4);
  (**(code **)(*piVar3 + 0x14))(piVar3,*(undefined4 *)(this + 0xc),0);
  piVar3 = *(int **)(this + 0xb4);
  iVar1 = piVar3[3];
  iVar9 = *piVar3;
  uVar4 = __floatsisf(piVar3[4]);
  uVar5 = __mulsf3(uVar2,DAT_001dcd40);
  __addsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  (**(code **)(iVar9 + 0x18))(piVar3,iVar1,uVar4);
  if (-1 < *(int *)(this + 0x70)) {
    piVar3 = (int *)**(undefined4 **)(this + 0x74);
    pcVar11 = *(code **)(*piVar3 + 0x14);
    uVar4 = __floatsisf(*(undefined4 *)(this + 0xc));
    iVar1 = SmDev();
    uVar5 = __mulsf3(*(undefined4 *)(iVar1 * 4 + DAT_001dcd44 + 0x1dcb00),0x3f000000);
    __subsf3(uVar4,uVar5);
    uVar4 = __fixsfsi();
    (*pcVar11)(piVar3,uVar4,0);
    iVar1 = **(int **)(this + 0x74);
    Vector<HudElement::NewIndicator>::elementAt((int)auStack_30);
    if (*(char *)(iVar1 + 0x14) != '\0') {
      (**(code **)(*local_28 + 0x14))
                (local_28,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    }
    local_38 = 10;
    for (iVar1 = 1; iVar1 < *(int *)(this + 0x70) + 1; iVar1 = iVar1 + 1) {
      piVar8 = *(int **)(iVar1 * 4 + *(int *)(this + 0x74));
      Vector<HudElement::NewIndicator>::elementAt((int)auStack_24);
      piVar3 = local_1c;
      if ((char)piVar8[5] != '\0') {
        (**(code **)(*piVar8 + 0x14))(piVar8,10,local_38);
        (**(code **)(*piVar3 + 0x14))(piVar3,10,local_38);
        uVar4 = __floatsisf(local_38);
        uVar5 = __floatsisf(piVar8[4]);
        uVar6 = __mulsf3(uVar2,DAT_001dcd48);
        uVar5 = __addsf3(uVar5,uVar6);
        __addsf3(uVar4,uVar5);
        local_38 = __fixsfsi();
      }
    }
    piVar3 = *(int **)(this + 0xd8);
    iVar7 = *(int *)(this + 0x90);
    iVar9 = *(int *)(iVar7 + 0xc);
    iVar12 = *piVar3;
    iVar1 = *(int *)(iVar7 + 4);
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + 8));
    uVar14 = __floatsidf(*(undefined4 *)(*(int *)(this + 0x94) + 0x10));
    uVar14 = __divdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_001dcd38,DAT_001dcd3c);
    __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    uVar2 = __fixdfsi();
    (**(code **)(iVar12 + 0x14))(piVar3,iVar1 - iVar9 / 2,uVar2);
    iVar7 = *(int *)(this + 0x94);
    piVar3 = *(int **)(this + 0xdc);
    iVar9 = *(int *)(iVar7 + 0xc);
    iVar12 = *piVar3;
    iVar1 = *(int *)(iVar7 + 4);
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + 8));
    uVar14 = __floatsidf(*(undefined4 *)(iVar7 + 0x10));
    uVar14 = __divdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_001dcd38,DAT_001dcd3c);
    __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    uVar2 = __fixdfsi();
    (**(code **)(iVar12 + 0x14))(piVar3,iVar1 - iVar9 / 2,uVar2);
    iVar7 = *(int *)(this + 0xec);
    piVar3 = *(int **)(this + 0xe0);
    iVar9 = *(int *)(iVar7 + 0xc);
    iVar12 = *piVar3;
    iVar1 = *(int *)(iVar7 + 4);
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + 8));
    uVar14 = __floatsidf(*(undefined4 *)(iVar7 + 0x10));
    uVar14 = __divdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_001dcd38,DAT_001dcd3c);
    __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    uVar2 = __fixdfsi();
    (**(code **)(iVar12 + 0x14))(piVar3,iVar1 - iVar9 / 2,uVar2);
    piVar3 = *(int **)(this + 0xf4);
    iVar9 = *(int *)(this + 0xf0);
    iVar1 = *piVar3;
    uVar2 = __floatsisf(*(undefined4 *)(iVar9 + 4));
    uVar4 = __floatsisf(*(undefined4 *)(iVar9 + 0xc));
    uVar4 = __mulsf3(uVar4,DAT_001dcd4c);
    __subsf3(uVar2,uVar4);
    uVar2 = __fixsfsi();
    uVar13 = __floatsidf(*(undefined4 *)(iVar9 + 8));
    uVar14 = __floatsidf(*(undefined4 *)(iVar9 + 0x10));
    uVar14 = __divdf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_001dcd38,DAT_001dcd3c);
    __adddf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    uVar4 = __fixdfsi();
    (**(code **)(iVar1 + 0x14))(piVar3,uVar2,uVar4);
    iVar10 = DAT_001dcd50 + 0x1dcd08;
    pcVar11 = *(code **)(**(int **)(this + 0xac) + 0x14);
    iVar1 = SmDev();
    iVar7 = *(int *)(this + 0xac);
    iVar12 = *(int *)(this + 0x10);
    iVar9 = *(int *)(iVar7 + 0x10);
    uVar2 = *(undefined4 *)(iVar10 + iVar1 * 4 + 0x18);
    iVar1 = SmDev();
    (*pcVar11)(iVar7,uVar2,(iVar12 - iVar9) - *(int *)(iVar10 + iVar1 * 4 + 0x30));
  }
  return;
}


