/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029decc XWBReport */

/* XWBReport(char const*) */

void XWBReport(char *param_1)

{
  int iVar1;
  char *__format;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *__s2;
  int iVar8;
  
  if (*(int *)(DAT_0029df9c + 0x29dedc) == 0) {
    FUN_0029dc6c();
  }
  if (param_1 != (char *)0x0) {
    printf((char *)(DAT_0029dfa0 + 0x29deec),param_1);
  }
  iVar1 = DAT_0029dfa4;
  iVar7 = *(int *)(DAT_0029dfa4 + 0x29def8);
  do {
    while( true ) {
      iVar3 = DAT_0029dfb0;
      iVar7 = *(int *)(iVar7 + 4);
      if (iVar7 == *(int *)(iVar1 + 0x29defc)) {
        printf((char *)(DAT_0029dfbc + 0x29df7e),*(undefined4 *)(iVar1 + 0x29df04));
        printf((char *)(DAT_0029dfc0 + 0x29df8a),*(uint *)(iVar1 + 0x29df00),
               *(uint *)(iVar1 + 0x29df00) >> 10);
        printf((char *)(DAT_0029dfc4 + 0x29df94),*(undefined4 *)(iVar1 + 0x29df08));
        return;
      }
      iVar2 = *(int *)(iVar7 + 0xc);
      iVar4 = *(int *)(iVar7 + 0x18);
      iVar5 = 0;
      iVar8 = *(int *)(iVar7 + 8);
      if (iVar4 != 0) break;
      __s2 = (void *)(DAT_0029dfb0 + 0x29df38);
      printf((char *)(DAT_0029dfb4 + 0x29df44),DAT_0029dfb0 + 0x29df79,*(undefined4 *)(iVar7 + 0x1c)
             ,iVar8,iVar2,*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14));
      iVar2 = memcmp((void *)(iVar8 + iVar2),__s2,5);
      if (iVar2 != 0) {
        uVar6 = *(undefined4 *)(iVar7 + 0x10);
        iVar4 = *(int *)(iVar7 + 0x1c);
        __format = (char *)(DAT_0029dfb8 + 0x29df66);
        iVar3 = iVar3 + 0x29df3d;
LAB_0029df6a:
        printf(__format,iVar3,iVar4,iVar8,uVar6);
      }
    }
    for (; iVar5 != iVar2; iVar5 = iVar5 + 1) {
      if (*(char *)(iVar8 + iVar5) != -0x56) {
        uVar6 = *(undefined4 *)(iVar7 + 0x14);
        iVar8 = *(int *)(iVar7 + 0x10);
        __format = (char *)(DAT_0029dfac + 0x29df1a);
        iVar3 = DAT_0029dfa8 + 0x29df39;
        goto LAB_0029df6a;
      }
    }
  } while( true );
}


