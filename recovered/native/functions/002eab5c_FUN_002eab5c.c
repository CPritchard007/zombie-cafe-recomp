/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eab5c FUN_002eab5c */

undefined4 * FUN_002eab5c(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = DAT_002eacb4;
  iVar4 = *(int *)(DAT_002eaca8 + 0x2eab70);
  puVar3 = *(undefined4 **)(DAT_002eacac + 0x2eab78);
  iVar7 = DAT_002eacb0 + 0x2eab8a;
  do {
    uVar5 = iVar4 - (int)puVar3;
    uVar6 = *param_2 * param_1;
    if (uVar5 != 0) {
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
        *(undefined4 **)(DAT_002eaccc + 0x2eabfc) = (undefined4 *)((int)puVar3 + uVar6);
        return puVar3;
      }
      if (param_1 <= uVar5) {
        iVar1 = __udivsi3(uVar5,param_1);
        puVar2 = (undefined4 *)(DAT_002eacd0 + 0x2eac18);
        *param_2 = iVar1;
        *puVar2 = (undefined4 *)((int)puVar3 + iVar1 * param_1);
        return puVar3;
      }
      iVar4 = (uVar5 - 1 >> 3) * 4;
      *puVar3 = *(undefined4 *)(iVar4 + iVar7);
      *(undefined4 *)(iVar4 + iVar7) = *(undefined4 *)(iVar1 + 0x2eaba0);
      *(undefined4 *)(DAT_002eacb8 + 0x2eabae) = 0;
      *(undefined4 *)(iVar1 + 0x2eaba0) = 0;
    }
    uVar5 = uVar6 * 2 + (*(int *)(DAT_002eacbc + 0x2eabb8) + 7U & 0xfffffff8);
    puVar3 = (undefined4 *)operator_new(uVar5);
    *(undefined4 **)(DAT_002eacc0 + 0x2eabce) = puVar3;
    iVar4 = (int)puVar3 + uVar5;
    *(int *)(DAT_002eacc4 + 0x2eabd6) = (uVar5 >> 4) + *(int *)(DAT_002eacc4 + 0x2eabd6);
    *(int *)(DAT_002eacc8 + 0x2eabe2) = iVar4;
  } while( true );
}


