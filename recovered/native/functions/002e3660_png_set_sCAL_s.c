/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3660 png_set_sCAL_s */

void png_set_sCAL_s(int param_1,int param_2,int param_3,char *param_4,char *param_5)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  size_t unaff_r4;
  undefined1 local_1c;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    if (param_3 - 1U < 2) {
      if ((((param_4 != (char *)0x0) && (unaff_r4 = strlen(param_4), unaff_r4 != 0)) &&
          (*param_4 != '-')) && (iVar3 = png_check_fp_string(param_4,unaff_r4), iVar3 != 0))
      goto LAB_002e36b0;
      iVar3 = DAT_002e375c + 0x2e36ac;
    }
    else {
      iVar3 = DAT_002e3758 + 0x2e3682;
    }
    while( true ) {
      png_error(param_1,iVar3);
LAB_002e36b0:
      if (((param_5 != (char *)0x0) && (sVar1 = strlen(param_5), sVar1 != 0)) &&
         ((*param_5 != '-' && (iVar3 = png_check_fp_string(param_5,sVar1), iVar3 != 0)))) break;
      iVar3 = DAT_002e3760 + 0x2e36dc;
    }
    local_1c = (undefined1)param_3;
    *(undefined1 *)(param_2 + 0xfc) = local_1c;
    pvVar2 = (void *)png_malloc_warn(param_1,unaff_r4 + 1);
    *(void **)(param_2 + 0x100) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar3 = DAT_002e3764 + 0x2e36fe;
    }
    else {
      memcpy(pvVar2,param_4,unaff_r4 + 1);
      pvVar2 = (void *)png_malloc_warn(param_1,sVar1 + 1);
      *(void **)(param_2 + 0x104) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        memcpy(pvVar2,param_5,sVar1 + 1);
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x100;
        return;
      }
      png_free(param_1,*(undefined4 *)(param_2 + 0x100));
      iVar3 = DAT_002e3768;
      *(undefined4 *)(param_2 + 0x100) = 0;
      iVar3 = iVar3 + 0x2e372c;
    }
    png_warning(param_1,iVar3);
    return;
  }
  return;
}


