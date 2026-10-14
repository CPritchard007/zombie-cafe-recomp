/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d5c0 CImage::createImage */

/* CImage::createImage(ResourceManager::Resource*) */

CImage * CImage::createImage(Resource *param_1)

{
  int iVar1;
  CFTexture *this;
  undefined4 uVar2;
  CImage *pCVar3;
  CFTexture *this_00;
  undefined4 uVar4;
  Resource *apRStack_20 [2];
  CFTexture aCStack_18 [8];
  
  this = (CFTexture *)apRStack_20;
  apRStack_20[0] = param_1;
  L_PrintLog((char *)(DAT_0029d690 + 0x29d5ce),(char *)(DAT_0029d68c + 0x29d5cc));
  if (param_1 == (Resource *)0x0) {
    pCVar3 = (CImage *)0x0;
  }
  else {
    pCVar3 = (CImage *)0x0;
    if (param_1[0x1c] == (Resource)0x2) {
      if (param_1[0x12] == (Resource)0x0) {
        (**(code **)(*(int *)param_1 + 8))(param_1);
      }
      this_00 = *(CFTexture **)(param_1 + 0x14);
      if (this_00 == (CFTexture *)0x0) {
        L_PrintLog((char *)(DAT_0029d694 + 0x29d5f4),(char *)(DAT_0029d698 + 0x29d5f6));
        pCVar3 = (CImage *)0x0;
      }
      else {
        iVar1 = CFTexture::getCCTexture2D(this_00);
        if (iVar1 == 0) {
          L_PrintLog((char *)(DAT_0029d69c + 0x29d60c),(char *)(DAT_0029d6a0 + 0x29d60e));
          CFTexture::CFTexture(this,this_00);
          pCVar3 = (CImage *)operator_new(0x34);
          CImage(pCVar3,this,0,0);
        }
        else {
          CFTexture::CFTexture(aCStack_18,this_00);
          iVar1 = CFTexture::getCCTexture2D(this_00);
          uVar2 = *(undefined4 *)(iVar1 + 0x14);
          uVar4 = *(undefined4 *)(iVar1 + 0x18);
          pCVar3 = (CImage *)operator_new(0x34);
          CImage(pCVar3,aCStack_18,uVar2,uVar4);
          this = aCStack_18;
        }
        CFTexture::~CFTexture(this);
      }
    }
  }
  return pCVar3;
}


