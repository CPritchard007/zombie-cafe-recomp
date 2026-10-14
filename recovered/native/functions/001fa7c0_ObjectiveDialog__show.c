/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fa7c0 ObjectiveDialog::show */

/* ObjectiveDialog::show() */

void __thiscall ObjectiveDialog::show(ObjectiveDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ProgressBar *this_00;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  String aSStack_50 [6];
  short sStack_4a;
  StringUtil aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  L_PrintLog((char *)(DAT_001fa950 + 0x1fa7d4),(char *)(DAT_001fa94c + 0x1fa7d0));
  free(*(void **)(this + 0x164));
  *(undefined4 *)(this + 0x164) = 0;
  iVar5 = DAT_001fa954;
  ObjectiveSystem::getObjectiveCount(*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fa954));
  ObjectiveSystem::getSetProgressCompletion(*(ObjectiveSystem **)(*(int *)(this + 0x60) + iVar5));
  String::valueOf((int)aSStack_50);
  StringUtil::getEncodingString(aSStack_48,'\0');
  uVar2 = String::getBytes(aSStack_50,aSStack_48,0,0,0);
  *(undefined4 *)(this + 0x164) = uVar2;
  String::~String((String *)aSStack_48);
  *(int *)(this + 0x168) = (int)sStack_4a;
  piVar6 = *(int **)(this + 0xd8);
  pcVar7 = *(code **)(*piVar6 + 0x44);
  String::String(aSStack_40,*(char **)(this + 0x164));
  (*pcVar7)(piVar6,aSStack_40);
  String::~String(aSStack_40);
  for (iVar5 = 0;
      iVar4 = ObjectiveSystem::getObjectiveCount
                        (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fa954)),
      iVar1 = DAT_001fa964, iVar3 = DAT_001fa960, iVar5 < iVar4; iVar5 = iVar5 + 1) {
    this_00 = *(ProgressBar **)(*(int *)(this + 0x108) + iVar5 * 4);
    iVar3 = ObjectiveSystem::getObjectiveCompletion
                      (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fa954),iVar5);
    ProgressBar::setValue(this_00,iVar3,true);
    piVar6 = *(int **)(*(int *)(this + 0x114) + iVar5 * 4);
    pcVar7 = *(code **)(*piVar6 + 0x44);
    ObjectiveSystem::getObjectiveCompletion
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fa954),iVar5);
    String::valueOf((int)aSStack_38);
    String::operator+(aSStack_30,(char *)aSStack_38);
    ObjectiveSystem::getObjectiveGoal
              (*(ObjectiveSystem **)(*(int *)(this + 0x60) + DAT_001fa954),iVar5);
    String::valueOf((int)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar7)(piVar6,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
  }
  this[0x14] = (ObjectiveDialog)0x1;
  L_PrintLog((char *)(iVar3 + 0x1fa902),(char *)(iVar1 + 0x1fa904));
  String::~String(aSStack_50);
  return;
}


