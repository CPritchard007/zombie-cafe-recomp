/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264ad0 sqlite3_config */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00264af6) */
/* WARNING: Removing unreachable block (ram,0x00264af6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
sqlite3_config(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar7 = DAT_00264cf4;
  iVar6 = DAT_00264cf0;
  iVar5 = DAT_00264cdc;
  iVar4 = DAT_00264cd8;
  iVar3 = DAT_00264cc4;
  iVar2 = DAT_00264cc0;
  iVar1 = DAT_00264cbc;
  iVar10 = DAT_00264cb8;
  if (*(int *)(DAT_00264ca8 + 0x264b9e) != 0) {
    uVar8 = FUN_0026adf0(DAT_00264cac);
    goto LAB_00264ca0;
  }
  switch(param_1) {
  case 1:
    iVar10 = DAT_00264cb0 + 0x264b16;
    *(undefined4 *)(DAT_00264cb0 + 0x264b1a) = 0;
    goto LAB_00264b22;
  case 2:
    iVar10 = DAT_00264cb4 + 0x264b22;
    *(undefined4 *)(DAT_00264cb4 + 0x264b26) = 1;
LAB_00264b22:
    uVar8 = 0;
    *(undefined4 *)(iVar10 + 8) = 0;
    goto LAB_00264ca0;
  case 3:
    *(undefined4 *)(DAT_00264cb8 + 0x264b32) = 1;
    *(undefined4 *)(iVar10 + 0x264b36) = 1;
    break;
  case 4:
    uVar8 = param_2[1];
    uVar11 = param_2[2];
    *(undefined4 *)(DAT_00264cc4 + 0x264b96) = *param_2;
    *(undefined4 *)(iVar3 + 0x264b9a) = uVar8;
    *(undefined4 *)(iVar3 + 0x264b9e) = uVar11;
    uVar8 = param_2[4];
    uVar11 = param_2[5];
    *(undefined4 *)(iVar3 + 0x264ba2) = param_2[3];
    *(undefined4 *)(iVar3 + 0x264ba6) = uVar8;
    *(undefined4 *)(iVar3 + 0x264baa) = uVar11;
    uVar8 = param_2[7];
    *(undefined4 *)(iVar3 + 0x264bae) = param_2[6];
    *(undefined4 *)(iVar3 + 0x264bb2) = uVar8;
    break;
  case 5:
    if (*(int *)(DAT_00264cc8 + 0x264baa) == 0) {
      sqlite3_config(4,DAT_00264ccc + 0x264bb2);
    }
    iVar10 = DAT_00264cd0;
    uVar8 = *(undefined4 *)(DAT_00264cd0 + 0x264bce);
    uVar11 = *(undefined4 *)(DAT_00264cd0 + 0x264bd2);
    puVar9 = (undefined4 *)(DAT_00264cd0 + 0x264bd6);
    *param_2 = *(undefined4 *)(DAT_00264cd0 + 0x264bca);
    param_2[1] = uVar8;
    param_2[2] = uVar11;
    uVar8 = *(undefined4 *)(iVar10 + 0x264bda);
    uVar11 = *(undefined4 *)(iVar10 + 0x264bde);
    param_2[3] = *puVar9;
    param_2[4] = uVar8;
    param_2[5] = uVar11;
    uVar8 = *(undefined4 *)(iVar10 + 0x264be6);
    param_2[6] = *(undefined4 *)(iVar10 + 0x264be2);
    param_2[7] = uVar8;
    break;
  case 6:
    *(undefined4 **)(DAT_00264cd8 + 0x264c7c) = param_2;
    *(undefined4 **)(iVar4 + 0x264c80) = param_3;
    puVar9 = (undefined4 *)(iVar4 + 0x264c84);
    goto LAB_00264c88;
  case 7:
    *(undefined4 **)((int)&DAT_00264cac + DAT_00264cdc + 2) = param_2;
    *(undefined4 **)((int)&DAT_00264cb0 + iVar5 + 2) = param_3;
    puVar9 = (undefined4 *)((int)&DAT_00264cb4 + iVar5 + 2);
    goto LAB_00264c88;
  default:
    uVar8 = 1;
    goto LAB_00264ca0;
  case 9:
    puVar9 = (undefined4 *)(DAT_00264cd4 + 0x264bca);
    param_4 = param_2;
    goto LAB_00264c88;
  case 10:
    uVar8 = param_2[1];
    uVar11 = param_2[2];
    *(undefined4 *)(DAT_00264cbc + 0x264b7c) = *param_2;
    *(undefined4 *)(iVar1 + 0x264b80) = uVar8;
    *(undefined4 *)(iVar1 + 0x264b84) = uVar11;
    uVar8 = param_2[4];
    uVar11 = param_2[5];
    *(undefined4 *)(iVar1 + 0x264b88) = param_2[3];
    *(undefined4 *)(iVar1 + 0x264b8c) = uVar8;
    *(undefined4 *)(iVar1 + 0x264b90) = uVar11;
    uVar8 = param_2[7];
    uVar11 = param_2[8];
    *(undefined4 *)(iVar1 + 0x264b94) = param_2[6];
    *(undefined4 *)(iVar1 + 0x264b98) = uVar8;
    *(undefined4 *)(iVar1 + 0x264b9c) = uVar11;
    break;
  case 0xb:
    uVar8 = *(undefined4 *)(DAT_00264cc0 + 0x264b9e);
    uVar11 = *(undefined4 *)(DAT_00264cc0 + 0x264ba2);
    puVar9 = (undefined4 *)(DAT_00264cc0 + 0x264ba6);
    *param_2 = *(undefined4 *)(DAT_00264cc0 + 0x264b9a);
    param_2[1] = uVar8;
    param_2[2] = uVar11;
    uVar8 = *(undefined4 *)(iVar2 + 0x264baa);
    uVar11 = *(undefined4 *)(iVar2 + 0x264bae);
    param_2[3] = *puVar9;
    param_2[4] = uVar8;
    param_2[5] = uVar11;
    uVar8 = *(undefined4 *)(iVar2 + 0x264bb6);
    uVar11 = *(undefined4 *)(iVar2 + 0x264bba);
    param_2[6] = *(undefined4 *)(iVar2 + 0x264bb2);
    param_2[7] = uVar8;
    param_2[8] = uVar11;
    break;
  case 0xd:
    *(undefined4 **)(DAT_00264cf0 + 0x264c74) = param_2;
    *(undefined4 **)(iVar6 + 0x264c78) = param_3;
    break;
  case 0xe:
    break;
  case 0x10:
    *(undefined4 **)(DAT_00264cf4 + 0x264d5a) = param_2;
    puVar9 = (undefined4 *)(iVar7 + 0x264d5e);
    param_4 = param_3;
LAB_00264c88:
    *puVar9 = param_4;
    break;
  case 0x11:
    *(undefined4 **)(DAT_00264cf8 + 0x264ca6) = param_2;
    break;
  case 0x12:
    puVar9 = (undefined4 *)(DAT_00264ce0 + 0x264c82);
    goto LAB_00264c4a;
  case 0x13:
    if (*(int *)(DAT_00264ce4 + 0x264c94) == 0) {
      sqlite3_config(0x12,DAT_00264ce8 + 0x264c70);
    }
    puVar9 = param_2;
    param_2 = (undefined4 *)((int)&DAT_00264ca8 + DAT_00264cec + 2);
LAB_00264c4a:
    memcpy(puVar9,param_2,0x34);
  }
  uVar8 = 0;
LAB_00264ca0:
  return CONCAT44(param_1,uVar8);
}


