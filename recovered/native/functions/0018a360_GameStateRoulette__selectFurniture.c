/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a360 GameStateRoulette::selectFurniture */

/* GameStateRoulette::selectFurniture(int) */

void __thiscall GameStateRoulette::selectFurniture(GameStateRoulette *this,int param_1)

{
  TrueTypeTextElement *pTVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  float fVar9;
  String aSStack_154 [8];
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_0018a5dc + 0x18a36c);
  local_1c = *piVar5;
  unSelectFurniture(this);
  iVar3 = *(int *)(this + (param_1 + 0x288) * 4);
  *(int *)(this + DAT_0018a5e0) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(this + DAT_0018a5e4) = 0xffffffff;
  }
  else {
    *(int *)(this + DAT_0018a5e4) = param_1;
    String::String(aSStack_154,(String *)(*(int *)(iVar3 + 0x38) + 0x2c));
    String::String(aSStack_14c,(char *)(DAT_0018a5e8 + 0x18a3a8));
    iVar3 = SmDev();
    MultiByteString::insertStringNextLine
              (aSStack_14c,aSStack_154,*(int *)(DAT_0018a5ec + iVar3 * 4 + 0x18a42c));
    piVar6 = *(int **)(this + 0x14);
    pcVar4 = *(code **)(*piVar6 + 0x2c);
    String::String(aSStack_144,aSStack_14c);
    pTVar1 = (TrueTypeTextElement *)operator_new(0xe4);
    puVar2 = *(undefined4 **)(DAT_0018a5f0 + 0x18a3e0);
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar1,aSStack_144,*(undefined4 *)(this + 0x1c),*puVar2,1,1,0,2,0,0x11,0);
    *(TrueTypeTextElement **)(this + 0x30) = pTVar1;
    (*pcVar4)(piVar6,pTVar1);
    String::~String(aSStack_144);
    piVar6 = *(int **)(DAT_0018a5f4 + 0x18a41a);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0x30));
    L_PrintLog((char *)(DAT_0018a5f8 + 0x18a428),(char *)(DAT_0018a5fc + 0x18a42a));
    sprintf(acStack_11c,(char *)(DAT_0018a600 + 0x18a438),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0018a604 + 0x18a444),acStack_11c);
    piVar7 = *(int **)(this + 0x30);
    pcVar4 = *(code **)(*piVar7 + 0x14);
    iVar3 = SmDev();
    uVar8 = *(undefined4 *)(DAT_0018a608 + iVar3 * 4 + 0x18a46a);
    iVar3 = SmDev();
    (*pcVar4)(piVar7,uVar8,*(undefined4 *)(DAT_0018a60c + iVar3 * 4 + 0x18a492));
    String::String(aSStack_13c,(String *)(*(int *)(*(int *)(this + DAT_0018a5e0) + 0x38) + 100));
    String::String(aSStack_134,(char *)(DAT_0018a610 + 0x18a488));
    iVar3 = SmDev();
    MultiByteString::insertStringNextLine
              (aSStack_134,aSStack_13c,*(int *)(DAT_0018a614 + iVar3 * 4 + 0x18a4a4));
    piVar7 = *(int **)(this + 0x14);
    pcVar4 = *(code **)(*piVar7 + 0x2c);
    String::String(aSStack_12c,aSStack_134);
    pTVar1 = (TrueTypeTextElement *)operator_new(0xe4);
    TrueTypeTextElement::TrueTypeTextElement
              (pTVar1,aSStack_12c,*(undefined4 *)(this + 0x1c),*puVar2,1,1,0,2,0,0x11,0);
    *(TrueTypeTextElement **)(this + 0x34) = pTVar1;
    (*pcVar4)(piVar7,pTVar1);
    String::~String(aSStack_12c);
    Vector<TrueTypeTextElement*>::addElement
              ((Vector<TrueTypeTextElement*> *)*piVar6,*(TrueTypeTextElement **)(this + 0x34));
    L_PrintLog((char *)(DAT_0018a618 + 0x18a4fc),(char *)(DAT_0018a61c + 0x18a4fe));
    sprintf(acStack_11c,(char *)(DAT_0018a620 + 0x18a50c),*(int *)(*piVar6 + 4) + 1);
    L_PrintLog((char *)(DAT_0018a624 + 0x18a518),acStack_11c);
    piVar6 = *(int **)(this + 0x34);
    pcVar4 = *(code **)(*piVar6 + 0x14);
    iVar3 = SmDev();
    uVar8 = *(undefined4 *)(DAT_0018a628 + iVar3 * 4 + 0x18a56c);
    iVar3 = SmDev();
    (*pcVar4)(piVar6,uVar8,*(undefined4 *)(&UNK_0018a594 + DAT_0018a62c + iVar3 * 4));
    piVar6 = *(int **)(this + 0x34);
    pcVar4 = *(code **)(*piVar6 + 0x44);
    String::String(aSStack_124,aSStack_134);
    (*pcVar4)(piVar6,aSStack_124);
    fVar9 = (float)String::~String(aSStack_124);
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar9);
    String::~String(aSStack_134);
    String::~String(aSStack_13c);
    String::~String(aSStack_14c);
    String::~String(aSStack_154);
  }
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


