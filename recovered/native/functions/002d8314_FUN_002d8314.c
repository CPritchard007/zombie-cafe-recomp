/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8314 FUN_002d8314 */

undefined8 FUN_002d8314(int param_1,int param_2,char *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x1dc);
  uVar6 = 0x18;
  iVar4 = 0;
  iVar5 = DAT_002d8398 + 0x2d8326;
  do {
    uVar2 = uVar8 >> (uVar6 & 0xff);
    uVar3 = uVar2 & 0xff;
    uVar6 = uVar6 - 8;
    if ((uVar3 - 0x5b < 6) || (0x39 < uVar3 - 0x41)) {
      uVar1 = *(undefined1 *)(iVar5 + (uVar3 >> 4));
      *(undefined1 *)(param_2 + iVar4) = 0x5b;
      iVar7 = param_2 + iVar4;
      *(undefined1 *)(iVar7 + 1) = uVar1;
      iVar4 = iVar4 + 4;
      *(undefined1 *)(iVar7 + 2) = *(undefined1 *)(iVar5 + (uVar2 & 0xf));
      *(undefined1 *)(iVar7 + 3) = 0x5d;
    }
    else {
      *(char *)(param_2 + iVar4) = (char)uVar2;
      iVar4 = iVar4 + 1;
    }
  } while (uVar6 != 0xfffffff8);
  if (param_3 == (char *)0x0) {
    *(undefined1 *)(param_2 + iVar4) = 0;
  }
  else {
    *(undefined1 *)(param_2 + iVar4) = 0x3a;
    *(undefined1 *)(param_2 + iVar4 + 1) = 0x20;
    iVar5 = iVar4 + 2;
    do {
      if (*param_3 == '\0') break;
      *(char *)(param_2 + iVar5) = *param_3;
      iVar5 = iVar5 + 1;
      param_3 = param_3 + 1;
    } while (iVar5 != iVar4 + 0xc5);
    *(undefined1 *)(param_2 + iVar5) = 0;
  }
  return CONCAT44(uVar8,param_1);
}


