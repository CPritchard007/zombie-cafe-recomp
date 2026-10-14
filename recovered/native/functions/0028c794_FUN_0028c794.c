/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028c794 FUN_0028c794 */

void FUN_0028c794(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_1;
  if ((*(char *)(iVar8 + 0x36) == '\0') && (iVar1 = FUN_00287abc(), iVar1 == 0)) {
    puVar2 = (undefined4 *)
             FUN_00264662(iVar8,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8));
    if (puVar2 == (undefined4 *)0x0) {
      if (param_3 == 0) {
        FUN_00268e48(param_1,DAT_0028c8d4 + 0x28c7d6,param_2,0);
      }
      else {
        FUN_002760de(param_1,*(undefined4 *)(param_2 + 8));
      }
      *(undefined1 *)((int)param_1 + 0x11) = 1;
    }
    else if (*(char *)((int)puVar2 + 0x2d) == '\0') {
      iVar1 = FUN_0025d12c(iVar8,puVar2[6]);
      puVar3 = (undefined4 *)puVar2[3];
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar1 * 0x10);
      if (iVar1 == 1) {
        iVar5 = DAT_0028c8dc + 0x28c824;
      }
      else {
        iVar5 = DAT_0028c8e0 + 0x28c82a;
      }
      iVar5 = FUN_00268e90(param_1,9,iVar5,0,uVar6);
      if (iVar5 == 0) {
        uVar4 = 0xc;
        if (iVar1 == 0) {
          uVar4 = 10;
        }
        iVar5 = FUN_00268e90(param_1,uVar4,*puVar2,*puVar3,uVar6);
        if ((iVar5 == 0) && (iVar5 = FUN_002662b8(param_1), iVar5 != 0)) {
          FUN_00275f2c(param_1,1,iVar1);
          if (iVar1 == 1) {
            iVar7 = DAT_0028c8e4 + 0x28c880;
          }
          else {
            iVar7 = DAT_0028c8e8 + 0x28c886;
          }
          FUN_00285af0(param_1,DAT_0028c8ec + 0x28c88e,
                       *(undefined4 *)(*(int *)(iVar8 + 0x10) + iVar1 * 0x10),iVar7,*puVar2);
          FUN_00285f98(param_1,iVar1,DAT_0028c8f0 + 0x28c89c,*puVar2);
          FUN_002668cc(param_1,iVar1);
          FUN_00286010(param_1,puVar2[10],iVar1);
          FUN_002662da(iVar5,0x6d,iVar1,0,0,*puVar2,0);
        }
      }
    }
    else {
      FUN_00268e48(param_1,DAT_0028c8d8 + 0x28c7fe,0);
    }
  }
  FUN_00260fde(iVar8,param_2);
  return;
}


