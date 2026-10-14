/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025dfa4 FUN_0025dfa4 */

undefined8 FUN_0025dfa4(uint *param_1,int param_2,void *param_3)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2 - 1;
  puVar4 = param_1;
  if (param_1 != (uint *)0x0) {
    do {
      uVar5 = puVar4[2];
      if (uVar5 == 0) {
        if (*puVar4 < 0xfa1) {
          *(byte *)((int)puVar4 + (uVar6 >> 3) + 0xc) =
               *(byte *)((int)puVar4 + (uVar6 >> 3) + 0xc) & ~(byte)(1 << (uVar6 & 7));
        }
        else {
          memcpy(param_3,puVar4 + 3,500);
          memset(puVar4 + 3,0,500);
          puVar4[1] = 0;
          iVar3 = 0;
          do {
            iVar1 = *(int *)((int)param_3 + iVar3);
            if ((iVar1 != 0) && (iVar1 != uVar6 + 1)) {
              __aeabi_uidivmod(iVar1 + -1,0x7d);
              puVar4[1] = puVar4[1] + 1;
              uVar5 = extraout_r1_00;
              do {
                iVar1 = uVar5 * 4;
                iVar2 = 0;
                do {
                  if (*(int *)((int)puVar4 + iVar2 + iVar1 + 0xc) == 0) {
                    puVar4[uVar5 + 3] = *(uint *)((int)param_3 + iVar3);
                    goto LAB_0025e05e;
                  }
                  uVar5 = uVar5 + 1;
                  iVar2 = iVar2 + 4;
                } while (uVar5 < 0x7d);
                uVar5 = 0;
              } while( true );
            }
LAB_0025e05e:
            iVar3 = iVar3 + 4;
          } while (iVar3 != 500);
        }
        break;
      }
      iVar3 = __udivsi3(uVar6,uVar5);
      __aeabi_uidivmod(uVar6,uVar5);
      puVar4 = (uint *)puVar4[iVar3 + 3];
      uVar6 = extraout_r1;
    } while (puVar4 != (uint *)0x0);
  }
  return CONCAT44(param_3,param_1);
}


