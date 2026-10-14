/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001665ae GameStateMap::setEventRaidShopPosition */

/* GameStateMap::setEventRaidShopPosition() */

void __thiscall GameStateMap::setEventRaidShopPosition(GameStateMap *this)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x37c) == 0) {
    iVar5 = *(int *)(this + 0xd4) + 1;
  }
  iVar4 = *(int *)(this + 0x90);
  iVar1 = ZombieCafe::getEventRaid_Theme(*(ZombieCafe **)(this + 0xc));
  if (*(int *)(this + 0x22c) == 0) {
    return;
  }
  iVar2 = __divsi3(iVar5 + 1,3);
  __aeabi_idivmod(iVar5 + 1,3);
  if (iVar1 == 1) {
LAB_00166672:
    iVar5 = 4;
    iVar1 = 8;
  }
  else {
    iVar5 = 0x18;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            iVar5 = 0;
            iVar1 = 0;
            iVar3 = 0x2d;
            goto LAB_00166680;
          }
          if (iVar1 != 6) {
            if (iVar1 == 7) {
              iVar5 = 10;
              iVar1 = 0;
            }
            else {
              if (iVar1 != 8) {
                if (iVar1 != 9) {
                  if ((iVar1 != 10) && (iVar1 != 0xb)) goto LAB_00166672;
                  iVar5 = 0;
                  iVar1 = -0xe;
                  goto LAB_0016667c;
                }
                goto LAB_00166658;
              }
              iVar5 = 0x1c;
              iVar1 = 0x14;
            }
            iVar3 = 0x5a;
            goto LAB_00166680;
          }
        }
LAB_00166658:
        iVar5 = 10;
        iVar1 = 0;
        goto LAB_0016667c;
      }
      iVar5 = 0x10;
    }
    iVar5 = -iVar5;
    iVar1 = -0xe;
  }
LAB_0016667c:
  iVar3 = 0x2a;
LAB_00166680:
  positionCafe(this,(MapCafe *)(this + 0x22c),iVar4 * iVar2,2 - extraout_r1,iVar5,iVar1,0,iVar3);
  return;
}


