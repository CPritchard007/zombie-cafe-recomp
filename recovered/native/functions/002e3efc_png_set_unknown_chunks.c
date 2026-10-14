/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3efc png_set_unknown_chunks */

void png_set_unknown_chunks(int param_1,int param_2,void *param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  void *__dest;
  int *piVar3;
  void *__dest_00;
  int iVar4;
  undefined4 local_20;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (0 < param_4)) && (param_3 != (void *)0x0)) {
    piVar3 = (int *)(param_2 + 0xec);
    iVar2 = png_realloc_array(param_1,*piVar3,*(int *)(param_2 + 0xf0),param_4,0x14);
    if (iVar2 == 0) {
      png_chunk_report(param_1,DAT_002e3fd0 + 0x2e3f3e,1);
    }
    else {
      png_free(param_1,*piVar3);
      *piVar3 = iVar2;
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x200;
      iVar4 = DAT_002e3fd4 + 0x2e3f6a;
      __dest_00 = (void *)(iVar2 + *(int *)(param_2 + 0xf0) * 0x14);
      local_20 = param_4;
      do {
        memcpy(__dest_00,param_3,5);
        *(undefined1 *)((int)__dest_00 + 4) = 0;
        uVar1 = FUN_002e30b0(param_1,*(undefined1 *)((int)param_3 + 0x10));
        *(undefined1 *)((int)__dest_00 + 0x10) = uVar1;
        if (*(int *)((int)param_3 + 0xc) == 0) {
          *(undefined4 *)((int)__dest_00 + 8) = 0;
          *(undefined4 *)((int)__dest_00 + 0xc) = 0;
LAB_002e3fb2:
          __dest_00 = (void *)((int)__dest_00 + 0x14);
          *(int *)(param_2 + 0xf0) = *(int *)(param_2 + 0xf0) + 1;
        }
        else {
          __dest = (void *)png_malloc_base(param_1);
          *(void **)((int)__dest_00 + 8) = __dest;
          if (__dest != (void *)0x0) {
            memcpy(__dest,*(void **)((int)param_3 + 8),*(size_t *)((int)param_3 + 0xc));
            *(undefined4 *)((int)__dest_00 + 0xc) = *(undefined4 *)((int)param_3 + 0xc);
            goto LAB_002e3fb2;
          }
          png_chunk_report(param_1,iVar4,1);
        }
        param_3 = (void *)((int)param_3 + 0x14);
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  return;
}


