/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f787c FontManager::addFont */

/* FontManager::addFont(int, bool) */

undefined4 FontManager::addFont(int param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  CapcomTrueTypeFont *pCVar4;
  undefined4 uVar5;
  String aSStack_30 [8];
  undefined4 local_28 [5];
  
  uVar3 = (uint)param_2;
  local_28[0] = *(undefined4 *)(DAT_000f7990 + 0xf788a);
  local_28[1] = *(undefined4 *)(DAT_000f7990 + 0xf788e);
  local_28[2] = *(undefined4 *)(DAT_000f7990 + 0xf7892);
  local_28[3] = *(undefined4 *)(DAT_000f7990 + 0xf7896);
  iVar1 = CapcomApp::getInstance();
  if (*(char *)(*(int *)(iVar1 + 4) + DAT_000f7994) == '\0') {
    iVar1 = CapcomApp::getInstance();
    uVar5 = *(undefined4 *)(iVar1 + 0x44);
    uVar2 = __floatsisf(local_28[0]);
    __mulsf3(uVar2,uVar5);
    local_28[0] = __fixsfsi();
  }
  else {
    iVar1 = CapcomApp::getInstance();
    uVar5 = *(undefined4 *)(iVar1 + 0x44);
    uVar2 = __floatsisf(local_28[0]);
    __mulsf3(uVar2,uVar5);
    local_28[0] = __fixsfsi();
  }
  uVar2 = __floatsisf(local_28[1]);
  __mulsf3(uVar2,uVar5);
  local_28[1] = __fixsfsi();
  uVar2 = __floatsisf(local_28[2]);
  __mulsf3(uVar2,uVar5);
  local_28[2] = __fixsfsi();
  uVar2 = __floatsisf(local_28[3]);
  __mulsf3(uVar2,uVar5);
  local_28[3] = __fixsfsi();
  if (*(int *)((uVar3 + 4) * 4 + param_1) == 0) {
    if (*(int *)(uVar3 * 4 + param_1) != 0) {
      puts((char *)(DAT_000f7998 + 0xf7924));
      pCVar4 = *(CapcomTrueTypeFont **)(uVar3 * 4 + param_1);
      if (pCVar4 != (CapcomTrueTypeFont *)0x0) {
        CapcomTrueTypeFont::~CapcomTrueTypeFont(pCVar4);
        operator_delete(pCVar4);
      }
    }
    String::String(aSStack_30,*(String **)(DAT_000f799c + 0xf7940));
    pCVar4 = (CapcomTrueTypeFont *)operator_new(0x160);
    uVar2 = __floatsisf(local_28[uVar3]);
    CapcomTrueTypeFont::CapcomTrueTypeFont(pCVar4,aSStack_30,0,uVar2);
    *(CapcomTrueTypeFont **)(param_1 + uVar3 * 4) = pCVar4;
    String::~String(aSStack_30);
  }
  iVar1 = (uVar3 + 4) * 4;
  *(int *)(iVar1 + param_1) = *(int *)(iVar1 + param_1) + 1;
  return *(undefined4 *)(uVar3 * 4 + param_1);
}


