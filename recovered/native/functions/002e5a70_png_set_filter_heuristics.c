/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5a70 png_set_filter_heuristics */

void png_set_filter_heuristics
               (int param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *local_2c;
  
  if (param_1 != 0) {
    FUN_002e48e0();
    if (param_2 == 2) {
      iVar2 = FUN_002e4c7c(param_1,param_3);
      if (iVar2 != 0) {
        iVar2 = 0;
        for (local_2c = (undefined4 *)0x0; (int)local_2c < param_3;
            local_2c = (undefined4 *)((int)local_2c + 1)) {
          uVar4 = *param_4;
          uVar5 = param_4[1];
          iVar3 = __aeabi_dcmple(uVar4,uVar5,DAT_002e5ba8,DAT_002e5bac);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x2dc);
            uVar6 = __muldf3(uVar4,uVar5,DAT_002e5bb0,DAT_002e5bb4);
            __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_002e5bb8,DAT_002e5bbc);
            uVar1 = __fixunsdfsi();
            *(undefined2 *)(iVar3 + iVar2) = uVar1;
            uVar6 = __divdf3(DAT_002e5bb0,DAT_002e5bb4,*param_4,param_4[1]);
            __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_002e5bb8,DAT_002e5bbc);
            uVar1 = __fixunsdfsi();
            *(undefined2 *)(*(int *)(param_1 + 0x2d8) + iVar2) = uVar1;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x2dc);
            *(undefined2 *)(*(int *)(param_1 + 0x2d8) + iVar2) = 0x100;
            *(undefined2 *)(iVar3 + iVar2) = 0x100;
          }
          iVar2 = iVar2 + 2;
          param_4 = param_4 + 2;
        }
        iVar2 = 0;
        local_2c = param_5;
        do {
          uVar4 = *local_2c;
          uVar5 = local_2c[1];
          iVar3 = __aeabi_dcmpge(uVar4,uVar5,DAT_002e5bc0,DAT_002e5bc4);
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x2e4);
            uVar6 = __divdf3(DAT_002e5bc8,DAT_002e5bcc,uVar4,uVar5);
            __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_002e5bb8,DAT_002e5bbc);
            uVar1 = __fixunsdfsi();
            *(undefined2 *)(iVar3 + iVar2) = uVar1;
            iVar3 = *(int *)(param_1 + 0x2e0);
            uVar6 = __muldf3(*local_2c,local_2c[1],DAT_002e5bc8,DAT_002e5bcc);
            __adddf3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),DAT_002e5bb8,DAT_002e5bbc);
            uVar1 = __fixunsdfsi();
            *(undefined2 *)(iVar3 + iVar2) = uVar1;
          }
          iVar2 = iVar2 + 2;
          local_2c = local_2c + 2;
        } while (iVar2 != 10);
      }
    }
    else if (1 < param_2) {
      png_warning(param_1,DAT_002e5bd0 + 0x2e5aac);
    }
  }
  return;
}


