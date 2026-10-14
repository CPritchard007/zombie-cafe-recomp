/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010357c Furniture::_draw */

/* Furniture::_draw(CapcomGraphics*) */

void __thiscall Furniture::_draw(Furniture *this,CapcomGraphics *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  PackedImage *this_00;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar6 = (uint)(byte)this[0x34];
  iVar7 = *(int *)(this + 0x38);
  uVar5 = *(uint *)(iVar7 + uVar6 * 4 + 4);
  uVar5 = ((*(uint *)(this + 4) >> 0x10) - (uVar5 >> 0x10)) * 0x10000 |
          *(int *)(this + 4) - uVar5 & 0xffff;
  iVar11 = DAT_00103880 + 0x1035ac;
  if (uVar6 == 1) {
    sVar1 = *(short *)(iVar7 + 0x3e);
    sVar2 = *(short *)(iVar7 + 0x3c);
LAB_001035ce:
    uVar12 = (uint)(sVar1 == sVar2);
  }
  else {
    uVar12 = 0;
    if (uVar6 == 3) {
      sVar1 = *(short *)(iVar7 + 0x40);
      sVar2 = *(short *)(iVar7 + 0x42);
      goto LAB_001035ce;
    }
  }
  if (*(char *)(iVar7 + 0x44) == '\x0f') {
    if (*(int *)(this + 0x28) < 1) {
      uVar6 = 0xffffffff;
    }
    else {
      lVar9 = **(long **)(iVar11 + DAT_00103884);
      iVar7 = __divsi3(*(int *)(this + 0x28) << 0x10,**(undefined4 **)(iVar11 + DAT_00103888));
      uVar6 = CFColor::interpolate(-1,lVar9,iVar7,0);
    }
    iVar7 = Cafe::isAllCollectAction();
    if (iVar7 != 0) {
      iVar7 = CapcomApp::getInstance();
      iVar7 = *(int *)(iVar7 + 4);
      sVar2 = Cafe::getAllCollectTimer();
      sVar1 = *(short *)(iVar7 + 0x930);
      sVar2 = __divsi3((int)sVar2,10);
      iVar7 = __divsi3((int)sVar1 * (sVar2 + 0x5a),1000);
      if (iVar7 < 0) {
        __aeabi_idivmod(-iVar7,0x168);
        iVar7 = -*(int *)(extraout_r1_00 * 4 + DAT_00103890 + 0x103666);
      }
      else {
        __aeabi_idivmod(iVar7,0x168);
        iVar7 = *(int *)(extraout_r1 * 4 + DAT_0010388c + 0x103652);
      }
      iVar7 = iVar7 * 200 + 0x37;
      uVar6 = iVar7 >> 0x1f;
      uVar6 = (iVar7 >> 0x10) + uVar6 ^ uVar6;
      uVar6 = uVar6 | uVar6 << 0x10 | DAT_00103894;
    }
    CapcomGraphics::setColor(param_1,uVar6);
    CapcomGraphics::setColorModulation(param_1,true);
  }
  piVar8 = *(int **)(this + 0x38);
  if (*(byte *)(piVar8 + 0x11) - 5 < 2) {
    iVar7 = *(int *)(*piVar8 + *(short *)((int)piVar8 + ((byte)this[0x34] + 0x1c) * 2 + 4) * 4);
    *(undefined4 *)(iVar7 + 0x2c) = DAT_00103898;
  }
  else {
    iVar7 = *(int *)(*piVar8 + *(short *)((int)piVar8 + ((byte)this[0x34] + 0x1c) * 2 + 4) * 4);
    *(undefined4 *)(iVar7 + 0x2c) = DAT_00103898;
  }
  *(undefined4 *)(iVar7 + 0x30) = 0x3f400000;
  iVar7 = (int)(short)(uVar5 >> 0x10);
  piVar8 = *(int **)(*(short *)((int)*(int **)(this + 0x38) + ((byte)this[0x34] + 0x1c) * 2 + 4) * 4
                    + **(int **)(this + 0x38));
  iVar10 = (int)(short)uVar5;
  (**(code **)(*piVar8 + 0x10))
            (piVar8,param_1,iVar7,iVar10,uVar12,9,iVar7,iVar10,uVar5 & 0xffff,uVar12,uVar5,
             uVar5 >> 0x10);
  if (*(int *)(this + 0x3c) != 0) {
    if (param_1[0x18] != (CapcomGraphics)0x0) {
      CapcomGraphics::setColor(param_1,(uint)(byte)param_1[3] << 0x18 | DAT_0010389c);
    }
    CapcomGraphics::translate((long)param_1);
    (**(code **)(**(int **)(this + 0x3c) + 8))(*(int **)(this + 0x3c),param_1);
    CapcomGraphics::translate((long)param_1);
  }
  if (((*(short *)(this + 0x42) == 0) && (this[0x46] == (Furniture)0x0)) ||
     (this[0x54] == (Furniture)0x0)) {
    if (((*(short *)(this + 0x44) == 0) && (this[0x46] == (Furniture)0x0)) ||
       (this[0x54] == (Furniture)0x0)) {
      if (*(int **)(this + 0x48) == (int *)0x0) {
        return;
      }
      (**(code **)(**(int **)(this + 0x48) + 4))();
      *(undefined4 *)(this + 0x48) = 0;
      return;
    }
    if (param_1[0x18] != (CapcomGraphics)0x0) {
      CapcomGraphics::setColor(param_1,(uint)(byte)param_1[3] << 0x18 | DAT_0010389c);
    }
    iVar3 = CapcomApp::getInstance();
    iVar3 = *(int *)(iVar3 + 4);
    iVar11 = (int)((uint)**(byte **)(iVar11 + DAT_001038a0) * *(int *)(iVar3 + DAT_001038a4)) >>
             0x11;
    if (*(int *)(this + 0x48) != 0) goto LAB_0010383e;
    if ((this[0x46] != (Furniture)0x0) ||
       (*(short *)(*(int *)(this + 0x38) + 0x52) <= *(short *)(this + 0x44))) goto LAB_00103874;
    this_00 = *(PackedImage **)(iVar3 + DAT_001038a8);
    iVar3 = 0x4d;
  }
  else {
    if (param_1[0x18] != (CapcomGraphics)0x0) {
      CapcomGraphics::setColor(param_1,(uint)(byte)param_1[3] << 0x18 | DAT_0010389c);
    }
    iVar3 = CapcomApp::getInstance();
    iVar3 = *(int *)(iVar3 + 4);
    iVar11 = (int)((uint)**(byte **)(iVar11 + DAT_001038a0) * *(int *)(iVar3 + DAT_001038a4)) >>
             0x11;
    if (*(int *)(this + 0x48) != 0) goto LAB_0010383e;
    if ((this[0x46] == (Furniture)0x0) &&
       (*(short *)(this + 0x42) < *(short *)(*(int *)(this + 0x38) + 0x4e))) {
      this_00 = *(PackedImage **)(iVar3 + DAT_001038a8);
      iVar3 = 0x1c;
    }
    else {
LAB_00103874:
      this_00 = *(PackedImage **)(iVar3 + DAT_001038a8);
      iVar3 = 0x1e;
    }
  }
  uVar4 = PackedImage::getImage(this_00,iVar3,false);
  *(undefined4 *)(this + 0x48) = uVar4;
LAB_0010383e:
  (**(code **)(**(int **)(this + 0x48) + 0x10))
            (*(int **)(this + 0x48),param_1,iVar7 + ((int)*(short *)(this + 0x22) >> 1),
             iVar10 + iVar11,0,0x14);
  return;
}


