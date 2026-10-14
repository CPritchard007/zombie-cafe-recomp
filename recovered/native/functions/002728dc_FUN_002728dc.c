/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002728dc FUN_002728dc */

undefined4
FUN_002728dc(char *param_1,void *param_2,uint *param_3,int *param_4,int *param_5,undefined4 *param_6
            )

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  void *__dest;
  int iVar5;
  int iVar6;
  char cVar7;
  size_t sVar8;
  uint uVar9;
  char *__s1;
  void *__s2;
  char *pcVar10;
  void *__s1_00;
  undefined4 *puVar11;
  uint uVar12;
  void *__s1_01;
  undefined4 uVar13;
  bool bVar14;
  uint local_38;
  char *local_34;
  uint local_30;
  int local_2c;
  uint local_24;
  
  local_38 = *param_3;
  sVar3 = FUN_0025b154(param_2);
  local_34 = param_1;
  if ((((-1 < (int)(local_38 << 0x19)) && (*(int *)(DAT_00272bc4 + 0x27290a) == 0)) ||
      ((int)sVar3 < 5)) || (iVar5 = memcmp(param_2,(void *)(DAT_00272bc8 + 0x272914),5), iVar5 != 0)
     ) {
    __dest = (void *)sqlite3_malloc(sVar3 + 2);
    if (__dest == (void *)0x0) {
      return 7;
    }
    memcpy(__dest,param_2,sVar3);
    *(undefined1 *)((int)__dest + sVar3) = 0;
    *(undefined1 *)((int)__dest + sVar3 + 1) = 0;
    local_38 = local_38 & 0xffffffbf;
    goto LAB_00272c1a;
  }
  iVar5 = sVar3 + 2;
  sVar8 = 0;
  do {
    pcVar10 = (char *)((int)param_2 + sVar8);
    sVar8 = sVar8 + 1;
    iVar5 = iVar5 + (uint)(*pcVar10 == '&');
  } while (sVar8 != sVar3);
  __dest = (void *)sqlite3_malloc(iVar5);
  if (__dest == (void *)0x0) {
    return 7;
  }
  iVar5 = 5;
  local_38 = local_38 | 0x40;
  if ((*(char *)((int)param_2 + 5) != '/') || (*(char *)((int)param_2 + 6) != '/')) {
LAB_00272980:
    iVar1 = DAT_00272bd0;
    iVar6 = 0;
    iVar4 = 0;
LAB_00272aa8:
    do {
      cVar7 = *(char *)((int)param_2 + iVar5);
      if ((cVar7 == '\0') || (cVar7 == '#')) goto LAB_00272ab4;
      local_2c = iVar5 + 1;
      if (cVar7 == '%') {
        uVar12 = (uint)*(byte *)((int)param_2 + local_2c);
        if (((*(byte *)(iVar1 + 0x2729ca + uVar12) & 8) == 0) ||
           ((*(byte *)(iVar1 + 0x2729ca + (uint)*(byte *)((int)param_2 + iVar5 + 2)) & 8) == 0))
        goto LAB_00272a3c;
        uVar9 = (uint)*(byte *)((int)param_2 + iVar5 + 2);
        local_2c = iVar5 + 3;
        iVar5 = (uVar12 + ((int)uVar12 >> 6 & 1U) * 9 & 0xf) * 0x10 +
                (uVar9 + ((int)uVar9 >> 6 & 1U) * 9 & 0xf);
        cVar7 = (char)iVar5;
        if (iVar5 == 0) {
          while( true ) {
            cVar7 = *(char *)((int)param_2 + local_2c);
            iVar5 = local_2c;
            if ((cVar7 == '\0') || (cVar7 == '#')) goto LAB_00272aa8;
            if ((cVar7 == '?') && (iVar4 == 0)) break;
            if ((iVar4 == 1) && ((cVar7 == '&' || (cVar7 == '=')))) goto LAB_00272aa8;
            if ((cVar7 == '&') && (iVar4 == 2)) {
              iVar4 = 2;
              goto LAB_00272aa8;
            }
            local_2c = local_2c + 1;
          }
          iVar4 = 0;
        }
        else {
LAB_00272a9e:
          *(char *)((int)__dest + iVar6) = cVar7;
          iVar6 = iVar6 + 1;
          iVar5 = local_2c;
        }
      }
      else {
LAB_00272a3c:
        if ((iVar4 != 1) || ((bVar14 = cVar7 == '&', cVar7 != '=' && (!bVar14)))) {
          if (((cVar7 == '?') && (iVar4 == 0)) || ((cVar7 == '&' && (iVar4 == 2)))) {
            iVar4 = 1;
LAB_00272a9c:
            cVar7 = '\0';
          }
          goto LAB_00272a9e;
        }
        if (*(char *)((int)__dest + iVar6 + -1) != '\0') {
          if (bVar14) {
            *(undefined1 *)((int)__dest + iVar6) = 0;
            iVar6 = iVar6 + 1;
            goto LAB_00272a9c;
          }
          iVar4 = 2;
          cVar7 = bVar14;
          goto LAB_00272a9e;
        }
        for (; ((iVar5 = local_2c, *(char *)((int)param_2 + local_2c) != '#' &&
                (*(char *)((int)param_2 + local_2c) != '\0')) &&
               (*(char *)((int)param_2 + local_2c + -1) != '&')); local_2c = local_2c + 1) {
        }
      }
    } while( true );
  }
  for (iVar5 = 7;
      (*(char *)((int)param_2 + iVar5) != '/' && (*(char *)((int)param_2 + iVar5) != '\0'));
      iVar5 = iVar5 + 1) {
  }
  if ((iVar5 == 7) ||
     ((iVar5 == 0x10 &&
      (iVar4 = memcmp((void *)(DAT_00272bcc + 0x27297a),(void *)((int)param_2 + 7),9), iVar4 == 0)))
     ) goto LAB_00272980;
  __s1_00 = (void *)(iVar5 + -7);
  __s1 = (char *)((int)param_2 + 7);
  iVar5 = DAT_00272bd4 + 0x272996;
LAB_00272b7a:
  uVar13 = sqlite3_mprintf(iVar5,__s1_00,__s1);
  goto LAB_00272c34;
LAB_00272ab4:
  if (iVar4 == 1) {
    *(undefined1 *)((int)__dest + iVar6) = 0;
    iVar6 = iVar6 + 1;
  }
  *(undefined1 *)((int)__dest + iVar6) = 0;
  *(undefined1 *)((int)__dest + iVar6 + 1) = 0;
  iVar5 = FUN_0025b154(__dest);
  __s1_01 = (void *)(DAT_00272bd8 + 0x272ad4);
  pcVar10 = (char *)((int)__dest + iVar5 + 1);
  while (*pcVar10 != '\0') {
    iVar5 = FUN_0025b154(pcVar10);
    __s1 = pcVar10 + iVar5 + 1;
    sVar3 = FUN_0025b154(__s1);
    pcVar2 = local_34;
    if (iVar5 == 3) {
      iVar5 = memcmp((void *)(DAT_00272bdc + 0x272afc),pcVar10,3);
      pcVar2 = __s1;
      if (iVar5 != 0) {
        pcVar2 = local_34;
      }
    }
    else if (iVar5 == 5) {
      __s1_00 = (void *)(DAT_00272be0 + 0x272b12);
      iVar5 = memcmp(__s1_00,pcVar10,5);
      if (iVar5 == 0) {
        local_30 = 0x60000;
        puVar11 = (undefined4 *)(DAT_00272c68 + 0x272cc2);
        local_24 = 0x60000;
LAB_00272b6a:
        while( true ) {
          __s2 = (void *)*puVar11;
          if (__s2 == (void *)0x0) goto LAB_00272b70;
          sVar8 = FUN_0025b154(__s2);
          if ((sVar3 == sVar8) && (iVar5 = memcmp(__s1,__s2,sVar3), iVar5 == 0)) break;
          puVar11 = puVar11 + 2;
        }
        uVar12 = puVar11[1];
        if (uVar12 == 0) {
LAB_00272b70:
          iVar5 = DAT_00272bec + 0x272b7a;
          goto LAB_00272b7a;
        }
        if ((int)local_24 < (int)(uVar12 & 0xffffff7f)) {
          uVar13 = sqlite3_mprintf(DAT_00272bf0 + 0x272b96,__s1_00,__s1);
          *param_6 = uVar13;
          uVar13 = 3;
          goto LAB_00272c3a;
        }
        local_38 = local_38 & ~local_30 | uVar12;
      }
    }
    else if ((iVar5 == 4) && (iVar5 = memcmp(__s1_01,pcVar10,4), iVar5 == 0)) {
      local_24 = local_38 & 0x87;
      local_30 = 0x87;
      __s1_00 = (void *)(DAT_00272be8 + 0x272b44);
      puVar11 = (undefined4 *)(DAT_00272be4 + 0x272b7a);
      goto LAB_00272b6a;
    }
    local_34 = pcVar2;
    pcVar10 = __s1 + sVar3 + 1;
  }
LAB_00272c1a:
  iVar5 = sqlite3_vfs_find(local_34);
  *param_4 = iVar5;
  uVar13 = 0;
  if (iVar5 != 0) goto LAB_00272c42;
  uVar13 = sqlite3_mprintf(DAT_00272c64 + 0x272c32,local_34);
LAB_00272c34:
  *param_6 = uVar13;
  uVar13 = 1;
LAB_00272c3a:
  sqlite3_free(__dest);
  __dest = (void *)0x0;
LAB_00272c42:
  *param_3 = local_38;
  *param_5 = (int)__dest;
  return uVar13;
}


