/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002046f0 PlantCommandBar::setPlant */

/* PlantCommandBar::setPlant(int) */

void __thiscall PlantCommandBar::setPlant(PlantCommandBar *this,int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar3 = DAT_002048cc + 0x2046fc;
  uVar1 = (undefined2)param_1;
  if (param_1 == 0) {
    *(undefined2 *)(this + 0xc6) = uVar1;
    piVar8 = *(int **)(iVar3 + DAT_002048d0);
    iVar5 = *piVar8;
    iVar3 = SmDev();
    iVar3 = *(int *)(iVar3 * 4 + iVar5);
    piVar6 = *(int **)(this + 0x9c);
    pcVar4 = *(code **)(*piVar6 + 0x44);
    String::String(aSStack_30,(char *)(DAT_002048d4 + 0x204722));
    (*pcVar4)(piVar6,aSStack_30);
    String::~String(aSStack_30);
    piVar6 = *(int **)(this + 0x9c);
    iVar7 = *piVar8;
    pcVar4 = *(code **)(*piVar6 + 0x14);
    iVar5 = SmDev();
    (*pcVar4)(piVar6,iVar3 >> 1,*(undefined4 *)(iVar5 * 4 + iVar7));
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),1);
    piVar6 = *(int **)(this + 0x70);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x20))(piVar6,1);
    }
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),1);
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return;
      }
      *(undefined2 *)(this + 0xc6) = uVar1;
      piVar8 = *(int **)(iVar3 + DAT_002048d0);
      iVar5 = *piVar8;
      iVar3 = SmDev();
      iVar3 = *(int *)(iVar3 * 4 + iVar5);
      piVar6 = *(int **)(this + 0x9c);
      pcVar4 = *(code **)(*piVar6 + 0x44);
      String::String(aSStack_20,(char *)(DAT_002048dc + 0x20483c));
      (*pcVar4)(piVar6,aSStack_20);
      String::~String(aSStack_20);
      piVar6 = *(int **)(this + 0x9c);
      iVar7 = *piVar8;
      pcVar4 = *(code **)(*piVar6 + 0x14);
      iVar5 = SmDev();
      (*pcVar4)(piVar6,iVar3 >> 1,*(undefined4 *)(iVar5 * 4 + iVar7));
      (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
      piVar6 = *(int **)(this + 0x70);
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x20))(piVar6,0);
      }
      ProgressBar::setValue(*(ProgressBar **)(this + 0xa4),1,false);
      (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),1);
      piVar6 = *(int **)(this + 0x68);
      uVar2 = 1;
      pcVar4 = *(code **)(*piVar6 + 0x20);
      goto LAB_002048aa;
    }
    *(undefined2 *)(this + 0xc6) = uVar1;
    piVar8 = *(int **)(iVar3 + DAT_002048d0);
    iVar5 = *piVar8;
    iVar3 = SmDev();
    iVar3 = *(int *)(iVar3 * 4 + iVar5);
    piVar6 = *(int **)(this + 0x9c);
    pcVar4 = *(code **)(*piVar6 + 0x44);
    String::String(aSStack_28,(char *)(DAT_002048d8 + 0x2047a4));
    (*pcVar4)(piVar6,aSStack_28);
    String::~String(aSStack_28);
    piVar6 = *(int **)(this + 0x9c);
    iVar7 = *piVar8;
    pcVar4 = *(code **)(*piVar6 + 0x14);
    iVar5 = SmDev();
    (*pcVar4)(piVar6,iVar3 >> 1,*(undefined4 *)(iVar5 * 4 + iVar7));
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
    piVar6 = *(int **)(this + 0x70);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x20))(piVar6,0);
    }
    ProgressBar::setValue(*(ProgressBar **)(this + 0xa4),1,false);
  }
  (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),1);
  piVar6 = *(int **)(this + 0x68);
  uVar2 = 0;
  pcVar4 = *(code **)(*piVar6 + 0x20);
LAB_002048aa:
  (*pcVar4)(piVar6,uVar2);
  return;
}


