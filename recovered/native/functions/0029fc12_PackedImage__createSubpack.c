/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fc12 PackedImage::createSubpack */

/* PackedImage::createSubpack(int, int) const */

PackedImage * __thiscall PackedImage::createSubpack(PackedImage *this,int param_1,int param_2)

{
  PackedImage *this_00;
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  undefined2 local_34;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  this_00 = (PackedImage *)operator_new(0x3c);
  PackedImage(this_00,(CImage *)this);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
  String::String(aSStack_28,(String *)(this + 4));
  String::operator=((String *)(this_00 + 4),aSStack_28);
  String::~String(aSStack_28);
  local_34 = (undefined2)param_2;
  *(undefined2 *)(this_00 + 0x38) = local_34;
  puVar1 = (undefined4 *)operator_new__(param_2 * 0x18 + 8);
  *puVar1 = 0x18;
  puVar1[1] = param_2;
  puVar3 = (undefined2 *)((int)puVar1 + 0x1e);
  for (local_3c = param_2 + -1; local_3c != -1; local_3c = local_3c + -1) {
    String::String((String *)(puVar3 + -0xb));
    *puVar3 = 0;
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    puVar3 = puVar3 + 0xc;
  }
  iVar4 = 0;
  local_3c = 0;
  *(undefined4 **)(this_00 + 0x34) = puVar1 + 2;
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
  for (; local_3c < param_2; local_3c = local_3c + 1) {
    iVar2 = *(int *)(this_00 + 0x34);
    iVar5 = iVar4 + param_1 * 0x18;
    String::String(aSStack_20,(String *)(*(int *)(this + 0x34) + iVar5));
    String::operator=((String *)(iVar2 + iVar4),aSStack_20);
    String::~String(aSStack_20);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 8) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 8);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 10) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 10);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0xc) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0xc);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0xe) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0xe);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0x10) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0x10);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0x16) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0x16);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0x12) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0x12);
    *(undefined2 *)(*(int *)(this_00 + 0x34) + iVar4 + 0x14) =
         *(undefined2 *)(*(int *)(this + 0x34) + iVar5 + 0x14);
    iVar4 = iVar4 + 0x18;
  }
  return this_00;
}


