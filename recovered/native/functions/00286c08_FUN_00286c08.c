/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286c08 FUN_00286c08 */

int * FUN_00286c08(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_1c [2];
  
  iVar6 = *param_1;
  iVar3 = param_1[2];
  iVar4 = iVar3 * 0x10;
  puVar2 = (ushort *)(*(int *)(*(int *)(iVar6 + 0x10) + iVar4 + 0xc) + 0x4e);
  *puVar2 = *puVar2 & 0xfffb;
  if (*(char *)(iVar6 + 0x36) == '\0') {
    if (param_3 != (int *)0x0) {
      if (param_3[1] == 0) {
        FUN_0026b950(param_1,*param_3,0);
        param_3 = (int *)0x0;
      }
      else if (((char *)param_3[2] == (char *)0x0) || (*(char *)param_3[2] == '\0')) {
        if (*param_3 == 0) {
          iVar3 = 0;
          iVar4 = 0;
        }
        else {
          iVar3 = FUN_00264662(iVar6,*param_3,*(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar4));
          if (iVar3 == 0) {
            return (int *)0x0;
          }
          iVar3 = FUN_0025b880(param_3[1],iVar3 + 0x28);
          if (iVar3 != 0) {
            return (int *)0x0;
          }
          iVar3 = *param_3;
          iVar4 = DAT_00286d24 + 0x286d1a;
        }
        param_3 = (int *)0x0;
        FUN_0026b950(param_1,iVar3,iVar4);
      }
      else {
        *(undefined1 *)(iVar6 + 0x7c) = (char)iVar3;
        uVar1 = FUN_0025b90e(param_3[1]);
        *(undefined4 *)(iVar6 + 0x78) = uVar1;
        *(char *)(iVar6 + 0x7e) = '\0';
        sqlite3_prepare(iVar6,param_3[2],0xffffffff,local_1c,0);
        uVar5 = *(uint *)(iVar6 + 0x2c);
        *(undefined1 *)(iVar6 + 0x7c) = 0;
        if ((uVar5 != 0) && (*(char *)(iVar6 + 0x7e) == '\0')) {
          param_1[3] = uVar5;
          if (uVar5 == 7) {
            *(char *)(iVar6 + 0x36) = '\x01';
          }
          else if ((uVar5 != 9) && ((uVar5 & 0xff) != 6)) {
            iVar3 = *param_3;
            uVar1 = sqlite3_errmsg(iVar6);
            FUN_0026b950(param_1,iVar3,uVar1);
          }
        }
        sqlite3_finalize(local_1c[0]);
        param_3 = (int *)0x0;
      }
    }
  }
  else {
    FUN_0026b950(param_1,*param_3,0);
    param_3 = (int *)0x1;
  }
  return param_3;
}


