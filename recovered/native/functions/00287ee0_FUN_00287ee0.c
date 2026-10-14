/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287ee0 FUN_00287ee0 */

void FUN_00287ee0(int *param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00287ae4(param_1,param_2,param_3,0,0,1,param_5);
  puVar3 = (undefined4 *)param_1[0x7f];
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = *param_1;
    iVar1 = FUN_0025d12c(iVar4,puVar3[0x11]);
    *(byte *)((int)puVar3 + 0x22) = *(byte *)((int)puVar3 + 0x22) | 0x10;
    puVar3[0xe] = 0;
    uVar2 = FUN_0025f2ac(iVar4,param_4);
    FUN_00267394(iVar4,puVar3,uVar2);
    uVar2 = FUN_0025f25a(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x10) + iVar1 * 0x10));
    FUN_00267394(iVar4,puVar3,uVar2);
    uVar2 = FUN_0025f25a(iVar4,*puVar3);
    FUN_00267394(iVar4,puVar3,uVar2);
    param_1[0x83] = (*param_4 + param_4[1]) - *param_2;
    if ((undefined4 *)puVar3[0xf] != (undefined4 *)0x0) {
      FUN_00268e90(param_1,0x1d,*puVar3,*(undefined4 *)puVar3[0xf],
                   *(undefined4 *)(*(int *)(*param_1 + 0x10) + iVar1 * 0x10));
    }
  }
  return;
}


