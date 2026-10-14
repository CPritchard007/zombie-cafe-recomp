/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000beffc Cafe::getDataForCustomer */

/* Cafe::getDataForCustomer(int) */

undefined4 __thiscall Cafe::getDataForCustomer(Cafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  return *(undefined4 *)(param_1 * 4 + *(int *)(*(int *)(iVar1 + 4) + DAT_000bf010));
}


