/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab828 CCGetOpenUDIDQuery */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CCGetOpenUDIDQuery() */

char * CCGetOpenUDIDQuery(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *__s;
  
  uVar1 = CCGetDeviceID2();
  uVar2 = CCGetOpenUDID();
  uVar3 = CCGetVendorID();
  uVar4 = CCGetAdID();
  __s = (char *)(DAT_002ab864 + 0x2ab84c);
  snprintf(__s,0x400,(char *)(DAT_002ab868 + 0x2ab852),uVar1,uVar2,uVar3,uVar4);
  return __s;
}


