/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b49c0 L_GameCenterConnected */

/* L_GameCenterConnected(SServer*) */

bool L_GameCenterConnected(SServer *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((int)*(void **)(param_1 + 4) - 1U < 0xfffffffe) {
    iVar1 = CCGameCenter::IsConnected(*(void **)(param_1 + 4));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


