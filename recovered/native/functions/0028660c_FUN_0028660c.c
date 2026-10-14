/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028660c FUN_0028660c */

void FUN_0028660c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = (undefined4 *)param_1[0x7f];
  iVar6 = *param_1;
  if (puVar5 != (undefined4 *)0x0) {
    FUN_002673f6(param_1);
    param_1[0x86] = 0;
    if (0 < (int)puVar5[0xe]) {
      if (*(char *)(iVar6 + 0x7d) == '\0') {
        if (param_2 != (int *)0x0) {
          param_1[0x83] = (*param_2 - param_1[0x82]) + param_2[1];
        }
        uVar1 = FUN_0026877c(iVar6,DAT_00286728 + 0x286664,param_1 + 0x82);
        iVar2 = FUN_0025d12c(iVar6,puVar5[0x11]);
        if (iVar2 == 1) {
          iVar4 = DAT_0028672c + 0x286684;
        }
        else {
          iVar4 = DAT_00286730 + 0x28668a;
        }
        FUN_00285af0(param_1,DAT_00286734 + 0x286696,
                     *(undefined4 *)(iVar2 * 0x10 + *(int *)(iVar6 + 0x10)),iVar4,*puVar5,*puVar5,
                     uVar1,param_1[100]);
        FUN_0025fbda(iVar6,uVar1);
        uVar1 = FUN_002662b8(param_1);
        FUN_002668cc(param_1,iVar2);
        FUN_0026641e(uVar1,0x81,0,0);
        uVar3 = FUN_0026877c(iVar6,DAT_00286738 + 0x2866d2,*puVar5);
        FUN_0026690a(uVar1,iVar2,uVar3);
        uVar3 = *puVar5;
        iVar6 = FUN_0025b154(uVar3);
        FUN_002662da(uVar1,0x85,iVar2,0,0,uVar3,iVar6 + 1);
      }
      else {
        uVar3 = *puVar5;
        uVar1 = FUN_0025b154(uVar3);
        iVar2 = FUN_00260d1c(puVar5[0x11] + 8,uVar3,uVar1,puVar5);
        if (iVar2 == 0) {
          param_1[0x7f] = 0;
        }
        else {
          *(undefined1 *)(iVar6 + 0x36) = 1;
        }
      }
    }
  }
  return;
}


