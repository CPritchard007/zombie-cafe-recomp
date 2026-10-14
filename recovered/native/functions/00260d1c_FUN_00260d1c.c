/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260d1c FUN_00260d1c */

uint FUN_00260d1c(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  void *__s;
  uint extraout_r1;
  int extraout_r1_00;
  uint extraout_r1_01;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_28;
  
  uVar6 = *param_1;
  if (uVar6 != 0) {
    uVar1 = FUN_0025bad0(param_2,param_3);
    __aeabi_uidivmod(uVar1,uVar6);
    uVar6 = extraout_r1;
  }
  puVar2 = (uint *)FUN_0025baf8(param_1,param_2,param_3,uVar6);
  if (puVar2 == (uint *)0x0) {
    local_28 = param_4;
    if (param_4 != 0) {
      iVar3 = FUN_0025edc8(0x14);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 8) = param_4;
        *(uint *)(iVar3 + 0xc) = param_2;
        *(undefined4 *)(iVar3 + 0x10) = param_3;
        uVar4 = param_1[1] + 1;
        param_1[1] = uVar4;
        if ((9 < uVar4) && (*param_1 * 2 < uVar4)) {
          uVar8 = uVar4 * 2;
          if (0x400 < uVar4 * 0x10) {
            uVar8 = 0x80;
          }
          if (uVar8 != *param_1) {
            FUN_0025ad28();
            __s = (void *)FUN_0025edc8(uVar8 << 3);
            FUN_0025ad3c();
            if (__s != (void *)0x0) {
              sqlite3_free(param_1[3]);
              param_1[3] = (uint)__s;
              uVar6 = FUN_0025aeb8(__s);
              uVar6 = uVar6 >> 3;
              *param_1 = uVar6;
              memset(__s,0,uVar6 << 3);
              puVar2 = (uint *)param_1[2];
              param_1[2] = 0;
              while (puVar2 != (uint *)0x0) {
                uVar1 = FUN_0025bad0(puVar2[3],puVar2[4]);
                puVar5 = (uint *)*puVar2;
                __aeabi_uidivmod(uVar1,uVar6);
                FUN_00260cda(param_1,(void *)((int)__s + extraout_r1_00 * 8),puVar2);
                puVar2 = puVar5;
              }
              uVar1 = FUN_0025bad0(param_2,param_3);
              __aeabi_uidivmod(uVar1,*param_1);
              uVar6 = extraout_r1_01;
            }
          }
        }
        if (param_1[3] == 0) {
          FUN_00260cda(param_1,0,iVar3);
          local_28 = 0;
        }
        else {
          FUN_00260cda(param_1,param_1[3] + uVar6 * 8,iVar3);
          local_28 = 0;
        }
      }
    }
  }
  else {
    local_28 = puVar2[2];
    if (param_4 == 0) {
      if ((uint *)puVar2[1] == (uint *)0x0) {
        param_1[2] = *puVar2;
      }
      else {
        *(uint *)puVar2[1] = *puVar2;
      }
      if (*puVar2 != 0) {
        *(uint *)(*puVar2 + 4) = puVar2[1];
      }
      if (param_1[3] != 0) {
        piVar7 = (int *)(param_1[3] + uVar6 * 8);
        if ((uint *)piVar7[1] == puVar2) {
          piVar7[1] = *puVar2;
        }
        *piVar7 = *piVar7 + -1;
      }
      sqlite3_free();
      uVar6 = param_1[1];
      param_1[1] = uVar6 - 1;
      if (uVar6 - 1 == 0) {
        FUN_0025f666(param_1);
      }
    }
    else {
      puVar2[2] = param_4;
      puVar2[3] = param_2;
    }
  }
  return local_28;
}


