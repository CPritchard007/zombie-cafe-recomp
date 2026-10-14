/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e650 GameLoader::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0029e674) */
/* WARNING: Removing unreachable block (ram,0x0029e674) */
/* GameLoader::tick(long) */

void GameLoader::tick(long param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float __x;
  float fVar7;
  float __x_00;
  undefined8 uVar8;
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = *(short *)(param_1 + 0x3a) + 0x1e;
  if (500 < iVar4) {
    iVar4 = 500;
  }
  *(short *)(param_1 + 0x3a) = (short)iVar4;
  iVar4 = DAT_0029e928;
  switch(*(undefined1 *)(param_1 + 0x39)) {
  case 0:
    String::String(aSStack_70,(char *)(DAT_0029e92c + 0x29e78e));
    String::String(aSStack_68,aSStack_70);
    uVar1 = CImage::createImage(aSStack_68,0);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    String::~String(aSStack_68);
    iVar4 = CapcomApp::getInstance();
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x4c);
    iVar4 = CapcomApp::getInstance();
    uVar6 = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    uVar1 = __divsf3(*(undefined4 *)(param_1 + 0x3c),uVar6);
    iVar5 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(iVar5 + 0x2c) = uVar6;
    uVar1 = __divsf3(0x3f800000,uVar6);
    iVar4 = DAT_0029e930;
    *(undefined4 *)(iVar5 + 0x30) = uVar1;
    iVar4 = **(int **)(iVar4 + 0x29e7da);
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar5 = __mulsf3(iVar4 + -0x80000000,0x3f000000);
    iVar4 = iVar5;
    fVar7 = cosf(__x_00);
    sinf(fVar7);
    *(int *)(param_1 + 0x20) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x24) = iVar5 + -0x80000000;
    *(int *)(param_1 + 0x28) = iVar4;
    local_48 = 0x3f800000;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0x3f800000;
    local_38 = 0;
    local_34 = 0;
    iVar4 = CapcomApp::getInstance();
    local_38 = __floatsisf(*(int *)(iVar4 + 0x70) >> 0x11);
    iVar4 = CapcomApp::getInstance();
    local_34 = __floatsisf((int)(short)*(undefined4 *)(iVar4 + 0x70) >> 1);
    FUN_0029e53e(&local_30,&local_48,param_1 + 0x1c);
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0x1c) = local_30;
    *(undefined4 *)(param_1 + 0x20) = local_2c;
    *(undefined4 *)(param_1 + 0x24) = local_28;
    *(undefined4 *)(param_1 + 0x28) = local_24;
    *(undefined4 *)(param_1 + 0x2c) = local_20;
    *(undefined4 *)(param_1 + 0x30) = local_1c;
    break;
  default:
    goto switchD_0029e674_caseD_1;
  case 2:
    iVar4 = *(int *)param_1;
    piVar2 = *(int **)(iVar4 + 4);
    if (piVar2 == (int *)0x0) {
      uVar1 = GameFactory::createCapcomGame();
      *(undefined4 *)(iVar4 + 4) = uVar1;
      goto switchD_0029e674_caseD_1;
    }
    iVar4 = (**(code **)(*piVar2 + 0xc))();
    if (iVar4 == 0) goto switchD_0029e674_caseD_1;
    uVar3 = 3;
    goto LAB_0029e89a;
  case 4:
    String::String(aSStack_70,(char *)(DAT_0029e920 + 0x29e68c));
    String::String(aSStack_78,aSStack_70);
    uVar1 = CImage::createImage(aSStack_78,0);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    String::~String(aSStack_78);
    iVar4 = CapcomApp::getInstance();
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x4c);
    iVar4 = CapcomApp::getInstance();
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar4 + 0x48);
    uVar1 = __divsf3(uVar6);
    iVar5 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(iVar5 + 0x2c) = uVar6;
    uVar1 = __divsf3(0x3f800000,uVar6);
    iVar4 = DAT_0029e924;
    *(undefined4 *)(iVar5 + 0x30) = uVar1;
    iVar4 = **(int **)(iVar4 + 0x29e6d8);
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar5 = __mulsf3(iVar4 + -0x80000000,0x3f000000);
    iVar4 = iVar5;
    fVar7 = cosf(__x);
    sinf(fVar7);
    *(int *)(param_1 + 0x20) = iVar5;
    *(int *)(param_1 + 0x1c) = iVar4;
    *(int *)(param_1 + 0x24) = iVar5 + -0x80000000;
    *(int *)(param_1 + 0x28) = iVar4;
    local_48 = 0x3f800000;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0x3f800000;
    local_38 = 0;
    local_34 = 0;
    iVar4 = CapcomApp::getInstance();
    local_38 = __floatsisf(*(int *)(iVar4 + 0x70) >> 0x11);
    iVar4 = CapcomApp::getInstance();
    local_34 = __floatsisf((int)(short)*(undefined4 *)(iVar4 + 0x70) >> 1);
    FUN_0029e53e(&local_60,&local_48,param_1 + 0x1c);
    uVar3 = 5;
    *(undefined4 *)(param_1 + 0x1c) = local_60;
    *(undefined4 *)(param_1 + 0x20) = local_5c;
    *(undefined4 *)(param_1 + 0x24) = local_58;
    *(undefined4 *)(param_1 + 0x28) = local_54;
    *(undefined4 *)(param_1 + 0x2c) = local_50;
    *(undefined4 *)(param_1 + 0x30) = local_4c;
    break;
  case 5:
    iVar5 = *(int *)(param_1 + 0x34) + 0x1e;
    *(int *)(param_1 + 0x34) = iVar5;
    if (iVar5 <= iVar4) goto switchD_0029e674_caseD_1;
    uVar3 = 0;
LAB_0029e89a:
    *(undefined1 *)(param_1 + 0x39) = uVar3;
    goto switchD_0029e674_caseD_1;
  }
  *(undefined1 *)(param_1 + 0x39) = uVar3;
  String::~String(aSStack_70);
switchD_0029e674_caseD_1:
  if ((*(uint *)(DAT_0029e934 + 0x29e8a8) != (uint)*(byte *)(param_1 + 0x39)) &&
     (*(byte *)(param_1 + 0x39) == 3)) {
    uVar8 = L_CurrentTimeMillis();
    iVar5 = DAT_0029e940;
    iVar4 = DAT_0029e93c;
    uVar8 = __subdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),
                     *(undefined4 *)(DAT_0029e938 + 0x29e8be),
                     *(undefined4 *)(DAT_0029e938 + 0x29e8c2));
    __divdf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_0029e918,DAT_0029e91c,uVar8);
    __android_log_print(3,iVar4 + 0x29e8d4,iVar5 + 0x29e8d6);
  }
  *(uint *)(DAT_0029e944 + 0x29e8ee) = (uint)*(byte *)(param_1 + 0x39);
  return;
}


