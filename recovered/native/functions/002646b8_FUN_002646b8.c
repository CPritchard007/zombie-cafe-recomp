/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002646b8 FUN_002646b8 */

undefined4 FUN_002646b8(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *__s1;
  uint uVar5;
  void *__s2;
  uint local_24;
  
  if ((((param_3 != (int *)0x0) && (*param_3 != 0)) && (param_3[2] != 0)) &&
     (iVar1 = FUN_0026460e(*param_1,*param_3,param_1[1]), iVar1 != 0)) {
    if (param_3[1] == 0) {
      uVar2 = 0;
      local_24 = 0;
    }
    else {
      uVar2 = FUN_00264662(*param_1,param_3[1],param_1[1]);
      local_24 = uVar2;
      if (uVar2 != 0) {
        local_24 = *(uint *)(uVar2 + 0x24);
      }
    }
    __s1 = (byte *)param_3[2];
    uVar5 = 0;
    __s2 = (void *)(DAT_00264774 + 0x26470a);
    while( true ) {
      if (*__s1 == 0) {
        return 0;
      }
      if (((((int)local_24 >> 0x1f) - ((int)uVar5 >> 0x1f)) + (uint)(uVar5 <= local_24) & 0xff) == 0
         ) {
        return 0;
      }
      iVar4 = 0;
      for (; (uVar3 = (uint)*__s1, 0x2f < uVar3 && (uVar3 < 0x3a)); __s1 = __s1 + 1) {
        iVar4 = iVar4 * 10 + -0x30 + uVar3;
      }
      if (uVar5 == 0) {
        *(int *)(iVar1 + 0x18) = iVar4;
      }
      if (uVar2 == 0) {
        return 0;
      }
      *(int *)(uVar5 * 4 + *(int *)(uVar2 + 8)) = iVar4;
      __s1 = __s1 + (*__s1 == 0x20);
      iVar4 = memcmp(__s1,__s2,10);
      if (iVar4 == 0) break;
      uVar5 = uVar5 + 1;
    }
    *(undefined1 *)(uVar2 + 0x2e) = 1;
  }
  return 0;
}


