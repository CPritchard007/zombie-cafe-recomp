/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245088 ZombieCafe::CheckCanFurnitureGiftReceived */

/* ZombieCafe::CheckCanFurnitureGiftReceived(Cafe*, int, int) */

uint __thiscall
ZombieCafe::CheckCanFurnitureGiftReceived(ZombieCafe *this,Cafe *param_1,int param_2,int param_3)

{
  char cVar1;
  ZombieCafe ZVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != (Cafe *)0x0)) {
    if (param_3 < 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x90) <= param_2) {
      return 0;
    }
    cVar1 = *(char *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x94)) + 0x44);
    if (cVar1 == '\x10') {
      iVar3 = GetAmpouleInStorageCount(this,param_2);
      return 2 - ((uint)((uint)(iVar3 + param_3) < 10) - (iVar3 + param_3 >> 0x1f));
    }
    if ((cVar1 != '\a') && (cVar1 != '\x05')) {
      iVar3 = DAT_00245150;
      if (((param_2 == DAT_0024514c) ||
          (((iVar3 = DAT_00245154, param_2 == 0x13e || (iVar3 = DAT_00245158, param_2 == 0x1ca)) ||
           (iVar3 = DAT_0024515c, param_2 == 0x11e)))) ||
         (((iVar3 = DAT_00245164, param_2 == DAT_00245160 ||
           (iVar3 = DAT_0024516c, param_2 == DAT_00245168)) ||
          (iVar3 = DAT_00245170, param_2 == 0x1cc)))) {
        ZVar2 = this[iVar3];
      }
      else {
        if (param_2 == 0x1e4) {
          iVar3 = 0x9f0;
        }
        else {
          iVar3 = DAT_00245174;
          if (param_2 != 0x240) {
            return 1;
          }
        }
        ZVar2 = this[iVar3];
      }
      return (byte)ZVar2 ^ 1;
    }
  }
  return 0;
}


