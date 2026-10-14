/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029f304 PackedImage::recreateCCTexture2DForOnResume */

/* PackedImage::recreateCCTexture2DForOnResume(PackedImage*) */

void PackedImage::recreateCCTexture2DForOnResume(PackedImage *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  Resource *this;
  undefined4 *puVar4;
  int *piVar5;
  String *this_00;
  
  iVar1 = DAT_0029f4b8;
  piVar5 = *(int **)(DAT_0029f4b4 + 0x29f310);
  *(int *)(&stack0x00000318 + DAT_0029f4b8) = *piVar5;
  L_PrintLog((char *)(DAT_0029f4c0 + 0x29f31e),(char *)(DAT_0029f4bc + 0x29f31c));
  if (param_1 == (PackedImage *)0x0) {
    uVar3 = 0;
  }
  else {
    this_00 = (String *)(param_1 + 4);
    L_PrintLog((char *)(DAT_0029f4c4 + 0x29f334),(char *)(DAT_0029f4c8 + 0x29f336));
    String::String((String *)(&stack0xfffffff0 + iVar1),this_00);
    iVar2 = operator==(&stack0xfffffff0 + iVar1,0);
    String::~String((String *)(&stack0xfffffff0 + iVar1));
    uVar3 = 0;
    if (iVar2 == 0) {
      L_PrintLog((char *)(DAT_0029f4cc + 0x29f360),(char *)(DAT_0029f4d0 + 0x29f362));
      uVar3 = String::getBytes(this_00);
      sprintf(&stack0x00000018 + iVar1,(char *)(DAT_0029f4d4 + 0x29f374),uVar3,
              *(undefined4 *)(param_1 + 0xc));
      L_PrintLog((char *)(DAT_0029f4d8 + 0x29f380),&stack0x00000018 + iVar1);
      L_PrintLog((char *)(DAT_0029f4dc + 0x29f38a),&stack0x00000018 + iVar1);
      String::String((String *)(&stack0xfffffff8 + iVar1),this_00);
      this = (Resource *)
             ResourceManager::loadImage(&stack0xfffffff8 + iVar1,*(undefined4 *)(param_1 + 0xc));
      String::~String((String *)(&stack0xfffffff8 + iVar1));
      if (this == (Resource *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if (this[0x1c] == (Resource)0x2) {
          L_PrintLog((char *)(DAT_0029f500 + 0x29f484),(char *)(DAT_0029f504 + 0x29f486));
          (**(code **)(*(int *)this + 8))(this);
          CFTexture::CFTexture((CFTexture *)(&stack0x00000000 + iVar1),*(CFTexture **)(this + 0x14))
          ;
          (&stack0x00000004)[iVar1] = 1;
          if (*(int *)(&stack0x00000000 + iVar1) == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = *(undefined4 **)(*(int *)(&stack0x00000000 + iVar1) + 4);
          }
          sprintf(&stack0x00000118 + iVar1,(char *)(DAT_0029f4e0 + 0x29f3be),*puVar4);
          L_PrintLog((char *)(DAT_0029f4e4 + 0x29f3c8),&stack0x00000118 + iVar1);
          CImage::getCFTexture();
          CFTexture::ClearHardwearID((CFTexture *)(&stack0x00000008 + iVar1));
          CFTexture::~CFTexture((CFTexture *)(&stack0x00000008 + iVar1));
          CImage::getCFTexture();
          CFTexture::changeTexture((ccTexture2D *)(&stack0x00000010 + iVar1));
          CFTexture::~CFTexture((CFTexture *)(&stack0x00000010 + iVar1));
          L_PrintLog((char *)(DAT_0029f4e8 + 0x29f402),(char *)(DAT_0029f4ec + 0x29f404));
          ResourceManager::Resource::releaseHandle(this);
          L_PrintLog((char *)(DAT_0029f4f0 + 0x29f414),(char *)(DAT_0029f4f4 + 0x29f416));
          puVar4 = *(undefined4 **)(&stack0x00000000 + iVar1);
          if (puVar4 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)puVar4[1];
          }
          sprintf(&stack0x00000218 + iVar1,(char *)(DAT_0029f4f8 + 0x29f42a),*puVar4);
          L_PrintLog((char *)(DAT_0029f4fc + 0x29f434),&stack0x00000218 + iVar1);
          CFTexture::~CFTexture((CFTexture *)(&stack0x00000000 + iVar1));
          uVar3 = 1;
        }
      }
    }
  }
  if (*(int *)(&stack0x00000318 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


