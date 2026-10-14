/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298f84 CapcomApp::tickApp */

/* CapcomApp::tickApp(CapcomApp*, int) */

void CapcomApp::tickApp(CapcomApp *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1[0x60] == (CapcomApp)0x0) {
    uVar3 = getUptime(param_1);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x2c);
    iVar2 = param_2 >> 0x1f;
    *(int *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x34) = iVar2;
    if (((int)uVar1 >> 0x1f < iVar2) || ((iVar2 == (int)uVar1 >> 0x1f && (uVar1 < (uint)param_2))))
    {
      param_2 = uVar1;
    }
    tick(param_1,param_2);
    ResourceManager::loadResources(*(ResourceManager **)(param_1 + 0x5c),100);
  }
  return;
}


