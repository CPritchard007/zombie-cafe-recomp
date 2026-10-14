/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be7fc Cafe::setTileImageIndex */

/* Cafe::setTileImageIndex(int, int, long) */

void __thiscall Cafe::setTileImageIndex(Cafe *this,int param_1,int param_2,long param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_4c;
  undefined1 local_38;
  short asStack_28 [10];
  
  if (0xff < param_2) {
    param_2 = 5;
  }
  iVar2 = CapcomApp::getInstance();
  iVar2 = *(int *)(iVar2 + 4);
  iVar7 = param_1 * 4;
  **(undefined1 **)(*(int *)this + iVar7) = (char)param_2;
  *(long *)(*(int *)(*(int *)this + iVar7) + 4) = param_3;
  *(undefined1 *)(*(int *)(*(int *)this + iVar7) + 8) = 0;
  memset(asStack_28,0,0x10);
  uVar3 = __floatsisf((int)**(short **)(DAT_000be998 + 0xbe840));
  __mulsf3(uVar3,0x3f400000);
  uVar1 = __fixsfsi();
  asStack_28[3] = uVar1;
  uVar3 = __floatsisf((int)**(short **)(DAT_000be99c + 0xbe862));
  __mulsf3(uVar3,0x3f400000);
  asStack_28[4] = __fixsfsi();
  iVar10 = *(int *)(param_2 * 4 + *(int *)(this + 0x84));
  local_4c = param_1 << 5;
  iVar7 = 0;
  asStack_28[6] = asStack_28[4];
  asStack_28[7] = uVar1;
  do {
    iVar8 = *(int *)(this + 0x10);
    iVar6 = iVar7 + param_1 * 8;
    uVar3 = __floatsisf((int)*(short *)(iVar10 + 0x1c));
    __mulsf3(uVar3,*(undefined4 *)(iVar10 + 0x2c));
    iVar4 = __fixsfsi();
    uVar3 = __floatsisf(iVar4 + asStack_28[iVar7]);
    iVar9 = *(int *)(iVar2 + DAT_000be9a0);
    iVar4 = *(int *)(iVar9 + 0x14);
    if (iVar4 == 0) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 8);
    }
    uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar9 + 0x30));
    uVar3 = __mulsf3(uVar3,uVar5);
    *(undefined4 *)(iVar8 + local_4c) = uVar3;
    iVar8 = *(int *)(this + 0x10);
    uVar3 = __floatsisf((int)*(short *)(iVar10 + 0x1e));
    __mulsf3(uVar3,*(undefined4 *)(iVar10 + 0x2c));
    iVar4 = __fixsfsi();
    uVar3 = __floatsisf(iVar4 + asStack_28[iVar7 + 1]);
    iVar9 = *(int *)(iVar2 + DAT_000be9a0);
    iVar4 = *(int *)(iVar9 + 0x14);
    if (iVar4 == 0) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    uVar5 = __mulsf3(uVar5,*(undefined4 *)(iVar9 + 0x30));
    uVar3 = __mulsf3(uVar3,uVar5);
    iVar7 = iVar7 + 2;
    *(undefined4 *)(iVar8 + local_4c + 4) = uVar3;
    iVar6 = iVar6 * 2;
    *(char *)(*(int *)(this + 0x14) + iVar6) = (char)((uint)param_3 >> 0x10);
    *(char *)(*(int *)(this + 0x14) + iVar6 + 1) = (char)((uint)param_3 >> 8);
    *(char *)(*(int *)(this + 0x14) + iVar6 + 2) = (char)param_3;
    local_38 = (undefined1)((uint)param_3 >> 0x18);
    *(undefined1 *)(*(int *)(this + 0x14) + iVar6 + 3) = local_38;
    local_4c = local_4c + 8;
  } while (iVar7 != 8);
  return;
}


