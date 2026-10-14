/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00250a34 ZombieCafe::ExecuteFurnitureReceived */

/* ZombieCafe::ExecuteFurnitureReceived(Cafe*, int, int) */

undefined8 __thiscall
ZombieCafe::ExecuteFurnitureReceived(ZombieCafe *this,Cafe *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  if ((param_2 == 0) || (param_1 == (Cafe *)0x0)) {
    local_20 = 0;
    goto LAB_00250b66;
  }
  local_20 = 0;
  if ((param_3 < 1) || (*(int *)(param_1 + 0x90) <= param_2)) goto LAB_00250b66;
  cVar1 = *(char *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x94)) + 0x44);
  if (cVar1 == '\x10') {
    do {
      param_3 = param_3 + -1;
      addAmpouleToStorage(this,param_2);
    } while (param_3 != 0);
    local_20 = 1;
    goto LAB_00250b66;
  }
  if ((cVar1 == '\a') || (cVar1 == '\x05')) {
    local_20 = 0;
    goto LAB_00250b66;
  }
  if (param_2 == DAT_00250b6c) {
    if (this[DAT_00250b70] == (ZombieCafe)0x0) {
LAB_00250ac2:
      param_3 = 1;
      iVar3 = param_3;
    }
    else {
      param_3 = 0;
      iVar3 = param_3;
    }
  }
  else {
    iVar2 = DAT_00250b74;
    if ((param_2 == 0x13e) || (iVar2 = DAT_00250b78, param_2 == 0x1ca)) {
      param_3 = 0;
      iVar3 = param_3;
      if (this[iVar2] == (ZombieCafe)0x0) goto LAB_00250ac2;
    }
    else {
      iVar2 = DAT_00250b7c;
      if ((((param_2 == 0x11e) || (iVar2 = DAT_00250b84, param_2 == DAT_00250b80)) ||
          (iVar2 = DAT_00250b8c, param_2 == DAT_00250b88)) ||
         (iVar2 = DAT_00250b90, param_2 == 0x1cc)) {
        if (this[iVar2] != (ZombieCafe)0x0) {
LAB_00250af8:
          param_3 = 0;
          iVar3 = param_3;
          goto LAB_00250b3e;
        }
      }
      else if (param_2 == 0x1e4) {
        if (this[0x9f0] != (ZombieCafe)0x0) goto LAB_00250af8;
        this[DAT_00250b94] = (ZombieCafe)0x0;
      }
      else {
        iVar3 = 0;
        if ((param_2 != 0x240) ||
           (param_3 = 0, iVar3 = param_3, this[DAT_00250b98] != (ZombieCafe)0x0)) goto LAB_00250b3e;
        this[DAT_00250b9c] = (ZombieCafe)0x0;
      }
      param_3 = 1;
      iVar3 = param_3;
    }
  }
LAB_00250b3e:
  for (; param_3 != 0; param_3 = param_3 + -1) {
    Vector<int>::addElement((Vector<int> *)(param_1 + 0xfc),param_2);
  }
  local_20 = 1;
  if (iVar3 != 0) {
    ResetTombstone(this,param_1,param_2);
  }
LAB_00250b66:
  return CONCAT44(local_20,local_20);
}


