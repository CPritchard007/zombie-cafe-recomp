/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3df4 png_set_sPLT */

void png_set_sPLT(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_1c;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (0 < param_4)) && (param_3 != (undefined4 *)0x0)) {
    piVar5 = (int *)(param_2 + 0xf4);
    iVar1 = png_realloc_array(param_1,*piVar5,*(int *)(param_2 + 0xf8),param_4,0x10);
    if (iVar1 == 0) {
      iVar1 = DAT_002e3ef0 + 0x2e3e32;
LAB_002e3ee4:
      png_chunk_report(param_1,iVar1,1);
    }
    else {
      png_free(param_1,*piVar5);
      *piVar5 = iVar1;
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x20;
      puVar6 = (undefined4 *)(iVar1 + *(int *)(param_2 + 0xf8) * 0x10);
      iVar1 = DAT_002e3ef4 + 0x2e3e58;
      local_1c = param_4;
      do {
        __s = (char *)*param_3;
        if ((__s != (char *)0x0) && (param_3[2] != 0)) {
          *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
          sVar2 = strlen(__s);
          pvVar3 = (void *)png_malloc_base(param_1,sVar2 + 1);
          *puVar6 = pvVar3;
          if (pvVar3 != (void *)0x0) {
            memcpy(pvVar3,(void *)*param_3,sVar2 + 1);
            pvVar3 = (void *)png_malloc_array(param_1,param_3[3],10);
            puVar6[2] = pvVar3;
            if (pvVar3 != (void *)0x0) {
              iVar4 = param_3[3];
              puVar6[3] = iVar4;
              memcpy(pvVar3,(void *)param_3[2],iVar4 * 10);
              *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
              puVar6 = puVar6 + 4;
              *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + 1;
              goto LAB_002e3ecc;
            }
            png_free(param_1,*puVar6);
          }
          if (local_1c < 1) {
            return;
          }
          iVar1 = DAT_002e3ef8 + 0x2e3ee6;
          goto LAB_002e3ee4;
        }
        png_app_error(param_1,iVar1);
LAB_002e3ecc:
        param_3 = param_3 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return;
}


