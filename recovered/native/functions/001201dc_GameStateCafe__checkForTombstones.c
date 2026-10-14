/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001201dc GameStateCafe::checkForTombstones */

/* GameStateCafe::checkForTombstones() */

void __thiscall GameStateCafe::checkForTombstones(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00120404;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120400) = 0;
  iVar1 = DAT_00120408;
  *(undefined1 *)(*(int *)(this + 0xc) + iVar3) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + iVar1) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012040c) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + 0x9e0) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120410) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120414) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120418) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012041c) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120420) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120424) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120428) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012042c) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120430) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + 0x9f0) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120434) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_00120438) = 0;
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0012043c) = 0;
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x0e',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
LAB_001202ea:
  iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00);
  iVar3 = DAT_00120448;
  if (iVar1 == 0) goto code_r0x001202f4;
  iVar3 = *(int *)(*(int *)(iVar1 + 0x38) + 0x24);
  if (iVar3 == 0x1ca) {
    iVar1 = *(int *)(this + 0xc);
    iVar3 = DAT_0012041c;
    goto LAB_001202e8;
  }
  if (iVar3 < 0x1cb) {
    if (iVar3 == 0x11e) {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = DAT_00120404;
      goto LAB_001202e0;
    }
    if (iVar3 < 0x11f) {
      if (iVar3 == DAT_00120440) {
        iVar1 = *(int *)(this + 0xc);
        iVar3 = DAT_00120400;
        goto LAB_001202e8;
      }
      goto LAB_001202ea;
    }
    if (iVar3 != 0x13e) {
      if (iVar3 == DAT_00120444) {
        iVar1 = *(int *)(this + 0xc);
        iVar3 = DAT_0012040c;
        goto LAB_001202e0;
      }
      goto LAB_001202ea;
    }
    iVar1 = *(int *)(this + 0xc);
    iVar3 = DAT_00120408;
  }
  else {
    if (iVar3 == 0x1cc) {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = DAT_0012042c;
      goto LAB_001202e8;
    }
    if (iVar3 < 0x1cc) {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = DAT_00120420;
LAB_001202e0:
      *(undefined1 *)(iVar1 + iVar3) = 1;
      goto LAB_001202ea;
    }
    if (iVar3 == 0x1e4) {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = 0x9f0;
      goto LAB_001202e0;
    }
    if (iVar3 != 0x240) goto LAB_001202ea;
    iVar1 = *(int *)(this + 0xc);
    iVar3 = DAT_00120438;
  }
LAB_001202e8:
  *(undefined1 *)(iVar1 + iVar3) = 1;
  goto LAB_001202ea;
code_r0x001202f4:
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  iVar1 = 0;
  do {
    iVar2 = *(int *)(this + 0xc);
    if (*(int *)(*(int *)(iVar2 + 0x7e8) + 0x100) + 1 <= iVar1) {
      return;
    }
    iVar4 = *(int *)(*(int *)(iVar1 * 4 + *(int *)(*(int *)(iVar2 + 0x7e8) + 0x104)) * 4 +
                    *(int *)(*(int *)(this + 0x14) + 0x94));
    if (*(char *)(iVar4 + 0x44) != '\x0e') goto LAB_001203e8;
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0x1ca) {
      *(undefined1 *)(iVar2 + DAT_0012041c) = 1;
      iVar4 = *(int *)(this + 0xc);
      iVar2 = DAT_00120424;
LAB_001203e6:
      *(undefined1 *)(iVar4 + iVar2) = 1;
    }
    else {
      if (0x1ca < iVar4) {
        if (iVar4 == 0x1cc) {
          *(undefined1 *)(iVar2 + DAT_0012042c) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_00120430;
        }
        else if (iVar4 < 0x1cc) {
          *(undefined1 *)(iVar2 + DAT_00120420) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_00120428;
        }
        else if (iVar4 == 0x1e4) {
          *(undefined1 *)(iVar2 + 0x9f0) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_00120434;
        }
        else {
          if (iVar4 != 0x240) goto LAB_001203e8;
          *(undefined1 *)(iVar2 + DAT_00120438) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_0012043c;
        }
        goto LAB_001203e6;
      }
      if (iVar4 == 0x11e) {
        *(undefined1 *)(iVar2 + DAT_00120404) = 1;
        iVar4 = *(int *)(this + 0xc);
        iVar2 = DAT_00120410;
        goto LAB_001203e6;
      }
      if (0x11e < iVar4) {
        if (iVar4 == 0x13e) {
          *(undefined1 *)(iVar2 + DAT_00120408) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_00120414;
        }
        else {
          if (iVar4 != DAT_00120444) goto LAB_001203e8;
          *(undefined1 *)(iVar2 + DAT_0012040c) = 1;
          iVar4 = *(int *)(this + 0xc);
          iVar2 = DAT_00120418;
        }
        goto LAB_001203e6;
      }
      if (iVar4 == DAT_00120440) {
        *(undefined1 *)(iVar2 + DAT_00120400) = 1;
        *(undefined1 *)(*(int *)(this + 0xc) + 0x9e0) = 1;
        puts((char *)(iVar3 + 0x12030a));
      }
    }
LAB_001203e8:
    iVar1 = iVar1 + 1;
  } while( true );
}


