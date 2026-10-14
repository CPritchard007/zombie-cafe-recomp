/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261810 FUN_00261810 */

uint * FUN_00261810(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (uint *)0x0) {
    if ((param_2 == 0) || (uVar3 = param_2 - 1, *param_1 < param_2)) {
      param_1 = (uint *)0x0;
    }
    else {
      do {
        uVar2 = param_1[2];
        if (uVar2 == 0) {
          if (*param_1 < 0xfa1) {
            return (uint *)((int)(uint)*(byte *)((int)param_1 + (uVar3 >> 3) + 0xc) >> (uVar3 & 7) &
                           1);
          }
          __aeabi_uidivmod(uVar3,0x7d,*param_1,4000,param_4);
          iVar1 = extraout_r1_00;
          while( true ) {
            if (param_1[iVar1 + 3] == 0) {
              return (uint *)0x0;
            }
            if (param_1[iVar1 + 3] == uVar3 + 1) break;
            __aeabi_uidivmod(iVar1 + 1,0x7d);
            iVar1 = extraout_r1_01;
          }
          return (uint *)0x1;
        }
        iVar1 = __udivsi3(uVar3,uVar2);
        __aeabi_uidivmod(uVar3,uVar2);
        param_1 = (uint *)param_1[iVar1 + 3];
        uVar3 = extraout_r1;
      } while (param_1 != (uint *)0x0);
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}


