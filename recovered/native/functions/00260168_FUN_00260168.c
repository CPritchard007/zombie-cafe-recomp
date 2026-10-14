/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260168 FUN_00260168 */

undefined8 FUN_00260168(uint *param_1,int param_2)

{
  uint uVar1;
  int *__dest;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  
  if (param_1 == (uint *)0x0) {
    uVar4 = 0;
    goto LAB_00260296;
  }
  uVar3 = param_2 - 1;
  for (puVar5 = param_1; 4000 < *puVar5; puVar5 = (uint *)puVar5[iVar7 + 3]) {
    uVar4 = puVar5[2];
    if (uVar4 == 0) {
      __aeabi_uidivmod(uVar3,0x7d);
      uVar3 = uVar3 + 1;
      uVar4 = extraout_r1_00;
      if (puVar5[extraout_r1_00 + 3] != 0) goto LAB_002601f0;
      if (0x7b < puVar5[1]) goto LAB_00260216;
      goto LAB_00260280;
    }
    iVar7 = __udivsi3(uVar3,uVar4);
    if (puVar5[iVar7 + 3] == 0) {
      uVar1 = FUN_0025f3c2(uVar4);
      puVar5[iVar7 + 3] = uVar1;
      if (uVar1 == 0) {
        uVar4 = 7;
        goto LAB_00260296;
      }
    }
    __aeabi_uidivmod(uVar3,uVar4);
    uVar3 = extraout_r1;
  }
  *(byte *)((int)puVar5 + (uVar3 >> 3) + 0xc) =
       (byte)(1 << (uVar3 & 7)) | *(byte *)((int)puVar5 + (uVar3 >> 3) + 0xc);
  goto LAB_00260294;
  while (uVar4 = uVar4 + 1 & -(uint)(uVar4 != 0x7c), puVar5[uVar4 + 3] != 0) {
LAB_002601f0:
    if (puVar5[uVar4 + 3] == uVar3) goto LAB_00260294;
  }
LAB_00260216:
  if (0x3d < puVar5[1]) {
    __dest = (int *)FUN_0025ee10(0,500);
    uVar4 = 7;
    if (__dest != (int *)0x0) {
      memcpy(__dest,puVar5 + 3,500);
      memset(puVar5 + 3,0,500);
      iVar7 = 0x7d;
      uVar4 = __udivsi3(*puVar5 + 0x7c,0x7d);
      puVar5[2] = uVar4;
      uVar4 = FUN_00260168(puVar5,uVar3);
      piVar6 = __dest;
      do {
        iVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        if (iVar2 != 0) {
          uVar3 = FUN_00260168(puVar5);
          uVar4 = uVar4 | uVar3;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      FUN_0025fbda(0,__dest);
    }
    goto LAB_00260296;
  }
LAB_00260280:
  puVar5[1] = puVar5[1] + 1;
  puVar5[uVar4 + 3] = uVar3;
LAB_00260294:
  uVar4 = 0;
LAB_00260296:
  return CONCAT44(param_1,uVar4);
}


