/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c6c60 FUN_002c6c60 */

void FUN_002c6c60(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_3 + param_4;
  if (param_3 < 0xe) {
    if (5 < param_3) goto LAB_002c6d5a;
LAB_002c6da4:
    iVar6 = *param_1;
    uVar4 = 0x4f;
  }
  else if ((((*param_2 == 'J') && (param_2[1] == 'F')) && (param_2[2] == 'I')) &&
          ((param_2[3] == 'F' && (param_2[4] == '\0')))) {
    param_1[0x47] = 1;
    bVar1 = param_2[5];
    *(byte *)(param_1 + 0x48) = bVar1;
    iVar6 = DAT_002c6dbc;
    *(char *)((int)param_1 + DAT_002c6dbc) = param_2[6];
    *(char *)((int)param_1 + 0x122) = param_2[7];
    *(ushort *)(param_1 + 0x49) = (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((int)param_1 + 0x126) =
         (ushort)(byte)param_2[0xb] + (ushort)(byte)param_2[10] * 0x100;
    if (1 < bVar1 - 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x7a;
      *(uint *)(*param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x48);
      uVar3 = (uint)*(byte *)((int)param_1 + iVar6);
      *(uint *)(*param_1 + 0x1c) = uVar3;
      (**(code **)(*param_1 + 4))(param_1,0xffffffff,uVar3,*(code **)(*param_1 + 4),param_4);
    }
    iVar5 = *param_1;
    *(uint *)(iVar5 + 0x18) = (uint)*(byte *)(param_1 + 0x48);
    *(uint *)(iVar5 + 0x1c) = (uint)*(byte *)((int)param_1 + iVar6);
    *(uint *)(iVar5 + 0x20) = (uint)*(ushort *)(param_1 + 0x49);
    *(uint *)(iVar5 + 0x24) = (uint)*(ushort *)((int)param_1 + 0x126);
    *(uint *)(iVar5 + 0x28) = (uint)*(byte *)((int)param_1 + 0x122);
    *(undefined4 *)(*param_1 + 0x14) = 0x59;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (param_2[0xc] != '\0' || param_2[0xd] != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x5c;
      *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[0xc];
      *(uint *)(*param_1 + 0x1c) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    iVar7 = iVar7 + -0xe;
    if (iVar7 == (uint)(byte)param_2[0xd] * (uint)(byte)param_2[0xc] * 3) {
      return;
    }
    iVar6 = *param_1;
    uVar4 = 0x5a;
  }
  else {
LAB_002c6d5a:
    if (((*param_2 != 'J') || (param_2[1] != 'F')) ||
       ((param_2[2] != 'X' || ((param_2[3] != 'X' || (param_2[4] != '\0')))))) goto LAB_002c6da4;
    cVar2 = param_2[5];
    iVar6 = *param_1;
    if (cVar2 == '\x11') {
      uVar4 = 0x6f;
    }
    else if (cVar2 == '\x13') {
      uVar4 = 0x70;
    }
    else {
      if (cVar2 != '\x10') {
        *(undefined4 *)(iVar6 + 0x14) = 0x5b;
        *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[5];
        *(int *)(*param_1 + 0x1c) = iVar7;
        goto LAB_002c6dae;
      }
      uVar4 = 0x6e;
    }
  }
  *(undefined4 *)(iVar6 + 0x14) = uVar4;
  *(int *)(*param_1 + 0x18) = iVar7;
LAB_002c6dae:
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


