/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ae9c GameStateCafe::CheckCanFurnitureGiftReceived */

/* GameStateCafe::CheckCanFurnitureGiftReceived(int, int) */

uint __thiscall
GameStateCafe::CheckCanFurnitureGiftReceived(GameStateCafe *this,int param_1,int param_2)

{
  char cVar1;
  ZombieCafe ZVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ZombieCafe *this_00;
  
  uVar3 = param_1;
  if (((param_1 != 0) && (uVar3 = *(uint *)(this + 0x14), uVar3 != 0)) &&
     (piVar4 = (int *)(uVar3 + 0x90), uVar3 = 0, param_1 < *piVar4)) {
    this_00 = *(ZombieCafe **)(this + 0xc);
    uVar3 = *(uint *)(this_00 + 0x7e8);
    if (uVar3 != 0) {
      cVar1 = *(char *)(*(int *)(param_1 * 4 + *(int *)(uVar3 + 0x94)) + 0x44);
      if (cVar1 == '\x10') {
        iVar5 = ZombieCafe::GetAmpouleInStorageCount(this_00,param_1);
        uVar3 = 2 - ((uint)((uint)(iVar5 + param_2) < 10) - (iVar5 + param_2 >> 0x1f));
      }
      else if ((cVar1 == '\a') || (cVar1 == '\x05')) {
        uVar3 = 0;
      }
      else {
        iVar5 = DAT_0011af6c;
        if ((((param_1 == DAT_0011af68) || (iVar5 = DAT_0011af70, param_1 == 0x13e)) ||
            ((iVar5 = DAT_0011af74, param_1 == 0x1ca ||
             (((iVar5 = DAT_0011af78, param_1 == 0x11e ||
               (iVar5 = DAT_0011af80, param_1 == DAT_0011af7c)) ||
              (iVar5 = DAT_0011af88, param_1 == DAT_0011af84)))))) ||
           (iVar5 = DAT_0011af8c, param_1 == 0x1cc)) {
          ZVar2 = this_00[iVar5];
        }
        else {
          if (param_1 == 0x1e4) {
            iVar5 = 0x9f0;
          }
          else {
            iVar5 = DAT_0011af90;
            if (param_1 != 0x240) {
              return 1;
            }
          }
          ZVar2 = this_00[iVar5];
        }
        uVar3 = (byte)ZVar2 ^ 1;
      }
    }
  }
  return uVar3;
}


