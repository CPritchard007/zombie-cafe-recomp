/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b0932 CCMaterial::LoadFromFile */

/* CCMaterial::LoadFromFile(ccMaterial*, void*) */

bool CCMaterial::LoadFromFile(ccMaterial *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  ccMaterial *pcVar3;
  uint uVar4;
  bool bVar5;
  byte local_19 [5];
  
  if (param_2 == (void *)0xffffffff) {
    return false;
  }
  iVar1 = CCFile::Read(param_2,local_19,1);
  if (iVar1 != 1) {
    return false;
  }
  uVar4 = (uint)local_19[0];
  if (uVar4 != 0) {
    pvVar2 = malloc(uVar4 + 2);
    *(void **)(param_1 + 0x40) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    uVar4 = CCFile::Read(param_2,pvVar2,uVar4);
    if (uVar4 != local_19[0]) {
      return false;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x40) + uVar4) = 0;
  }
  pcVar3 = param_1 + 0x3c;
  iVar1 = CCFile::Read(param_2,pcVar3,1);
  if (iVar1 != 1) {
    return false;
  }
  uVar4 = (uint)(byte)*pcVar3;
  if (uVar4 != 0) {
    pvVar2 = malloc(uVar4 + 2);
    *(void **)(param_1 + 0x44) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    uVar4 = CCFile::Read(param_2,pvVar2,uVar4);
    if (uVar4 != (byte)*pcVar3) {
      return false;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x44) + uVar4) = 0;
  }
  pcVar3 = param_1 + 0x3d;
  iVar1 = CCFile::Read(param_2,pcVar3,1);
  if (iVar1 != 1) {
    return false;
  }
  uVar4 = (uint)(byte)*pcVar3;
  if (uVar4 != 0) {
    pvVar2 = malloc(uVar4 + 2);
    *(void **)(param_1 + 0x48) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return false;
    }
    uVar4 = CCFile::Read(param_2,pvVar2,uVar4);
    if (uVar4 != (byte)*pcVar3) {
      return false;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x48) + uVar4) = 0;
  }
  iVar1 = CCFile::Read(param_2,param_1 + 0x4c,0x10);
  bVar5 = false;
  if ((((iVar1 == 0x10) && (iVar1 = CCFile::Read(param_2,param_1 + 0x5c,0x10), iVar1 == 0x10)) &&
      (iVar1 = CCFile::Read(param_2,param_1 + 0x6c,0x10), iVar1 == 0x10)) &&
     ((iVar1 = CCFile::Read(param_2,param_1 + 0x7c,0x10), iVar1 == 0x10 &&
      (iVar1 = CCFile::Read(param_2,param_1 + 0x8c,4), iVar1 == 4)))) {
    iVar1 = CCFile::Read(param_2,param_1 + 0x90,4);
    bVar5 = iVar1 == 4;
  }
  return bVar5;
}


