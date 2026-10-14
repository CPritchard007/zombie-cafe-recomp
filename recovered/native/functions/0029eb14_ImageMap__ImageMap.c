/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029eb14 ImageMap::ImageMap */

/* ImageMap::ImageMap(String, int) */

ImageMap * __thiscall ImageMap::ImageMap(ImageMap *this,String *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  String aSStack_40 [40];
  String aSStack_18 [12];
  
  String::String(aSStack_40,param_2);
  String::String(aSStack_18,aSStack_40);
  uVar3 = ResourceManager::load(aSStack_18,param_3,1);
  String::~String(aSStack_18);
  *(undefined4 *)this = uVar3;
  String::~String(aSStack_40);
  pbVar4 = *(byte **)(*(int *)this + 0x14);
  *(byte **)(this + 4) = pbVar4;
  iVar2 = DAT_0029eba4;
  iVar1 = DAT_0029eb9c;
  if ((ushort)((ushort)pbVar4[1] * 0x100 + (ushort)*pbVar4) == 1) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = *(undefined4 *)(iVar1 + 0x29eb6e);
    puVar5 = (undefined4 *)(DAT_0029eba0 + 0x29eb76);
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + 0x29eb7e);
    puVar5 = (undefined4 *)(DAT_0029eba8 + 0x29eb86);
  }
  *(undefined4 *)(this + 0x10) = *puVar5;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}


