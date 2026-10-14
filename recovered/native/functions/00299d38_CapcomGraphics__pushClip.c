/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299d38 CapcomGraphics::pushClip */

/* CapcomGraphics::pushClip(_cfRectangleBig) */

void CapcomGraphics::pushClip
               (CapcomGraphics *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_50 = param_5;
  finishBatch();
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  local_58 = param_2 + *(int *)(param_1 + 0xc);
  iVar5 = param_3 + *(int *)(param_1 + 8);
  local_4c = param_4;
  if (puVar3 != (undefined4 *)0x0) {
    CFRectangle::intersectBig
              (&local_48,local_58,param_3 + *(int *)(param_1 + 8),param_4,param_5,*puVar3,puVar3[1],
               puVar3[2],puVar3[3]);
    local_58 = local_48;
    local_4c = iStack_40;
    local_50 = local_3c;
    iVar5 = iStack_44;
  }
  piVar2 = (int *)operator_new(0x14);
  iVar4 = *(int *)(param_1 + 0x10);
  local_38 = local_58;
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  piVar2[3] = 0;
  local_30 = local_4c;
  local_2c = local_50;
  *piVar2 = local_58;
  piVar2[1] = iVar5;
  piVar2[2] = local_4c;
  piVar2[3] = local_50;
  iVar1 = DAT_00299df0;
  piVar2[4] = iVar4;
  *(int **)(param_1 + 0x10) = piVar2;
  if ((CapcomGraphics *)**(undefined4 **)(iVar1 + 0x299dda) == param_1) {
    local_34 = iVar5;
    activateClip(param_1);
  }
  return;
}


