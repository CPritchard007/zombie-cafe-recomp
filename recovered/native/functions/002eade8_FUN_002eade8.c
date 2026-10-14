/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eade8 FUN_002eade8 */

undefined4 * FUN_002eade8(void)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  pthread_mutex_t *__mutex;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  undefined4 unaff_r8;
  undefined4 in_cr15;
  undefined8 uVar14;
  
  iVar10 = iRam002eaea4 + 0x2eadf6;
  if ((*(char *)(iRam002eaea0 + 0x2eadf2) == '\0') ||
     (puVar3 = (undefined4 *)pthread_getspecific(*(pthread_key_t *)(iRam002eaeb4 + 0x2eae2e)),
     puVar3 == (undefined4 *)0x0)) {
    pthread_mutex_lock((pthread_mutex_t *)(iRam002eaea8 + 0x2eadfe));
    if (*(char *)(iRam002eaeac + 0x2eae06) == '\0') {
      iVar4 = pthread_key_create((pthread_key_t *)(iRam002eaeb8 + 0x2eae42),
                                 (__destr_function *)(iRam002eaebc + 0x2eae44));
      if (iVar4 != 0) {
        uVar5 = FUN_002e9164(4);
        FUN_002e9cb4();
        uVar14 = FUN_002e91e0(uVar5,*(undefined4 *)(iVar10 + iRam002eaec4));
        iVar2 = DAT_002eafbc;
        iVar4 = DAT_002eafb4;
        piVar9 = (int *)((ulonglong)uVar14 >> 0x20);
        uVar6 = (uint)uVar14;
        coprocessor_load(0xf,in_cr15,uVar5);
        coprocessor_loadlong(0xf,in_cr15,iVar10);
        coprocessor_loadlong(0xf,in_cr15,unaff_r8);
        bVar1 = *(byte *)((int)piVar9 + 0x16);
        __mutex = (pthread_mutex_t *)(DAT_002eafb8 + 0x2eaef6);
        piVar12 = (int *)(DAT_002eafc0 + 0x2eaf00);
        do {
          piVar11 = (int *)(iVar4 + 0x2eaf5a);
          pthread_mutex_lock(__mutex);
          puVar3 = (undefined4 *)*piVar11;
          uVar13 = *piVar9 * uVar6;
          uVar8 = *(int *)(iVar2 + 0x2eaf6e) - (int)puVar3;
          if (uVar13 < uVar8 || uVar13 - uVar8 == 0) {
            *piVar11 = (int)(uVar13 + (int)puVar3);
LAB_002eaf7a:
            pthread_mutex_unlock((pthread_mutex_t *)(DAT_002eafd4 + 0x2eaf80));
            return puVar3;
          }
          if (uVar6 <= uVar8) {
            iVar10 = __udivsi3(uVar8,uVar6);
            *piVar9 = iVar10;
            *piVar11 = (int)(iVar10 * uVar6 + (int)puVar3);
            goto LAB_002eaf7a;
          }
          uVar13 = uVar13 * 2 + (*piVar12 + 7U & 0xfffffff8);
          if (uVar8 != 0) {
            iVar10 = ((uVar8 + 7 >> 3) - 1) * 4;
            *puVar3 = *(undefined4 *)(iVar10 + (uint)bVar1);
            *(int *)(iVar10 + (uint)bVar1) = *piVar11;
          }
          iVar7 = std::__malloc_alloc::allocate(uVar13);
          *(int *)(DAT_002eafc4 + 0x2eaf38) = iVar7;
          iVar10 = DAT_002eafcc;
          *(int *)(DAT_002eafc8 + 0x2eaf40) = (uVar13 >> 4) + *(int *)(DAT_002eafc8 + 0x2eaf40);
          *(uint *)(DAT_002eafd0 + 0x2eaf4e) = iVar7 + uVar13;
          pthread_mutex_unlock((pthread_mutex_t *)(iVar10 + 0x2eaf4c));
        } while( true );
      }
      *(undefined1 *)(iRam002eaec0 + 0x2eae52) = 1;
    }
    puVar3 = (undefined4 *)FUN_002eada4();
    iVar4 = pthread_setspecific(*(pthread_key_t *)(iRam002eaeb0 + 0x2eae16),puVar3);
    if (iVar4 != 0) {
      if (iVar4 != 0xc) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = (undefined4 *)FUN_002e9164(4);
      FUN_002e9cb4();
      FUN_002e91e0(puVar3,*(undefined4 *)(iVar10 + iRam002eaec4),
                   *(undefined4 *)(iVar10 + iRam002eaec8));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(iRam002eaecc + 0x2eae74));
  }
  return puVar3;
}


