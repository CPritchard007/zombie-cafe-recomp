/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298d78 CapcomApp::setAndroidScreenSize */

/* CapcomApp::setAndroidScreenSize(int, int) */

void __thiscall CapcomApp::setAndroidScreenSize(CapcomApp *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(uint *)(this + 0x70) = param_2 & 0xffffU | param_1 << 0x10;
  uVar1 = __floatsisf(param_1);
  uVar1 = __mulsf3(uVar1,0x3a800000);
  *(undefined4 *)(this + 0x40) = uVar1;
  uVar2 = __floatsisf(param_2);
  uVar2 = __divsf3(uVar2,DAT_00298dc8);
  *(undefined4 *)(this + 0x44) = uVar2;
  iVar3 = __aeabi_fcmpgt(uVar1,uVar2);
  if (iVar3 == 0) {
    *(undefined4 *)(this + 0x4c) = uVar2;
    *(undefined4 *)(this + 0x48) = uVar1;
  }
  else {
    *(undefined4 *)(this + 0x4c) = uVar1;
    *(undefined4 *)(this + 0x48) = uVar2;
  }
  *(undefined4 *)(this + 0x50) = 0x3fc00000;
  return;
}


