/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ccc98 CharacterCommandBar::addInfectButton */

/* CharacterCommandBar::addInfectButton(void (*)(void*, ScreenElement*), void*) */

int __thiscall
CharacterCommandBar::addInfectButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  CharacterCommandBar *pCVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  code *local_28;
  String aSStack_20 [12];
  
  iVar2 = enableButton(this,5,param_1,param_2);
  iVar12 = DAT_000ccdb8;
  iVar13 = *(int *)(*(int *)(this + 0x7c) + 0x14);
  iVar6 = *(int *)(**(int **)(*(int *)(this + 100) + 0x8c) + 0xb20);
  cVar8 = *(char *)(**(int **)(*(int *)(this + 100) + 0x8c) + DAT_000ccdb4);
  if (cVar8 == '\0') {
    pCVar9 = this + 0xd4;
  }
  else {
    pCVar9 = this + 0xd0;
  }
  *(undefined4 *)(*(int *)(iVar13 + 4) + 100) = *(undefined4 *)pCVar9;
  piVar10 = *(int **)(iVar13 + 0xc);
  iVar12 = *(int *)(iVar12 + 0xccce4);
  if (*(char *)(*(int *)(this + 0x60) + DAT_000ccdbc) == '\0') {
    local_28 = *(code **)(*piVar10 + 0x14);
    iVar3 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar12 + iVar3 * 4));
    iVar12 = SmDev();
    uVar7 = __fixsfsi(*(undefined4 *)(iVar12 * 4 + *(int *)(DAT_000ccdc0 + 0xccd26)));
  }
  else {
    local_28 = *(code **)(*piVar10 + 0x14);
    iVar3 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar12 + iVar3 * 4));
    uVar7 = 0x5a;
  }
  (*local_28)(piVar10,uVar4,uVar7);
  piVar10 = *(int **)(iVar13 + 0xc);
  pcVar11 = *(code **)(*piVar10 + 0x44);
  String::valueOf((int)aSStack_20);
  (*pcVar11)(piVar10,aSStack_20);
  String::~String(aSStack_20);
  if (cVar8 == '\0') {
    cVar8 = '\0';
    if (*(int *)(*(ZombieCafe **)(this + 0x60) + DAT_000ccdc4) < iVar6) goto LAB_000ccd9c;
  }
  else {
    iVar12 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
    if (iVar12 < iVar6) {
      cVar8 = '\0';
      goto LAB_000ccd9c;
    }
  }
  uVar5 = *(int *)(*(int *)(this + 0x60) + DAT_000ccdc8 + 4) + 1;
  sVar1 = *(short *)((*(int *)(*(int *)(this + 0x60) + 0x680) + -1) * 2 +
                    **(int **)(DAT_000ccdcc + 0xccd8a));
  cVar8 = '\x01' - (((char)((int)uVar5 >> 0x1f) - (char)(sVar1 >> 7)) + ((uint)(int)sVar1 <= uVar5))
  ;
LAB_000ccd9c:
  *(char *)(iVar2 + 0x86) = cVar8;
  return iVar2;
}


