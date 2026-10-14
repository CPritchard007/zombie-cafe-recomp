/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfa4c Cafe::paint */

/* Cafe::paint(CapcomGraphics*) */

void __thiscall Cafe::paint(Cafe *this,CapcomGraphics *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  CImage *this_00;
  undefined4 uVar6;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  CapcomGraphics::setColorModulation(param_1,true);
  piVar2 = *(int **)(iVar1 + DAT_000bfbd8);
  uVar4 = *(undefined4 *)(this + 0x10);
  uVar6 = DAT_000bfbdc;
  (**(code **)(*piVar2 + 0x30))
            (piVar2,param_1,DAT_000bfbe4,*(undefined4 *)(this + 0xc),DAT_000bfbdc,uVar4,
             *(undefined4 *)(this + 0x14),DAT_000bfbe0,*(undefined4 *)(this + 8),
             (int)*(short *)(this + 4));
  if (*(int *)(this + 0x54) != 0) {
    CapcomGraphics::setColor(param_1,DAT_000bfbe8);
    iVar1 = *(int *)(*(int *)(this + 0x54) + 4);
    this_00 = *(CImage **)(this + 0x58);
    CImage::getWidth(this_00);
    CImage::getHeight(this_00);
    CapcomGraphics::pushClip(CONCAT44(uVar4,uVar6));
    (**(code **)(**(int **)(this + 0x58) + 0x10))
              (*(int **)(this + 0x58),param_1,iVar1 >> 0x10,(int)(short)iVar1,0,0x12);
    CapcomGraphics::popClip();
  }
  CapcomGraphics::setColorModulation(param_1,false);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x28);
  do {
    piVar2 = (int *)CapcomOrderableList<CafeObject*>::nextItem
                              ((CapcomOrderableList<CafeObject*> *)(this + 0x20));
    if (piVar2 == (int *)0x0) {
      CapcomGraphics::setColorModulation(param_1,false);
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x6c);
      while( true ) {
        puVar5 = *(undefined4 **)(this + 0x74);
        if (puVar5 == (undefined4 *)0x0) {
          return;
        }
        piVar2 = (int *)*puVar5;
        *(undefined4 *)(this + 0x74) = puVar5[1];
        if (piVar2 == (int *)0x0) break;
        iVar1 = piVar2[1];
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x30) == 0)) {
          *(int **)(iVar1 + 0x30) = piVar2;
        }
        if ((piVar2[1] != 0) &&
           ((uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2),
            **(byte **)(DAT_000bfbf0 + 0xbfbaa) != uVar3 || (*(int **)(piVar2[1] + 0x30) == piVar2))
           )) {
          (**(code **)(*piVar2 + 8))(piVar2,param_1);
        }
      }
      return;
    }
    if (this[0xc9] == (Cafe)0x0) {
      uVar3 = 1;
      iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
      if (iVar1 != 3) goto LAB_000bfb2e;
    }
    else {
LAB_000bfb2e:
      uVar3 = 0;
      if (this[0xca] == (Cafe)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2);
        uVar3 = -(uint)(uVar3 == 1) & uVar3;
      }
    }
    CapcomGraphics::setColorModulation(param_1,SUB41(uVar3,0));
    if (uVar3 != 0) {
      CapcomGraphics::setColor(param_1,**(int **)(DAT_000bfbec + 0xbfb60));
    }
    (**(code **)(*piVar2 + 8))(piVar2,param_1);
  } while( true );
}


