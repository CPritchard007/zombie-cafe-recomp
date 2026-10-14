/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013618c GameStateColosseum::layout */

/* GameStateColosseum::layout() */

void __thiscall GameStateColosseum::layout(GameStateColosseum *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  GameStateColosseum *pGVar8;
  int iVar9;
  undefined4 uVar10;
  
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),0,(int)*(short *)(*(int *)(this + 0xc) + 0x10));
  MessageElement::layout(*(MessageElement **)(this + 0x84));
  (**(code **)(**(int **)(this + 0x78) + 0x18))
            (*(int **)(this + 0x78),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar5 = *(int *)(this + 0xc);
  iVar6 = *(int *)(iVar5 + 0x10);
  iVar9 = *(int *)(*(int *)(this + 0x70) + 0x18);
  uVar1 = __floatsisf(iVar6 >> 0x10);
  uVar2 = __floatsisf(iVar9 >> 0x10);
  uVar2 = __subsf3(uVar2,0x3f800000);
  uVar2 = __divsf3(uVar1,uVar2);
  uVar1 = __floatsisf((int)(short)iVar6);
  uVar3 = __floatsisf((int)(short)iVar9);
  uVar3 = __subsf3(uVar3,0x3f800000);
  uVar1 = __divsf3(uVar1,uVar3);
  iVar6 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar6 != 0) {
    uVar1 = uVar2;
  }
  uVar1 = __mulsf3(uVar1,0x3fc00000);
  *(undefined4 *)(this + 0x44) = uVar1;
  iVar6 = *(int *)(iVar5 + 0x10);
  (**(code **)(**(int **)(this + 0x9c) + 0x14))
            (*(int **)(this + 0x9c),(iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1,(int)(short)iVar6);
  (**(code **)(**(int **)(this + 0x8c) + 0x14))
            (*(int **)(this + 0x8c),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x90) + 0x14))
            (*(int **)(this + 0x90),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  iVar5 = DAT_00136464 + 0x136286;
  (**(code **)(**(int **)(this + 0x88) + 0x14))
            (*(int **)(this + 0x88),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  CapcomApp::getInstance();
  iVar6 = CapcomApp::getInstance();
  uVar10 = *(undefined4 *)(iVar6 + 0x40);
  iVar6 = CapcomApp::getInstance();
  piVar7 = *(int **)(this + 100);
  uVar1 = *(undefined4 *)(iVar6 + 0x44);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar6 = SmDev();
  uVar2 = __subsf3(*(undefined4 *)(iVar6 * 4 + iVar5),DAT_00136468);
  __mulsf3(uVar2,uVar10);
  uVar2 = __fixsfsi();
  iVar6 = SmDev();
  __mulsf3(uVar1,*(undefined4 *)(iVar5 + iVar6 * 4 + 0x18));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  piVar7 = *(int **)(this + 0xb0);
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar6 = SmDev();
  uVar2 = __subsf3(*(undefined4 *)(iVar5 + iVar6 * 4 + 0x30),DAT_00136468);
  __mulsf3(uVar2,uVar10);
  uVar2 = __fixsfsi();
  iVar6 = SmDev();
  __mulsf3(uVar1,*(undefined4 *)(iVar5 + iVar6 * 4 + 0x48));
  uVar3 = __fixsfsi();
  (*pcVar4)(piVar7,uVar2,uVar3);
  iVar6 = SmDev();
  pGVar8 = this + 0xb4;
  if ((iVar6 == 4) || (iVar6 = SmDev(), iVar6 == 3)) {
    iVar5 = DAT_0013646c + 0x136348;
    (**(code **)(**(int **)pGVar8 + 0x1c))(*(int **)pGVar8,9);
    piVar7 = *(int **)pGVar8;
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = SmDev();
    uVar2 = __fixsfsi(*(undefined4 *)(iVar5 + iVar6 * 4 + 0x60));
    iVar6 = SmDev();
    uVar1 = __fixsfsi(*(undefined4 *)(iVar5 + iVar6 * 4 + 0x78));
  }
  else {
    piVar7 = *(int **)pGVar8;
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar6 = SmDev();
    uVar2 = __subsf3(*(undefined4 *)(DAT_00136470 + iVar6 * 4 + 0x136440),DAT_00136468);
    __mulsf3(uVar2,uVar10);
    uVar2 = __fixsfsi();
    iVar6 = SmDev();
    __mulsf3(uVar1,*(undefined4 *)(iVar5 + iVar6 * 4 + 0x78));
    uVar1 = __fixsfsi();
  }
  (*pcVar4)(piVar7,uVar2,uVar1);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  (**(code **)(**(int **)(this + 0xb8) + 0x14))
            (*(int **)(this + 0xb8),*(int *)(*(int *)(this + 0x68) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x68) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0xbc) + 0x14))
            (*(int **)(this + 0xbc),*(int *)(*(int *)(this + 0x68) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x68) + 0x10) / 2);
  iVar5 = (int)*(short *)(*(int *)(this + 0xc) + 0x14);
  iVar6 = SmDev();
  if ((iVar6 == 4) || (iVar6 = SmDev(), iVar6 == 3)) {
    iVar6 = iVar5 * 3;
  }
  else {
    iVar6 = iVar5 << 2;
  }
  iVar6 = __divsi3(iVar6,5);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),(int)*(short *)(*(int *)(this + 0xc) + 0x16),iVar5 + iVar6);
  (**(code **)(**(int **)(this + 0xc0) + 0x14))
            (*(int **)(this + 0xc0),*(int *)(*(int *)(this + 0x6c) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x6c) + 0x10) / 2);
  return;
}


