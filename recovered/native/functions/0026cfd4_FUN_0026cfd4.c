/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cfd4 FUN_0026cfd4 */

void FUN_0026cfd4(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [4];
  int local_34;
  
  iVar4 = *param_1;
  if (*(char *)(iVar4 + 0x36) == '\0') {
    memset(auStack_38,0,0x20);
    local_34 = param_4[10];
    puVar5 = *(undefined4 **)(*param_4 + 8);
    for (iVar6 = 0; iVar6 < param_2; iVar6 = iVar6 + 1) {
      uVar7 = *puVar5;
      uVar1 = FUN_0025d1b0(auStack_38,uVar7,0,0,0);
      uVar1 = FUN_0025f25a(iVar4,uVar1);
      *(undefined4 *)(param_3 + 0xc) = uVar1;
      iVar2 = FUN_0025ccc4(uVar7);
      *(char *)(param_3 + 0x16) = (char)iVar2;
      if (iVar2 == 0) {
        *(undefined1 *)(param_3 + 0x16) = 0x62;
      }
      puVar3 = (undefined4 *)FUN_0026cf38(param_1,uVar7);
      if (puVar3 != (undefined4 *)0x0) {
        uVar1 = FUN_0025f25a(iVar4,*puVar3);
        *(undefined4 *)(param_3 + 0x10) = uVar1;
      }
      param_3 = param_3 + 0x18;
      puVar5 = puVar5 + 5;
    }
  }
  return;
}


