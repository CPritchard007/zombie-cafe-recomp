/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7ab0 CookCommandBar::setStove */

/* CookCommandBar::setStove(Stove*) */

void __thiscall CookCommandBar::setStove(CookCommandBar *this,Stove *param_1)

{
  int *piVar1;
  CImage *pCVar2;
  ImageElement *this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ScreenElement *this_01;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  ImageButton *this_02;
  int iVar11;
  CookCommandBar *pCVar12;
  String aSStack_20 [12];
  
  *(Stove **)(this + 0x84) = param_1;
  iVar6 = DAT_000e7dac + 0xe7ac8;
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 100);
  if (*(int *)(this + 0x94) != 0) {
    (**(code **)(*(int *)this + 0x34))();
    piVar1 = *(int **)(*(int *)(this + 0x94) + 100);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
  }
  pcVar7 = *(code **)(*(int *)this + 0x2c);
  pCVar2 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7db0),
                      (int)*(short *)(*(int *)(*(int *)(this + 0x74) + 0x4e8) +
                                      (uint)**(ushort **)(param_1 + 100) * 0x1c + 0x14),true);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar2,'\t',false);
  pCVar12 = this + 0x94;
  *(ImageElement **)pCVar12 = this_00;
  (*pcVar7)(this,this_00);
  piVar9 = *(int **)pCVar12;
  pcVar7 = *(code **)(*piVar9 + 0x14);
  iVar3 = SmDev();
  uVar4 = __fixsfsi(*(undefined4 *)(iVar3 * 4 + *(int *)(iVar6 + DAT_000e7db4)));
  piVar1 = *(int **)(iVar6 + DAT_000e7db8);
  iVar8 = *piVar1;
  iVar3 = SmDev();
  uVar5 = __floatsisf(*(undefined4 *)(iVar3 * 4 + iVar8));
  iVar3 = SmDev();
  __addsf3(uVar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar6 + DAT_000e7dbc)));
  uVar5 = __fixsfsi();
  (*pcVar7)(piVar9,uVar4,uVar5);
  iVar3 = *(int *)pCVar12;
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x68) + 0x10));
  uVar5 = __floatsisf(*(undefined4 *)(iVar3 + 0x10));
  uVar4 = __divsf3(uVar4,uVar5);
  *(undefined4 *)(iVar3 + 0x6c) = uVar4;
  *(undefined4 *)(iVar3 + 0x68) = uVar4;
  if (((ushort)(*(short *)(*(int *)(*(int *)(this + 0x74) + 0x4e8) +
                           (uint)**(ushort **)(param_1 + 100) * 0x1c + 0x12) - 0x8cU) < 2) &&
     (iVar3 = SmDev(), iVar3 != 0)) {
    iVar3 = *(int *)pCVar12;
    uVar4 = __mulsf3(*(undefined4 *)(iVar3 + 0x68),DAT_000e7dc0);
    *(undefined4 *)(iVar3 + 0x68) = uVar4;
    iVar3 = *(int *)pCVar12;
    uVar4 = __mulsf3(*(undefined4 *)(iVar3 + 0x6c),DAT_000e7dc0);
    *(undefined4 *)(iVar3 + 0x6c) = uVar4;
  }
  piVar9 = *(int **)(this + 0x94);
  pCVar2 = (CImage *)piVar9[0x19];
  uVar4 = CImage::getWidth(pCVar2);
  uVar5 = CImage::getHeight(pCVar2);
  iVar3 = *piVar9;
  uVar4 = __floatsisf(uVar4);
  __mulsf3(uVar4,piVar9[0x1a]);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(uVar5);
  __mulsf3(uVar5,piVar9[0x1b]);
  uVar5 = __fixsfsi();
  (**(code **)(iVar3 + 0x18))(piVar9,uVar4,uVar5);
  this_01 = *(ScreenElement **)(this + 0x94);
  iVar3 = ScreenElement::localToParentCoords(this_01,*(int *)(this_01 + 0xc),0);
  iVar10 = *piVar1;
  iVar8 = SmDev();
  pCVar12 = this + 0x98;
  piVar9 = *(int **)pCVar12;
  iVar8 = *(int *)(iVar8 * 4 + iVar10);
  pcVar7 = *(code **)(*piVar9 + 0x44);
  FoodStack::getRecipe(*(FoodStack **)(param_1 + 100));
  Recipe::getFullName((char)&stack0xffffffec + 0xf4);
  (*pcVar7)(piVar9,aSStack_20);
  String::~String(aSStack_20);
  piVar9 = *(int **)pCVar12;
  iVar11 = *piVar1;
  pcVar7 = *(code **)(*piVar9 + 0x14);
  iVar10 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar10 * 4 + iVar11));
  iVar10 = SmDev();
  uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar10 * 4 + *(int *)(iVar6 + DAT_000e7dc4)));
  iVar10 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar10 * 4 + *(int *)(iVar6 + DAT_000e7dc8)));
  uVar4 = __fixsfsi();
  (*pcVar7)(piVar9,(iVar3 >> 0x10) + (iVar8 >> 1),uVar4);
  piVar1 = *(int **)(this + 0x9c);
  iVar6 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)pCVar12,0,*(int *)(*(ScreenElement **)pCVar12 + 0x10));
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar6 >> 0x10,(int)(short)iVar6);
  (**(code **)(**(int **)(this + 100) + 0x20))(*(int **)(this + 100),1);
  (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),1);
  if (*(int **)(*(int *)(this + 0x68) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x68) + 0x60) + 4))();
    *(undefined4 *)(*(int *)(this + 0x68) + 0x60) = 0;
  }
  this_02 = *(ImageButton **)(this + 0x68);
  pCVar2 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0x74) + DAT_000e7dcc),0x7a,false)
  ;
  ImageButton::setImageAndResize(this_02,pCVar2);
  (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
  (**(code **)(**(int **)(this + 0x70) + 0x20))(*(int **)(this + 0x70),0);
  piVar1 = *(int **)(this + 0x9c);
  (**(code **)(*piVar1 + 0x18))
            (piVar1,(*(int *)(*(int *)(this + 0x68) + 4) - *(int *)(*(int *)(this + 0x68) + 0xc)) -
                    piVar1[1],0);
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  this[0xb8] = (CookCommandBar)0x0;
  this[0xb9] = (CookCommandBar)0x0;
  (**(code **)(*(int *)this + 8))(this,1);
  return;
}


