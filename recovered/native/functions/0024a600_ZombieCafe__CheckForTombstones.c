/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a600 ZombieCafe::CheckForTombstones */

/* ZombieCafe::CheckForTombstones(Cafe*) */

undefined8 __thiscall ZombieCafe::CheckForTombstones(ZombieCafe *this,Cafe *param_1)

{
  int iVar1;
  CapcomOrderableList<Furniture*> *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_0024a7e4;
  iVar1 = DAT_0024a7e0;
  this[DAT_0024a7e8] = (ZombieCafe)0x0;
  this[iVar1] = (ZombieCafe)0x0;
  this[iVar5] = (ZombieCafe)0x0;
  iVar1 = DAT_0024a7f0;
  this[DAT_0024a7ec] = (ZombieCafe)0x0;
  this[0x9e0] = (ZombieCafe)0x0;
  this[DAT_0024a7f4] = (ZombieCafe)0x0;
  this[DAT_0024a7f8] = (ZombieCafe)0x0;
  this[DAT_0024a7fc] = (ZombieCafe)0x0;
  this[DAT_0024a800] = (ZombieCafe)0x0;
  this[DAT_0024a804] = (ZombieCafe)0x0;
  this[DAT_0024a808] = (ZombieCafe)0x0;
  this[DAT_0024a80c] = (ZombieCafe)0x0;
  this[DAT_0024a810] = (ZombieCafe)0x0;
  this[DAT_0024a814] = (ZombieCafe)0x0;
  this[0x9f0] = (ZombieCafe)0x0;
  this[DAT_0024a818] = (ZombieCafe)0x0;
  this[DAT_0024a7f0] = (ZombieCafe)0x0;
  this[DAT_0024a81c] = (ZombieCafe)0x0;
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(param_1,'\x0e',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
LAB_0024a6de:
  piVar3 = *(int **)(this_00 + 0x10);
  if (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    *(int *)(this_00 + 0x10) = piVar3[2];
    if (iVar5 == 0) goto LAB_0024a6f0;
    iVar6 = *(int *)(*(int *)(iVar5 + 0x38) + 0x24);
    iVar5 = DAT_0024a800;
    if (iVar6 != 0x1ca) {
      if (0x1ca < iVar6) {
        iVar5 = DAT_0024a810;
        if (iVar6 == 0x1cc) goto LAB_0024a6d0;
        iVar5 = DAT_0024a804;
        if (iVar6 < 0x1cc) {
LAB_0024a6d8:
          this[iVar5] = (ZombieCafe)0x1;
        }
        else {
          if (iVar6 == 0x1e4) {
            iVar5 = 0x9f0;
            goto LAB_0024a6d8;
          }
          if (iVar6 == 0x240) {
            this[iVar1] = (ZombieCafe)0x1;
          }
        }
        goto LAB_0024a6de;
      }
      iVar5 = DAT_0024a7e0;
      if (iVar6 == 0x11e) goto LAB_0024a6d8;
      if (0x11e < iVar6) {
        iVar5 = DAT_0024a7e4;
        if (iVar6 == 0x13e) goto LAB_0024a6d0;
        iVar5 = DAT_0024a7ec;
        if (iVar6 == DAT_0024a824) goto LAB_0024a6d8;
        goto LAB_0024a6de;
      }
      iVar5 = DAT_0024a7e8;
      if (iVar6 != DAT_0024a820) goto LAB_0024a6de;
    }
LAB_0024a6d0:
    this[iVar5] = (ZombieCafe)0x1;
    goto LAB_0024a6de;
  }
LAB_0024a6f0:
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  iVar5 = DAT_0024a828;
  operator_delete(this_00);
  iVar6 = 0;
  do {
    iVar2 = DAT_0024a81c;
    if (*(int *)(*(int *)(this + 0x7e8) + 0x100) + 1 <= iVar6) {
      return CONCAT44(param_1,this);
    }
    iVar4 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(*(int *)(this + 0x7e8) + 0x104)) * 4 +
                    *(int *)(param_1 + 0x94));
    if (*(char *)(iVar4 + 0x44) != '\x0e') goto LAB_0024a7cc;
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0x1ca) {
      this[DAT_0024a800] = (ZombieCafe)0x1;
      iVar2 = DAT_0024a808;
LAB_0024a7ca:
      this[iVar2] = (ZombieCafe)0x1;
    }
    else {
      if (0x1ca < iVar4) {
        if (iVar4 == 0x1cc) {
          this[DAT_0024a810] = (ZombieCafe)0x1;
          iVar2 = DAT_0024a814;
        }
        else if (iVar4 < 0x1cc) {
          this[DAT_0024a804] = (ZombieCafe)0x1;
          iVar2 = DAT_0024a80c;
        }
        else if (iVar4 == 0x1e4) {
          this[0x9f0] = (ZombieCafe)0x1;
          iVar2 = DAT_0024a818;
        }
        else {
          if (iVar4 != 0x240) goto LAB_0024a7cc;
          this[iVar1] = (ZombieCafe)0x1;
        }
        goto LAB_0024a7ca;
      }
      if (iVar4 == 0x11e) {
        this[DAT_0024a7e0] = (ZombieCafe)0x1;
        iVar2 = DAT_0024a7f4;
        goto LAB_0024a7ca;
      }
      if (0x11e < iVar4) {
        if (iVar4 == 0x13e) {
          this[DAT_0024a7e4] = (ZombieCafe)0x1;
          iVar2 = DAT_0024a7f8;
        }
        else {
          if (iVar4 != DAT_0024a824) goto LAB_0024a7cc;
          this[DAT_0024a7ec] = (ZombieCafe)0x1;
          iVar2 = DAT_0024a7fc;
        }
        goto LAB_0024a7ca;
      }
      if (iVar4 == DAT_0024a820) {
        this[DAT_0024a7e8] = (ZombieCafe)0x1;
        this[0x9e0] = (ZombieCafe)0x1;
        puts((char *)(iVar5 + 0x24a704));
      }
    }
LAB_0024a7cc:
    iVar6 = iVar6 + 1;
  } while( true );
}


