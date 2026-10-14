/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be358 CafeTile::isInside */

/* CafeTile::isInside() const */

int __thiscall CafeTile::isInside(CafeTile *this)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  
  uVar3 = (ushort)(byte)*this;
  iVar4 = DAT_000be3c4 + 0xbe364;
  iVar2 = 0;
  if ((((uVar3 != **(ushort **)(iVar4 + DAT_000be3c8)) &&
       (uVar3 != **(ushort **)(iVar4 + DAT_000be3cc))) &&
      (uVar3 != **(ushort **)(iVar4 + DAT_000be3d0))) &&
     ((uVar3 != **(ushort **)(iVar4 + DAT_000be3d4) &&
      (uVar3 != **(ushort **)(iVar4 + DAT_000be3d8))))) {
    puVar5 = (ushort *)**(undefined4 **)(iVar4 + DAT_000be3e0);
    for (; iVar2 < (int)(uint)**(byte **)(iVar4 + DAT_000be3dc); iVar2 = iVar2 + 1) {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      if (uVar3 == uVar1) {
        return 0;
      }
    }
    iVar2 = 1;
  }
  return iVar2;
}


