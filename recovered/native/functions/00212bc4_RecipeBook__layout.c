/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00212bc4 RecipeBook::layout */

/* RecipeBook::layout() */

void __thiscall RecipeBook::layout(RecipeBook *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ImageButton *this_00;
  code *pcVar8;
  int iVar9;
  RecipeBook *pRVar10;
  int iVar11;
  undefined4 uVar12;
  RecipeBook *pRVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  float extraout_s1;
  float extraout_s1_00;
  float fVar16;
  undefined8 uVar15;
  int local_38;
  int local_34;
  
  CapcomApp::getInstance();
  iVar1 = CapcomApp::getInstance();
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar3 = *(undefined4 *)(iVar1 + 0x44);
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 0x60) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x60) + 0x10));
  piVar4 = *(int **)(this + 0x140);
  (**(code **)(*piVar4 + 0x14))
            (piVar4,*(int *)(this + 0xc) >> 1,(*(int *)(this + 0x10) >> 1) + (piVar4[4] >> 1));
  piVar4 = *(int **)(this + 0xd4);
  iVar1 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x140),
                     *(int *)(*(ScreenElement **)(this + 0x140) + 0xc),0);
  (**(code **)(*piVar4 + 0x14))(piVar4,iVar1 >> 0x10,(int)(short)iVar1);
  piVar4 = *(int **)(this + 100);
  iVar9 = DAT_00212dc0 + 0x212c32;
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar1 * 4 + iVar9);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
  piVar4 = *(int **)(this + 100);
  pcVar8 = *(code **)(*piVar4 + 0x18);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x30);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x48));
  (**(code **)(**(int **)(this + 0x68) + 0x14))(*(int **)(this + 0x68),0,0);
  iVar5 = SmDev();
  iVar1 = DAT_00212dc4;
  local_34 = 0;
  local_38 = 0;
  uVar12 = *(undefined4 *)(iVar9 + iVar5 * 4 + 0x60);
  for (; local_34 < *(int *)(this + 0x70) + 1; local_34 = local_34 + 1) {
    iVar11 = local_34 * 4;
    (**(code **)(**(int **)(*(int *)(this + 0xa4) + iVar11) + 0x14))
              (*(int **)(*(int *)(this + 0xa4) + iVar11),local_38,uVar12);
    piVar4 = *(int **)(*(int *)(this + 0x74) + iVar11);
    pcVar8 = *(code **)(*piVar4 + 0x14);
    iVar9 = *(int *)(*(int *)(*(int *)(this + 0xa4) + iVar11) + 0xc);
    iVar5 = SmDev();
    (*pcVar8)(piVar4,iVar9 / 2,*(undefined4 *)(iVar1 + iVar5 * 4 + 0x212d0c));
    iVar5 = *(int *)(*(int *)(this + 0x74) + iVar11);
    (**(code **)(**(int **)(*(int *)(this + 0x80) + iVar11) + 0x14))
              (*(int **)(*(int *)(this + 0x80) + iVar11),*(undefined4 *)(iVar5 + 4),
               *(int *)(iVar5 + 8) - *(int *)(iVar5 + 0x10) / 2);
    piVar4 = *(int **)(*(int *)(this + 0x8c) + iVar11);
    pcVar8 = *(code **)(*piVar4 + 0x14);
    uVar7 = *(undefined4 *)(*(int *)(*(int *)(this + 0x74) + iVar11) + 4);
    iVar5 = SmDev();
    (*pcVar8)(piVar4,uVar7,*(undefined4 *)(DAT_00212dc8 + iVar5 * 4 + 0x212d2e));
    iVar5 = *(int *)(*(int *)(this + 0x74) + iVar11);
    (**(code **)(**(int **)(*(int *)(this + 0x98) + iVar11) + 0x14))
              (*(int **)(*(int *)(this + 0x98) + iVar11),
               *(int *)(iVar5 + 0xc) / 2 + *(int *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    local_38 = local_38 + *(int *)(*(int *)(*(int *)(this + 0xa4) + iVar11) + 0xc);
  }
  iVar1 = SmDev();
  if (((iVar1 == 4) || (iVar1 = SmDev(), iVar1 == 3)) || (iVar1 = SmDev(), iVar1 == 2)) {
    local_38 = local_38 + *(int *)(**(int **)(this + 0xa4) + 0xc);
  }
  piVar4 = *(int **)(this + 0x68);
  pcVar8 = *(code **)(*piVar4 + 0x18);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,local_38,*(undefined4 *)(DAT_00212dcc + iVar1 * 4 + 0x212de8));
  iVar1 = SmDev();
  local_38 = *(int *)(DAT_00212dd0 + iVar1 * 4 + 0x212ddc);
  iVar1 = DAT_00212dd4 + 0x212dbc;
  for (local_34 = 0; local_34 < *(int *)(this + 0xac) + 1; local_34 = local_34 + 1) {
    iVar11 = local_34 * 4;
    piVar4 = *(int **)(*(int *)(this + 0xb0) + iVar11);
    pcVar8 = *(code **)(*piVar4 + 0x14);
    iVar5 = SmDev();
    (*pcVar8)(piVar4,local_38,*(undefined4 *)(iVar1 + iVar5 * 4 + 0x40));
    piVar4 = *(int **)(*(int *)(this + 0xbc) + iVar11);
    pcVar8 = *(code **)(*piVar4 + 0x14);
    iVar9 = *(int *)(*(int *)(*(int *)(this + 0xb0) + iVar11) + 0xc);
    iVar5 = SmDev();
    (*pcVar8)(piVar4,local_38 + iVar9,*(undefined4 *)(iVar1 + iVar5 * 4 + 0x40));
    iVar9 = *(int *)(*(int *)(*(int *)(this + 0xb0) + iVar11) + 0xc);
    iVar5 = SmDev();
    local_38 = local_38 + iVar9 + *(int *)(iVar1 + iVar5 * 4 + 0x58);
  }
  piVar4 = *(int **)(this + 0xe4);
  iVar11 = DAT_0021323c + 0x212e66;
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(DAT_00213240 + iVar1 * 4 + 0x212ee4);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar11 + iVar1 * 4 + 8));
  piVar4 = *(int **)(this + 0xe4);
  iVar1 = piVar4[3];
  iVar5 = piVar4[4];
  __mulsf3(uVar2,0x43000000);
  iVar9 = __fixsfsi();
  __mulsf3(uVar3,0x43000000);
  uVar6 = __fixsfsi();
  iVar1 = CONCAT22((short)iVar1,(short)iVar5) + (iVar9 << 0x10 | uVar6);
  (**(code **)(*piVar4 + 0x18))(piVar4,iVar1 >> 0x10,iVar1 * 0x10000 >> 0x10);
  piVar4 = *(int **)(this + 0xe8);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar11 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar11 + iVar1 * 4 + 0x38));
  piVar4 = *(int **)(this + 0x11c);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar11 + iVar1 * 4 + 0x50);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar11 + iVar1 * 4 + 0x68));
  piVar4 = *(int **)(this + 0x11c);
  iVar5 = DAT_00213244 + 0x212f26;
  pcVar8 = *(code **)(*piVar4 + 0x18);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,*(undefined4 *)(iVar1 * 4 + iVar5),0);
  *(undefined1 *)(*(int *)(this + 0x11c) + 0x7f) = 0x12;
  piVar4 = *(int **)(this + 0xec);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x18);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x30));
  piVar4 = *(int **)(this + 0xd8);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x48);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x60));
  piVar4 = *(int **)(this + 0xfc);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar9 = DAT_00213248 + 0x212fa2;
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x78);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x10));
  piVar4 = *(int **)(this + 0xfc);
  pcVar8 = *(code **)(*piVar4 + 0x18);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x28);
  iVar1 = SmDev();
  iVar1 = *(int *)(iVar9 + iVar1 * 4 + 0x40);
  iVar5 = SmDev();
  (*pcVar8)(piVar4,uVar12,iVar1 - *(int *)(iVar9 + iVar5 * 4 + 0x10));
  piVar4 = *(int **)(this + 0x110);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x58);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x70));
  piVar4 = *(int **)(this + 0x100);
  iVar5 = DAT_0021324c + 0x213026;
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 8);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x40));
  piVar4 = *(int **)(this + 0x120);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x38));
  piVar4 = *(int **)(this + 0x124);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x50));
  piVar4 = *(int **)(this + 0x128);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x68));
  piVar4 = *(int **)(this + 300);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar9 = DAT_00213250 + 0x2130c6;
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar1 * 4 + iVar9));
  piVar4 = *(int **)(this + 0x130);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 8);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
  piVar4 = *(int **)(this + 0x104);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x30);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x48));
  piVar4 = *(int **)(this + 0x10c);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar9 + iVar1 * 4 + 0x60);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar9 + iVar1 * 4 + 0x78));
  piVar4 = *(int **)(this + 0x108);
  iVar5 = DAT_00213254 + 0x21315e;
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x10);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x28));
  piVar4 = *(int **)(this + 0xf0);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x40);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x58));
  piVar4 = *(int **)(this + 0x118);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x70);
  iVar1 = SmDev();
  iVar5 = DAT_00213258 + 0x2131ca;
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 8));
  piVar4 = *(int **)(this + 0x114);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x20);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x38));
  piVar4 = *(int **)(this + 0xf4);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = *(undefined4 *)(iVar5 + iVar1 * 4 + 0x50);
  iVar1 = SmDev();
  (*pcVar8)(piVar4,uVar12,*(undefined4 *)(iVar5 + iVar1 * 4 + 0x68));
  iVar1 = SmDev();
  fVar14 = extraout_s0;
  fVar16 = extraout_s1;
  if ((iVar1 == 0) ||
     (iVar1 = SmDev(), fVar14 = extraout_s0_00, fVar16 = extraout_s1_00, iVar1 == 1)) {
    this_00 = *(ImageButton **)(this + 0xdc);
  }
  else {
    this_00 = *(ImageButton **)(this + 0xdc);
  }
  pRVar10 = this + 0xdc;
  ImageButton::setScale(this_00,fVar14,fVar16);
  piVar4 = *(int **)pRVar10;
  iVar9 = DAT_002133b0 + 0x213272;
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar9));
  __mulsf3(uVar12,uVar2);
  uVar12 = __fixsfsi();
  iVar1 = SmDev();
  uVar7 = __floatsisf(*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
  __mulsf3(uVar7,uVar3);
  uVar7 = __fixsfsi();
  uVar15 = (*pcVar8)(piVar4,uVar12,uVar7);
  ImageButton::setScale(*(ImageButton **)pRVar10,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  (**(code **)(**(int **)(this + 0x134) + 0x14))
            (*(int **)(this + 0x134),*(undefined4 *)(*(int *)pRVar10 + 4),
             *(undefined4 *)(*(int *)pRVar10 + 8));
  pRVar13 = this + 0xe0;
  setSortTypeText(this,*(undefined4 *)(this + 0x16c));
  pcVar8 = *(code **)(**(int **)pRVar13 + 0x14);
  iVar1 = SmDev();
  iVar5 = *(int *)pRVar13;
  uVar12 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar9));
  uVar12 = __mulsf3(uVar12,uVar2);
  uVar7 = __floatsisf(*(int *)(*(int *)pRVar10 + 0xc) / 2);
  uVar12 = __addsf3(uVar12,uVar7);
  uVar7 = __floatsisf(*(int *)(iVar5 + 0xc) / 2);
  __addsf3(uVar12,uVar7);
  uVar12 = __fixsfsi();
  iVar1 = SmDev();
  uVar7 = __floatsisf(*(undefined4 *)(iVar9 + iVar1 * 4 + 0x18));
  __mulsf3(uVar7,uVar3);
  uVar7 = __fixsfsi();
  uVar15 = (*pcVar8)(iVar5,uVar12,uVar7);
  ImageButton::setScale(*(ImageButton **)pRVar13,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  piVar4 = *(int **)(this + 0xf8);
  (**(code **)(*piVar4 + 0x20))(piVar4,0);
  piVar4 = *(int **)(this + 0xf8);
  pcVar8 = *(code **)(*piVar4 + 0x14);
  iVar1 = SmDev();
  uVar12 = __floatsisf(*(undefined4 *)(iVar9 + iVar1 * 4 + 0x30));
  __mulsf3(uVar12,uVar2);
  uVar2 = __fixsfsi();
  iVar1 = SmDev();
  uVar12 = __floatsisf(*(undefined4 *)(iVar9 + iVar1 * 4 + 0x48));
  __mulsf3(uVar12,uVar3);
  uVar3 = __fixsfsi();
  (*pcVar8)(piVar4,uVar2,uVar3);
  return;
}


