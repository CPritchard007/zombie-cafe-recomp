/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002691c8 FUN_002691c8 */

void FUN_002691c8(undefined4 *param_1,int param_2,int param_3,void *param_4,char *param_5,
                 int param_6)

{
  undefined4 uVar1;
  void *__src;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_2c [4];
  int local_1c;
  
  param_3 = param_3 * 0x14;
  uVar2 = *param_1;
  pcVar5 = *(char **)(*(int *)(param_2 + 8) + param_3);
  if ((*pcVar5 == -0x68) || (*param_5 == 'G')) {
    if (((*(ushort *)(pcVar5 + 2) & 0x400) == 0) && (iVar4 = *(int *)(pcVar5 + 4), iVar4 != 0)) {
      *(uint *)(pcVar5 + 4) = *(ushort *)(pcVar5 + 2) & 0x400;
      __src = (void *)FUN_002606fc(uVar2,pcVar5);
      *(int *)(pcVar5 + 4) = iVar4;
      if (__src == (void *)0x0) {
        return;
      }
      *(byte *)((int)__src + 0x22) = *(byte *)((int)__src + 0x22) | 1;
      uVar1 = FUN_0025f25a(uVar2,iVar4);
      *(undefined4 *)((int)__src + 4) = uVar1;
    }
    else {
      __src = (void *)FUN_002606fc(uVar2,pcVar5,0);
      if (__src == (void *)0x0) {
        return;
      }
    }
  }
  else {
    uVar1 = FUN_002606fc(uVar2,pcVar5,0);
    if (0 < param_6) {
      memset(local_2c,0,0x14);
      local_1c = param_6;
      local_2c[0] = DAT_002692d8 + 0x26921a;
      FUN_0025c882(local_2c,uVar1);
    }
    __src = (void *)FUN_00269118(param_1,0x18,uVar1,0,0);
    if (__src == (void *)0x0) {
      return;
    }
    iVar4 = *(int *)(param_2 + 8) + param_3;
    if (*(short *)(iVar4 + 0x10) == 0) {
      iVar3 = param_1[0x77];
      param_1[0x77] = iVar3 + 1;
      *(short *)(iVar4 + 0x10) = (short)(iVar3 + 1);
    }
    *(uint *)((int)__src + 0x18) = (uint)*(ushort *)(*(int *)(param_2 + 8) + param_3 + 0x10);
  }
  if ((*(ushort *)((int)param_4 + 2) & 0x100) != 0) {
    *(undefined4 *)((int)__src + 0x14) = *(undefined4 *)((int)param_4 + 0x14);
    *(ushort *)((int)__src + 2) = *(ushort *)((int)__src + 2) | 0x100;
  }
  *(ushort *)((int)param_4 + 2) = *(ushort *)((int)param_4 + 2) | (ushort)DAT_002692dc;
  FUN_002610aa(uVar2,param_4);
  memcpy(param_4,__src,0x30);
  FUN_0025fbda(uVar2,__src);
  return;
}


