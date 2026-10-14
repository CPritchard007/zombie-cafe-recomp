/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f9e8 PackedImage::createPackedImage */

/* PackedImage::createPackedImage(String, int, String, int) */

void PackedImage::createPackedImage
               (String *param_1,undefined4 param_2,String *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  Resource *this;
  int *piVar3;
  PackedImage *pPVar4;
  int *piVar5;
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  iVar1 = DAT_0029fae0;
  piVar5 = *(int **)(DAT_0029fadc + 0x29f9f4);
  local_1c = *piVar5;
  uVar2 = String::getBytes(param_1);
  snprintf(acStack_9c,0x80,(char *)(DAT_0029fae4 + 0x29fa0e),uVar2);
  L_PrintLog((char *)(iVar1 + 0x29fa10),acStack_9c);
  uVar2 = String::getBytes(param_3);
  snprintf(acStack_9c,0x80,(char *)(DAT_0029fae8 + 0x29fa2c),uVar2);
  L_PrintLog((char *)(iVar1 + 0x29fa10),acStack_9c);
  String::String(aSStack_b4,param_1);
  this = (Resource *)ResourceManager::loadImage(aSStack_b4,param_2);
  String::~String(aSStack_b4);
  piVar3 = (int *)CImage::createImage(this);
  String::String(aSStack_ac,param_1);
  String::String(aSStack_a4,param_3);
  pPVar4 = (PackedImage *)operator_new(0x3c);
  PackedImage(pPVar4,piVar3,aSStack_ac,param_2,aSStack_a4,param_4);
  String::~String(aSStack_a4);
  String::~String(aSStack_ac);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  ResourceManager::Resource::releaseHandle(this);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pPVar4);
  }
  return;
}


