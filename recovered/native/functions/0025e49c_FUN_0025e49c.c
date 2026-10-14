/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e49c FUN_0025e49c */

void FUN_0025e49c(int *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 auStack_24 [8];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0025e5a4 + 0x25e4a8);
  local_1c = *piVar4;
  *param_2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  if (iVar1 == 0) {
    if ((0 < local_2c) || ((local_2c == 0 && (0xf < local_30)))) {
      iVar1 = FUN_0025bf2a(param_1,&local_38,local_30 - 0x10,local_2c + -1 + (uint)(0xf < local_30),
                           &local_38);
      if ((iVar1 == 0) && (local_38 < param_3)) {
        iVar1 = FUN_0025bf2a(param_1,&local_34,local_30 - 0xc,local_2c + -1 + (uint)(0xb < local_30)
                             ,&local_34);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_1 + 8))
                            (param_1,auStack_24,8,*(code **)(*param_1 + 8),local_30 - 8,
                             local_2c + -1 + (uint)(7 < local_30));
          if ((iVar1 == 0) &&
             (iVar2 = memcmp(auStack_24,(void *)(DAT_0025e5a8 + 0x25e57c),8), iVar2 == 0)) {
            iVar1 = (**(code **)(*param_1 + 8))
                              (param_1,param_2,local_38,*(code **)(*param_1 + 8),
                               (local_30 - 0x10) - local_38,
                               (local_2c + -1 + (uint)(0xf < local_30)) -
                               (uint)(local_30 - 0x10 < local_38));
            if (iVar1 == 0) {
              for (uVar3 = 0; uVar3 != local_38; uVar3 = uVar3 + 1) {
                local_34 = local_34 - (uint)(byte)param_2[uVar3];
              }
              if (local_34 != 0) {
                local_38 = 0;
              }
              param_2[local_38] = 0;
            }
          }
        }
      }
    }
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}


