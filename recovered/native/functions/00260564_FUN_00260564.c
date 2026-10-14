/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260564 FUN_00260564 */

void * FUN_00260564(undefined4 param_1,void *param_2,uint param_3,int *param_4)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  uint uVar3;
  void *__dest_00;
  ushort uVar4;
  uint uVar5;
  size_t local_3c;
  size_t local_38;
  ushort local_28;
  void *local_1c [2];
  
  if (param_2 == (void *)0x0) {
    __dest_00 = (void *)0x0;
  }
  else {
    if (param_4 == (int *)0x0) {
      uVar2 = FUN_0025ca18(param_2,param_3);
      local_1c[0] = (void *)FUN_0025ee10(param_1,uVar2);
      local_28 = 0;
    }
    else {
      local_1c[0] = (void *)*param_4;
      local_28 = 0x8000;
    }
    __dest_00 = local_1c[0];
    if (local_1c[0] != (void *)0x0) {
      uVar3 = param_3 & 1;
      uVar5 = 0x30;
      if ((uVar3 != 0) &&
         ((((*(int *)((int)param_2 + 8) != 0 || (*(int *)((int)param_2 + 0xc) != 0)) ||
           (*(int *)((int)param_2 + 0x14) != 0)) ||
          (uVar5 = DAT_002606f8, *(int *)((int)param_2 + 0x10) != 0)))) {
        uVar5 = DAT_002606f4;
      }
      uVar4 = *(ushort *)((int)param_2 + 2);
      local_3c = 0;
      if ((-1 < (int)((uint)uVar4 << 0x15)) &&
         (local_3c = *(size_t *)((int)param_2 + 4), local_3c != 0)) {
        iVar1 = FUN_0025b154(local_3c);
        local_3c = iVar1 + 1;
      }
      if (uVar3 == 0) {
        local_38 = 8;
        if (((uVar4 & 0x4000) == 0) && (local_38 = 0x30, (int)((uint)uVar4 << 0x12) < 0)) {
          local_38 = 0x18;
        }
        memcpy(__dest_00,param_2,local_38);
        memset((void *)((int)local_1c[0] + local_38),0,0x30 - local_38);
      }
      else {
        memcpy(__dest_00,param_2,uVar5 & 0xfff);
      }
      *(ushort *)((int)__dest_00 + 2) =
           (ushort)uVar5 & 0x6000 | *(ushort *)((int)__dest_00 + 2) & 0x1fff | local_28;
      if (local_3c != 0) {
        __dest = (void *)((int)local_1c[0] + (uVar5 & 0xfff));
        *(void **)((int)__dest_00 + 4) = __dest;
        memcpy(__dest,*(void **)((int)param_2 + 4),local_3c);
      }
      if (((*(ushort *)((int)__dest_00 + 2) | *(ushort *)((int)param_2 + 2)) & 0x4000) == 0) {
        if ((int)((uint)*(ushort *)((int)param_2 + 2) << 0x14) < 0) {
          uVar2 = FUN_002607da(param_1,*(undefined4 *)((int)param_2 + 0x10),uVar3);
        }
        else {
          uVar2 = FUN_002604c0(param_1,*(undefined4 *)((int)param_2 + 0x10),uVar3);
        }
        *(undefined4 *)((int)__dest_00 + 0x10) = uVar2;
      }
      if ((*(ushort *)((int)__dest_00 + 2) & 0x6000) == 0) {
        *(undefined1 *)((int)__dest_00 + 0x22) = 0;
        uVar4 = *(ushort *)((int)param_2 + 2) & 0x4000;
        if ((*(ushort *)((int)param_2 + 2) & 0x4000) == 0) {
          uVar2 = FUN_002606fc(param_1,*(undefined4 *)((int)param_2 + 8),uVar4);
          *(undefined4 *)((int)__dest_00 + 8) = uVar2;
          uVar2 = FUN_002606fc(param_1,*(undefined4 *)((int)param_2 + 0xc),uVar4);
          *(undefined4 *)((int)__dest_00 + 0xc) = uVar2;
        }
      }
      else {
        iVar1 = FUN_0025c9c8(param_2,param_3);
        local_1c[0] = (void *)((int)local_1c[0] + iVar1);
        if ((int)((uint)*(ushort *)((int)__dest_00 + 2) << 0x12) < 0) {
          uVar2 = FUN_00260564(param_1,*(undefined4 *)((int)param_2 + 8),1,local_1c);
          *(undefined4 *)((int)__dest_00 + 8) = uVar2;
          uVar2 = FUN_00260564(param_1,*(undefined4 *)((int)param_2 + 0xc),1,local_1c);
          *(undefined4 *)((int)__dest_00 + 0xc) = uVar2;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = (int)local_1c[0];
        }
      }
    }
  }
  return __dest_00;
}


