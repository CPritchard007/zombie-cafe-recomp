/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ea2c4 FUN_002ea2c4 */

bool FUN_002ea2c4(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  char local_2c;
  
  iVar1 = FUN_002e8e84();
  bVar7 = true;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar2 = DAT_002ea450 + 0x2ea2f6;
      iVar6 = 0;
      iVar5 = param_1;
      do {
        FUN_002e8eb0(&local_3c,param_1);
        uVar3 = *(uint *)((iVar6 + 2) * 8 + param_1 + 4);
        local_40 = (int *)*param_3;
        if (local_40 != (int *)0x0) {
          iVar4 = (int)uVar3 >> 8;
          if ((uVar3 & 1) != 0) {
            iVar4 = *(int *)(*local_40 + iVar4);
          }
          local_40 = (int *)((int)local_40 + iVar4);
        }
        if ((((int)(uVar3 << 0x1e) < 0) || ((param_4[3] & 1U) != 0)) &&
           (iVar4 = (**(code **)(**(int **)(iVar5 + 0x10) + 0x10))
                              (*(int **)(iVar5 + 0x10),param_2,&local_40,&local_3c), iVar4 != 0)) {
          if (-1 < (int)(uVar3 << 0x1e)) {
            local_3c = 2;
          }
          if ((uVar3 & 1) != 0) {
            local_2c = '\0';
          }
          iVar4 = param_4[1];
          if (iVar4 == 0) {
            if (local_38 != 0) {
              memcpy(param_4,&local_3c,0x11);
              if ((*param_4 == 1) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
                return true;
              }
              goto LAB_002ea3c6;
            }
LAB_002ea416:
            __assert2(DAT_002ea460 + 0x2ea420,0x6f,DAT_002ea464 + 0x2ea424,DAT_002ea468 + 0x2ea426);
            iVar4 = param_4[1];
          }
          else if (local_38 == 0) goto LAB_002ea416;
          iVar4 = FUN_002ea244(local_38,iVar4);
          if ((iVar4 != 0) ||
             (((param_4[2] == 0 && (local_34 == 0)) &&
              (((char)param_4[4] != '\0' ||
               ((local_2c != '\0' || (iVar4 = FUN_002ea234(param_4[1],local_38), iVar4 != 0))))))))
          {
LAB_002ea39a:
            *param_4 = 2;
            return true;
          }
          iVar4 = FUN_002ea234(param_4[1],local_38);
          if (iVar4 == 0) {
            __assert2(DAT_002ea454 + 0x2ea40c,0x8a,DAT_002ea458 + 0x2ea40e,DAT_002ea45c + 0x2ea410);
          }
          iVar4 = param_4[2];
          if ((iVar4 == 0) || (local_34 == 0)) {
            __assert2(iVar2,0x8f,DAT_002ea46c + 0x2ea436,DAT_002ea470 + 0x2ea438);
            iVar4 = param_4[2];
          }
          if (iVar4 != local_34) goto LAB_002ea39a;
        }
LAB_002ea3c6:
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar1 != iVar6);
    }
    bVar7 = *param_4 != 0;
  }
  return bVar7;
}


