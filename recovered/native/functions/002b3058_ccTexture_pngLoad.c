/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3058 ccTexture_pngLoad */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002b310e) */
/* WARNING: Removing unreachable block (ram,0x002b310e) */
/* ccTexture_pngLoad(ccTexture2D*, unsigned char const*, void*) */

int ccTexture_pngLoad(ccTexture2D *param_1,uchar *param_2,void *param_3)

{
  __jmp_buf_tag *__env;
  int iVar1;
  int iVar2;
  int iVar3;
  size_t __size;
  undefined1 *__ptr;
  int iVar4;
  undefined4 *__ptr_00;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int local_58;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 auStack_24 [4];
  uchar *local_20;
  int local_1c;
  
  local_44 = png_create_read_struct(DAT_002b32a0 + 0x2b306a,0,0,0);
  if (local_44 == 0) {
    return 0;
  }
  local_40 = png_create_info_struct(local_44);
  if (local_40 == 0) {
    piVar5 = (int *)0x0;
LAB_002b31e0:
    png_destroy_read_struct(&local_44,piVar5,0);
    local_1c = 0;
  }
  else {
    __env = (__jmp_buf_tag *)
            png_set_longjmp_fn(local_44,*(undefined4 *)(DAT_002b32a4 + 0x2b3096),0x100);
    iVar1 = setjmp(__env);
    if (iVar1 != 0) {
switchD_002b310e_caseD_1:
      png_destroy_read_struct(&local_44,&local_40,0);
      png_destroy_info_struct(local_44,&local_40);
      return 0;
    }
    local_20 = param_2 + 8;
    local_1c = iVar1;
    png_set_read_fn(local_44,&local_20,*(undefined4 *)(DAT_002b32a8 + 0x2b30ae));
    png_set_sig_bytes(local_44,8);
    png_read_info(local_44,local_40);
    png_get_IHDR(local_44,local_40,param_1 + 0x14,param_1 + 0x18,&local_3c,&local_38,0,0,0);
    if (8 < local_3c) {
      png_set_strip_16(local_44);
    }
    iVar2 = CCNextPO2(*(uint *)(param_1 + 0x14));
    iVar3 = CCNextPO2(*(uint *)(param_1 + 0x18));
    iVar1 = iVar2;
    switch(local_38) {
    case 0:
      __size = iVar3 * iVar2;
      local_58 = 0;
      uVar10 = 3;
      break;
    default:
      goto switchD_002b310e_caseD_1;
    case 2:
      __size = iVar2 * 3 * iVar3;
      local_58 = 0;
      uVar10 = 4;
      iVar1 = iVar2 * 3;
      break;
    case 3:
      __size = iVar3 * iVar2 + 0x400;
      local_58 = 0x400;
      uVar10 = 0xb;
      break;
    case 4:
      __size = iVar2 * 2 * iVar3;
      local_58 = 0;
      uVar10 = 6;
      iVar1 = iVar2 * 2;
      break;
    case 6:
      __size = iVar2 * 4 * iVar3;
      local_58 = 0;
      uVar10 = 1;
      iVar1 = iVar2 * 4;
    }
    __ptr = (undefined1 *)malloc(__size);
    if (__ptr == (undefined1 *)0x0) {
      png_destroy_read_struct(&local_44,&local_40,0);
      return 0;
    }
    if (local_38 == 3) {
      png_get_PLTE(local_44,local_40,&local_2c,&local_34);
      iVar4 = png_get_tRNS(local_44,local_40,&local_28,&local_30,auStack_24);
      if (iVar4 == 0) {
        piVar5 = &local_40;
        goto LAB_002b31e0;
      }
      puVar8 = __ptr;
      for (uVar7 = 0; uVar7 != local_34; uVar7 = uVar7 + 1) {
        *puVar8 = *local_2c;
        puVar8[1] = local_2c[1];
        puVar8[2] = local_2c[2];
        if (uVar7 < local_30) {
          uVar9 = *(undefined1 *)(local_28 + uVar7);
        }
        else {
          uVar9 = 0xff;
        }
        puVar8[3] = uVar9;
        puVar8 = puVar8 + 4;
        local_2c = local_2c + 3;
      }
    }
    __ptr_00 = (undefined4 *)malloc(*(int *)(param_1 + 0x18) << 2);
    if (__ptr_00 == (undefined4 *)0x0) {
      free(__ptr);
      png_destroy_read_struct(&local_44,&local_40,0);
      png_destroy_info_struct(local_44,&local_40);
      local_1c = 0;
    }
    else {
      puVar8 = __ptr + local_58;
      puVar6 = __ptr_00;
      for (uVar7 = 0; uVar7 < *(uint *)(param_1 + 0x18); uVar7 = uVar7 + 1) {
        *puVar6 = puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + iVar1;
      }
      png_read_image(local_44,__ptr_00);
      free(__ptr_00);
      png_destroy_read_struct(&local_44,&local_40,0);
      png_destroy_info_struct(local_44,&local_40);
      iVar1 = CCTexture2D::LoadFromData(param_1,uVar10,iVar2,iVar3,0,__ptr,param_3);
      if (iVar1 == 0) {
        free(__ptr);
        local_1c = 0;
      }
      else {
        free(__ptr);
      }
    }
  }
  return local_1c;
}


