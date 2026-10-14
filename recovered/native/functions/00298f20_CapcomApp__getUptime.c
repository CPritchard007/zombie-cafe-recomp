/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298f20 CapcomApp::getUptime */

/* CapcomApp::getUptime(CapcomApp*) */

void CapcomApp::getUptime(CapcomApp *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Platform::getAppTime();
  uVar1 = __subdf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),*(undefined4 *)(param_1 + 0x68),
                   *(undefined4 *)(param_1 + 0x6c));
  __muldf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_00298f40,DAT_00298f44);
  __fixdfdi();
  return;
}


