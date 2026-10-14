/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf0d4 CCCarousel::Tick */

/* CCCarousel::Tick(ccCarousel*, float) */

undefined8 CCCarousel::Tick(ccCarousel *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 uVar4;
  uint uVar5;
  ccCarousel *local_20;
  
  uVar5 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = __subsf3(uVar4,*(undefined4 *)(param_1 + 0x34));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x14));
    uVar3 = __divsf3(uVar3,in_r1);
    uVar3 = __subsf3(uVar3,uVar5);
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_1 + 0x18));
    uVar3 = __addsf3(uVar5,uVar3);
    *(undefined4 *)(param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    local_20 = param_1;
    goto LAB_002bf21e;
  }
  local_20 = *(ccCarousel **)param_1;
  uVar3 = __mulsf3(uVar5);
  uVar3 = __addsf3(local_20,uVar3);
  uVar4 = __floatunsisf(*(undefined4 *)(param_1 + 8));
  iVar1 = __aeabi_fcmplt(local_20,uVar4);
  if ((((iVar1 != 0) && (iVar1 = __aeabi_fcmpgt(uVar3,uVar4), iVar1 != 0)) ||
      ((iVar1 = __aeabi_fcmpgt(local_20,uVar4), iVar1 != 0 &&
       (iVar1 = __aeabi_fcmplt(uVar3,uVar4), iVar1 != 0)))) &&
     (iVar1 = __aeabi_fcmplt(uVar5 & 0x7fffffff,0x40800000), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar3 = uVar4;
  }
  FUN_002bed98(param_1,uVar3);
  iVar1 = __mulsf3(in_r1,DAT_002bf220);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  iVar2 = __aeabi_fcmpgt(uVar3,iVar1);
  if (iVar2 == 0) {
    iVar2 = __aeabi_fcmplt(uVar3,iVar1 + -0x80000000);
    if (iVar2 != 0) {
      uVar3 = __addsf3(uVar3,iVar1);
      goto LAB_002bf188;
    }
  }
  else {
    uVar3 = __subsf3(uVar3,iVar1);
LAB_002bf188:
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  iVar1 = __aeabi_fcmpgt(uVar3,DAT_002bf224);
  if (iVar1 == 0) {
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((uVar5 != 0xffffffff) && (*(uint *)(param_1 + 8) < uVar5)) goto LAB_002bf1a4;
    iVar1 = __aeabi_fcmplt(uVar3,DAT_002bf228);
    if ((iVar1 == 0) && ((uVar5 == 0xffffffff || (*(uint *)(param_1 + 8) <= uVar5)))) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      goto LAB_002bf21e;
    }
    iVar1 = __aeabi_fcmpgt(uVar3,0xc0000000);
    if (iVar1 != 0) {
      uVar3 = 0xc0000000;
    }
  }
  else {
LAB_002bf1a4:
    iVar1 = __aeabi_fcmplt(uVar3,0x40000000);
    if (iVar1 != 0) {
      uVar3 = 0x40000000;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
LAB_002bf21e:
  return CONCAT44(in_r1,local_20);
}


