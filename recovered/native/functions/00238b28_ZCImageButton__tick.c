/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238b28 ZCImageButton::tick */

/* ZCImageButton::tick(long) */

undefined8 ZCImageButton::tick(long param_1)

{
  undefined1 uVar1;
  int in_r1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float in_s0;
  float in_s1;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x94) + 0x4b8);
  uVar1 = contains((ZCImageButton *)param_1,iVar2 >> 0x10,(int)(short)iVar2,in_s0,in_s1);
  *(undefined1 *)(param_1 + 0x90) = uVar1;
  uVar3 = (uint)*(byte *)(param_1 + 0x86);
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x94);
    if (*(char *)(iVar2 + DAT_00238bdc) != '\0') {
      uVar1 = 0;
      goto LAB_00238b70;
    }
    uVar3 = *(uint *)(iVar2 + 0x4b8);
    if (uVar3 != 0) goto LAB_00238b70;
  }
  uVar1 = (undefined1)uVar3;
LAB_00238b70:
  *(undefined1 *)(param_1 + 0x91) = uVar1;
  if (*(char *)(param_1 + 0x93) != '\0') {
    piVar4 = (int *)(param_1 + 0x98);
    iVar2 = in_r1 + *piVar4;
    *piVar4 = iVar2;
    if (2000 < iVar2) {
      *piVar4 = iVar2 + DAT_00238be0;
    }
    iVar2 = __divsi3(*piVar4 * 0x168,2000);
    if (iVar2 < 0) {
      __aeabi_idivmod(-iVar2,0x168);
      iVar2 = -*(int *)(extraout_r1_00 * 4 + DAT_00238be8 + 0x238bca);
    }
    else {
      __aeabi_idivmod(iVar2,0x168);
      iVar2 = *(int *)(extraout_r1 * 4 + DAT_00238be4 + 0x238bb8);
    }
    *(char *)(param_1 + 0x9c) = (char)((uint)(iVar2 * 0x3f) >> 0x10) + '@';
  }
  return CONCAT44(in_r1,0x3f800000);
}


