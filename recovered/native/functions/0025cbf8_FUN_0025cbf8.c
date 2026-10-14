/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025cbf8 FUN_0025cbf8 */

int FUN_0025cbf8(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = 99;
  if (param_1 != (byte *)0x0) {
    uVar3 = 0;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                bVar1 = *param_1;
                if (bVar1 == 0) {
                  return iVar2;
                }
                param_1 = param_1 + 1;
                uVar3 = (uint)*(byte *)(DAT_0025cc94 + 0x25cc4a + (uint)bVar1) + uVar3 * 0x100;
                if (((uVar3 != DAT_0025cc98) && (uVar3 != DAT_0025cc9c)) && (uVar3 != DAT_0025cca0))
                break;
                iVar2 = 0x61;
              }
              if ((uVar3 != DAT_0025cca4) || ((iVar2 != 0x65 && (iVar2 != 99)))) break;
              iVar2 = 0x62;
            }
            bVar4 = iVar2 != 99;
            if ((uVar3 + DAT_0025cca8 != 0) || (bVar4)) break;
            iVar2 = 0x65;
            uVar3 = DAT_0025ccb8;
          }
          if ((uVar3 + DAT_0025ccac != 0) || (bVar4)) break;
          iVar2 = 0x65;
          uVar3 = DAT_0025ccbc;
        }
        if ((uVar3 + DAT_0025ccb0 != 0) || (bVar4)) break;
        iVar2 = 0x65;
        uVar3 = DAT_0025ccc0;
      }
    } while ((uVar3 & 0xffffff) != DAT_0025ccb4);
    iVar2 = 100;
  }
  return iVar2;
}


