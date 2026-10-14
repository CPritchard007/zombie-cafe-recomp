/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002de1c4 png_read_transform_info */

void png_read_transform_info(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x13c);
  if ((int)(uVar2 << 0x13) < 0) {
    bVar5 = *(byte *)((int)param_2 + 0x19);
    iVar1 = 0x210;
    iVar7 = param_1;
    if (bVar5 == 3) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x210);
      uVar4 = 2;
      if (uVar2 != 0) {
        uVar4 = 6;
      }
      *(undefined1 *)((int)param_2 + 0x19) = uVar4;
      *(undefined1 *)(param_2 + 6) = 8;
      *(undefined2 *)((int)param_2 + 0x16) = 0;
      iVar6 = *(int *)(param_1 + 0x204);
      if (iVar6 != 0) goto LAB_002de224;
      uVar8 = png_error(param_1,DAT_002de34c + 0x2de204);
      iVar1 = (int)((ulonglong)uVar8 >> 0x20);
      iVar7 = (int)uVar8;
      bVar5 = (byte)iVar6;
    }
    if ((*(short *)(iVar7 + iVar1) != 0) && ((int)(uVar2 << 6) < 0)) {
      *(byte *)((int)param_2 + 0x19) = bVar5 | 4;
    }
    if (*(byte *)(param_2 + 6) < 8) {
      *(undefined1 *)(param_2 + 6) = 8;
    }
    *(undefined2 *)((int)param_2 + 0x16) = 0;
  }
LAB_002de224:
  uVar2 = *(uint *)(param_1 + 0x13c);
  if ((int)(uVar2 << 0x18) < 0) {
    memcpy((void *)((int)param_2 + 0xaa),(void *)(param_1 + 0x228),10);
  }
  param_2[10] = *(int *)(param_1 + 0x39c);
  if ((char)param_2[6] == '\x10') {
    if ((int)(uVar2 << 5) < 0) {
      *(undefined1 *)(param_2 + 6) = 8;
    }
    if ((int)(uVar2 << 0x15) < 0) {
      *(undefined1 *)(param_2 + 6) = 8;
    }
  }
  if ((int)(uVar2 << 0x11) < 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 2;
  }
  if ((uVar2 & 0x600000) != 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfd;
  }
  if ((((int)(uVar2 << 0x19) < 0) &&
      (((*(char *)((int)param_2 + 0x19) == '\x06' || (*(char *)((int)param_2 + 0x19) == '\x02')) &&
       (*(int *)(param_1 + 0x2c8) != 0)))) && ((char)param_2[6] == '\b')) {
    *(undefined1 *)((int)param_2 + 0x19) = 3;
  }
  uVar3 = (uint)*(byte *)((int)param_2 + 0x19);
  if ((((int)(uVar2 << 0x16) < 0) && ((char)param_2[6] == '\b')) && (uVar3 != 3)) {
    *(undefined1 *)(param_2 + 6) = 0x10;
  }
  if (((int)(uVar2 << 0x1d) < 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if ((uVar3 == 3) || (uVar4 = 3, -1 < (int)(uVar3 << 0x1e))) {
    uVar4 = 1;
  }
  *(undefined1 *)((int)param_2 + 0x1d) = uVar4;
  iVar7 = *(int *)(param_1 + 0x13c);
  if (iVar7 << 0xd < 0) {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) & 0xfb;
    *(undefined2 *)((int)param_2 + 0x16) = 0;
  }
  uVar2 = (uint)*(byte *)((int)param_2 + 0x19);
  if ((int)(uVar2 << 0x1d) < 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if ((iVar7 << 0x10 < 0) &&
     (((uVar2 == 0 || (uVar2 == 2)) &&
      (*(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01', iVar7 << 7 < 0))))
  {
    *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
  }
  if (iVar7 << 0xb < 0) {
    if (*(byte *)(param_2 + 6) < *(byte *)(param_1 + 0x130)) {
      *(byte *)(param_2 + 6) = *(byte *)(param_1 + 0x130);
    }
    if (*(byte *)((int)param_2 + 0x1d) < *(byte *)(param_1 + DAT_002de350)) {
      *(byte *)((int)param_2 + 0x1d) = *(byte *)(param_1 + DAT_002de350);
    }
  }
  bVar5 = *(char *)((int)param_2 + 0x1d) * (char)param_2[6];
  *(byte *)((int)param_2 + 0x1e) = bVar5;
  if (bVar5 < 8) {
    uVar2 = *param_2 * (uint)bVar5 + 7 >> 3;
  }
  else {
    uVar2 = *param_2 * (uint)(bVar5 >> 3);
  }
  *(uint *)(param_1 + 0x1f8) = uVar2;
  param_2[3] = uVar2;
  return;
}


