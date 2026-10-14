/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e34c0 png_set_pCAL */

void png_set_pCAL(int param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,uint param_7,char *param_8,undefined4 *param_9)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *__s;
  uint unaff_r6;
  int *piVar7;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_8 == (char *)0x0)) ||
     ((param_3 == (char *)0x0 || ((param_9 == (undefined4 *)0x0 && (0 < (int)param_7)))))) {
    return;
  }
  sVar1 = strlen(param_3);
  if (param_6 < 4) {
    if (param_7 < 0x100) {
      local_2c = param_9;
      local_28 = param_9;
      unaff_r6 = 0;
      goto LAB_002e3546;
    }
    iVar5 = DAT_002e3648 + 0x2e351e;
  }
  else {
    iVar5 = DAT_002e3644 + 0x2e350a;
  }
  do {
    png_error(param_1,iVar5);
    while( true ) {
      __s = (char *)*local_28;
      local_28 = local_28 + 1;
      if (__s == (char *)0x0) break;
      sVar2 = strlen(__s);
      iVar5 = png_check_fp_string(__s,sVar2);
      if (iVar5 == 0) break;
      unaff_r6 = unaff_r6 + 1;
LAB_002e3546:
      if (unaff_r6 == param_7) {
        pvVar3 = (void *)png_malloc_warn(param_1,sVar1 + 1);
        *(void **)(param_2 + 0xd0) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          iVar5 = DAT_002e3650 + 0x2e3568;
        }
        else {
          memcpy(pvVar3,param_3,sVar1 + 1);
          *(undefined4 *)(param_2 + 0xd4) = param_4;
          *(char *)(param_2 + 0xe5) = (char)unaff_r6;
          *(undefined4 *)(param_2 + 0xd8) = param_5;
          *(undefined1 *)(param_2 + 0xe4) = (undefined1)param_6;
          sVar1 = strlen(param_8);
          pvVar3 = (void *)png_malloc_warn(param_1,sVar1 + 1);
          *(void **)(param_2 + 0xdc) = pvVar3;
          if (pvVar3 == (void *)0x0) {
            iVar5 = DAT_002e3654 + 0x2e35a4;
          }
          else {
            sVar2 = (unaff_r6 + 1) * 4;
            memcpy(pvVar3,param_8,sVar1 + 1);
            pvVar3 = (void *)png_malloc_warn(param_1,sVar2);
            piVar7 = (int *)(param_2 + 0xe0);
            *piVar7 = (int)pvVar3;
            if (pvVar3 == (void *)0x0) {
              iVar5 = DAT_002e3658 + 0x2e35c8;
            }
            else {
              memset(pvVar3,0,sVar2);
              uVar6 = 0;
              while( true ) {
                if (uVar6 == param_7) {
                  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
                  *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x80;
                  return;
                }
                sVar1 = strlen((char *)*local_2c);
                iVar5 = *piVar7;
                uVar4 = png_malloc_warn(param_1,sVar1 + 1);
                *(undefined4 *)(iVar5 + uVar6 * 4) = uVar4;
                pvVar3 = *(void **)(*piVar7 + uVar6 * 4);
                if (pvVar3 == (void *)0x0) break;
                memcpy(pvVar3,(void *)*local_2c,sVar1 + 1);
                uVar6 = uVar6 + 1;
                local_2c = local_2c + 1;
              }
              iVar5 = DAT_002e365c + 0x2e3608;
            }
          }
        }
        png_warning(param_1,iVar5);
        return;
      }
    }
    iVar5 = DAT_002e364c + 0x2e3544;
  } while( true );
}


