/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239178 ZombieCafe::pointerPressed */

/* ZombieCafe::pointerPressed(long*, int) */

void __thiscall ZombieCafe::pointerPressed(ZombieCafe *this,long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(void **)(this + DAT_002391ec) != (void *)0xffffffff) &&
     ((iVar1 = CCFacebook::IsDialogVisible(*(void **)(this + DAT_002391ec)), iVar1 == 0 ||
      (iVar1 = SmDev(), iVar1 != 4)))) {
    (**(code **)(*(int *)this + 0x24))(this,param_1,param_2);
    if (param_2 == 1) {
      *(undefined4 *)(this + 0x4d0) = 0;
      *(undefined4 *)(this + DAT_002391f0) = 0;
    }
    else if (param_2 == 2) {
      *(undefined4 *)(this + DAT_002391f4) = 0;
      *(undefined4 *)(this + 0x4c0) = 0;
      uVar2 = *(undefined4 *)(this + DAT_002391f8);
      *(undefined4 *)(this + 0x4b8) = uVar2;
      *(undefined4 *)(this + DAT_002391fc) = uVar2;
      *(int *)(this + DAT_002391f0) = **(short **)(DAT_00239200 + 0x2391c8) + 1;
    }
  }
  return;
}


