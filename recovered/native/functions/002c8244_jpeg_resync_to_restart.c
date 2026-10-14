/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8244 jpeg_resync_to_restart */

undefined4 jpeg_resync_to_restart(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x6e];
  *(undefined4 *)(*param_1 + 0x14) = 0x7c;
  *(int *)(*param_1 + 0x18) = iVar1;
  *(int *)(*param_1 + 0x1c) = param_2;
  (**(code **)(*param_1 + 4))(param_1,0xffffffff,0x7c,*(code **)(*param_1 + 4),param_4);
  while( true ) {
    iVar2 = 2;
    if ((((0xbf < iVar1) && (iVar2 = 3, iVar1 - 0xd0U < 8)) && (iVar1 != (param_2 + 1U & 7) + 0xd0))
       && ((iVar1 != (param_2 + 2U & 7) + 0xd0 && (iVar2 = 2, iVar1 != (param_2 - 1U & 7) + 0xd0))))
    {
      iVar2 = 2 - (uint)(iVar1 != (param_2 - 2U & 7) + 0xd0);
    }
    *(undefined4 *)(*param_1 + 0x14) = 99;
    *(int *)(*param_1 + 0x18) = iVar1;
    *(int *)(*param_1 + 0x1c) = iVar2;
    (**(code **)(*param_1 + 4))(param_1,4);
    if (iVar2 != 2) break;
    iVar1 = FUN_002c71aa(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = param_1[0x6e];
  }
  if (iVar2 != 3) {
    param_1[0x6e] = 0;
  }
  return 1;
}


