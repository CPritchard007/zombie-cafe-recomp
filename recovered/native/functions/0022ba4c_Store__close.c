/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022ba4c Store::close */

/* Store::close() */

void __thiscall Store::close(Store *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  NoticeDialog *pNVar9;
  int iVar10;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_0022bb5c;
  iVar8 = DAT_0022bb58 + 0x22ba5c;
  if ((this[0x80] != (Store)0x3) && (this[0x80] != (Store)0x0)) {
    iVar2 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0022bb5c),'\x11');
    if ((iVar2 == 0) ||
       (iVar2 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0x68) + iVar1),'\x12'), iVar2 == 0))
    {
      pNVar9 = *(NoticeDialog **)(this + 200);
      Vector<String>::elementAt((int)aSStack_28);
      Vector<String>::elementAt((int)aSStack_20);
      NoticeDialog::show(pNVar9,aSStack_28,aSStack_20,0,0);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
    }
    else {
      setState(this,'\x03');
      if (*(int **)(this + 0x7c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x7c) + 4))();
        *(undefined4 *)(this + 0x7c) = 0;
      }
      iVar10 = *(int *)(this + 0x10);
      uVar4 = *(uint *)(*(int *)(this + 0x68) + 0x10);
      uVar5 = ((int)uVar4 >> 0x11) << 0x10;
      piVar3 = (int *)operator_new(0x1c);
      iVar2 = *(int *)(iVar8 + DAT_0022bb6c);
      iVar6 = **(int **)(iVar8 + DAT_0022bb68);
      piVar7 = *(int **)(iVar8 + DAT_0022bb70);
      piVar3[2] = (short)uVar4 - iVar10 & 0xffffU | uVar5;
      piVar3[4] = iVar6;
      iVar8 = *piVar7;
      *piVar3 = iVar2 + 8;
      piVar3[6] = iVar8;
      piVar3[3] = uVar5 | uVar4 & 0xffff;
      piVar3[5] = 0;
      *(int **)(this + 0x7c) = piVar3;
      (**(code **)(*piVar3 + 0xc))();
      TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(this + 0x68) + iVar1),'-',true);
    }
  }
  return;
}


