/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001221e8 GameStateCafe::ExecuteFurnitureGiftReceived */

/* GameStateCafe::ExecuteFurnitureGiftReceived(int, int) */

undefined8 __thiscall
GameStateCafe::ExecuteFurnitureGiftReceived(GameStateCafe *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  if (param_1 == 0) {
    local_1c = 0;
    goto LAB_0012231e;
  }
  if (*(int *)(this + 0x14) == 0) {
    local_1c = 0;
    goto LAB_0012231e;
  }
  local_1c = 0;
  if (*(int *)(*(int *)(this + 0x14) + 0x90) <= param_1) goto LAB_0012231e;
  iVar3 = *(int *)(this + 0xc);
  local_1c = *(int *)(iVar3 + 0x7e8);
  if (local_1c == 0) goto LAB_0012231e;
  cVar1 = *(char *)(*(int *)(param_1 * 4 + *(int *)(local_1c + 0x94)) + 0x44);
  if (cVar1 == '\x10') {
    for (; 0 < param_2; param_2 = param_2 + -1) {
      ZombieCafe::addAmpouleToStorage(*(ZombieCafe **)(this + 0xc),param_1);
    }
    local_1c = 1;
    goto LAB_0012231e;
  }
  if ((cVar1 == '\a') || (cVar1 == '\x05')) {
    local_1c = 0;
    goto LAB_0012231e;
  }
  if (param_1 == DAT_00122324) {
    if (*(char *)(iVar3 + DAT_00122328) == '\0') {
LAB_00122284:
      param_2 = 1;
      iVar2 = param_2;
    }
    else {
      param_2 = 0;
      iVar2 = param_2;
    }
  }
  else {
    iVar2 = DAT_0012232c;
    if ((param_1 == 0x13e) || (iVar2 = DAT_00122330, param_1 == 0x1ca)) {
      if (*(char *)(iVar3 + iVar2) == '\0') goto LAB_00122284;
      param_2 = 0;
      iVar2 = param_2;
    }
    else {
      iVar2 = DAT_00122334;
      if ((((param_1 == 0x11e) || (iVar2 = DAT_0012233c, param_1 == DAT_00122338)) ||
          (iVar2 = DAT_00122344, param_1 == DAT_00122340)) ||
         (iVar2 = DAT_00122348, param_1 == 0x1cc)) {
        if (*(char *)(iVar3 + iVar2) != '\0') {
LAB_001222b8:
          param_2 = 0;
          iVar2 = param_2;
          goto LAB_00122304;
        }
      }
      else if (param_1 == 0x1e4) {
        if (*(char *)(iVar3 + 0x9f0) != '\0') goto LAB_001222b8;
        *(undefined1 *)(iVar3 + DAT_0012234c) = 0;
      }
      else {
        iVar2 = 0;
        if ((param_1 != 0x240) ||
           (param_2 = 0, iVar2 = param_2, *(char *)(iVar3 + DAT_00122350) != '\0'))
        goto LAB_00122304;
        *(undefined1 *)(iVar3 + DAT_00122354) = 0;
      }
      param_2 = 1;
      iVar2 = param_2;
    }
  }
LAB_00122304:
  for (; 0 < param_2; param_2 = param_2 + -1) {
    Vector<int>::addElement((Vector<int> *)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0xfc),param_1);
  }
  local_1c = 1;
  if (iVar2 != 0) {
    resetTombstone(this,param_1);
  }
LAB_0012231e:
  return CONCAT44(this,local_1c);
}


