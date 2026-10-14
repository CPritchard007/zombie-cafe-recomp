/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00273ae0 FUN_00273ae0 */

int FUN_00273ae0(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void *__dest;
  bool bVar7;
  undefined8 uVar8;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c [2];
  
  __src = *(void **)(param_1 + 0xb0);
  if (param_4 == 0) {
    piVar6 = *(int **)(param_1 + 0x44);
  }
  else {
    piVar6 = *(int **)(param_1 + 0x40);
  }
  iVar1 = FUN_0025bf2a(piVar6,*param_2,*param_2,param_2[1],&local_24);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = (**(code **)(*piVar6 + 8))
                    (piVar6,__src,*(undefined4 *)(param_1 + 0x80),*(code **)(*piVar6 + 8),
                     *param_2 + 4,param_2[1] + (uint)(0xfffffffb < *param_2));
  uVar5 = local_24;
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar3 = *(int *)(param_1 + 0x80) + 4 + param_4 * 4;
  uVar2 = uVar3 + *param_2;
  uVar3 = ((int)uVar3 >> 0x1f) + param_2[1] + (uint)CARRY4(uVar3,*param_2);
  *param_2 = uVar2;
  param_2[1] = uVar3;
  if ((local_24 == 0) ||
     (iVar1 = __divsi3(*(undefined4 *)(DAT_00273d50 + 0x273be8),*(undefined4 *)(param_1 + 0x80)),
     uVar5 == iVar1 + 1U)) {
LAB_00273d44:
    iVar1 = 0x65;
  }
  else {
    if (*(uint *)(param_1 + 0x18) < uVar5) {
      return 0;
    }
    iVar1 = FUN_00261810(param_3,uVar5);
    if (iVar1 != 0) {
      return 0;
    }
    if (param_4 != 0) {
      iVar1 = FUN_0025bf2a(piVar6,&local_20,uVar2 - 4,uVar3 - (uVar2 < 4),&local_20);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_5 == 0) {
        iVar1 = *(int *)(param_1 + 0x30);
        iVar4 = *(int *)(param_1 + 0x80);
        while (iVar4 = iVar4 + -200, 0 < iVar4) {
          iVar1 = iVar1 + (uint)*(byte *)((int)__src + iVar4);
        }
        if (iVar1 != local_20) goto LAB_00273d44;
      }
    }
    if ((param_3 == 0) || (iVar1 = FUN_00260168(param_3,local_24), iVar1 == 0)) {
      if (local_24 == 1) {
        if (*(ushort *)(param_1 + 0x76) != (ushort)*(byte *)((int)__src + 0x14)) {
          *(ushort *)(param_1 + 0x76) = (ushort)*(byte *)((int)__src + 0x14);
        }
      }
      local_28 = 0;
      if (*(int *)(param_1 + 0xb8) == 0) {
        FUN_0025dce0(*(undefined4 *)(param_1 + 0xb4),local_24,0,local_1c);
        local_28 = local_1c[0];
      }
      if (param_4 == 0) {
        bVar7 = true;
        if (local_28 != 0) {
          bVar7 = (*(ushort *)(local_28 + 0x18) & 4) == 0;
        }
      }
      else {
        bVar7 = true;
        if ((*(char *)(param_1 + 7) == '\0') &&
           (((int)*(uint *)(param_1 + 0x54) < (int)param_2[1] ||
            ((param_2[1] == *(uint *)(param_1 + 0x54) && (*(uint *)(param_1 + 0x50) < *param_2))))))
        {
          bVar7 = false;
        }
      }
      piVar6 = *(int **)(param_1 + 0x3c);
      if (((*piVar6 == 0) || (!bVar7)) || (*(byte *)(param_1 + 0xf) - 1 < 3)) {
        iVar1 = 0;
        if ((param_4 == 0) && (local_28 == 0)) {
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
          iVar1 = FUN_00274878(param_1,local_24,&local_28,1);
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
          if (iVar1 != 0) {
            return iVar1;
          }
          *(ushort *)(local_28 + 0x18) = *(ushort *)(local_28 + 0x18) & 0xfff7;
          FUN_00261928();
          iVar1 = 0;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x80);
        uVar8 = __muldi3(local_24 - 1,0,iVar1,iVar1 >> 0x1f);
        iVar1 = FUN_0025ace6(piVar6,__src,iVar1);
        uVar5 = *(uint *)(param_1 + 0x20);
        if (uVar5 < local_24) {
          *(uint *)(param_1 + 0x20) = local_24;
        }
        if (*(int *)(param_1 + 0x58) != 0) {
          FUN_0027361c(*(int *)(param_1 + 0x58),local_24,__src,uVar5,uVar8);
        }
      }
      if (local_28 != 0) {
        __dest = *(void **)(local_28 + 4);
        memcpy(__dest,__src,*(size_t *)(param_1 + 0x80));
        (**(code **)(param_1 + 0xac))(local_28);
        if ((param_4 != 0) &&
           ((param_5 == 0 ||
            (((int)param_2[1] <= (int)*(uint *)(param_1 + 0x54) &&
             ((param_2[1] != *(uint *)(param_1 + 0x54) || (*param_2 <= *(uint *)(param_1 + 0x50)))))
            )))) {
          FUN_00261944(local_28);
        }
        if (local_24 == 1) {
          memcpy((void *)(param_1 + 100),(void *)((int)__dest + 0x18),0x10);
        }
        FUN_002618d4(local_28);
      }
    }
  }
  return iVar1;
}


