/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a578c GameStateEventRaidMenu::getTitleResoucesID */

/* GameStateEventRaidMenu::getTitleResoucesID() */

undefined4 __thiscall GameStateEventRaidMenu::getTitleResoucesID(GameStateEventRaidMenu *this)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xa8);
  uVar1 = 0x30;
  if (((((((iVar2 != 1) && (uVar1 = 0x33, iVar2 != 2)) && (uVar1 = 0x30, iVar2 != 3)) &&
        ((uVar1 = 0x33, iVar2 != 4 && (uVar1 = 0x59, iVar2 != 5)))) && (uVar1 = 0x5a, iVar2 != 6))
      && (((((uVar1 = 0x33, iVar2 != 7 && (uVar1 = 0x5a, iVar2 != 8)) &&
            ((uVar1 = 0x50, iVar2 != 9 &&
             (((iVar2 != 10 && (uVar1 = 0x5a, iVar2 != 0xb)) && (uVar1 = 0x50, iVar2 != 0xc)))))) &&
           (((uVar1 = 0x5a, iVar2 != 0xd && (uVar1 = 0x4f, iVar2 != 0xe)) &&
            ((uVar1 = 0x50, iVar2 != 0xf &&
             ((((uVar1 = 0x61, iVar2 != 0x10 && (uVar1 = 0x4f, iVar2 != 0x11)) &&
               ((uVar1 = 0x50, iVar2 != 0x12 &&
                (((uVar1 = 0x61, iVar2 != 0x13 && (uVar1 = 0x66, iVar2 != 0x14)) &&
                 (uVar1 = 0x4f, iVar2 != 0x15)))))) &&
              ((uVar1 = 0x61, iVar2 != 0x16 && (uVar1 = 0x66, iVar2 != 0x17)))))))))) &&
          (uVar1 = 0x5f, iVar2 != 0x18)))) &&
     (((uVar1 = 0x50, iVar2 != 0x19 && (uVar1 = 0x61, iVar2 != 0x1a)) &&
      (uVar1 = 0x4e, iVar2 != 0x1b)))) {
    uVar1 = 0x30;
  }
  return uVar1;
}


