/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b1528 FUN_002b1528 */

undefined8 FUN_002b1528(void *param_1,undefined4 *param_2,ccVec2 *param_3)

{
  void *local_18;
  undefined4 *local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  local_18 = (void *)__addsf3(*param_2,*(undefined4 *)(param_3 + 0x30));
  local_14 = (undefined4 *)__addsf3(param_2[1],*(undefined4 *)(param_3 + 0x34));
  CCBatchRenderer::AddQuad(param_1,(ccVec2 *)&local_18,param_3 + 0x20,param_3);
  return CONCAT44(local_14,local_18);
}


