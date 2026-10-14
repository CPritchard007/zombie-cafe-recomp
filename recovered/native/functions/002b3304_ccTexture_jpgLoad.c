/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3304 ccTexture_jpgLoad */

/* ccTexture_jpgLoad(ccTexture2D*, unsigned char const*, void*) */

void ccTexture_jpgLoad(ccTexture2D *param_1,uchar *param_2,void *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *__s;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  size_t __size;
  undefined4 *puVar9;
  size_t sStack_4;
  
  iVar2 = DAT_002b3484;
  puVar8 = *(undefined4 **)(DAT_002b3480 + 0x2b3310);
  puVar9 = (undefined4 *)(&stack0xffffffec + DAT_002b3484);
  *(void **)(&stack0x0000000c + DAT_002b3484) = param_3;
  uVar5 = *puVar8;
  *(ccTexture2D **)(&stack0x00000000 + DAT_002b3484) = param_1;
  *(undefined4 *)(&stack0x00000208 + DAT_002b3484) = uVar5;
  jpeg_CreateDecompress(&stack0x0000001c + DAT_002b3484,0x5a,0x1e8);
  uVar5 = (*(code *)**(undefined4 **)(&stack0x00000020 + iVar2))(&stack0x0000001c + iVar2,0,0x20);
  *(undefined4 *)(&stack0x00000034 + iVar2) = uVar5;
  piVar3 = (int *)(*(code *)**(undefined4 **)(&stack0x00000020 + iVar2))
                            (&stack0x0000001c + iVar2,0,0x8c);
  iVar6 = *(int *)(&stack0x00000034 + iVar2);
  *(int **)(&stack0x0000001c + iVar2) = piVar3;
  *(int *)(iVar6 + 8) = DAT_002b3488 + 0x2b334a;
  iVar7 = DAT_002b348c;
  *(uchar **)(iVar6 + 0x1c) = param_2;
  iVar4 = DAT_002b3490;
  *(int *)(iVar6 + 0xc) = iVar7 + 0x2b3354;
  *(undefined4 **)(&stack0x00000010 + iVar2) = puVar8;
  *(int *)(iVar6 + 0x10) = DAT_002b3494 + 0x2b335e;
  *(int *)(iVar6 + 0x14) = DAT_002b3498 + 0x2b3366;
  *(int *)(iVar6 + 0x18) = DAT_002b349c + 0x2b336c;
  *piVar3 = DAT_002b34a0 + 0x2b3374;
  piVar3[1] = DAT_002b34a4 + 0x2b337a;
  piVar3[2] = DAT_002b34a8 + 0x2b3380;
  piVar3[3] = DAT_002b34ac + 0x2b3386;
  piVar3[4] = DAT_002b34b0 + 0x2b338c;
  piVar3[0x21] = 0;
  piVar3[0x22] = 5;
  do {
    iVar7 = piVar3[0x22];
    *(int *)((int)&sStack_4 + iVar2) = iVar7;
    puVar1 = &stack0x0000001c + iVar2;
    if (iVar7 == 0) {
      jpeg_destroy(puVar1);
      __size = *(size_t *)((int)&sStack_4 + iVar2);
LAB_002b3466:
      if (*(int *)(&stack0x00000208 + iVar2) != **(int **)(&stack0x00000010 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(__size);
      }
      return;
    }
    piVar3[0x21] = 0;
    iVar7 = jpeg_read_header(puVar1,1);
    if (iVar7 == 1) {
      if (piVar3[0x21] == 0) {
        jpeg_start_decompress();
        iVar7 = CCNextPO2(*(uint *)(&stack0x00000038 + iVar2));
        iVar4 = CCNextPO2(*(uint *)(&stack0x0000003c + iVar2));
        __size = iVar7 * iVar4 * 3;
        *(int *)(&stack0x00000004 + iVar2) = iVar4;
        __s = malloc(__size);
        *(void **)((int)&sStack_4 + iVar2) = __s;
        *(void **)(&stack0x00000018 + iVar2) = __s;
        memset(__s,0,__size);
        *(int *)(&stack0x00000008 + iVar2) = iVar7 * 3;
        while( true ) {
          if (*(uint *)(&stack0x0000003c + iVar2) <= *(uint *)(&stack0x000000a8 + iVar2)) break;
          jpeg_read_scanlines(puVar1,&stack0x00000018 + iVar2,1);
          *(int *)(&stack0x00000018 + iVar2) =
               *(int *)(&stack0x00000018 + iVar2) + *(int *)(&stack0x00000008 + iVar2);
        }
        jpeg_finish_decompress();
        jpeg_destroy(puVar1);
        iVar4 = *(int *)(&stack0x00000000 + iVar2);
        uVar5 = *(undefined4 *)((int)&sStack_4 + iVar2);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(&stack0x00000038 + iVar2);
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(&stack0x0000003c + iVar2);
        *puVar9 = 0;
        *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar5;
        *(undefined4 *)(&stack0xfffffff4 + iVar2) = *(undefined4 *)(&stack0x0000000c + iVar2);
        iVar7 = CCTexture2D::LoadFromData(iVar4,4,iVar7,*(undefined4 *)(&stack0x00000004 + iVar2));
        if (iVar7 == 0) {
          __size = 0;
        }
        free(*(void **)(&stack0x00000018 + iVar2));
      }
      else {
        jpeg_destroy(puVar1);
        __size = 0;
      }
      goto LAB_002b3466;
    }
    puts((char *)(iVar4 + 0x2b3364));
  } while( true );
}


