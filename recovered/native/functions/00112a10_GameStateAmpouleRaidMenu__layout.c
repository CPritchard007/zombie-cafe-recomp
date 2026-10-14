/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112a10 GameStateAmpouleRaidMenu::layout */

/* GameStateAmpouleRaidMenu::layout() */

void __thiscall GameStateAmpouleRaidMenu::layout(GameStateAmpouleRaidMenu *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GameStateAmpouleRaidMenu *pGVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  
  iVar7 = DAT_00112ccc;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar7 = iVar7 + 0x112a32;
  (**(code **)(**(int **)(this + 0x18) + 0x14))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x20);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  pGVar5 = this + 0x94;
  __mulsf3(*(undefined4 *)(iVar2 * 4 + iVar7),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(this + 0x24);
  (**(code **)(*piVar8 + 0x14))(piVar8,0,*(int *)(*(int *)(this + 0x14) + 0x10) - piVar8[4]);
  piVar8 = *(int **)(this + 0x1c);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x18),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  NoticeDialog::layout();
  (**(code **)(**(int **)(this + 0x30) + 0x14))
            (*(int **)(this + 0x30),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  (**(code **)(**(int **)(this + 0x34) + 0x14))
            (*(int **)(this + 0x34),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
  piVar8 = *(int **)(this + 0x3c);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_00112cd0 + 0x112af2)));
  iVar2 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_00112cd4 + 0x112b06)));
  (*pcVar6)(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(this + 0x38);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x30),*(undefined4 *)(this + 0x90));
  uVar3 = __fixsfsi();
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x48),*(undefined4 *)pGVar5);
  uVar4 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,uVar4);
  piVar8 = *(int **)(this + 0x40);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  uVar9 = (*pcVar6)(piVar8,(int)sVar1,uVar3);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x40),(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(int *)(*(int *)(this + 0x40) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x40) + 0x10) / 2);
  piVar8 = *(int **)(this + 0x44);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  uVar9 = (*pcVar6)(piVar8,(int)sVar1,uVar3);
  ImageButton::setScale
            (*(ImageButton **)(this + 0x44),(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(int *)(*(int *)(this + 0x44) + 0xc) / 2,
             *(int *)(*(int *)(this + 0x44) + 0x10) / 2);
  piVar8 = *(int **)(this + 0x78);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x60),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(this + 0x74);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  sVar1 = *(short *)(*(int *)(this + 0xc) + 0x16);
  iVar2 = SmDev();
  __mulsf3(*(undefined4 *)(iVar7 + iVar2 * 4 + 0x78),*(undefined4 *)pGVar5);
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,(int)sVar1,uVar3);
  piVar8 = *(int **)(this + 0x48);
  pcVar6 = *(code **)(*piVar8 + 0x14);
  iVar7 = SmDev();
  __mulsf3(*(undefined4 *)(DAT_00112cdc + iVar7 * 4 + 0x112c88),*(undefined4 *)(this + 0x90));
  uVar3 = __fixsfsi();
  (*pcVar6)(piVar8,uVar3,*(int *)(*(int *)(this + 0x14) + 0x10) / 2);
  (**(code **)(**(int **)(this + 0x4c) + 0x20))(*(int **)(this + 0x4c),0);
  *(undefined1 *)(*(int *)(this + 0x4c) + 0x86) = 0;
  (**(code **)(**(int **)(this + 0x50) + 0x20))(*(int **)(this + 0x50),0);
  *(undefined1 *)(*(int *)(this + 0x50) + 0x86) = 0;
  (**(code **)(**(int **)(this + 0x54) + 0x20))(*(int **)(this + 0x54),0);
  *(undefined1 *)(*(int *)(this + 0x54) + 0x86) = 0;
  return;
}


