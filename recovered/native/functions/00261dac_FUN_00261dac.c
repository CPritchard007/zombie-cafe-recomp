/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261dac FUN_00261dac */

uint FUN_00261dac(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_20;
  int local_1c;
  
  if ((*(byte *)((int)param_1 + 0xf) < 2) && (*(byte *)(param_1 + 4) < 2)) {
    return 0;
  }
  FUN_0025f884(param_1);
  piVar2 = (int *)param_1[0x10];
  iVar7 = *piVar2;
  if (iVar7 == 0) {
    uVar8 = 0;
    goto LAB_00261ecc;
  }
  if (iVar7 == DAT_00261f60 + 0x261e32) {
    FUN_0025acd0();
    uVar8 = 0;
    goto LAB_00261ecc;
  }
  cVar1 = *(char *)((int)param_1 + 5);
  if (cVar1 == '\x03') {
    uVar8 = param_1[0x12] | param_1[0x13];
    if (uVar8 != 0) {
      pcVar3 = *(code **)(iVar7 + 0x10);
      uVar4 = 0;
      iVar6 = 0;
LAB_00261ea2:
      uVar8 = (*pcVar3)(piVar2,pcVar3,uVar4,iVar6);
    }
  }
  else {
    if ((cVar1 != '\x01') && (((char)param_1[1] == '\0' || (cVar1 == '\x05')))) {
      FUN_0025acd0();
      uVar8 = 0;
      if ((char)param_1[3] == '\0') {
        uVar8 = (**(code **)(*param_1 + 0x1c))(*param_1,param_1[0x25],0);
      }
      goto LAB_00261ecc;
    }
    uVar8 = param_1[0x12] | param_1[0x13];
    if (uVar8 != 0) {
      uVar4 = param_1[0x22];
      iVar6 = param_1[0x23];
      if ((param_2 == 0) && (uVar4 != 0 || iVar6 != 0)) {
        uVar8 = FUN_0025ace6(piVar2,DAT_00261f64 + 0x261ea7,0x1c,0,0,0);
      }
      else {
        uVar8 = (**(code **)(iVar7 + 0x10))(piVar2,*(code **)(iVar7 + 0x10),0,0);
      }
      if ((uVar8 == 0) && (*(char *)((int)param_1 + 7) == '\0')) {
        uVar8 = (**(code **)(*(int *)param_1[0x10] + 0x14))
                          ((int *)param_1[0x10],*(byte *)((int)param_1 + 0xb) | 0x10);
      }
      if (uVar8 == 0) {
        uVar5 = iVar6 >> 0x1f;
        if ((((int)((uVar5 - iVar6) - (uint)(uVar5 < uVar4)) < 0) &&
            (uVar8 = (**(code **)(*(int *)param_1[0x10] + 0x18))
                               ((int *)param_1[0x10],&local_20,uVar5 - uVar4), uVar8 == 0)) &&
           ((iVar6 < local_1c || ((local_1c == iVar6 && (uVar4 < local_20)))))) {
          piVar2 = (int *)param_1[0x10];
          pcVar3 = *(code **)(*piVar2 + 0x10);
          goto LAB_00261ea2;
        }
      }
    }
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
LAB_00261ecc:
  FUN_0025f68e(param_1[0xe]);
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  piVar2 = (int *)param_1[0x2d];
  while (*piVar2 != 0) {
    FUN_00261944(*piVar2);
  }
  FUN_00261988(param_1[0x2d],param_1[6]);
  iVar7 = param_1[0x2e];
  if ((iVar7 != 0) && (*(char *)(iVar7 + 0x2c) != '\0')) {
    FUN_00261c56(iVar7,0,1);
    *(char *)(iVar7 + 0x2c) = '\0';
    *(undefined1 *)(iVar7 + 0x2f) = 0;
  }
  uVar4 = 0;
  if (((char)param_1[1] == '\0') && ((param_1[0x2e] == 0 || (uVar4 = FUN_00261d48(), uVar4 != 0))))
  {
    uVar4 = FUN_0025bf70(param_1,1);
    *(undefined1 *)((int)param_1 + 0x11) = 0;
  }
  *(undefined1 *)((int)param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  if (uVar8 != 0) {
    uVar4 = uVar8;
  }
  return uVar4;
}


