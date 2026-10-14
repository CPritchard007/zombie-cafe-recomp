/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020db80 RaidRewardScreen::~RaidRewardScreen */

/* RaidRewardScreen::~RaidRewardScreen() */

void __thiscall RaidRewardScreen::~RaidRewardScreen(RaidRewardScreen *this)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char acStack_11c [256];
  int local_1c;
  
  iVar5 = DAT_0020dea8 + 0x20db8c;
  piVar6 = *(int **)(iVar5 + DAT_0020deac);
  local_1c = *piVar6;
  *(int *)this = *(int *)(iVar5 + DAT_0020deb0) + 8;
  if (*(int **)(*(int *)(this + 0xa8) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa8) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xac) + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xac) + 0x60) + 4))();
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))();
  }
  if (*(int **)(this + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x84) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa0) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa0) + 100) + 4))();
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
  }
  if (*(int **)(this + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x94) + 4))();
  }
  if (*(int **)(this + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x90) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x9c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x9c) + 100) + 4))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
  }
  if (this[0xbc] == (RaidRewardScreen)0x0) {
    iVar1 = SmDev();
    iVar4 = *(int *)(this + 0x74);
    if (iVar1 == 2) {
      if (iVar4 != 0) {
        L_PrintLog((char *)(DAT_0020dec8 + 0x20dcf4),(char *)(DAT_0020decc + 0x20dcf6));
        piVar3 = *(int **)(iVar5 + DAT_0020debc);
        Vector<CImage*>::removeElement
                  ((Vector<CImage*> *)*piVar3,*(CImage **)(*(int *)(this + 0x74) + 100));
        if (*(int **)(*(int *)(this + 0x74) + 100) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(this + 0x74) + 100) + 4))();
        }
        if (*(int **)(this + 0x74) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x74) + 4))();
        }
        *(undefined4 *)(this + 0x74) = 0;
        sprintf(acStack_11c,(char *)(DAT_0020ded0 + 0x20dd30),*(int *)(*piVar3 + 4) + 1);
        L_PrintLog((char *)(DAT_0020ded4 + 0x20dd3c),acStack_11c);
      }
      if (*(int *)(this + 0x78) == 0) goto LAB_0020ddda;
      L_PrintLog((char *)(DAT_0020ded8 + 0x20dd4c),(char *)(DAT_0020dedc + 0x20dd4e));
      piVar3 = *(int **)(iVar5 + DAT_0020debc);
      Vector<CImage*>::removeElement
                ((Vector<CImage*> *)*piVar3,*(CImage **)(*(int *)(this + 0x78) + 100));
      if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
      }
      if (*(int **)(this + 0x78) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x78) + 4))();
      }
      *(undefined4 *)(this + 0x78) = 0;
      sprintf(acStack_11c,(char *)(DAT_0020dee0 + 0x20dd88),*(int *)(*piVar3 + 4) + 1);
      pcVar2 = (char *)(DAT_0020dee4 + 0x20dd92);
      goto LAB_0020dd90;
    }
  }
  else {
    iVar1 = SmDev();
    iVar4 = *(int *)(this + 0x74);
    if (iVar1 == 2) {
      if (iVar4 != 0) {
        if (*(int **)(iVar4 + 100) != (int *)0x0) {
          (**(code **)(**(int **)(iVar4 + 100) + 4))();
        }
        if (*(int **)(this + 0x74) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x74) + 4))();
        }
        *(undefined4 *)(this + 0x74) = 0;
      }
      if (*(int *)(this + 0x78) == 0) goto LAB_0020ddda;
      L_PrintLog((char *)(DAT_0020deb4 + 0x20dc98),(char *)(DAT_0020deb8 + 0x20dc9a));
      piVar3 = *(int **)(iVar5 + DAT_0020debc);
      Vector<CImage*>::removeElement
                ((Vector<CImage*> *)*piVar3,*(CImage **)(*(int *)(this + 0x78) + 100));
      if (*(int **)(*(int *)(this + 0x78) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x78) + 100) + 4))();
      }
      if (*(int **)(this + 0x78) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x78) + 4))();
      }
      *(undefined4 *)(this + 0x78) = 0;
      sprintf(acStack_11c,(char *)(DAT_0020dec0 + 0x20dcd4),*(int *)(*piVar3 + 4) + 1);
      pcVar2 = (char *)(DAT_0020dec4 + 0x20dcde);
LAB_0020dd90:
      L_PrintLog(pcVar2,acStack_11c);
      goto LAB_0020ddda;
    }
  }
  if (iVar4 != 0) {
    if (*(int **)(iVar4 + 100) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 100) + 4))();
    }
    if (*(int **)(this + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x74) + 4))();
    }
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar3 = *(int **)(*(int *)(this + 0x78) + 100);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
LAB_0020ddda:
  if (*(int **)(this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x80) + 4))();
  }
  if (*(int **)(*(int *)(this + 0xa4) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0xa4) + 100) + 4))();
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
  }
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x70) + 4))();
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
  }
  if (*(int *)(this + 0x98) != 0) {
    piVar3 = *(int **)(*(int *)(this + 0x98) + 100);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    if (*(int **)(this + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x98) + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  ScreenElement::~ScreenElement((ScreenElement *)this);
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


