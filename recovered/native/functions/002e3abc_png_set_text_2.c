/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3abc png_set_text_2 */

undefined4 png_set_text_2(int param_1,int param_2,int *param_3,int param_4)

{
  size_t __n;
  char *__s;
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *__s_00;
  char *__s_01;
  size_t local_38;
  int local_20;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (0 < param_4)) && (param_3 != (int *)0x0)) {
    iVar3 = *(int *)(param_2 + 0x80);
    if (*(int *)(param_2 + 0x84) - iVar3 < param_4) {
      if ((int)(DAT_002e3cac - iVar3) < param_4) {
LAB_002e3b24:
        iVar3 = DAT_002e3cb4 + 0x2e3b2a;
LAB_002e3c00:
        png_chunk_report(param_1,iVar3,1);
        return 1;
      }
      uVar7 = DAT_002e3cac;
      if (iVar3 + param_4 <= DAT_002e3cb0) {
        uVar7 = iVar3 + param_4 + 8U & 0xfffffff8;
      }
      piVar6 = (int *)(param_2 + 0x88);
      iVar3 = png_realloc_array(param_1,*piVar6,iVar3,uVar7 - iVar3,0x1c);
      if (iVar3 == 0) goto LAB_002e3b24;
      png_free(param_1,*piVar6);
      *piVar6 = iVar3;
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x4000;
      *(uint *)(param_2 + 0x84) = uVar7;
    }
    iVar3 = DAT_002e3cb8 + 0x2e3b4e;
    local_20 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x88);
      iVar5 = *(int *)(param_2 + 0x80);
      if ((char *)param_3[1] != (char *)0x0) {
        iVar2 = *param_3;
        if (iVar2 + 1U < 4) {
          __n = strlen((char *)param_3[1]);
          if (iVar2 < 1) {
            __s_00 = (char *)0x0;
            __s_01 = (char *)0x0;
          }
          else {
            __s_01 = (char *)param_3[5];
            if (__s_01 != (char *)0x0) {
              __s_01 = (char *)strlen(__s_01);
            }
            __s_00 = (char *)param_3[6];
            if (__s_00 != (char *)0x0) {
              __s_00 = (char *)strlen(__s_00);
            }
          }
          __s = (char *)param_3[2];
          piVar6 = (int *)(iVar4 + iVar5 * 0x1c);
          if ((__s == (char *)0x0) || (*__s == '\0')) {
            if (iVar2 < 1) {
              *piVar6 = -1;
              local_38 = 0;
            }
            else {
              *piVar6 = 1;
              local_38 = 0;
            }
          }
          else {
            local_38 = strlen(__s);
            *piVar6 = iVar2;
          }
          pvVar1 = (void *)png_malloc_base(param_1,__s_01 + __n + 4 + (int)__s_00 + local_38);
          piVar6[1] = (int)pvVar1;
          if (pvVar1 == (void *)0x0) {
            iVar3 = DAT_002e3cbc + 0x2e3c02;
            goto LAB_002e3c00;
          }
          memcpy(pvVar1,(void *)param_3[1],__n);
          *(undefined1 *)(piVar6[1] + __n) = 0;
          if (*param_3 < 1) {
            piVar6[5] = 0;
            piVar6[6] = 0;
            piVar6[2] = piVar6[1] + __n + 1;
          }
          else {
            pvVar1 = (void *)(piVar6[1] + __n + 1);
            piVar6[5] = (int)pvVar1;
            memcpy(pvVar1,(void *)param_3[5],(size_t)__s_01);
            __s_01[piVar6[5]] = '\0';
            piVar6[6] = (int)(__s_01 + piVar6[5] + 1);
            memcpy(__s_01 + piVar6[5] + 1,(void *)param_3[6],(size_t)__s_00);
            __s_00[piVar6[6]] = '\0';
            piVar6[2] = (int)(__s_00 + piVar6[6] + 1);
          }
          if (local_38 != 0) {
            memcpy((void *)piVar6[2],(void *)param_3[2],local_38);
          }
          *(undefined1 *)(piVar6[2] + local_38) = 0;
          if (*piVar6 < 1) {
            piVar6[4] = 0;
            piVar6[3] = local_38;
          }
          else {
            piVar6[3] = 0;
            piVar6[4] = local_38;
          }
          *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        }
        else {
          png_chunk_report(param_1,iVar3,1);
        }
      }
      param_3 = param_3 + 7;
      local_20 = local_20 + 1;
    } while (local_20 < param_4);
  }
  return 0;
}


