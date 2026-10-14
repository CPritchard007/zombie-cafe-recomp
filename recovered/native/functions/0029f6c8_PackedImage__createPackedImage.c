/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f6c8 PackedImage::createPackedImage */

/* PackedImage::createPackedImage(String, int, int, int) */

void PackedImage::createPackedImage
               (String *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  Resource *this;
  int *piVar2;
  PackedImage *pPVar3;
  int *piVar4;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0029f794 + 0x29f6d4);
  local_1c = *piVar4;
  uVar1 = String::getBytes(param_1);
  snprintf(acStack_9c,0x80,(char *)(DAT_0029f798 + 0x29f6ec),uVar1);
  L_PrintLog((char *)(DAT_0029f79c + 0x29f6f8),acStack_9c);
  snprintf(acStack_9c,0x80,(char *)(DAT_0029f7a0 + 0x29f704),param_2);
  String::String(aSStack_ac,param_1);
  this = (Resource *)ResourceManager::loadImage(aSStack_ac,param_2);
  String::~String(aSStack_ac);
  piVar2 = (int *)CImage::createImage(this);
  String::String(aSStack_a4,param_1);
  pPVar3 = (PackedImage *)operator_new(0x3c);
  PackedImage(pPVar3,piVar2,aSStack_a4,param_2,param_3,param_4);
  String::~String(aSStack_a4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  ResourceManager::Resource::releaseHandle(this);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar3);
  }
  return;
}


