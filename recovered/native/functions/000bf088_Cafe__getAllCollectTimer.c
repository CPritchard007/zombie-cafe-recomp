/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf088 Cafe::getAllCollectTimer */

/* Cafe::getAllCollectTimer() */

int Cafe::getAllCollectTimer(void)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x7e8);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x80);
  }
  return iVar1;
}


