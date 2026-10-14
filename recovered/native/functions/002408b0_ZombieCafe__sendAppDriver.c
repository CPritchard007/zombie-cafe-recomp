/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002408b0 ZombieCafe::sendAppDriver */

/* ZombieCafe::sendAppDriver() */

void ZombieCafe::sendAppDriver(void)

{
  int iVar1;
  
  iVar1 = javaIsConnected();
  if (iVar1 != 0) {
    javaSendAppDriver(*(undefined4 *)(DAT_002408c8 + 0x2408c0));
  }
  return;
}


