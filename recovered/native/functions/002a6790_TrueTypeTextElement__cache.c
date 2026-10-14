/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6790 TrueTypeTextElement::cache */

/* TrueTypeTextElement::cache() */

void __thiscall TrueTypeTextElement::cache(TrueTypeTextElement *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CFTexture *pCVar4;
  String *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_44;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pSVar5 = (String *)(this + 0x60);
  String::String(aSStack_30,pSVar5);
  iVar1 = operator==(aSStack_30,0);
  iVar8 = 0;
  String::~String(aSStack_30);
  if (iVar1 == 0) {
    iVar8 = *(int *)(this + 0x68);
    *(TrueTypeTextElement **)(iVar8 + 0x15c) = this + 0x98;
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    CapcomApp::getInstance();
    for (iVar1 = 0; iVar1 < *(int *)(this + 0x90) + 1; iVar1 = iVar1 + 1) {
      pCVar4 = *(CFTexture **)(iVar1 * 4 + *(int *)(this + 0x94));
      if (pCVar4 != (CFTexture *)0x0) {
        CFTexture::~CFTexture(pCVar4);
        operator_delete(pCVar4);
      }
    }
    *(undefined4 *)(this + 0x90) = 0xffffffff;
    CapcomApp::getInstance();
    (**(code **)(**(int **)(this + 0x68) + 8))();
    if (*(int *)(this + 0x70) == 0) {
      iVar1 = 0;
      local_44 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(this + 0x70) + 4);
      iVar1 = 0;
      local_44 = 0;
      for (iVar7 = 0; iVar7 < iVar6 + 1; iVar7 = iVar7 + 1) {
        String::substring((int)aSStack_28,(int)pSVar5);
        pCVar4 = (CFTexture *)operator_new(8);
        CapcomTrueTypeFont::drawStringToTexture
                  (pCVar4,iVar8,aSStack_28,0,local_44,0,0,100,100,0,0,0,0);
        String::~String(aSStack_28);
        CFTexture::DebugLog(pCVar4);
        Vector<CFTexture*>::addElement((Vector<CFTexture*> *)(this + 0x8c),pCVar4);
        iVar2 = CFTexture::getWidth(pCVar4);
        if (iVar1 < iVar2) {
          iVar1 = iVar2;
        }
        if (0 < iVar7) {
          uVar3 = CFTexture::getHeight(pCVar4);
          iVar2 = __divsi3(uVar3,iVar7 + 1);
          local_44 = local_44 + iVar2;
        }
      }
    }
    String::substring(aSStack_20,(int)pSVar5);
    pCVar4 = (CFTexture *)operator_new(8);
    CapcomTrueTypeFont::drawStringToTexture(pCVar4,iVar8,aSStack_20,0,local_44,0,0,100,100,0,0,0,0);
    String::~String(aSStack_20);
    CFTexture::DebugLog(pCVar4);
    Vector<CFTexture*>::addElement((Vector<CFTexture*> *)(this + 0x8c),pCVar4);
    iVar8 = CFTexture::getWidth(pCVar4);
    if (this[0x7d] == (TrueTypeTextElement)0x0) {
      if (this[0x7e] == (TrueTypeTextElement)0x0) {
        return;
      }
      iVar8 = *(int *)(this + 0xc);
    }
    else if (iVar8 < iVar1) {
      iVar8 = iVar1;
    }
    if (this[0x7e] == (TrueTypeTextElement)0x0) {
      local_44 = *(int *)(this + 0x10);
    }
    else {
      iVar1 = CFTexture::getHeight(pCVar4);
      local_44 = local_44 + iVar1;
    }
    ScreenElement::setSize((ScreenElement *)this,iVar8,local_44);
  }
  else {
    for (; iVar8 < *(int *)(this + 0x90) + 1; iVar8 = iVar8 + 1) {
      pCVar4 = *(CFTexture **)(iVar8 * 4 + *(int *)(this + 0x94));
      if (pCVar4 != (CFTexture *)0x0) {
        CFTexture::~CFTexture(pCVar4);
        operator_delete(pCVar4);
      }
    }
    *(undefined4 *)(this + 0x90) = 0xffffffff;
  }
  return;
}


