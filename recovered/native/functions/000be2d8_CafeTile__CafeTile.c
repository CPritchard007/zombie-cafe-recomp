/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be2d8 CafeTile::CafeTile */

/* CafeTile::CafeTile() */

CafeTile * __thiscall CafeTile::CafeTile(CafeTile *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = DAT_000be340 + 0xbe2e4;
  puVar4 = *(undefined4 **)(iVar3 + DAT_000be344);
  iVar1 = __aeabi_fcmpeq(*puVar4,0);
  if (iVar1 != 0) {
    iVar1 = __floatsisf((int)**(short **)(iVar3 + DAT_000be348) +
                        (int)**(short **)(iVar3 + DAT_000be34c));
    uVar2 = __floatsisf((int)**(short **)(iVar3 + DAT_000be350) +
                        (int)**(short **)(iVar3 + DAT_000be354));
    uVar2 = __divsf3(iVar1 + -0x80000000,uVar2);
    *puVar4 = uVar2;
  }
  this[8] = (CafeTile)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return this;
}


