/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c0888 CCPathFinding::PathFind */

/* CCPathFinding::PathFind(void*, unsigned int, unsigned int, float (*)(void*, unsigned int,
   unsigned int), void*, ccPath*, float (*)(void*, unsigned int, unsigned int, unsigned int), void*)
    */

uint CCPathFinding::PathFind
               (void *param_1,uint param_2,uint param_3,_func_float_void_ptr_uint_uint *param_4,
               void *param_5,ccPath *param_6,_func_float_void_ptr_uint_uint_uint *param_7,
               void *param_8)

{
  uint uVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 local_40;
  uint local_38;
  uint local_34;
  uint local_24;
  
                    /* WARNING: Load size is inaccurate */
  local_24 = 0;
  if ((param_2 <= *param_1) && (param_3 <= *param_1)) {
    **(uint **)((int)param_1 + 0xc) = param_2;
                    /* WARNING: Load size is inaccurate */
    for (uVar5 = 0; uVar5 < *param_1; uVar5 = uVar5 + 1) {
      *(undefined4 *)(*(int *)((int)param_1 + 4) + local_24 + 0x1c) = 0;
      local_24 = local_24 + 0x24;
    }
    iVar8 = *(int *)((int)param_1 + 4) + param_2 * 0x24;
    *(undefined4 *)(iVar8 + 0xc) = 0;
    pvVar2 = param_5;
    (*param_4)(param_5,param_2,param_3);
    *(void **)(iVar8 + 0x10) = pvVar2;
    *(void **)(iVar8 + 0x14) = pvVar2;
    *(uint *)(iVar8 + 0x18) = param_2;
    uVar5 = 1;
    do {
      puVar3 = *(uint **)((int)param_1 + 0xc);
      iVar8 = *(int *)((int)param_1 + 4);
      local_38 = *puVar3;
      local_34 = *(undefined4 *)(iVar8 + local_38 * 0x24 + 0x14);
      local_24 = 0;
      puVar7 = puVar3;
      for (uVar9 = 1; puVar7 = puVar7 + 1, uVar9 < uVar5; uVar9 = uVar9 + 1) {
        uVar4 = *puVar7;
        local_40 = *(undefined4 *)(iVar8 + uVar4 * 0x24 + 0x14);
        iVar6 = __aeabi_fcmplt(local_40,local_34);
        uVar1 = uVar9;
        if (iVar6 == 0) {
          local_40 = local_34;
          uVar4 = local_38;
          uVar1 = local_24;
        }
        local_24 = uVar1;
        local_38 = uVar4;
        local_34 = local_40;
      }
      if (local_38 == param_3) {
        L_ReconstructPath((SPathFinding *)param_1,param_2,local_38,param_6);
        return 1;
      }
      puVar7 = (uint *)(iVar8 + local_38 * 0x24);
      puVar3[local_24] = puVar3[uVar5 - 1];
      puVar7[7] = 1;
      local_24 = uVar5 - 1;
      for (local_34 = 0; local_34 < *puVar7; local_34 = local_34 + 1) {
        uVar5 = *(uint *)(puVar7[1] + local_34 * 4);
        if (uVar5 != 0xffffffff) {
          uVar10 = *(undefined4 *)(puVar7[2] + local_34 * 4);
          iVar8 = __aeabi_fcmplt(uVar10,0);
          if (((iVar8 == 0) &&
              (iVar8 = *(int *)((int)param_1 + 4) + uVar5 * 0x24, *(int *)(iVar8 + 0x1c) == 0)) &&
             (*(int *)(iVar8 + 0x20) != 0)) {
            uVar10 = __addsf3(uVar10,puVar7[3]);
            for (uVar9 = 0; uVar9 != local_24; uVar9 = uVar9 + 1) {
              if (*(uint *)(*(int *)((int)param_1 + 0xc) + uVar9 * 4) == uVar5) {
                iVar6 = __aeabi_fcmplt(uVar10,*(undefined4 *)(iVar8 + 0xc));
                if (iVar6 != 0) goto LAB_002c09f0;
                goto LAB_002c0a3c;
              }
            }
            iVar6 = local_24 * 4;
            local_24 = local_24 + 1;
            *(uint *)(*(int *)((int)param_1 + 0xc) + iVar6) = uVar5;
LAB_002c09f0:
            *(uint *)(iVar8 + 0x18) = local_38;
            *(undefined4 *)(iVar8 + 0xc) = uVar10;
            pvVar2 = param_5;
            (*param_4)(param_5,uVar5,param_3);
            *(void **)(iVar8 + 0x10) = pvVar2;
            if ((param_7 != (_func_float_void_ptr_uint_uint_uint *)0x0) && (local_38 != puVar7[6]))
            {
              (*param_7)(param_8,local_38,uVar5,puVar7[6]);
              iVar6 = __aeabi_fcmpgt();
              if (iVar6 != 0) {
                uVar10 = __addsf3(*(undefined4 *)(iVar8 + 0xc),DAT_002c0a5c);
                *(undefined4 *)(iVar8 + 0xc) = uVar10;
              }
            }
            uVar10 = __addsf3(*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10));
            *(undefined4 *)(iVar8 + 0x14) = uVar10;
          }
        }
LAB_002c0a3c:
      }
      uVar5 = local_24;
    } while (local_24 != 0);
  }
  return local_24;
}


