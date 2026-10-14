/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb420 CCSpinner::StopDrag */

/* CCSpinner::StopDrag(void*) */

undefined8 __thiscall CCSpinner::StopDrag(CCSpinner *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  CCSpinner *local_20;
  void *local_1c;
  
  local_20 = this;
  local_1c = param_1;
  if (*(int *)(this + 0x30) == 0) goto LAB_002bb522;
  local_20 = *(CCSpinner **)(this + 0x20);
  uVar1 = FUN_002bafd2(local_20);
  uVar5 = *(undefined4 *)(this + 0x44);
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0x24) = uVar5;
  }
  else {
    iVar2 = __aeabi_fcmplt(*(undefined4 *)(this + 0x28),0);
    uVar3 = *(undefined4 *)(this + 0x48);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmpgt(uVar3,uVar5);
    }
    else {
      iVar2 = __aeabi_fcmplt(uVar3,uVar5);
    }
    if (iVar2 != 0) {
      uVar5 = uVar3;
    }
    iVar4 = *(int *)(this + 0x38);
    iVar2 = __aeabi_fcmpgt(uVar5,iVar4);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmplt(uVar5,iVar4 + -0x80000000);
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x24) = uVar5;
        *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -0x80000000;
        iVar2 = FirstIndex(this);
        goto LAB_002bb4a4;
      }
      uVar1 = __floatsisf(uVar1);
      local_1c = (void *)__subsf3(local_20,uVar1);
      iVar2 = __aeabi_fcmpgt(local_1c,0);
      if (iVar2 == 0) {
        iVar2 = __aeabi_fcmplt(local_1c,0);
        if (iVar2 != 0) {
          iVar2 = *(int *)(this + 0x18);
          goto LAB_002bb4e2;
        }
        *(undefined4 *)(this + 0x1c) = 0;
        *(undefined4 *)(this + 0x24) = 0;
        *(CCSpinner **)(this + 0x2c) = local_20;
      }
      else {
        iVar2 = *(int *)(this + 0x18) + -0x80000000;
LAB_002bb4e2:
        *(int *)(this + 0x1c) = iVar2;
        *(undefined4 *)(this + 0x24) = uVar5;
        *(undefined4 *)(this + 0x2c) = uVar1;
      }
    }
    else {
      *(undefined4 *)(this + 0x24) = uVar5;
      *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x18);
      iVar2 = FirstIndex(this);
      iVar2 = iVar2 + 1;
LAB_002bb4a4:
      uVar5 = __floatsisf(iVar2);
      *(undefined4 *)(this + 0x2c) = uVar5;
    }
    if (*(int *)(this + 8) == 0) {
      uVar1 = *(undefined4 *)(this + 0x2c);
      uVar5 = *(undefined4 *)(this + 4);
      iVar2 = __aeabi_fcmpgt(uVar1,0);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      iVar2 = __aeabi_fcmplt(uVar1,uVar5);
      if (iVar2 != 0) {
        uVar5 = uVar1;
      }
      *(undefined4 *)(this + 0x2c) = uVar5;
    }
  }
  *(undefined4 *)(this + 0x30) = 0;
LAB_002bb522:
  return CONCAT44(local_1c,local_20);
}


